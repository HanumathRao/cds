/*
    This file is a part of libcds - Concurrent Data Structures library
    See http://libcds.sourceforge.net/

    (C) Copyright Maxim Khiszinsky (libcds.sf.com) 2006-2013
    Distributed under the BSD license (see accompanying file license.txt)

    Version 1.4.0
*/


#ifndef _CDSUNIT_SET2_SET_DEFS_H
#define _CDSUNIT_SET2_SET_DEFS_H

#define CDSUNIT_DECLARE_StdSet \
    TEST_SET(StdSet_Spin) \
    TEST_SET(StdHashSet_Spin)
#define CDSUNIT_TEST_StdSet \
    CPPUNIT_TEST(StdSet_Spin) \
    CPPUNIT_TEST(StdHashSet_Spin)

#ifdef CDS_URCU_SIGNAL_HANDLING_ENABLED
#   define CDSUNIT_DECLARE_MichaelSet_RCU_signal  \
    TEST_SET(MichaelSet_RCU_SHB_cmp_stdAlloc) \
    TEST_SET(MichaelSet_RCU_SHB_less_michaelAlloc) \
    TEST_SET(MichaelSet_RCU_SHT_cmp_stdAlloc) \
    TEST_SET(MichaelSet_RCU_SHT_less_michaelAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_SHB_cmp_stdAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_SHB_less_michaelAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_SHT_cmp_stdAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_SHT_less_michaelAlloc)

#   define CDSUNIT_TEST_MichaelSet_RCU_signal  \
    CPPUNIT_TEST(MichaelSet_RCU_SHB_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_RCU_SHB_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_RCU_SHT_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_RCU_SHT_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_SHB_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_SHB_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_SHT_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_SHT_less_michaelAlloc)
#else
#   define CDSUNIT_DECLARE_MichaelSet_RCU_signal
#   define CDSUNIT_TEST_MichaelSet_RCU_signal
#endif


#define CDSUNIT_DECLARE_MichaelSet  \
    TEST_SET(MichaelSet_HP_cmp_stdAlloc) \
    TEST_SET(MichaelSet_HP_less_michaelAlloc) \
    TEST_SET(MichaelSet_HRC_cmp_stdAlloc) \
    TEST_SET(MichaelSet_HRC_less_michaelAlloc) \
    TEST_SET(MichaelSet_PTB_cmp_stdAlloc) \
    TEST_SET(MichaelSet_PTB_less_michaelAlloc) \
    TEST_SET(MichaelSet_RCU_GPI_cmp_stdAlloc) \
    TEST_SET(MichaelSet_RCU_GPI_less_michaelAlloc) \
    TEST_SET(MichaelSet_RCU_GPB_cmp_stdAlloc) \
    TEST_SET(MichaelSet_RCU_GPB_less_michaelAlloc) \
    TEST_SET(MichaelSet_RCU_GPT_cmp_stdAlloc) \
    TEST_SET(MichaelSet_RCU_GPT_less_michaelAlloc) \
    TEST_SET(MichaelSet_Lazy_HP_cmp_stdAlloc) \
    TEST_SET(MichaelSet_Lazy_HP_less_michaelAlloc) \
    TEST_SET(MichaelSet_Lazy_HRC_cmp_stdAlloc) \
    TEST_SET(MichaelSet_Lazy_HRC_less_michaelAlloc) \
    TEST_SET(MichaelSet_Lazy_PTB_cmp_stdAlloc) \
    TEST_SET(MichaelSet_Lazy_PTB_less_michaelAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_GPI_cmp_stdAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_GPI_less_michaelAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_GPB_cmp_stdAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_GPB_less_michaelAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_GPT_cmp_stdAlloc) \
    TEST_SET(MichaelSet_Lazy_RCU_GPT_less_michaelAlloc) \
    CDSUNIT_DECLARE_MichaelSet_RCU_signal

#define CDSUNIT_TEST_MichaelSet  \
    CPPUNIT_TEST(MichaelSet_HP_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_HP_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_HRC_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_HRC_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_PTB_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_PTB_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_RCU_GPI_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_RCU_GPI_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_RCU_GPB_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_RCU_GPB_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_RCU_GPT_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_RCU_GPT_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_HP_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_HP_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_HRC_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_HRC_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_PTB_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_PTB_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_GPI_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_GPI_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_GPB_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_GPB_less_michaelAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_GPT_cmp_stdAlloc) \
    CPPUNIT_TEST(MichaelSet_Lazy_RCU_GPT_less_michaelAlloc) \
    CDSUNIT_TEST_MichaelSet_RCU_signal


#ifdef CDS_URCU_SIGNAL_HANDLING_ENABLED
#   define CDSUNIT_DECLARE_SplitList_RCU_signal  \
    TEST_SET(SplitList_Michael_RCU_SHB_dyn_cmp)\
    TEST_SET(SplitList_Michael_RCU_SHB_st_cmp)\
    TEST_SET(SplitList_Michael_RCU_SHB_dyn_less)\
    TEST_SET(SplitList_Michael_RCU_SHB_st_less)\
    TEST_SET(SplitList_Michael_RCU_SHT_dyn_cmp)\
    TEST_SET(SplitList_Michael_RCU_SHT_st_cmp)\
    TEST_SET(SplitList_Michael_RCU_SHT_dyn_less)\
    TEST_SET(SplitList_Michael_RCU_SHT_st_less)\
    TEST_SET(SplitList_Lazy_RCU_SHB_dyn_cmp)\
    TEST_SET(SplitList_Lazy_RCU_SHB_st_cmp)\
    TEST_SET(SplitList_Lazy_RCU_SHB_dyn_less)\
    TEST_SET(SplitList_Lazy_RCU_SHB_st_less)\
    TEST_SET(SplitList_Lazy_RCU_SHT_dyn_cmp)\
    TEST_SET(SplitList_Lazy_RCU_SHT_st_cmp)\
    TEST_SET(SplitList_Lazy_RCU_SHT_dyn_less)\
    TEST_SET(SplitList_Lazy_RCU_SHT_st_less)

#   define CDSUNIT_TEST_SplitList_RCU_signal  \
    CPPUNIT_TEST(SplitList_Michael_RCU_SHB_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_SHB_st_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_SHB_dyn_less)\
    CPPUNIT_TEST(SplitList_Michael_RCU_SHB_st_less)\
    CPPUNIT_TEST(SplitList_Michael_RCU_SHT_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_SHT_st_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_SHT_dyn_less)\
    CPPUNIT_TEST(SplitList_Michael_RCU_SHT_st_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_SHB_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_SHB_st_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_SHB_dyn_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_SHB_st_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_SHT_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_SHT_st_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_SHT_dyn_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_SHT_st_less)

#else
#   define CDSUNIT_DECLARE_SplitList_RCU_signal
#   define CDSUNIT_TEST_SplitList_RCU_signal
#endif

#define CDSUNIT_DECLARE_SplitList  \
    TEST_SET(SplitList_Michael_HP_dyn_cmp)\
    TEST_SET(SplitList_Michael_HP_st_cmp)\
    TEST_SET(SplitList_Michael_HP_dyn_less)\
    TEST_SET(SplitList_Michael_HP_st_less)\
    TEST_SET(SplitList_Michael_HRC_dyn_cmp)\
    TEST_SET(SplitList_Michael_HRC_st_cmp)\
    TEST_SET(SplitList_Michael_HRC_dyn_less)\
    TEST_SET(SplitList_Michael_HRC_st_less)\
    TEST_SET(SplitList_Michael_PTB_dyn_cmp)\
    TEST_SET(SplitList_Michael_PTB_st_cmp)\
    TEST_SET(SplitList_Michael_PTB_dyn_less)\
    TEST_SET(SplitList_Michael_PTB_st_less)\
    TEST_SET(SplitList_Michael_RCU_GPI_dyn_cmp)\
    TEST_SET(SplitList_Michael_RCU_GPI_st_cmp)\
    TEST_SET(SplitList_Michael_RCU_GPI_dyn_less)\
    TEST_SET(SplitList_Michael_RCU_GPI_st_less)\
    TEST_SET(SplitList_Michael_RCU_GPB_dyn_cmp)\
    TEST_SET(SplitList_Michael_RCU_GPB_st_cmp)\
    TEST_SET(SplitList_Michael_RCU_GPB_dyn_less)\
    TEST_SET(SplitList_Michael_RCU_GPB_st_less)\
    TEST_SET(SplitList_Michael_RCU_GPT_dyn_cmp)\
    TEST_SET(SplitList_Michael_RCU_GPT_st_cmp)\
    TEST_SET(SplitList_Michael_RCU_GPT_dyn_less)\
    TEST_SET(SplitList_Michael_RCU_GPT_st_less)\
    TEST_SET(SplitList_Lazy_HP_dyn_cmp)\
    TEST_SET(SplitList_Lazy_HP_st_cmp)\
    TEST_SET(SplitList_Lazy_HP_dyn_less)\
    TEST_SET(SplitList_Lazy_HP_st_less)\
    TEST_SET(SplitList_Lazy_HRC_dyn_cmp)\
    TEST_SET(SplitList_Lazy_HRC_st_cmp)\
    TEST_SET(SplitList_Lazy_HRC_dyn_less)\
    TEST_SET(SplitList_Lazy_HRC_st_less)\
    TEST_SET(SplitList_Lazy_PTB_dyn_cmp)\
    TEST_SET(SplitList_Lazy_PTB_st_cmp)\
    TEST_SET(SplitList_Lazy_PTB_dyn_less)\
    TEST_SET(SplitList_Lazy_PTB_st_less)\
    TEST_SET(SplitList_Lazy_RCU_GPI_dyn_cmp)\
    TEST_SET(SplitList_Lazy_RCU_GPI_st_cmp)\
    TEST_SET(SplitList_Lazy_RCU_GPI_dyn_less)\
    TEST_SET(SplitList_Lazy_RCU_GPI_st_less)\
    TEST_SET(SplitList_Lazy_RCU_GPB_dyn_cmp)\
    TEST_SET(SplitList_Lazy_RCU_GPB_st_cmp)\
    TEST_SET(SplitList_Lazy_RCU_GPB_dyn_less)\
    TEST_SET(SplitList_Lazy_RCU_GPB_st_less)\
    TEST_SET(SplitList_Lazy_RCU_GPT_dyn_cmp)\
    TEST_SET(SplitList_Lazy_RCU_GPT_st_cmp)\
    TEST_SET(SplitList_Lazy_RCU_GPT_dyn_less)\
    TEST_SET(SplitList_Lazy_RCU_GPT_st_less)\
    CDSUNIT_DECLARE_SplitList_RCU_signal

#define CDSUNIT_TEST_SplitList  \
    CPPUNIT_TEST(SplitList_Michael_HP_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Michael_HP_st_cmp)\
    CPPUNIT_TEST(SplitList_Michael_HP_dyn_less)\
    CPPUNIT_TEST(SplitList_Michael_HP_st_less)\
    CPPUNIT_TEST(SplitList_Michael_HRC_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Michael_HRC_st_cmp)\
    CPPUNIT_TEST(SplitList_Michael_HRC_dyn_less)\
    CPPUNIT_TEST(SplitList_Michael_HRC_st_less)\
    CPPUNIT_TEST(SplitList_Michael_PTB_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Michael_PTB_st_cmp)\
    CPPUNIT_TEST(SplitList_Michael_PTB_dyn_less)\
    CPPUNIT_TEST(SplitList_Michael_PTB_st_less)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPI_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPI_st_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPI_dyn_less)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPI_st_less)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPB_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPB_st_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPB_dyn_less)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPB_st_less)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPT_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPT_st_cmp)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPT_dyn_less)\
    CPPUNIT_TEST(SplitList_Michael_RCU_GPT_st_less)\
    CPPUNIT_TEST(SplitList_Lazy_HP_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_HP_st_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_HP_dyn_less)\
    CPPUNIT_TEST(SplitList_Lazy_HP_st_less)\
    CPPUNIT_TEST(SplitList_Lazy_HRC_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_HRC_st_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_HRC_dyn_less)\
    CPPUNIT_TEST(SplitList_Lazy_HRC_st_less)\
    CPPUNIT_TEST(SplitList_Lazy_PTB_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_PTB_st_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_PTB_dyn_less)\
    CPPUNIT_TEST(SplitList_Lazy_PTB_st_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPI_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPI_st_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPI_dyn_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPI_st_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPB_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPB_st_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPB_dyn_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPB_st_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPT_dyn_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPT_st_cmp)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPT_dyn_less)\
    CPPUNIT_TEST(SplitList_Lazy_RCU_GPT_st_less)\
    CDSUNIT_TEST_SplitList_RCU_signal


#define CDSUNIT_DECLARE_CuckooSet \
    TEST_SET(CuckooStripedSet_list_unord)\
    TEST_SET(CuckooStripedSet_list_unord_stat)\
    TEST_SET(CuckooStripedSet_list_ord)\
    TEST_SET(CuckooStripedSet_list_ord_stat)\
    TEST_SET(CuckooStripedSet_vector_unord)\
    TEST_SET(CuckooStripedSet_vector_ord)\
    TEST_SET(CuckooStripedSet_vector_unord_stat)\
    TEST_SET(CuckooStripedSet_vector_ord_stat)\
    TEST_SET(CuckooRefinableSet_list_unord)\
    TEST_SET(CuckooRefinableSet_list_ord)\
    TEST_SET(CuckooRefinableSet_list_unord_stat)\
    TEST_SET(CuckooRefinableSet_list_ord_stat)\
    TEST_SET(CuckooRefinableSet_vector_unord)\
    TEST_SET(CuckooRefinableSet_vector_unord_stat)\
    TEST_SET(CuckooRefinableSet_vector_ord) \
    TEST_SET(CuckooRefinableSet_vector_ord_stat) \
    TEST_SET(CuckooStripedSet_list_unord_storehash)\
    TEST_SET(CuckooStripedSet_list_ord_storehash)\
    TEST_SET(CuckooStripedSet_vector_unord_storehash)\
    TEST_SET(CuckooStripedSet_vector_ord_storehash)\
    TEST_SET(CuckooRefinableSet_list_unord_storehash)\
    TEST_SET(CuckooRefinableSet_list_ord_storehash)\
    TEST_SET(CuckooRefinableSet_vector_unord_storehash)\
    TEST_SET(CuckooRefinableSet_vector_ord_storehash)


#define CDSUNIT_TEST_CuckooSet \
    CPPUNIT_TEST(CuckooStripedSet_list_unord)\
    CPPUNIT_TEST(CuckooStripedSet_list_unord_stat)\
    CPPUNIT_TEST(CuckooStripedSet_list_unord_storehash)\
    CPPUNIT_TEST(CuckooStripedSet_list_ord)\
    CPPUNIT_TEST(CuckooStripedSet_list_ord_stat)\
    CPPUNIT_TEST(CuckooStripedSet_list_ord_storehash)\
    CPPUNIT_TEST(CuckooStripedSet_vector_unord)\
    CPPUNIT_TEST(CuckooStripedSet_vector_unord_stat)\
    CPPUNIT_TEST(CuckooStripedSet_vector_unord_storehash)\
    CPPUNIT_TEST(CuckooStripedSet_vector_ord)\
    CPPUNIT_TEST(CuckooStripedSet_vector_ord_stat)\
    CPPUNIT_TEST(CuckooStripedSet_vector_ord_storehash)\
    CPPUNIT_TEST(CuckooRefinableSet_list_unord)\
    CPPUNIT_TEST(CuckooRefinableSet_list_unord_stat)\
    CPPUNIT_TEST(CuckooRefinableSet_list_unord_storehash)\
    CPPUNIT_TEST(CuckooRefinableSet_list_ord)\
    CPPUNIT_TEST(CuckooRefinableSet_list_ord_stat)\
    CPPUNIT_TEST(CuckooRefinableSet_list_ord_storehash)\
    CPPUNIT_TEST(CuckooRefinableSet_vector_unord)\
    CPPUNIT_TEST(CuckooRefinableSet_vector_unord_stat)\
    CPPUNIT_TEST(CuckooRefinableSet_vector_unord_storehash)\
    CPPUNIT_TEST(CuckooRefinableSet_vector_ord) \
    CPPUNIT_TEST(CuckooRefinableSet_vector_ord_stat) \
    CPPUNIT_TEST(CuckooRefinableSet_vector_ord_storehash)



#ifdef CDS_URCU_SIGNAL_HANDLING_ENABLED
#   define CDSUNIT_DECLARE_SkipListSet_RCU_signal \
    TEST_SET_NOLF(SkipListSet_rcu_shb_less_pascal)\
    TEST_SET_NOLF(SkipListSet_rcu_shb_cmp_pascal_stat)\
    TEST_SET_NOLF(SkipListSet_rcu_shb_less_xorshift)\
    TEST_SET_NOLF(SkipListSet_rcu_shb_cmp_xorshift_stat)\
    TEST_SET_NOLF(SkipListSet_rcu_sht_less_pascal)\
    TEST_SET_NOLF(SkipListSet_rcu_sht_cmp_pascal_stat)\
    TEST_SET_NOLF(SkipListSet_rcu_sht_less_xorshift)\
    TEST_SET_NOLF(SkipListSet_rcu_sht_cmp_xorshift_stat)

#   define CDSUNIT_TEST_SkipListSet_RCU_signal \
    CPPUNIT_TEST(SkipListSet_rcu_shb_less_pascal)\
    CPPUNIT_TEST(SkipListSet_rcu_shb_cmp_pascal_stat)\
    CPPUNIT_TEST(SkipListSet_rcu_shb_less_xorshift)\
    CPPUNIT_TEST(SkipListSet_rcu_shb_cmp_xorshift_stat)\
    CPPUNIT_TEST(SkipListSet_rcu_sht_less_pascal)\
    CPPUNIT_TEST(SkipListSet_rcu_sht_cmp_pascal_stat)\
    CPPUNIT_TEST(SkipListSet_rcu_sht_less_xorshift)\
    CPPUNIT_TEST(SkipListSet_rcu_sht_cmp_xorshift_stat)

#else
#   define CDSUNIT_DECLARE_SkipListSet_RCU_signal
#   define CDSUNIT_TEST_SkipListSet_RCU_signal
#endif

#define CDSUNIT_DECLARE_SkipListSet \
    TEST_SET_NOLF(SkipListSet_hp_less_pascal)\
    TEST_SET_NOLF(SkipListSet_hp_cmp_pascal_stat)\
    TEST_SET_NOLF(SkipListSet_hp_less_xorshift)\
    TEST_SET_NOLF(SkipListSet_hp_cmp_xorshift_stat)\
    TEST_SET_NOLF(SkipListSet_hrc_less_pascal)\
    TEST_SET_NOLF(SkipListSet_hrc_cmp_pascal_stat)\
    TEST_SET_NOLF(SkipListSet_hrc_less_xorshift)\
    TEST_SET_NOLF(SkipListSet_hrc_cmp_xorshift_stat)\
    TEST_SET_NOLF(SkipListSet_ptb_less_pascal)\
    TEST_SET_NOLF(SkipListSet_ptb_cmp_pascal_stat)\
    TEST_SET_NOLF(SkipListSet_ptb_less_xorshift)\
    TEST_SET_NOLF(SkipListSet_ptb_cmp_xorshift_stat)\
    TEST_SET_NOLF(SkipListSet_rcu_gpi_less_pascal)\
    TEST_SET_NOLF(SkipListSet_rcu_gpi_cmp_pascal_stat)\
    TEST_SET_NOLF(SkipListSet_rcu_gpi_less_xorshift)\
    TEST_SET_NOLF(SkipListSet_rcu_gpi_cmp_xorshift_stat)\
    TEST_SET_NOLF(SkipListSet_rcu_gpb_less_pascal)\
    TEST_SET_NOLF(SkipListSet_rcu_gpb_cmp_pascal_stat)\
    TEST_SET_NOLF(SkipListSet_rcu_gpb_less_xorshift)\
    TEST_SET_NOLF(SkipListSet_rcu_gpb_cmp_xorshift_stat)\
    TEST_SET_NOLF(SkipListSet_rcu_gpt_less_pascal)\
    TEST_SET_NOLF(SkipListSet_rcu_gpt_cmp_pascal_stat)\
    TEST_SET_NOLF(SkipListSet_rcu_gpt_less_xorshift)\
    TEST_SET_NOLF(SkipListSet_rcu_gpt_cmp_xorshift_stat)\
    CDSUNIT_DECLARE_SkipListSet_RCU_signal

#define CDSUNIT_TEST_SkipListSet \
    CPPUNIT_TEST(SkipListSet_hp_less_pascal)\
    CPPUNIT_TEST(SkipListSet_hp_cmp_pascal_stat)\
    CPPUNIT_TEST(SkipListSet_hp_less_xorshift)\
    CPPUNIT_TEST(SkipListSet_hp_cmp_xorshift_stat)\
    CPPUNIT_TEST(SkipListSet_hrc_less_pascal)\
    CPPUNIT_TEST(SkipListSet_hrc_cmp_pascal_stat)\
    CPPUNIT_TEST(SkipListSet_hrc_less_xorshift)\
    CPPUNIT_TEST(SkipListSet_hrc_cmp_xorshift_stat)\
    CPPUNIT_TEST(SkipListSet_ptb_less_pascal)\
    CPPUNIT_TEST(SkipListSet_ptb_cmp_pascal_stat)\
    CPPUNIT_TEST(SkipListSet_ptb_less_xorshift)\
    CPPUNIT_TEST(SkipListSet_ptb_cmp_xorshift_stat)\
    CPPUNIT_TEST(SkipListSet_rcu_gpi_less_pascal)\
    CPPUNIT_TEST(SkipListSet_rcu_gpi_cmp_pascal_stat)\
    CPPUNIT_TEST(SkipListSet_rcu_gpi_less_xorshift)\
    CPPUNIT_TEST(SkipListSet_rcu_gpi_cmp_xorshift_stat)\
    CPPUNIT_TEST(SkipListSet_rcu_gpb_less_pascal)\
    CPPUNIT_TEST(SkipListSet_rcu_gpb_cmp_pascal_stat)\
    CPPUNIT_TEST(SkipListSet_rcu_gpb_less_xorshift)\
    CPPUNIT_TEST(SkipListSet_rcu_gpb_cmp_xorshift_stat)\
    CPPUNIT_TEST(SkipListSet_rcu_gpt_less_pascal)\
    CPPUNIT_TEST(SkipListSet_rcu_gpt_cmp_pascal_stat)\
    CPPUNIT_TEST(SkipListSet_rcu_gpt_less_xorshift)\
    CPPUNIT_TEST(SkipListSet_rcu_gpt_cmp_xorshift_stat)\
    CDSUNIT_TEST_SkipListSet_RCU_signal


#define CDSUNIT_DECLARE_StripedSet_common \
    TEST_SET(StripedSet_list) \
    TEST_SET(StripedSet_vector) \
    TEST_SET(StripedSet_set) \
    TEST_SET(StripedSet_hashset) \
    TEST_SET(StripedSet_boost_unordered_set)
#define CDSUNIT_TEST_StripedSet_common \
    CPPUNIT_TEST(StripedSet_list) \
    CPPUNIT_TEST(StripedSet_vector) \
    CPPUNIT_TEST(StripedSet_set) \
    CPPUNIT_TEST(StripedSet_hashset) \
    CPPUNIT_TEST(StripedSet_boost_unordered_set)

#if BOOST_VERSION >= 104800
#   define CDSUNIT_DECLARE_StripedSet_boost_container \
    TEST_SET(StripedSet_boost_list) \
    TEST_SET(StripedSet_boost_slist) \
    TEST_SET(StripedSet_boost_vector) \
    TEST_SET(StripedSet_boost_stable_vector) \
    TEST_SET(StripedSet_boost_set)
#   define CDSUNIT_TEST_StripedSet_boost_container \
    CPPUNIT_TEST(StripedSet_boost_list) \
    CPPUNIT_TEST(StripedSet_boost_slist) \
    CPPUNIT_TEST(StripedSet_boost_vector) \
    CPPUNIT_TEST(StripedSet_boost_stable_vector) \
    CPPUNIT_TEST(StripedSet_boost_set)
#else
#   define CDSUNIT_DECLARE_StripedSet_boost_container
#   define CDSUNIT_TEST_StripedSet_boost_container
#endif

#if BOOST_VERSION >= 104800 && defined(CDS_UNIT_SET_TYPES_ENABLE_BOOST_FLAT_CONTAINERS)
#   define CDSUNIT_DECLARE_StripedSet_boost_flat_container \
    TEST_SET(StripedSet_boost_flat_set)
#   define CDSUNIT_TEST_StripedSet_boost_flat_container \
    CPPUNIT_TEST(StripedSet_boost_flat_set)
#else
#   define CDSUNIT_DECLARE_StripedSet_boost_flat_container
#   define CDSUNIT_TEST_StripedSet_boost_flat_container
#endif

#define CDSUNIT_DECLARE_StripedSet \
    CDSUNIT_DECLARE_StripedSet_common \
    CDSUNIT_DECLARE_StripedSet_boost_container \
    CDSUNIT_DECLARE_StripedSet_boost_flat_container
#define CDSUNIT_TEST_StripedSet \
    CDSUNIT_TEST_StripedSet_common \
    CDSUNIT_TEST_StripedSet_boost_container \
    CDSUNIT_TEST_StripedSet_boost_flat_container


#define CDSUNIT_DECLARE_RefinableSet_common \
    TEST_SET(RefinableSet_list) \
    TEST_SET(RefinableSet_vector) \
    TEST_SET(RefinableSet_set) \
    TEST_SET(RefinableSet_hashset) \
    TEST_SET(RefinableSet_boost_unordered_set)
#define CDSUNIT_TEST_RefinableSet_common \
    CPPUNIT_TEST(RefinableSet_list) \
    CPPUNIT_TEST(RefinableSet_vector) \
    CPPUNIT_TEST(RefinableSet_set) \
    CPPUNIT_TEST(RefinableSet_hashset) \
    CPPUNIT_TEST(RefinableSet_boost_unordered_set)

#if BOOST_VERSION >= 104800
#   define CDSUNIT_DECLARE_RefinableSet_boost_container \
    TEST_SET(RefinableSet_boost_list) \
    TEST_SET(RefinableSet_boost_slist) \
    TEST_SET(RefinableSet_boost_vector) \
    TEST_SET(RefinableSet_boost_stable_vector) \
    TEST_SET(RefinableSet_boost_set)
#   define CDSUNIT_TEST_RefinableSet_boost_container \
    CPPUNIT_TEST(RefinableSet_boost_list) \
    CPPUNIT_TEST(RefinableSet_boost_slist) \
    CPPUNIT_TEST(RefinableSet_boost_vector) \
    CPPUNIT_TEST(RefinableSet_boost_stable_vector) \
    CPPUNIT_TEST(RefinableSet_boost_set)
#else
#   define CDSUNIT_DECLARE_RefinableSet_boost_container
#   define CDSUNIT_TEST_RefinableSet_boost_container
#endif

#if BOOST_VERSION >= 104800 && defined(CDS_UNIT_SET_TYPES_ENABLE_BOOST_FLAT_CONTAINERS)
#   define CDSUNIT_DECLARE_RefinableSet_boost_flat_container \
    TEST_SET(RefinableSet_boost_flat_set)
#   define CDSUNIT_TEST_RefinableSet_boost_flat_container \
    CPPUNIT_TEST(RefinableSet_boost_flat_set)
#else
#   define CDSUNIT_DECLARE_RefinableSet_boost_flat_container
#   define CDSUNIT_TEST_RefinableSet_boost_flat_container
#endif

#define CDSUNIT_DECLARE_RefinableSet \
    CDSUNIT_DECLARE_RefinableSet_common \
    CDSUNIT_DECLARE_RefinableSet_boost_container \
    CDSUNIT_DECLARE_RefinableSet_boost_flat_container
#define CDSUNIT_TEST_RefinableSet \
    CDSUNIT_TEST_RefinableSet_common \
    CDSUNIT_TEST_RefinableSet_boost_container \
    CDSUNIT_TEST_RefinableSet_boost_flat_container

#endif // #ifndef _CDSUNIT_SET2_SET_DEFS_H
