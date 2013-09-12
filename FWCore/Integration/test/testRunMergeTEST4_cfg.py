import FWCore.ParameterSet.Config as cms

process = cms.Process("TEST")

process.load("FWCore.MessageService.MessageLogger_cfi")
process.MessageLogger.cerr.FwkReport.reportEvery = 1000
process.MessageLogger.cerr.threshold = 'ERROR'

import FWCore.Framework.test.cmsExceptionsFatalOption_cff
process.options = cms.untracked.PSet(
  fileMode  = cms.untracked.string('FULLMERGE'),
  Rethrow = FWCore.Framework.test.cmsExceptionsFatalOption_cff.Rethrow
)


process.source = cms.Source("PoolSource",
    fileNames = cms.untracked.vstring(
        'file:testRunMergeMERGE4.root',
        'file:testRunMergeMERGE4.root'
    )
    , duplicateCheckMode = cms.untracked.string('checkEachRealDataFile')
    , noEventSort = cms.untracked.bool(True)
    , lumisToProcess = cms.untracked.VLuminosityBlockRange('1:1')
)

process.out = cms.OutputModule("PoolOutputModule",
    fileName = cms.untracked.string('file:testRunMergeRecombined4.root')
)

process.test = cms.EDAnalyzer("TestMergeResults",

    #   These values below are just arbitrary and meaningless
    #   We are checking to see that the value we get out matches what
    #   was put in.

    #   expected values listed below come in sets of three
    #      value expected in Thing
    #      value expected in ThingWithMerge
    #      value expected in ThingWithIsEqual
    #   This set of 3 is repeated below at each point it might change
    #   The Prod suffix refers to objects from the process named PROD
    #   The New suffix refers to objects created in the most recent process
    #   When the sequence of parameter values is exhausted it stops checking
    #   0's are just placeholders, if the value is a "0" the check is not made
    #   and it indicates the product does not exist at that point.
    #   *'s indicate lines where the checks are actually run by the test module.

    expectedBeginRunProd = cms.untracked.vint32(
        0,           0,      0,  # start
        0,           0,      0,  # begin file 1
        10001,   20004,  10003,  # * begin run 1
        10001,   40008,  10003,  # * events run 1
        # The test has a peculiar behavior if the same lumi continues in the
        # next file, in this case this line must be commented out
        #10001,   40008,  10003  # begin file 2
        10001,   80016,  10003,  # * events run 1
        10001,   80016,  10003   # end run 1
    ),

    expectedEndRunProd = cms.untracked.vint32(
        0,           0,       0,  # start
        0,           0,       0,  # begin file 1
        100001,  200004, 100003,  # begin run 1
        100001,  400008, 100003,  # * events run 1
        #100001,  400008, 100003,  # begin file 2
        100001,  800016, 100003,  # * events run 1
        100001,  800016, 100003   # * end run 1
    ),

    expectedBeginLumiProd = cms.untracked.vint32(
        0,      0,   0,  # start
        0,      0,   0,  # begin file 1
        101,  204, 103,  # * begin run 1 lumi 1
        101,  408, 103,  # * events run 1 lumi 1
        #101,  408, 103,  # begin file 2
        101,  816, 103,  # * events run 1 lumi 1
        101,  816, 103  # end run 1 lumi 1
    ),

    expectedEndLumiProd = cms.untracked.vint32(
        0,        0,    0,  # start
        0,        0,    0,  # begin file 1
        1001,  2004, 1003,  # begin run 1 lumi 1
        1001,  4008, 1003,  # * events run 1 lumi 1
        #1001,  4008, 1003,  # begin file 2
        1001,  8016, 1003,  # * events run 1 lumi 1
        1001,  8016, 1003   # * end run 1 lumi 1
    ),

    expectedBeginRunNew = cms.untracked.vint32(
        0,           0,      0,  # start
        0,           0,      0,  # begin file 1
        10001,   10002,  10003,  # * begin run 1
        10001,   30006,  10003,  # * events run 1
        #10001,   30006,  10003,  # begin file 2
        10001,   60012,  10003,  # * events run 1
        10001,   60012,  10003   # end run 1
    ),

    expectedEndRunNew = cms.untracked.vint32(
        0,           0,      0,  # start
        0,           0,      0,  # begin file 1
        100001,  100002, 100003,  # begin run 1
        100001,  300006, 100003  # * events run 1
        #100001,  300006, 100003,  # begin file 2
        #100001,  600012, 100003,  # * events run 1
        #100001,  600012, 100003   # * end run 1
    ),

    expectedBeginLumiNew = cms.untracked.vint32(
        0,      0,   0,  # start
        0,      0,   0,  # begin file 1
        101,  102, 103,  # * begin run 1 lumi 1
        101,  306, 103,  # * events run 1 lumi 1
        #101,  306, 103,  # begin file 2
        101,  612, 103,  # * events run 1 lumi 1
        101,  612, 103   # end run 1 lumi 1
    ),

    expectedEndLumiNew = cms.untracked.vint32(
        0,        0,    0,  # start
        0,        0,    0,  # begin file 1
        1001,  1002, 1003,  # begin run 1 lumi 1
        1001,  3006, 1003,  # * events run 1 lumi 1
        #1001,  3006, 1003,  # begin file 2
        1001,  6012, 1003,  # * events run 1 lumi 1
        1001,  6012, 1003   # * end run 1 lumi 1
    ),

    verbose = cms.untracked.bool(True)
)

process.test2 = cms.EDAnalyzer('RunLumiEventAnalyzer',
    verbose = cms.untracked.bool(True),
    expectedRunLumiEvents = cms.untracked.vuint32(
1, 0, 0,
1, 1, 0,
1, 1, 11,
1, 1, 12,
1, 1, 13,
1, 1, 14,
1, 1, 15,
1, 1, 16,
1, 1, 17,
1, 1, 18,
1, 1, 19,
1, 1, 20,
1, 1, 21,
1, 1, 22,
1, 1, 23,
1, 1, 24,
1, 1, 25,
1, 1, 1,
1, 1, 2,
1, 1, 3,
1, 1, 4,
1, 1, 5,
1, 1, 6,
1, 1, 7,
1, 1, 8,
1, 1, 9,
1, 1, 10,
1, 1, 26,
1, 1, 11,
1, 1, 12,
1, 1, 13,
1, 1, 14,
1, 1, 15,
1, 1, 16,
1, 1, 17,
1, 1, 18,
1, 1, 19,
1, 1, 20,
1, 1, 21,
1, 1, 22,
1, 1, 23,
1, 1, 24,
1, 1, 25,
1, 1, 1,
1, 1, 2,
1, 1, 3,
1, 1, 4,
1, 1, 5,
1, 1, 6,
1, 1, 7,
1, 1, 8,
1, 1, 9,
1, 1, 10,
1, 1, 26,
1, 1, 0,
1, 0, 0
)
)

process.path1 = cms.Path(process.test + process.test2)
process.endpath1 = cms.EndPath(process.out)