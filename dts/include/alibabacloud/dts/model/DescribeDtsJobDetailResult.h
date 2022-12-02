/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBDETAILRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeDtsJobDetailResult : public ServiceResult
			{
			public:
				struct SourceEndpoint
				{
					std::string oracleSID;
					std::string roleName;
					std::string userName;
					std::string instanceID;
					std::string sslSolutionEnum;
					std::string ip;
					std::string port;
					std::string aliyunUid;
					std::string databaseName;
					std::string region;
					std::string instanceType;
					std::string engineName;
				};
				struct DestinationEndpoint
				{
					std::string oracleSID;
					std::string userName;
					std::string instanceID;
					std::string sslSolutionEnum;
					std::string ip;
					std::string port;
					std::string databaseName;
					std::string region;
					std::string instanceType;
					std::string engineName;
				};
				struct MigrationMode
				{
					bool dataInitialization;
					bool dataSynchronization;
					bool dataExtractTransformLoad;
					bool structureInitialization;
				};
				struct SubscriptionHost
				{
					std::string publicHost;
					std::string privateHost;
					std::string vpcHost;
				};
				struct SubscriptionDataType
				{
					bool dml;
					bool ddl;
				};
				struct DataSynchronizationStatus
				{
					std::string status;
					std::string progress;
					std::string percent;
					bool needUpgrade;
					std::string errorMessage;
				};
				struct RetryState
				{
					int maxRetryTime;
					std::string retryTarget;
					int retryCount;
					int retryTime;
					std::string errMessage;
					std::string module;
					bool retrying;
					std::string jobId;
				};
				struct SubDistributedJobItem
				{
					struct SourceEndpoint2
					{
						std::string oracleSID;
						std::string roleName;
						std::string userName;
						std::string instanceID;
						std::string sslSolutionEnum;
						std::string ip;
						std::string port;
						std::string aliyunUid;
						std::string databaseName;
						std::string region;
						std::string instanceType;
						std::string engineName;
					};
					struct DestinationEndpoint3
					{
						std::string oracleSID;
						std::string roleName;
						std::string userName;
						std::string instanceID;
						std::string sslSolutionEnum;
						std::string ip;
						std::string port;
						std::string aliyunUid;
						std::string databaseName;
						std::string region;
						std::string instanceType;
						std::string engineName;
					};
					struct MigrationMode4
					{
						bool dataInitialization;
						bool dataSynchronization;
						bool dataExtractTransformLoad;
						bool structureInitialization;
					};
					struct PrecheckStatus
					{
						struct DetailItem
						{
							std::string repairMethod;
							std::string checkItem;
							std::string checkResult;
							std::string failedReason;
							std::string checkItemDescription;
						};
						std::string status;
						std::string percent;
						std::string errorMessage;
						std::vector<DetailItem> detail;
					};
					struct StructureInitializationStatus
					{
						std::string status;
						std::string progress;
						std::string percent;
						bool needUpgrade;
						std::string errorMessage;
					};
					struct DataInitializationStatus
					{
						std::string status;
						std::string progress;
						std::string percent;
						bool needUpgrade;
						std::string errorMessage;
					};
					struct DataSynchronizationStatus5
					{
						std::string status;
						std::string progress;
						std::string percent;
						bool needUpgrade;
						std::string errorMessage;
					};
					struct DataEtlStatus
					{
						std::string status;
						std::string progress;
						std::string percent;
						bool needUpgrade;
						std::string errorMessage;
					};
					struct Performance
					{
						std::string rps;
						std::string flow;
					};
					struct ReverseJob
					{
						struct SourceEndpoint9
						{
							std::string oracleSID;
							std::string roleName;
							std::string userName;
							std::string instanceID;
							std::string sslSolutionEnum;
							std::string ip;
							std::string port;
							std::string aliyunUid;
							std::string databaseName;
							std::string region;
							std::string instanceType;
							std::string engineName;
						};
						struct DestinationEndpoint10
						{
							std::string oracleSID;
							std::string roleName;
							std::string userName;
							std::string instanceID;
							std::string sslSolutionEnum;
							std::string ip;
							std::string port;
							std::string aliyunUid;
							std::string databaseName;
							std::string region;
							std::string instanceType;
							std::string engineName;
						};
						struct MigrationMode11
						{
							bool dataInitialization;
							bool dataSynchronization;
							bool dataExtractTransformLoad;
							bool structureInitialization;
						};
						struct PrecheckStatus12
						{
							struct DetailItem24
							{
								std::string repairMethod;
								std::string checkItem;
								std::string checkResult;
								std::string failedReason;
								std::string checkItemDescription;
							};
							std::string status;
							std::string percent;
							std::string errorMessage;
							std::vector<DetailItem24> detail23;
						};
						struct StructureInitializationStatus13
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct DataInitializationStatus14
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct DataSynchronizationStatus15
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct DataEtlStatus16
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct Performance17
						{
							std::string rps;
							std::string flow;
						};
						struct SubscriptionHost18
						{
							std::string publicHost;
							std::string privateHost;
							std::string vpcHost;
						};
						struct SubscriptionDataType19
						{
							bool dml;
							bool ddl;
						};
						struct RetryState20
						{
							int maxRetryTime;
							std::string retryTarget;
							int retryCount;
							std::string errMsg;
							int retryTime;
							bool retrying;
							std::string module;
							std::string jobId;
						};
						struct TagListItem22
						{
							std::string gmtModified;
							std::string resourceType;
							long creator;
							std::string gmtCreate;
							std::string srcRegion;
							std::string scope;
							std::string resourceId;
							std::string tagKey;
							long id;
							std::string regionId;
							std::string tagValue;
							std::string tagCategory;
							long aliUid;
						};
						PrecheckStatus12 precheckStatus12;
						std::string dtsJobName;
						std::string endTimestamp;
						SourceEndpoint9 sourceEndpoint9;
						std::string dtsInstanceID;
						long delay;
						std::string appName;
						std::string dtsJobClass;
						RetryState20 retryState20;
						std::string dtsJobId;
						DataEtlStatus16 dataEtlStatus16;
						std::string finishTime;
						std::string taskType;
						MigrationMode11 migrationMode11;
						SubscriptionHost18 subscriptionHost18;
						SubscriptionDataType19 subscriptionDataType19;
						std::string destNetType;
						std::string etlCalculator;
						std::string status;
						DataSynchronizationStatus15 dataSynchronizationStatus15;
						std::vector<TagListItem22> tagList21;
						std::string originType;
						std::string dbObject;
						std::string createTime;
						Performance17 performance17;
						ObjectOfAny reverseJob;
						std::string payType;
						DestinationEndpoint10 destinationEndpoint10;
						std::string groupId;
						bool isDemoJob;
						std::string checkpoint;
						std::string consumptionCheckpoint;
						std::string dtsJobDirection;
						std::string jobType;
						DataInitializationStatus14 dataInitializationStatus14;
						int databaseCount;
						std::string subscribeTopic;
						std::string consumptionClient;
						StructureInitializationStatus13 structureInitializationStatus13;
						std::string expireTime;
						std::string errorMessage;
						std::string beginTimestamp;
						std::string synchronizationDirection;
						std::string reserved;
					};
					struct SubscriptionHost6
					{
						std::string publicHost;
						std::string privateHost;
						std::string vpcHost;
					};
					struct SubscriptionDataType7
					{
						bool dml;
						bool ddl;
					};
					struct RetryState8
					{
						int maxRetryTime;
						std::string retryTarget;
						int retryCount;
						std::string errMsg;
						int retryTime;
						bool retrying;
						std::string module;
						std::string jobId;
					};
					struct TagListItem
					{
						std::string gmtModified;
						std::string resourceType;
						long creator;
						std::string gmtCreate;
						std::string srcRegion;
						std::string scope;
						std::string resourceId;
						std::string tagKey;
						long id;
						std::string regionId;
						std::string tagValue;
						std::string tagCategory;
						long aliUid;
					};
					DataInitializationStatus dataInitializationStatus;
					SourceEndpoint2 sourceEndpoint2;
					std::vector<std::string> subSyncJob1;
					std::string dtsJobName;
					std::string endTimestamp;
					MigrationMode4 migrationMode4;
					std::string dtsInstanceID;
					long delay;
					std::string appName;
					std::string dtsJobClass;
					std::string dtsJobId;
					std::string finishTime;
					SubscriptionDataType7 subscriptionDataType7;
					std::string taskType;
					std::vector<SubDistributedJobItem::TagListItem> tagList;
					std::string destNetType;
					std::string etlCalculator;
					std::string status;
					std::string originType;
					DataEtlStatus dataEtlStatus;
					std::string dbObject;
					std::string createTime;
					RetryState8 retryState8;
					ReverseJob reverseJob;
					std::string payType;
					DestinationEndpoint3 destinationEndpoint3;
					std::string groupId;
					bool isDemoJob;
					PrecheckStatus precheckStatus;
					std::string checkpoint;
					std::string consumptionCheckpoint;
					std::string dtsJobDirection;
					std::string jobType;
					SubscriptionHost6 subscriptionHost6;
					int databaseCount;
					std::string subscribeTopic;
					std::string consumptionClient;
					DataSynchronizationStatus5 dataSynchronizationStatus5;
					Performance performance;
					std::string expireTime;
					std::string errorMessage;
					std::string beginTimestamp;
					std::string synchronizationDirection;
					StructureInitializationStatus structureInitializationStatus;
					std::string reserved;
				};
				struct SubSyncJobItem
				{
					struct SourceEndpoint26
					{
						std::string oracleSID;
						std::string roleName;
						std::string userName;
						std::string instanceID;
						std::string sslSolutionEnum;
						std::string ip;
						std::string port;
						std::string aliyunUid;
						std::string databaseName;
						std::string region;
						std::string instanceType;
						std::string engineName;
					};
					struct DestinationEndpoint27
					{
						std::string oracleSID;
						std::string roleName;
						std::string userName;
						std::string instanceID;
						std::string sslSolutionEnum;
						std::string ip;
						std::string port;
						std::string aliyunUid;
						std::string databaseName;
						std::string region;
						std::string instanceType;
						std::string engineName;
					};
					struct MigrationMode28
					{
						bool dataInitialization;
						bool dataSynchronization;
						bool dataExtractTransformLoad;
						bool structureInitialization;
					};
					struct PrecheckStatus29
					{
						struct DetailItem42
						{
							std::string repairMethod;
							std::string checkItem;
							std::string checkResult;
							std::string failedReason;
							std::string checkItemDescription;
						};
						std::string status;
						std::vector<DetailItem42> detail41;
						std::string percent;
						std::string errorMessage;
					};
					struct StructureInitializationStatus30
					{
						std::string status;
						std::string progress;
						std::string percent;
						bool needUpgrade;
						std::string errorMessage;
					};
					struct DataInitializationStatus31
					{
						std::string status;
						std::string progress;
						std::string percent;
						bool needUpgrade;
						std::string errorMessage;
					};
					struct DataSynchronizationStatus32
					{
						std::string status;
						std::string progress;
						std::string percent;
						bool needUpgrade;
						std::string errorMessage;
					};
					struct DataEtlStatus33
					{
						std::string status;
						std::string progress;
						std::string percent;
						bool needUpgrade;
						std::string errorMessage;
					};
					struct Performance34
					{
						std::string rps;
						std::string flow;
					};
					struct ReverseJob35
					{
						struct SourceEndpoint43
						{
							std::string oracleSID;
							std::string roleName;
							std::string userName;
							std::string instanceID;
							std::string sslSolutionEnum;
							std::string ip;
							std::string port;
							std::string aliyunUid;
							std::string databaseName;
							std::string region;
							std::string instanceType;
							std::string engineName;
						};
						struct DestinationEndpoint44
						{
							std::string oracleSID;
							std::string roleName;
							std::string userName;
							std::string instanceID;
							std::string sslSolutionEnum;
							std::string ip;
							std::string port;
							std::string aliyunUid;
							std::string databaseName;
							std::string region;
							std::string instanceType;
							std::string engineName;
						};
						struct MigrationMode45
						{
							bool dataInitialization;
							bool dataSynchronization;
							bool dataExtractTransformLoad;
							bool structureInitialization;
						};
						struct PrecheckStatus46
						{
							struct DetailItem58
							{
								std::string repairMethod;
								std::string checkItem;
								std::string checkResult;
								std::string failedReason;
								std::string checkItemDescription;
							};
							std::string status;
							std::string percent;
							std::vector<DetailItem58> detail57;
							std::string errorMessage;
						};
						struct StructureInitializationStatus47
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct DataInitializationStatus48
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct DataSynchronizationStatus49
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct DataEtlStatus50
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct Performance51
						{
							std::string rps;
							std::string flow;
						};
						struct SubscriptionHost52
						{
							std::string publicHost;
							std::string privateHost;
							std::string vpcHost;
						};
						struct SubscriptionDataType53
						{
							bool dml;
							bool ddl;
						};
						struct RetryState54
						{
							int maxRetryTime;
							std::string retryTarget;
							int retryCount;
							std::string errMsg;
							int retryTime;
							bool retrying;
							std::string module;
							std::string jobId;
						};
						struct TagListItem56
						{
							std::string gmtModified;
							std::string resourceType;
							long creator;
							std::string gmtCreate;
							std::string srcRegion;
							std::string scope;
							std::string resourceId;
							std::string tagKey;
							long id;
							std::string regionId;
							std::string tagValue;
							std::string tagCategory;
							long aliUid;
						};
						DataSynchronizationStatus49 dataSynchronizationStatus49;
						std::string dtsJobName;
						std::string endTimestamp;
						std::string dtsInstanceID;
						std::vector<TagListItem56> tagList55;
						long delay;
						DestinationEndpoint44 destinationEndpoint44;
						std::string appName;
						std::string dtsJobClass;
						std::string dtsJobId;
						std::string finishTime;
						SubscriptionHost52 subscriptionHost52;
						StructureInitializationStatus47 structureInitializationStatus47;
						std::string taskType;
						std::string destNetType;
						DataEtlStatus50 dataEtlStatus50;
						std::string etlCalculator;
						std::string status;
						std::string originType;
						std::string dbObject;
						std::string createTime;
						PrecheckStatus46 precheckStatus46;
						ObjectOfAny reverseJob;
						DataInitializationStatus48 dataInitializationStatus48;
						SubscriptionDataType53 subscriptionDataType53;
						std::string payType;
						std::string groupId;
						bool isDemoJob;
						Performance51 performance51;
						std::string checkpoint;
						std::string consumptionCheckpoint;
						std::string dtsJobDirection;
						std::string jobType;
						int databaseCount;
						SourceEndpoint43 sourceEndpoint43;
						std::string subscribeTopic;
						std::string consumptionClient;
						MigrationMode45 migrationMode45;
						RetryState54 retryState54;
						std::string expireTime;
						std::string errorMessage;
						std::string beginTimestamp;
						std::string synchronizationDirection;
						std::string reserved;
					};
					struct SubscriptionHost36
					{
						std::string publicHost;
						std::string privateHost;
						std::string vpcHost;
					};
					struct SubscriptionDataType37
					{
						bool dml;
						bool ddl;
					};
					struct RetryState38
					{
						int maxRetryTime;
						std::string retryTarget;
						int retryCount;
						std::string errMsg;
						int retryTime;
						bool retrying;
						std::string module;
						std::string jobId;
					};
					struct TagListItem40
					{
						std::string gmtModified;
						std::string resourceType;
						long creator;
						std::string gmtCreate;
						std::string srcRegion;
						std::string scope;
						std::string resourceId;
						std::string tagKey;
						long id;
						std::string regionId;
						std::string tagValue;
						std::string tagCategory;
						long aliUid;
					};
					DestinationEndpoint27 destinationEndpoint27;
					std::vector<SubSyncJobItem::TagListItem40> tagList39;
					std::string dtsJobName;
					std::string endTimestamp;
					std::string dtsInstanceID;
					long delay;
					std::string appName;
					SubscriptionDataType37 subscriptionDataType37;
					std::string dtsJobClass;
					std::string dtsJobId;
					std::string finishTime;
					std::string taskType;
					std::vector<std::string> subSyncJob25;
					DataEtlStatus33 dataEtlStatus33;
					std::string destNetType;
					SubscriptionHost36 subscriptionHost36;
					std::string etlCalculator;
					std::string status;
					std::string originType;
					std::string dbObject;
					std::string createTime;
					DataSynchronizationStatus32 dataSynchronizationStatus32;
					std::string payType;
					SourceEndpoint26 sourceEndpoint26;
					PrecheckStatus29 precheckStatus29;
					Performance34 performance34;
					std::string groupId;
					bool isDemoJob;
					DataInitializationStatus31 dataInitializationStatus31;
					std::string checkpoint;
					std::string consumptionCheckpoint;
					ReverseJob35 reverseJob35;
					std::string dtsJobDirection;
					std::string jobType;
					int databaseCount;
					std::string subscribeTopic;
					std::string consumptionClient;
					RetryState38 retryState38;
					std::string expireTime;
					std::string errorMessage;
					MigrationMode28 migrationMode28;
					StructureInitializationStatus30 structureInitializationStatus30;
					std::string beginTimestamp;
					std::string synchronizationDirection;
					std::string reserved;
				};


				DescribeDtsJobDetailResult();
				explicit DescribeDtsJobDetailResult(const std::string &payload);
				~DescribeDtsJobDetailResult();
				SubscriptionHost getSubscriptionHost()const;
				std::string getResourceGroupId()const;
				std::string getDtsJobName()const;
				std::string getEndTimestamp()const;
				std::string getDynamicMessage()const;
				std::string getDtsInstanceID()const;
				MigrationMode getMigrationMode()const;
				long getDelay()const;
				bool getSuccess()const;
				bool getDemoJob()const;
				SubscriptionDataType getSubscriptionDataType()const;
				std::string getDtsJobId()const;
				std::string getLastUpdateTime()const;
				std::string getTaskType()const;
				int getHttpStatusCode()const;
				DataSynchronizationStatus getDataSynchronizationStatus()const;
				std::string getEtlCalculator()const;
				std::string getStatus()const;
				std::string getDedicatedClusterId()const;
				std::string getDbObject()const;
				std::string getBootTime()const;
				std::string getPayType()const;
				std::string getErrMessage()const;
				int getCode()const;
				std::string getErrCode()const;
				std::string getSubscribeTopic()const;
				std::string getConsumptionClient()const;
				SourceEndpoint getSourceEndpoint()const;
				std::string getExpireTime()const;
				RetryState getRetryState()const;
				std::string getReserved()const;
				std::vector<SubSyncJobItem> getSubSyncJob()const;
				std::string getBinlogTime()const;
				std::string getAppName()const;
				std::string getDtsJobClass()const;
				std::string getFinishTime()const;
				std::string getDestNetType()const;
				std::string getBinlog()const;
				std::string getCreateTime()const;
				std::vector<SubDistributedJobItem> getSubDistributedJob()const;
				std::string getGroupId()const;
				long getCheckpoint()const;
				std::string getConsumptionCheckpoint()const;
				std::string getDtsJobDirection()const;
				std::string getJobType()const;
				int getDatabaseCount()const;
				DestinationEndpoint getDestinationEndpoint()const;
				std::string getBinlogSite()const;
				std::string getErrorMessage()const;
				std::string getResourceGroupDisplayName()const;
				std::string getBeginTimestamp()const;
				std::string getSynchronizationDirection()const;

			protected:
				void parse(const std::string &payload);
			private:
				SubscriptionHost subscriptionHost_;
				std::string resourceGroupId_;
				std::string dtsJobName_;
				std::string endTimestamp_;
				std::string dynamicMessage_;
				std::string dtsInstanceID_;
				MigrationMode migrationMode_;
				long delay_;
				bool success_;
				bool demoJob_;
				SubscriptionDataType subscriptionDataType_;
				std::string dtsJobId_;
				std::string lastUpdateTime_;
				std::string taskType_;
				int httpStatusCode_;
				DataSynchronizationStatus dataSynchronizationStatus_;
				std::string etlCalculator_;
				std::string status_;
				std::string dedicatedClusterId_;
				std::string dbObject_;
				std::string bootTime_;
				std::string payType_;
				std::string errMessage_;
				int code_;
				std::string errCode_;
				std::string subscribeTopic_;
				std::string consumptionClient_;
				SourceEndpoint sourceEndpoint_;
				std::string expireTime_;
				RetryState retryState_;
				std::string reserved_;
				std::vector<SubSyncJobItem> subSyncJob_;
				std::string binlogTime_;
				std::string appName_;
				std::string dtsJobClass_;
				std::string finishTime_;
				std::string destNetType_;
				std::string binlog_;
				std::string createTime_;
				std::vector<SubDistributedJobItem> subDistributedJob_;
				std::string groupId_;
				long checkpoint_;
				std::string consumptionCheckpoint_;
				std::string dtsJobDirection_;
				std::string jobType_;
				int databaseCount_;
				DestinationEndpoint destinationEndpoint_;
				std::string binlogSite_;
				std::string errorMessage_;
				std::string resourceGroupDisplayName_;
				std::string beginTimestamp_;
				std::string synchronizationDirection_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBDETAILRESULT_H_