/**
 * ��Ȩ����(C)2012-2016, �����ɴ���Ϣ�������޹�˾
 * �ļ����ƣ�DFITCSECApiStruct.h
 * �ļ�˵��������ӿ���������ݽӿ�
 * ��ǰ�汾��1.3.2.0
 * ���ߣ�XSpeed֤ȯ��Ŀ��
 * �������ڣ�2015��01��
 */
#ifndef DFITCSECAPISTRUCT_H_
#define DFITCSECAPISTRUCT_H_


#include "DFITCSECApiDataType.h"

#ifdef WIN32
    #ifdef DFITCSECAPI_EXPORTS
        #define APISTRUCT __declspec(dllexport)
    #else
        #define APISTRUCT __declspec(dllimport)
    #endif//DFITCAPI_EXPORTS
#else
#define APISTRUCT
#endif//WIN32

//ERR-������Ϣ
struct APISTRUCT DFITCSECRspInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECSessionIDType                sessionID;                //�Ự��ʶ
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECErrorIDType                  errorID;                  //����ID
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECMessageType                  errorMsg;                 //������Ϣ
};

//SEC-��¼����
struct APISTRUCT DFITCSECReqUserLoginField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECPasswordType                 passWord;                 //����(Y)
};

//SEC-��¼��Ӧ
struct APISTRUCT DFITCSECRspUserLoginField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSessionIDType                sessionID;                //�Ự���
    DFITCSECFrontIDType                  frontID;                  //ǰ�ñ��
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECTimeType                     loginTime;                //��¼ʱ��
    DFITCSECDateType                     tradingDay;               //������
    DFITCSECErrorIDType                  result;                   //���
    DFITCSECMessageType                  rtnMsg;                   //������Ϣ
};

//SEC-�ǳ�����
struct APISTRUCT DFITCSECReqUserLogoutField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//SEC-�ǳ���Ӧ 
struct APISTRUCT DFITCSECRspUserLogoutField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECErrorIDType                  result;                   //���
    DFITCSECMessageType                  rtnMsg;                   //������Ϣ
};

//SEC-���û���������
struct APISTRUCT DFITCSECReqPasswordUpdateField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECPasswordType                 oldPassword;              //������(Y)
    DFITCSECPasswordType                 newPassword;              //������(Y)
    DFITCSECPasswordTypeType             passwordType;             //��������(Y)
};

//SEC-�����û�������Ӧ
struct APISTRUCT DFITCSECRspPasswordUpdateField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECPasswordTypeType             passwordType;             //��������
    DFITCSECErrorIDType                  result;                   //���½��
    DFITCSECMessageType                  rtnMsg;                   //���·�����Ϣ
};

//SEC-��������
struct APISTRUCT DFITCSECReqWithdrawOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
};

//SEC-������Ӧ
struct APISTRUCT DFITCSECRspWithdrawOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECMessageType                  cancelMsg;                //����������Ϣ
};

//STOCK-ί������
struct APISTRUCT DFITCStockReqEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
    DFITCSECQuantityType                 entrustQty;               //ί������(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
    DFITCSECOrderTypeType                orderType;                //��������(Y)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECSeatIDType                   eachSeatID;               //�Է�ϯλ��(N)
    DFITCSECHKEntrustLimitType           hkEntrustLimit;           //�۹ɽ�������(�۹ɽ��ף�Y)
    DFITCSECHKOrderTypeType              hkOrderType;              //�۹ɶ�������(�۹ɽ��ף�Y)
};

//STOCK-ί����Ӧ
struct APISTRUCT DFITCStockRspEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};

//STOCK-ί�в�ѯ����
struct APISTRUCT DFITCStockReqQryEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N)
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־(N)
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ(N)
};

//STOCK-ί�в�ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECShareholderIDType            offerShareholderID;       //���̹ɶ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECTimeType                     declareTime;              //�걨ʱ��
    DFITCSECDeclareResultType            declareResult;            //�걨���
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECMessageType                  noteMsg;                  //���˵��
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECOrderTypeType                orderType;                //��������
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�
    DFITCSECSerialIDType                 freezeFundsSerialID;      //�ʽ𶳽���ˮ��
    DFITCSECSerialIDType                 freezeStockSerialID;      //֤ȯ������ˮ��
    DFITCSECDateType                     declareDate;              //�걨����
    DFITCSECSerialIDType                 declareSerialID;          //�걨��¼��
    DFITCSECDateType                     entrustDate;              //ί������
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
    DFITCSECIPAddressType                ipAddr;                   //IP��ַ
    DFITCSECMacAddressType               macAddr;                  //MAC��ַ
};

//STOCK-ʵʱ�ɽ���ѯ����
struct APISTRUCT DFITCStockReqQryRealTimeTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�(N)
    DFITCSECTradeQryFlagType             queryFlag;                //��ѯ��־(N)
};

//STOCK-ʵʱ�ɽ���ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryRealTimeTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�
    DFITCSECOrderTypeType                orderType;                //��������
};

//STOCK-�ֱʳɽ���ѯ����
struct APISTRUCT DFITCStockReqQrySerialTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(N)
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�(Y)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECTradeQryFlagType             tradeQryFlag;             //��ѯ��־(N)
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ(N)
};

//STOCK-�ֱʳɽ���ѯ��Ӧ
struct APISTRUCT DFITCStockRspQrySerialTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECTradeIDType                  tradeID;                  //�ɽ����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityTypeType             securityType;             //֤�����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECFundsType                    commission;               //Ӷ��
    DFITCSECSerialIDType                 rtnSerialID;              //�ر����
    DFITCSECFundsType                    interestQuote;            //��Ϣ����
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
    DFITCSECFundsType                    interest;                 //��Ϣ
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
};

//STOCK-�ֲֲ�ѯ����
struct APISTRUCT DFITCStockReqQryPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityID;               //֤������(N)
    DFITCSECPositionQryFlagType          posiQryFlag;              //��ѯ��־(N)
};

//STOCK-�ֲֲ�ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    sellTurnover;             //���������ɽ����
    DFITCSECQuantityType                 sellTradeQty;             //���������ɽ�����
    DFITCSECQuantityType                 sellEntrustQty;           //��������ί������
    DFITCSECFundsType                    buyTurnover;              //��������ɽ����
    DFITCSECQuantityType                 buyTradeQty;              //��������ɽ�����
    DFITCSECQuantityType                 buyEntrustQty;            //��������ί������
    DFITCSECQuantityType                 nonCirculateQty;          //����ͨ����
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //������
    DFITCSECDateType                     openDate;                 //��������
    DFITCSECQuantityType                 ableSellQty;              //����������
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECQuantityType                 securityQty;              //֤ȯ����
    DFITCSECQuantityType                 position;                 //��ֲ���
    DFITCSECQuantityType                 unSettleQty;              //δ��������
    DFITCSECDateType                     changeDate;               //�䶯����
    DFITCSECQuantityType                 ablePurchaseQty;          //���깺����
    DFITCSECQuantityType                 ableRedemptionQty;        //���������
    DFITCSECQuantityType                 freezeQty;                //��������
    DFITCSECQuantityType                 offsetSQty;               //������������
    DFITCSECQuantityType                 offsetBQty;               //�����������
    DFITCSECQuantityType                 purchaseTradeQty;         //�깺�ɽ�����
    DFITCSECQuantityType                 redemptionTradeQty;       //��سɽ�����
    DFITCSECTradeUnitType                tradeUnit;                //���׵�λ
    DFITCSECQuantityType                 totalSellQty;             //�ۼ���������
    DFITCSECQuantityType                 totalBuyQty;              //�ۼ���������
    DFITCSECQuantityType                 rationedSharesQty;        //�������
    DFITCSECQuantityType                 purchaseQty;              //�깺����
    DFITCSECFundsType                    dilutedFloatProfitLoss;   //̯������ӯ��
    DFITCSECPriceType                    dilutedBreakevenPrice;    //̯��������
    DFITCSECPriceType                    dilutedCost;              //̯���ɱ���
    DFITCSECPriceType                    avgPositionPrice;         //�ֲ־���
    DFITCSECFundsType                    floatProfitLoss;          //����ӯ��
    DFITCSECFundsType                    dividend;                 //�������
    DFITCSECFundsType                    totalFloatProfitLoss;     //�ۼƸ���ӯ��
    DFITCSECFundsType                    sellAmount;               //�������
    DFITCSECFundsType                    buyAmount;                //������
    DFITCSECPriceType                    buyAvgPrice;              //�������
    DFITCSECFundsType                    rationedSharesAmount;     //��ɽ��
    DFITCSECFundsType                    latestMarket;             //������ֵ
    DFITCSECPriceType                    breakevenPrice;           //������
    DFITCSECPriceType                    latestPrice;              //���¼�
    DFITCSECFundsType                    nonCirculateMarket;       //����ͨ��ֵ
    DFITCSECFundsType                    interestQuote;            //��Ϣ����
    DFITCSECPriceType                    preClosePrice;            //�����̼�
};

//STOCK-�ͻ��ʽ��ѯ����
struct APISTRUCT DFITCStockReqQryCapitalAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECFundsQryFlagType             FundsQryFlag;             //��ѯ��־(Y)
};

//STOCK-�ͻ��ʽ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryCapitalAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    availableFunds;           //�����ʽ�
    DFITCSECFundsType                    t2AvailableFunds;         //T+2�����ʽ�
    DFITCSECFundsType                    anticipatedInterest;      //Ԥ����Ϣ
    DFITCSECFundsType                    accountBalance;           //�˻����
    DFITCSECAccountStatusType            accountStatus;            //�ͻ�״̬
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECFundsType                    t2FreezeFunds;            //T+2�����ʽ�
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECFundsType                    totalFunds;               //���ʽ�
    DFITCSECFundsType                    totalMarket;              //����ֵ
};

//STOCK-�ͻ���Ϣ��ѯ����
struct APISTRUCT  DFITCStockReqQryAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//STOCK-�ͻ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCStockRspQryAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECPhoneIDType                  tel;                      //�绰
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECAccountIdentityIDType        accountIdentityID;        //֤�����
    DFITCSECAccountIdentityTypeType      accountIdentityType;      //֤������
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSBranchTypeType                 branchType;               //������־
    DFITCSECPhoneIDType                  mobile;                   //�ƶ��绰
    DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
    DFITCSECAccountStatusType            accountStatus;            //�ͻ�״̬
    DFITCSECPasswdSyncFlagType           pwdSynFlag;               //����ͬ����־
};

//STOCK-�ɶ���Ϣ��ѯ����
struct APISTRUCT  DFITCStockReqQryShareholderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
};

//STOCK-�ɶ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCStockRspQryShareholderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                account;                  //�ͻ���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECShareholderSpecPropType      shareholderSpecProp;      //�ɶ�ָ������
    DFITCSECTradePermissionsType         tradePermissions;         //����Ȩ��
    DFITCSECExchangeIDType               exchangeID;               //������
    DFITCSECShareholderStatusType        shareholderStatus;        //�ɶ�״̬
    DFITCSECMainAccountFlagType          mainAccountFlag;          //���˻���־
    DFITCSECShareholderCtlPropType       shareholderCtlProp;       //�ɶ���������
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECShareholderTypeType          shareholderType;          //�ɶ����
};

//STOCK-�ʽ��ת����
struct APISTRUCT  DFITCStockReqTransferFundsField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECCurrencyType                 currency;                 //����(Y)
    DFITCSECAccountIDType                capitalID;                //�ʽ��˺�(Y)
    DFITCSECMessageType                  summaryMsg;               //ժҪ(N)
    DFITCSECFundsType                    operateFunds;             //�������(Y)
    DFITCSECFundsTransferFlagType        fundsTransFlag;           //�ʽ��ת��־(Y)
};

//STOCK-�ʽ��ת��Ӧ
struct APISTRUCT  DFITCStockRspTransferFundsField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSerialIDType                 serialID;                 //��ˮ��
    DFITCSECFundsType                    accountBanlance;          //�˻����
    DFITCSECFundsType                    availableFunds;           //�����ʽ�
    DFITCSECFundsType                    t2AvailableFunds;         //T+2�����ʽ�
    DFITCSECFundsTransferFlagType        fundsTransFlag;           //�ʽ��ת��־
};

//STOCK-����ί������
struct APISTRUCT DFITCStockReqEntrustBatchOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECQuantityType                 entrustCount;             //ί������(Y)
    DFITCSECEntrustBatchOrderDetailType  entrustDetail;            //ί����ϸ��Ϣ(Y)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
};

//STOCK-����ί����Ӧ
struct APISTRUCT DFITCStockRspEntrustBatchOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECOrderRangeID                 orderRangeID;             //ί�кŷ�Χ
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�
    DFITCSECQuantityType                 sucEntrustCount;          //�ɹ�ί�б���
};

//STOCK-������������
struct APISTRUCT DFITCStockReqWithdrawBatchOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECOrderIDRangeType             orderRangeID;             //ί�кŷ�Χ(Y)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
};

//STOCK-����������Ӧ
struct APISTRUCT DFITCStockRspWithdrawBatchOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECErrorIDType                  result;                   //�������
};

//STOCK-�����ί����������
struct APISTRUCT DFITCStockReqCalcAbleEntrustQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
    DFITCSECOrderTypeType                orderType;                //��������(Y)
};

//STOCK-�����ί��������Ӧ
struct APISTRUCT DFITCStockRspCalcAbleEntrustQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECQuantityType                 ableEntrustQty;           //��ί������
};

//STOCK-���������ETF��Ʊ��������
struct APISTRUCT DFITCStockReqCalcAblePurchaseETFQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
};

//STOCK-���������ETF��Ʊ������Ӧ
struct APISTRUCT DFITCStockRspCalcAblePurchaseETFQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECQuantityType                 ablePurchaseETFQty;       //��ί������
};

//STOCK-�ʽ𶳽���ϸ��ѯ����
struct APISTRUCT DFITCStockReqQryFreezeFundsDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECCurrencyType                 currency;                 //����(N)
    DFITCSECFundsFreezeTypeType          fundsFreezeType;          //�������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
};

//STOCK-�ʽ𶳽���ϸ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryFreezeFundsDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsFreezeTypeType          fundsFreezeType;          //�������
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECMessageType                  summaryMsg;               //ժҪ
    DFITCSECSerialIDType                 serialID;                 //��ˮ��
    DFITCSECFundsType                    operatorFunds;            //�������
    DFITCSECTimeType                     operatorTime;             //����ʱ��
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECDateType                     operatorDate;             //��������
};

//STOCK-֤ȯ������ϸ��ѯ����
struct APISTRUCT DFITCStockReqQryFreezeStockDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECStockFreezeTypeType          stockFreezeType;          //�������(N)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
    DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
};

//STOCK-֤ȯ������ϸ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryFreezeStockDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECStockFreezeTypeType          stockFreezeType;          //�������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECMessageType                  summaryMsg;               //ժҪ
    DFITCSECSerialIDType                 serialID;                 //��ˮ��
    DFITCSECTimeType                     operatorTime;             //����ʱ��
    DFITCSECBranchIDType                 branchID;                 //Ӫҵ��
    DFITCSECDateType                     operatorDate;             //��������
    DFITCSECQuantityType                 operatorQty;              //��������
};

//STOCK-��ѯ�ʽ������ϸ����
struct APISTRUCT DFITCStockReqQryTransferFundsDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECCurrencyType                 currency;                 //����(N)
    DFITCSECFundsFreezeTypeType          fundsFreezeType;          //�������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
};

//STOCK-�ʽ������ϸ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryTransferFundsDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsFreezeTypeType          fundsFreezeType;          //�������
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECMessageType                  summaryMsg;               //ժҪ
    DFITCSECSerialIDType                 serialID;                 //��ˮ��
    DFITCSECFundsType                    operatorFunds;            //�������
    DFITCSECTimeType                     operatorTime;             //����ʱ��
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECDateType                     operatorDate;             //��������
};

//STOCK-��ѯ�ͻ�֤ȯ������ϸ����
struct APISTRUCT DFITCStockReqQryTransferStockDetailField
{
    DFITCSECRequestIDType                requestID;                 //����ID(Y)
    DFITCSECAccountIDType                accountID;                 //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;                //����������(N)
    DFITCSECStockFreezeTypeType          stockFreezeType;           //�������(N)
    DFITCSECIncQryIndexType              incQryIndex;               //������ѯ����ֵ(N)
    DFITCSECSerialIDType                 serialID;                  //��ˮ��(N)
};

//STOCK-��ѯ�ͻ�֤ȯ������ϸ��Ӧ
struct APISTRUCT DFITCStockRspQryTransferStockDetailField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECAccountNameType              accountName;               //�ͻ�����
    DFITCSECBranchIDType                 branchID;                  //��������
    DFITCSECDateType                     operatorDate;              //��������
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECStockFreezeTypeType          stockFreezeType;           //�������
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECSerialIDType                 serialID;                  //��ˮ��
    DFITCSECShareholderIDType            shareholderID;             //�ɶ���
    DFITCSECMessageType                  summaryMsg;                //ժҪ
    DFITCSECTimeType                     operatorTime;              //����ʱ��
    DFITCSECQuantityType                 operatorQty;               //��������
};

//STOCK-֤ȯ��Ϣ��ѯ����
struct APISTRUCT DFITCStockReqQryStockField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityID;               //֤������(Y)
};

//STOCK-֤ȯ��Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryStockField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECBidTradeFlagType             stopFlag;                 //ͣ�Ʊ�־
    DFITCSECPriceType                    latestPrice;              //���¼�
    DFITCSECPriceType                    preClosePrice;            //�����̼�
    DFITCSECPriceType                    openPrice;                //���̼�
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    priceHigher;              //��߼�
    DFITCSECPriceType                    priceLower;               //��ͼ�
    DFITCSECPriceType                    bidPrice1;                //�����һ
    DFITCSECQuantityType                 bidQty1;                  //������һ
    DFITCSECPriceType                    askPrice1;                //������һ
    DFITCSECQuantityType                 askQty1;                  //������һ
    DFITCSECPriceType                    bidPrice2;                //����۶�
    DFITCSECQuantityType                 bidQty2;                  //��������
    DFITCSECPriceType                    askPrice2;                //�����۶�
    DFITCSECQuantityType                 askQty2;                  //��������
    DFITCSECPriceType                    bidPrice3;                //�������
    DFITCSECQuantityType                 bidQty3;                  //��������
    DFITCSECPriceType                    askPrice3;                //��������
    DFITCSECQuantityType                 askQty3;                  //��������
    DFITCSECPriceType                    bidPrice4;                //�������
    DFITCSECQuantityType                 bidQty4;                  //��������
    DFITCSECPriceType                    askPrice4;                //��������
    DFITCSECQuantityType                 askQty4;                  //��������
    DFITCSECPriceType                    bidPrice5;                //�������
    DFITCSECQuantityType                 bidQty5;                  //��������
    DFITCSECPriceType                    askPrice5;                //��������
    DFITCSECQuantityType                 askQty5;                  //��������
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECPriceType                    interestQuote;            //��Ϣ����
    DFITCSECPriceType                    securityFaceValue;        //֤ȯ��ֵ
    DFITCSECBidTradeFlagType             bidTradeFlag;             //���۽��ױ�־
    DFITCSECTradeUnitType                tradeUnit;                //���׵�λ
    DFITCSECBusinessLimitType            businessLimit;            //��������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECPriceType                    upperLimitPrice;          //��ͣ���
    DFITCSECPriceType                    lowerLimitPrice;          //��ͣ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECMessageType                  orderLimits;              //������������
};

//STOCK-��ѯ����ʱ������
struct APISTRUCT DFITCStockReqQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//STOCK-��ѯ����ʱ����Ӧ
struct APISTRUCT DFITCStockRspQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECDateType                     sysTradingDay;            //ϵͳ��ǰ����
    DFITCSECTimeType                     sysTime;                  //ϵͳ��ǰʱ��
};

//STOCK-ί�лر�
struct APISTRUCT DFITCStockEntrustOrderRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECDeclareResultType            declareResult;            //�걨���
    DFITCSECMessageType                  noteMsg;                  //���˵��
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECOrderConfirmFlagType         orderConfirmFlag;         //ί��ȷ�ϱ�־
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
};

//STOCK-�ɽ��ر�
struct APISTRUCT DFITCStockTradeRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECTradeIDType                  tradeID;                  //�ɽ����
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECQuantityType                 totalTradeQty;            //ί���ܳɽ�����
    DFITCSECFundsType                    totalTurnover;            //ί���ܳɽ����
    DFITCSECQuantityType                 tradeQty;                 //���γɽ�����
    DFITCSECPriceType                    tradePrice;               //���γɽ��۸�
    DFITCSECFundsType                    turnover;                 //���γɽ����
    DFITCSECQuantityType                 entrustQty;               //ί������
};

//STOCK-�����ر�
struct APISTRUCT DFITCStockWithdrawOrderRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;              //����ί�к�
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECShareholderIDType            shareholderID;             //�ɶ���
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECCurrencyType                 currency;                  //����
    DFITCSECSecurityIDType               securityID;                //֤ȯ����
    DFITCSECSecurityTypeType             securityType;              //֤ȯ���
    DFITCSECQuantityType                 withdrawQty;               //��������
    DFITCSECQuantityType                 tradeQty;                  //�ɽ�����
    DFITCSECWithdrawFlagType             withdrawFlag;              //������־
    DFITCSECFundsType                    freezeFunds;               //�����ʽ�
    DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;          //ί�����
    DFITCSECQuantityType                 entrustQty;                //ί������
};

//SOP-ί������
struct APISTRUCT DFITCSOPReqEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSecurityIDType               securityID;               //֤������(Y)
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����(N)
    DFITCSECQuantityType                 entrustQty;               //ί������(Y)
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(Y)
    DFITCSECCoveredFlagType              coveredFlag;              //��������(Y)
    DFITCSECOrderTypeType                orderType;                //��������(Y)
    DFITCSECOrderExpiryDateType          orderExpiryDate;          //����ʱЧ����(N)
    DFITCSECOrderCategoryType            orderCategory;            //ί�е����(Y)
    DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)
    DFITCSECTDevIDType                   devID;                    //�����̴���(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //�������걨��Ϣ(N)
};

//SOP-ί����Ӧ
struct APISTRUCT DFITCSOPRspEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
};

//SOP-ί�лر�
struct APISTRUCT DFITCSOPEntrustOrderRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECDeclareResultType            declareResult;            //�걨���
};

//SOP-�ɽ��ر�
struct APISTRUCT DFITCSOPTradeRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECOrderCategoryType            orderCategory;            //ί�е����
    DFITCSECFundsType                    tradePrice;               //�ɽ��۸�
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECTradeIDType                  tradeID;                  //�ɽ����
};

//SOP-�����ر�
struct APISTRUCT DFITCSOPWithdrawOrderRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECQuantityType                 cancelQty;                //��������
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECDeclareResultType            declareResult;            //�걨���
    DFITCSECFundsType                    wdUnFreezeFunds;          //�����ⶳ�ʽ�
};

//SOP-֤ȯ��������ί������
struct APISTRUCT DFITCSOPReqLockOUnLockStockField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSubAccountIDType             subAccountID;             //���˻����� (N)
    DFITCSECSecurityIDType               securityID;               //��Լ����(Y)
    DFITCSECQuantityType                 entrustQty;               //ί������(Y)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(Y)
    DFITCSECTDevIDType                   devID;                    //�����������̴���(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //��������������Ϣ(N)
};

//SOP-֤ȯ��������ί����Ӧ
struct APISTRUCT DFITCSOPRspLockOUnLockStockField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
};

//SOP-�ֱʳɽ���ѯ����
struct APISTRUCT DFITCSOPReqQrySerialTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityID;               //֤������(N)
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�(N)
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECTradeQryFlagType             tradeQryFlag;             //��ѯ��־(N)
};

//SOP-�ֱʳɽ���ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQrySerialTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSerialIDType                 rtnSerialID;              //�ر����
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECTradeIDType                  tradeID;                  //�ɽ����
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECTimeType                     rotationTime;             //��תʱ��
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
};

//SOP-ί�в�ѯ����
struct APISTRUCT DFITCSOPReqQryEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(N)
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־(N)
    DFITCSECSerialIDType                 exSerialID;               //��չ��ˮ��(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�(N)
    DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N)
};

//SOP-ί�в�ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�
    DFITCSECDeclareOrderIDType           withdrawOrderID;          //����ί�к�
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����
    DFITCSECOptionTypeType               optType;                  //��Ȩ���
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECDateType                     entrustDate;              //ί������
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECShareholderIDType            offerShareholderID;       //���̹ɶ���
    DFITCSECDateType                     declareDate;              //�걨����
    DFITCSECTimeType                     declareTime;              //�걨ʱ��
    DFITCSECSerialIDType                 declareSerialID;          //�걨��¼��
    DFITCSECErrorIDType                  declareResult;            //�걨���
    DFITCSECMessageType                  noteMsg;                  //���˵��
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
    DFITCSECMacAddressType               macAddr;                  //MAC��ַ
    DFITCSECIPAddressType                ipAddr;                   //IP��ַ
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�
    DFITCSECOrderTypeType                orderType;                //ί������
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
};

//SOP-�ֲֲ�ѯ����
struct APISTRUCT DFITCSOPReqQryPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(N)
};

//SOP-�ֲֲ�ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����
    DFITCSECContractIDType               contractID;               //��Ȩ����
    DFITCSECContractNameType             contractName;             //��Ȩ����
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־
    DFITCSECDateType                     executeDate;              //��Ȩ����
    DFITCSECQuantityType                 totalQty;                 //��ǰ����
    DFITCSECQuantityType                 availableQty;             //��������
    DFITCSECFundsType                    latestPrice;              //���¼�
    DFITCSECFundsType                    optionMarket;             //��Ȩ��ֵ
    DFITCSECQuantityType                 freezeQty;                //��������
    DFITCSECQuantityType                 executeQty;               //ִ������
    DFITCSECQuantityType                 openEntrustQty;           //����ί������
    DFITCSECQuantityType                 openTradeQty;             //���ֳɽ�����
    DFITCSECQuantityType                 prePosition;              //��ֲ�
    DFITCSECQuantityType                 closeEntrustQty;          //ƽ��ί������
    DFITCSECQuantityType                 closeTradeQty;            //ƽ�ֳɽ�����
    DFITCSECFundsType                    deposit;                  //��֤��
    DFITCSECFundsType                    openDeposit;              //���տ��ֱ�֤��
    DFITCSECFundsType                    closeDeposit;             //����ƽ�ֱ�֤��
    DFITCSECFundsType                    exchangeDeposit;          //��������֤��
    DFITCSECFundsType                    exchangeOpenDeposit;      //���������ֱ�֤��
    DFITCSECFundsType                    exchangeCloseDeposit;     //������ƽ�ֱ�֤��
    DFITCSECFundsType                    openAvgPrice;             //���־���
    DFITCSECOptionTypeType               optType;                  //��Ȩ����
    DFITCSECContractObjectTypeType       contractObjectType;       //�������
    DFITCSECContractUnitType             contractUnit;             //��Լ��λ
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    totalTradeCost;           //�ۼƽ��׳ɱ�(������λ���ۼ�)
    DFITCSECFundsType                    tradeCost;                //���ս��׳ɱ�(ʵʱ����)
    DFITCSECFundsType                    realizeProfitLoss;        //ʵ��ӯ��
    DFITCSECFundsType                    profitLoss;               //ӯ�����
};

//SOP-�ͻ������ֲֲ�ѯ����
struct APISTRUCT DFITCSOPReqQryCollateralPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
};

//SOP-�ͻ������ֲֲ�ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryCollateralPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECQuantityType                 availableQty;             //��������
};

//SOP-�ͻ��ʽ��ѯ����
struct APISTRUCT DFITCSOPReqQryCapitalAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECCurrencyType                 currency;                 //����(N)
    DFITCSECFundsQryFlagType             FundsQryFlag;             //��ѯ��־(N)
};

//SOP-�ͻ��ʽ��ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryCapitalAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    accountBanlance;          //�˻����
    DFITCSECFundsType                    availableFunds;           //�����ʽ�
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECFundsType                    anticipatedInterest;      //Ԥ����Ϣ
    DFITCSECFundsType                    usedDeposit;              //ռ�ñ�֤��
    DFITCSECAccountStatusType            accountStatus;            //�ͻ�״̬
};

//SOP-�ͻ���Ϣ��ѯ����
struct APISTRUCT  DFITCSOPReqQryAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//SOP-�ͻ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCSOPRspQryAccountField
{
    DFITCSECRequestIDType                requestID;                //����
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECAccountNameType              accountFullName;          //�ͻ�ȫ��
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECAccountIdentityTypeType      identityType;             //֤������
    DFITCSECAccountIdentityIDType        accountIdentityID;        //֤�����
    DFITCSECPhoneIDType                  tel;                      //�ͻ��绰
    DFITCSECPhoneIDType                  mobile;                   //�ƶ��绰
    DFITCSECAccountTypeType              accountType;              //Ͷ���߷���
    DFITCSECAccountPropType              accountProp;              //�ͻ�����
    DFITCSECTradePermissionsType         tradePermissions;         //����Ȩ��
    DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
    DFITCSECAccountStatusType            accountStatus;            //�ͻ�״̬
    DFITCSECPasswdSyncFlagType           pwdSynFlag;               //����ͬ����־
    DFITCSECAccountNodeIDType            accountNodeID;            //�ͻ������ڵ���
};

//SOP-��ί��������ѯ����
struct APISTRUCT DFITCSOPReqCalcAbleEntrustQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����(N)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(Y)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(Y)
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־(N)
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)
    DFITCSECCheckUpLimitFlagType         checkUpLimit;             //�Ƿ���ί������(N)
    DFITCSECTDevIDType                   devID;                    //�����������̴���(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //��������������Ϣ(N)
};

//SOP-��ί��������ѯ��Ӧ
struct APISTRUCT DFITCSOPRspCalcAbleEntrustQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����
    DFITCSECQuantityType                 entrustQty;               //ί������
};

//SOP-�ɶ���Ϣ��ѯ����
struct APISTRUCT  DFITCSOPReqQryShareholderField
{
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECRequestIDType                requestID;                //����ID(Y)
};

//SOP-�ɶ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCSOPRspQryShareholderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECTradePermissionsType         tradePermissions;         //����Ȩ��
    DFITCSECShareholderSpecPropType      shareholderSpecProp;      //�ɶ�ָ������
    DFITCSECShareholderCtlPropType       shareholderCtlProp;       //�ɶ���������
    DFITCSECShareholderStatusType        shareholderStatus;        //�ɶ�״̬
    DFITCSECMainAccountFlagType          mainAccountFlag;          //���˻���־
};

//SOP-�ͻ�������֤ȯ��ѯ����
struct APISTRUCT DFITCSOPReqQryAbleLockStockField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
};

//SOP-�ͻ�������֤ȯ��ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryAbleLockStockField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECQuantityType                 securityQty;              //֤ȯ����
    DFITCSECQuantityType                 position;                 //��ֲ���
    DFITCSECPriceType                    avgPositionPrice;         //�ֲ־���
    DFITCSECFundsType                    dilutedCost;              //̯���ɱ���
    DFITCSECPriceType                    breakevenPrice;           //������
    DFITCSECPriceType                    dilutedBreakevenPrice;    //̯��������
    DFITCSECQuantityType                 ableSellQty;              //����������
    DFITCSECFundsType                    latestMarket;             //������ֵ
    DFITCSECPriceType                    latestPrice;              //���¼�
    DFITCSECFundsType                    floatProfitLoss;          //����ӯ��
    DFITCSECFundsType                    dilutedFloatProfitLoss;   //̯������ӯ��
    DFITCSECTradeUnitType                tradeUnit;                //���׵�λ
};

//SOP-�ͻ���Ȩָ����Ϣ��ѯ����
struct APISTRUCT DFITCSOPReqQryExecAssiInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECAccountIDType                capitalID;                //�ʽ��˺�(Y)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(N)
    DFITCSECDateType                     tradeDate;                //��ѯ����(N)
};

//SOP-�ͻ���Ȩָ����Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryExecAssiInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECDateType                     tradeDate;                //�ɽ�����
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECSubAccountIDType             subAccountID;             //���˻�
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECOptionTypeType               optType;                  //��Ȩ����
    DFITCSECContractObjectTypeType       contractObjectType;       //�������
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECSecurityIDType               securityID;               //��Ĵ���
    DFITCSECSeatIDType                   seatID;                   //ϯλ����
    DFITCSECPriceType                    execPrice;                //��Ȩ�۸�
    DFITCSECQuantityType                 execQty;                  //��Ȩ����
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECFundsType                    clearFunds;               //������
    DFITCSECFundsType                    settleFunds;              //������
    DFITCSECFundsType                    commission;               //Ӷ��
    DFITCSECFundsType                    stampTax;                 //ӡ��˰
    DFITCSECFundsType                    transferFee;              //������
    DFITCSECFundsType                    fee3;                     //����3
    DFITCSECFundsType                    fee4;                     //����4
    DFITCSECMessageType                  summaryMsg;               //ժҪ
};

//SOP-��Ȩ��Լ�����ѯ����
struct APISTRUCT DFITCSOPReqQryContactField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(N)
    DFITCSECSecurityIDType               securityID;               //��Ĵ���(N)
    DFITCSECContractObjectTypeType       contractObjectType;       //�������(N)
    DFITCSECOptionTypeType               optType;                  //��Ȩ����(N)
};

//SOP-��Ȩ��Լ�����ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryContactField
{
    DFITCSECRequestIDType               requestID;                 //����ID
    DFITCSECAccountIDType               accountID;                 //�ͻ���
    DFITCSECExchangeIDType              exchangeID;                //������
    DFITCSECSecurityIDType              securityOptionID;          //��Ȩ���״���(10000031)
    DFITCSECContractIDType              contractID;                //��Ȩ��ʶ����(600104C1406M01200  )
    DFITCSECContractNameType            contractName;              //��Ȩ����(�������Ź�6��1200  )
    DFITCSECSecurityIDType              securityID;                //��Ĵ���(600104)
    DFITCSECContractObjectTypeType      contractObjectType;        //�������
    DFITCSECExecuteTypeType             execType;                  //��Ȩ��ʽ
    DFITCSECDeliveryTypeType            deliType;                  //���ʽ
    DFITCSECOptionTypeType              optType;                   //��Ȩ����
    DFITCSECContractUnitType            contactUnit;               //��Լ��λ
    DFITCSECFundsType                   latestPrice;               //���¼�
    DFITCSECDateType                    beginTradingDay;           //��ʼ������
    DFITCSECDateType                    endTradingDay;             //�������
    DFITCSECDateType                    execDate;                  //��Ȩ����
    DFITCSECDateType                    endDate;                   //������
    DFITCSECQuantityType                positionUpLimit;           //�ֲ�����
    DFITCSECFundsType                   priceUpLimit;              //��ͣ��
    DFITCSECFundsType                   priceDownLimit;            //��ͣ��
    DFITCSECFundsType                   priceHigher;               //��߼�
    DFITCSECFundsType                   priceLower;                //��ͼ�
    DFITCSECQuantityType                entrustUpLimit;            //ί������
    DFITCSECQuantityType                entrustDownLimit;          //ί������
    DFITCSECQuantityType                entrustUpLimitMarketPri;   //�м�ί������(MP=Market Price)
    DFITCSECQuantityType                entrustDownLimitMarketPri; //�м�ί������
    DFITCSECOpenLimitsType              openLimit;                 //��������
    DFITCSECStockTradeFlagType          stockTradeFlag;            //ͣ�Ʊ�־
    DFITCSECFundsType                   depositUnit;               //��λ��֤��
    DFITCSECFundsType                   depositRatioC;             //��֤�����1
    DFITCSECFundsType                   depositRatioE;             //��֤�����2
    DFITCSECPriceType                   preClosePrice;             //�����̼�
    DFITCSECPriceType                   closePrice;                //�����̼�
    DFITCSECPriceType                   preSettlePrice;            //������
    DFITCSECPriceType                   openPrice;                 //���̼�
    DFITCSECQuantityType                tradeQty;                  //�ɽ�����
    DFITCSECFundsType                   turnover;                  //�ɽ����
    DFITCSECPriceType                   settlePrice;               //�����
    DFITCSECPriceType                   endCashSettlePrice;        //�����ֽ�����
    DFITCSECQuantityType                handQty;                   //������
    DFITCSECQuantityType                unClosePositionQty;        //δƽ�ֺ�Լ
    DFITCSECApproachExpireFlagType      approachExpireFlag;        //�ٽ����ڱ�־
    DFITCSECTempAdjuestFlagType         tempAdjustFlag;            //��ʱ������־
    DFITCSECStockListFlagType           stockListFlag;             //��Ʊ���Ʊ�־
    DFITCSECFundsType                   execPrice;                 //��Ȩ�۸�
    DFITCSECFundsType                   bidPrice1;                 //�����1
    DFITCSECQuantityType                bidQty1;                   //������1
    DFITCSECFundsType                   bidPrice2;                 //�����2
    DFITCSECQuantityType                bidQty2;                   //������2
    DFITCSECFundsType                   bidPrice3;                 //�����3
    DFITCSECQuantityType                bidQty3;                   //������3
    DFITCSECFundsType                   bidPrice4;                 //�����4
    DFITCSECQuantityType                bidQty4;                   //������4
    DFITCSECFundsType                   bidPrice5;                 //�����5
    DFITCSECQuantityType                bidQty5;                   //������5
    DFITCSECFundsType                   askPrice1;                 //������1
    DFITCSECQuantityType                askQty1;                   //������1
    DFITCSECFundsType                   askPrice2;                 //������2
    DFITCSECQuantityType                askQty2;                   //������2
    DFITCSECFundsType                   askPrice3;                 //������3
    DFITCSECQuantityType                askQty3;                   //������3
    DFITCSECFundsType                   askPrice4;                 //������4
    DFITCSECQuantityType                askQty4;                   //������4
    DFITCSECFundsType                   askPrice5;                 //������5
    DFITCSECQuantityType                askQty5;                   //������5
};

//SOP-��Ȩ�����Ϣ��ѯ����
struct APISTRUCT DFITCSOPReqQryContractObjectField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //��Ĵ���
    DFITCSECContractObjectTypeType       securityObjectType;       //�������
};

//SOP-��Ȩ�����Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryContractObjectField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityNameType             securityName;             //���֤ȯ����
    DFITCSECSecurityIDType               securityID;               //��Ĵ���
    DFITCSECContractObjectTypeType       contractObjectType;       //�������
    DFITCSECContractObjectStatusType     contractObjectStatus;     //���֤ȯ״̬
};

//SOP-ִ��ί��
struct APISTRUCT DFITCSOPReqExectueOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityOptionID;         //֤������
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECTDevIDType                   devID;                    //�����̴���
    DFITCSECTDevDecInfoType              devDecInfo;               //�������걨��Ϣ
};

//SOP-ִ��ί����Ӧ
struct APISTRUCT DFITCSOPRspExectueOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
};

//SOP-��ѯ����ʱ������
struct APISTRUCT DFITCSOPReqQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
};

//SOP-��ѯ����ʱ����Ӧ
struct APISTRUCT DFITCSOPRspQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECDateType                     sysTradingDay;            //ϵͳ��ǰ����
    DFITCSECTimeType                     sysTime;                  //ϵͳ��ǰʱ��
};

//SOP-��ȡ���н�������������
struct APISTRUCT DFITCSOPReqQryExchangeInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
};

//SOP-��ȡ���н�����������Ӧ
struct APISTRUCT DFITCSOPRspQryExchangeInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECExchangeNameType             exchangeName;             //���������
    DFITCSECTimeType                     callauctionBegining;      //���Ͼ��ۿ�ʼʱ��
    DFITCSECTimeType                     callauctionEnding;        //���Ͼ��۽���ʱ��
    DFITCSECTimeType                     morningOpening;           //���翪��ʱ��
    DFITCSECTimeType                     morningClosing;           //�������ʱ��
    DFITCSECTimeType                     afternoonOpening;         //���翪��ʱ��
    DFITCSECTimeType                     afternoonClosing;         //�������ʱ��
    DFITCSECTimeType                     execOpening;              //��Ȩ��ʼʱ��
    DFITCSECTimeType                     execClosing;              //��Ȩ����ʱ��
    DFITCSECNightTradingFlagType         nightTradeFlag;           //ҹ�н��ױ�־
    DFITCSECTimeType                     nightOpening;             //ҹ�п�ʼʱ��
    DFITCSECTimeType                     nightClosing;             //ҹ�н���ʱ��
    DFITCSECStockTradeFlagType           stockTradeStatus;         //����״̬
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECTradingDayFlagType           tradingDayFlag;           //�����ձ�ʶ
};

//SOP-��ѯ�����Ѳ�������
struct APISTRUCT DFITCSOPReqQryCommissionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECReferenceTypeType            refType;                  //�������
    DFITCSECContractObjectTypeType       contractObjectType;       //�������
    DFITCSECSecurityIDType               securityID;               //�������
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECLvelType                     level;                    //����
};

//SOP-��ѯ�����Ѳ�����Ӧ
struct APISTRUCT DFITCSOPRspQryCommissionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECReferenceTypeType            refType;                  //�������
    DFITCSECContractObjectTypeType       contractObjectType;       //�������
    DFITCSECSecurityIDType               securityID;               //�������
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECLvelType                     level;                    //����
    DFITCSECFundsType                    costRatio1;               //���ñ���1
    DFITCSECFundsType                    unitCost1;                //��λ����1
    DFITCSECFundsType                    costUpLimit1;             //��������1
    DFITCSECFundsType                    costDonwLimit1;           //��������1
    DFITCSECFundsType                    costRatio2;               //���ñ���2
    DFITCSECFundsType                    unitCost2;                //��λ����2
    DFITCSECFundsType                    costUpLimit2;             //��������2
    DFITCSECFundsType                    costDonwLimit2;           //��������2
    DFITCSECFundsType                    costRatio3;               //���ñ���3
    DFITCSECFundsType                    unitCost3;                //��λ����3
    DFITCSECFundsType                    costRatio4;               //���ñ���4
    DFITCSECFundsType                    unitCost4;                //��λ����4
};

//SOP-��ѯ��֤���ʲ�������
struct APISTRUCT DFITCSOPReqQryDepositField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECReferenceTypeType            refType;                  //�������
    DFITCSECContractObjectTypeType       securityObjectType;       //�������
    DFITCSECSecurityIDType               securityID;               //�������
    DFITCSECLvelType                     level;                    //����
};

//SOP-��ѯ��֤���ʲ�����Ӧ
struct APISTRUCT DFITCSOPRspQryDepositField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECReferenceTypeType            refType;                  //�������
    DFITCSECContractObjectTypeType       securityObjectType;       //�������
    DFITCSECSecurityIDType               securityID;               //�������
    DFITCSECFundsType                    depositRateC;             //��֤�����1
    DFITCSECFundsType                    depositRateE;             //��֤�����2
    DFITCSECFundsType                    depositUnit;              //��λ��֤��
    DFITCSECCalcTypeType                 calcType;                 //���㷽ʽ
    DFITCSECLvelType                     level;                    //����
};

//FASL-�ͻ���������Ϣ����
struct APISTRUCT DFITCFASLReqAbleFinInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};
//STOCK-����������Ϣ��ѯ����
struct APISTRUCT DFITCReqQuotQryField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
};

//STOCK-����������Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCRspQuotQryField
{
	DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
	
};
//FASL-�ͻ���������Ϣ��Ӧ
struct APISTRUCT DFITCFASLRspAbleFinInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECFundsType                    accountBanlance;          //�˻����
    DFITCSECFundsType                    ableFinFunds;             //�������ʽ�
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECFundsType                    entrustFreezeFunds;       //ί�ж�����
};

//FASL-�ͻ�����ȯ��Ϣ����
struct APISTRUCT DFITCFASLReqAbleSloInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//FASL-�ͻ�����ȯ��Ϣ��Ӧ
struct APISTRUCT DFITCFASLRspAbleSloInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECQuantityType                 ableSloQty;               //����ȯ����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECAccountStatusType            accountStatus;            //�ͻ�״̬
    DFITCSECFundsType                    sloDepositRatio;          //��ȯ��֤�����
};

//FASL-�����ﻮת����
struct APISTRUCT DFITCFASLReqTransferCollateralField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECQuantityType                 transferQty;              //��ת����
};

//FASL-�����ﻮת��Ӧ
struct APISTRUCT DFITCFASLRspTransferCollateralField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
};

//FASL-ֱ�ӻ�������
struct APISTRUCT DFITCFASLReqDirectRepaymentField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECAccountIDType                capitalID;                //�ʽ��˺�
    DFITCSECContractNOType               contractNO;               //ָ����Լ���
    DFITCSECFundsType                    repayFunds;               //�������
};

//FASL-ֱ�ӻ�����Ӧ
struct APISTRUCT DFITCFASLRspDirectRepaymentField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECFundsType                    realRepayFunds;           //ʵ�ʻ�����
};

//FASL-��ȯ��ת����
struct APISTRUCT DFITCFASLReqRepayStockTransferField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECQuantityType                 repayQty;                  //��ȯ����
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECContractNOType               contractNO;                //ָ����Լ���
};

//FASL-��ȯ��ת��Ӧ
struct APISTRUCT DFITCFASLRspRepayStockTransferField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
};

//FASL-���ý�������
struct APISTRUCT DFITCFASLReqEntrustCrdtOrderField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECEntrustDirectionType         entrustDirection;          //ί�����
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECContractNOType               contractNO;                //ָ����Լ���
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECOrderTypeType                orderType;                 //��������
    DFITCSECQuantityType                 entrustQty;                //ί������
    DFITCSECPriceType                    entrustPrice;              //ί�м۸�
};

//FASL-���ý�����Ӧ
struct APISTRUCT DFITCFASLRspEntrustCrdtOrderField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
};

//FASL-������ȯ��������
struct APISTRUCT DFITCFASLReqEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECEntrustDirectionType         entrustDirection;          //ί�����
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECOrderTypeType                orderType;                 //��������
    DFITCSECQuantityType                 entrustQty;                //ί������
    DFITCSECPriceType                    entrustPrice;              //ί�м۸�
};

//FASL-������ȯ������Ӧ
struct APISTRUCT DFITCFASLRspEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
};

//FASL-���ÿ�ί��������ѯ����
struct APISTRUCT DFITCFASLReqCalcAbleEntrustCrdtQtyField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECEntrustDirectionType         entrustDirection;          //ί�����
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECContractNOType               contractNO;                //ָ����Լ���
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECOrderTypeType                orderType;                 //��������
    DFITCSECPriceType                    entrustPrice;              //ί�м۸�
};

//FASL-���ÿ�ί��������ѯ��Ӧ
struct APISTRUCT DFITCFASLRspCalcAbleEntrustCrdtQtyField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECQuantityType                 totalRepayQty;             //��Ӧ������
    DFITCSECQuantityType                 entrustQty;                //ί������
};

//FASL-��ѯ�����ʽ�����
struct APISTRUCT DFITCFASLReqQryCrdtFundsField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECAccountIDType                capitalID;                 //�ʽ��˺�
};

//FASL-��ѯ�����ʽ���Ӧ
struct APISTRUCT DFITCFASLRspQryCrdtFundsField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECFundsType                    availableDeposit;          //���ñ�֤��
    DFITCSECFundsType                    maintGuaranteeRatio;       //ά�ֵ�������
    DFITCSECFundsType                    antiMaintGuaranteeRatio;   //Ԥ��ά�ֵ�������
    DFITCSECFundsType                    accountBanlance;           //�˻����
    DFITCSECFundsType                    availableFunds;            //�����ʽ�
    DFITCSECFundsType                    clearFunds;                //�����ʽ�
    DFITCSECFundsType                    stockMarket;               //֤����ֵ
    DFITCSECFundsType                    guaranteeStockSubMarket;   //���쵣��֤ȯ�ύ��ֵ
    DFITCSECFundsType                    guaranteeStockMarket;      //����֤ȯ��ֵ
    DFITCSECFundsType                    tradeFinLiabilities;       //���ʸ�ծ(�ѳɽ�)
    DFITCSECFundsType                    tradeSloLiabilities;       //��ȯ��ծ(�ѳɽ�)
    DFITCSECFundsType                    orderFinLiabilities;       //���ʸ�ծ(δ�ɽ�)
    DFITCSECFundsType                    orderSloLiabilities;       //��ȯ��ծ(δ�ɽ�)
    DFITCSECFundsType                    sloOrderRepay;             //��ȯ�黹(δ�ɽ�)
    DFITCSECFundsType                    fundsBalance;              //�ʽ���
    DFITCSECFundsType                    closeFunds;                //ƽ�ֽ��
    DFITCSECFundsType                    activeCloseFunds;          //����ƽ�ֽ��
    DFITCSECFundsType                    ableWithdrawalAssetsStand; //�����ʲ���׼
    DFITCSECFundsType                    withdrawalFunds;           //��ȡ�ʽ�
    DFITCSECFundsType                    totalAssets;               //���ʲ�
    DFITCSECFundsType                    unTransferStockMarket;     //δ������ֵ
    DFITCSECFundsType                    totalLiabilities;          //�ܸ�ծ
    DFITCSECFundsType                    netAssets;                 //���ʲ�
    DFITCSECFundsType                    sellRepayFunds;            //��������������
    DFITCSECFundsType                    anticipatedInterest;       //Ԥ����Ϣ/����
    DFITCSECFundsType                    finProfitLoss;             //����ӯ��
    DFITCSECFundsType                    sloProfitLoss;             //�ھ�ӯ��
    DFITCSECFundsType                    sloFunds;                  //�ھ����
    DFITCSECFundsType                    finCost;                   //���ʷ���
    DFITCSECFundsType                    sloCost;                   //�ھ�����
    DFITCSECFundsType                    finCurMarket;              //���ʵ�ǰ��ֵ
    DFITCSECFundsType                    finUsedDeposit;            //����ռ�ñ�֤��
    DFITCSECFundsType                    sloUsedDeposit;            //��ȯռ�ñ�֤��
    DFITCSECFundsType                    finAntiInterest;           //����Ԥ����Ϣ
    DFITCSECFundsType                    sloAntiInterest;           //�ھ�Ԥ����Ϣ
    DFITCSECFundsType                    shGuaranteeStockMarket;    //�Ϻ�����֤ȯ��ֵ
    DFITCSECFundsType                    szGuaranteeStockMarket;    //���ڵ���֤ȯ��ֵ
    DFITCSECFundsType                    finFloatProfit;            //���ʸ�ӯ����
    DFITCSECFundsType                    finFloatLoss;              //���ʸ���
    DFITCSECFundsType                    sloFloatProfit;            //�ھ���ӯ����
    DFITCSECFundsType                    sloFloatLoss;              //�ھ�����
    DFITCSECFundsType                    finRatio;                  //��������
    DFITCSECFundsType                    sloRatio;                  //��ȯ����
    DFITCSECDateType                     contractEndDate;           //��ͬ������
    DFITCSECFundsType                    finUsedLimits;             //�������ö��
    DFITCSECFundsType                    sloUsedLimits;             //�ھ����ö��
    DFITCSECFundsType                    finCreditLimits;           //�������Ŷ��
    DFITCSECFundsType                    sloCreditLimits;           //�ھ����Ŷ��
    DFITCSECFundsType                    ableBuyCollateralFunds;    //���򵣱�Ʒ��
    DFITCSECFundsType                    ableRepayFunds;            //�ɻ�����
    DFITCSECFundsType                    sloAvailableFunds;         //��ȯ�����ʽ�
    DFITCSECFundsType                    cashAssets;                //�ֽ��ʲ��������ʲ���������ȯ������
    DFITCSECFundsType                    totalStockMarket;          //����֤ȯ��ֵ�������������롢�ǵ���Ʒ��
    DFITCSECFundsType                    finContractFunds;          //���ʺ�Լ�����������ã�
    DFITCSECFundsType                    contractObjectMarket;      //���֤ȯ��ֵ
    DFITCSECFundsType                    otherCharges;              //��������
    DFITCSECFundsType                    sloCurMarket;              //��ȯ��ǰ��ֵ
};

//FASL-���ú�Լ��Ϣ����
struct APISTRUCT DFITCFASLReqQryCrdtContractField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECDateType                     openBeginDate;             //������ʼ����
    DFITCSECDateType                     openEndDate;               //���ֽ�������
    DFITCSECCrdtContractQryFlagType      crdtConQryFlag;            //��ѯ��־
    DFITCSECAccountIDType                capitalID;                 //�ʽ��˺�
    DFITCSECEntrustDirectionType         entrustDirection;          //ί�����
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECContractNOType               contractNO;                //ָ����Լ���
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECSerialIDType                 conSerialID;               //��Լ��ˮ��
};

//FASL-���ú�Լ��Ϣ��Ӧ
struct APISTRUCT DFITCFASLRspQryCrdtContractField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECSerialIDType                 conSerialNO;               //��Լ��ˮ��
    DFITCSECContractNOType               contractNO;                //ָ����Լ���
    DFITCSECDateType                     operatorDate;              //��������
    DFITCSECDateType                     endDate;                   //��������
    DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;          //ί�����
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECSecurityNameType             securityName;              //֤ȯ����
    DFITCSECCurrencyType                 currency;                  //����
    DFITCSECQuantityType                 finQty;                    //��������
    DFITCSECFundsType                    finFunds;                  //���ʽ��
    DFITCSECQuantityType                 sloQty;                    //��ȯ����
    DFITCSECFundsType                    sloFunds;                  //��ȯ���
    DFITCSECQuantityType                 finEntrustQty;             //��������ί������
    DFITCSECFundsType                    finEntrustFunds;           //��������ί�н��
    DFITCSECQuantityType                 sloEntrustQty;             //������ȯί������
    DFITCSECFundsType                    sloEntrustFunds;           //������ȯί�н��
    DFITCSECQuantityType                 finTradeQty;               //�������ʳɽ�����
    DFITCSECFundsType                    finTradeFunds;             //�������ʳɽ����
    DFITCSECQuantityType                 sloTradeQty;               //������ȯ�ɽ�����
    DFITCSECFundsType                    sloTradeFunds;             //������ȯ�ɽ����
    DFITCSECFundsType                    debtPrincipal;             //��ծ����
    DFITCSECFundsType                    repayFunds;                //������
    DFITCSECQuantityType                 debtQty;                   //��ծ����
    DFITCSECQuantityType                 repayQty;                  //��������
    DFITCSECFundsType                    sellStockRepayFunds;       //������ȯ�����
    DFITCSECQuantityType                 buyStockForRepayEntrustQty;//������ȯ��ȯί������
    DFITCSECQuantityType                 buyStockForRepayTradeQty;  //������ȯ��ȯ�ɽ�����
    DFITCSECFundsType                    finCost;                   //���ʷ���
    DFITCSECFundsType                    sloCost;                   //��ȯ����
    DFITCSECFundsType                    totalInterest;             //����Ϣ
    DFITCSECFundsType                    repaidInterest;            //�ѹ黹��Ϣ
    DFITCSECCrdtContractQryFlagType      crdtConQryFlag;            //��ѯ��־
    DFITCSECFundsType                    leftInterest;              //ʣ����Ϣ
    DFITCSECFundsType                    sloLeftFunds;              //��ȯʣ���ʽ�
    DFITCSECFundsType                    buyStockFreezeFunds;       //��ȯ������
    DFITCSECFundsType                    buyStockClearFunds;        //��ȯ������
    DFITCSECFundsType                    sloLeftAvaiFunds;          //��ȯʣ�����(��ȯ��ȯ�����ʽ�)
    DFITCSECFundsType                    debtQtyEntrustMarket;      //��ծ����(ί�к�)��ֵ
    DFITCSECFundsType                    debtQtyTradeMarket;        //��ծ����(�ɽ���)��ֵ
    DFITCSECFundsType                    debtFundsMarket;           //��ծ�����ֵ
    DFITCSECFundsType                    finProfitLoss;             //����ӯ��
    DFITCSECFundsType                    sloProfitLoss;             //�ھ�ӯ��
    DFITCSECQuantityType                 entrustQty;                //ί������
    DFITCSECQuantityType                 conOpenQty;                //��Լ��������
    DFITCSECFundsType                    conOpenFunds;              //��Լ���ֽ��
    DFITCSECFundsType                    conOpenCost;               //��Լ���ַ���
    DFITCSECQuantityType                 conInitQty;                //�ڳ���Լ����
    DFITCSECFundsType                    conInitFunds;              //�ڳ���Լ���
    DFITCSECFundsType                    conInitCost;               //�ڳ���Լ����
    DFITCSECFundsType                    unRepayConFunds;           //δ����Լ���
    DFITCSECQuantityType                 unRepayConQty;             //δ����Լ����
    DFITCSECFundsType                    unRepayConCost;            //δ����Լ����
    DFITCSECPositionNOType               positionNO;                //ͷ����
};

//FASL-���ú�Լ�䶯��Ϣ��ѯ����
struct APISTRUCT DFITCFASLReqQryCrdtConChangeInfoField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECAccountIDType                capitalID;                 //�ʽ��˺�
    DFITCSECEntrustDirectionType         entrustDirection;          //ί�����
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECSerialIDType                 conSerialNO;               //��Լ��ˮ��
};

//FASL-���ú�Լ�䶯��Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryCrdtConChangeInfoField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECSerialIDType                 serialNO;                  //��Լ��ˮ��
    DFITCSECContractNOType               conChangeNO;               //��Լ�䶯���
    DFITCSECWithdrawFlagType             withdrawFlag;              //������־
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECEntrustDirectionType         entrustDirection;          //ί�����
    DFITCSECFundsType                    operatorFunds;             //�������
    DFITCSECDateType                     operatorTime;              //����ʱ��
    DFITCSECQuantityType                 operatorQty;               //��������
    DFITCSECDateType                     operatorDate;              //��������
    DFITCSECClearFlagType                clearFlag;                 //�����־
    DFITCSECFundsType                    commission;                //������
    DFITCSECFundsType                    operatorFunds2;            //�������
    DFITCSECFundsType                    postFunds;                 //���ʽ��
    DFITCSECQuantityType                 postQty;                   //��֤ȯ��
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECFundsType                    operatorCost;              //��������
    DFITCSECFundsType                    postCost;                  //�������
    DFITCSECFundsType                    operatorInterest;          //������Ϣ
    DFITCSECFundsType                    postInterest;              //������Ϣ
    DFITCSECMessageType                  changeNote;                //�䶯˵��
    DFITCSECShareholderIDType            shareholderID;             //�ɶ���
};

//QUOTE-ָ���ĺ�Լ
struct APISTRUCT DFITCSECSpecificInstrumentField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECSecurityIDType               securityID;               //��Լ����
    DFITCSECExchangeIDType               exchangeID;               //����������
};

//sop ���е�
struct APISTRUCT DFITCSOPSpecificDataField
{
    DFITCSECContractIDType               contractID;               //��Ȩ��ʶ����(601318C1412M03500)
    DFITCSECFundsType                    execPrice;                //��Ȩ�۸�
    DFITCSECFundsType                    preSettlePrice;           //������
    DFITCSECFundsType                    settlePrice;              //�����
};

//stock ���е�
struct APISTRUCT DFITCStockSpecificDataField
{
    DFITCSECFundsType                    peRadio1;                 //��ӯ��1
    DFITCSECFundsType                    peRadio2;                 //��ӯ��2
};
//���о�̬��
struct APISTRUCT DFITCStaticDataField
{
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(600104)
    DFITCSECSecurityNameType             securityName;             //֤ȯ����(��������)
    DFITCSECDateType                     tradingDay;               //������
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECFundsType                    preClosePrice;            //������
    DFITCSECFundsType                    openPrice;                //����
    DFITCSECFundsType                    upperLimitPrice;          //��ͣ���
    DFITCSECFundsType                    lowerLimitPrice;          //��ͣ���

};
//���ж�̬��
struct APISTRUCT DFITCSharedDataField
{   

    DFITCSECFundsType                    latestPrice;              //���¼�
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECFundsType                    highestPrice;             //��߼�
    DFITCSECFundsType                    lowestPrice;              //��ͼ�
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
	DFITCSECTimeType                     updateTime;               //ʱ���
    DFITCSECFundsType                    bidPrice1;                //�����һ
    DFITCSECQuantityType                 bidQty1;                  //������һ
    DFITCSECFundsType                    askPrice1;                //������һ
    DFITCSECQuantityType                 askQty1;                  //������һ
    DFITCSECFundsType                    bidPrice2;                //����۶�
    DFITCSECQuantityType                 bidQty2;                  //��������
    DFITCSECFundsType                    askPrice2;                //�����۶�
    DFITCSECQuantityType                 askQty2;                  //��������
    DFITCSECFundsType                    bidPrice3;                //�������
    DFITCSECQuantityType                 bidQty3;                  //��������
    DFITCSECFundsType                    askPrice3;                //��������
    DFITCSECQuantityType                 askQty3;                  //��������
    DFITCSECFundsType                    bidPrice4;                //�������
    DFITCSECQuantityType                 bidQty4;                  //��������
    DFITCSECFundsType                    askPrice4;                //��������
    DFITCSECQuantityType                 askQty4;                  //��������
    DFITCSECFundsType                    bidPrice5;                //�������
    DFITCSECQuantityType                 bidQty5;                  //��������
    DFITCSECFundsType                    askPrice5;                //��������
    DFITCSECQuantityType                 askQty5;                  //��������
	
};

struct APISTRUCT DFITCSOPDepthMarketDataField
{
    DFITCSOPSpecificDataField            specificDataField;        //���е�
    DFITCStaticDataField                 staticDataField;          //���еľ�̬
    DFITCSharedDataField                 sharedDataField ;         //���еĶ�̬ 

};

struct APISTRUCT DFITCStockDepthMarketDataField
{
	DFITCSharedDataField                 sharedDataField ;        //���еĶ�̬ 
    DFITCStockSpecificDataField          specificDataField;       //���е�
    DFITCStaticDataField                 staticDataField;         //���еľ�̬
  
};

//����ṹ���� DFITCStockReqQryStockField (STOCK-֤ȯ��Ϣ��ѯ����)
//STOCK-֤ȯ��̬��Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryStockStaticField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECBidTradeFlagType             stopFlag;                 //ͣ�Ʊ�־
    DFITCSECPriceType                    preClosePrice;            //�����̼�
    DFITCSECPriceType                    openPrice;                //���̼�
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECPriceType                    interestQuote;            //��Ϣ����
    DFITCSECPriceType                    securityFaceValue;        //֤ȯ��ֵ
    DFITCSECBidTradeFlagType             bidTradeFlag;             //���۽��ױ�־
    DFITCSECTradeUnitType                tradeUnit;                //���׵�λ
    DFITCSECBusinessLimitType            businessLimit;            //��������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECPriceType                    upperLimitPrice;          //��ͣ���
    DFITCSECPriceType                    lowerLimitPrice;          //��ͣ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECMessageType                  orderLimits;              //������������
};


#endif























