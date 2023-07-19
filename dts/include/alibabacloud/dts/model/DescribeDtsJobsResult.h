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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBSRESULT_H_

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
			class ALIBABACLOUD_DTS_EXPORT DescribeDtsJobsResult : public ServiceResult
			{
			public:
				struct DtsJobStatus
				{
					struct DataInitializationStatus
					{
						std::string status;
						std::string progress;
						std::string percent;
						std::string errorMessage;
					};
					struct DataSynchronizationStatus
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
						std::string errorMessage;
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
						bool structureInitialization;
						bool fullDataCheck;
						bool incDataCheck;
					};
					struct Performance
					{
						std::string rps;
						std::string flow;
					};
					struct PrecheckStatus
					{
						struct PrecheckDetail
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
						std::vector<PrecheckDetail> detail;
					};
					struct ReverseJob
					{
						struct DataInitializationStatus1
						{
							std::string status;
							std::string progress;
							std::string percent;
							std::string errorMessage;
						};
						struct DataSynchronizationStatus2
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct DestinationEndpoint3
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
						struct MigrationMode4
						{
							bool dataInitialization;
							bool dataSynchronization;
							bool structureInitialization;
						};
						struct Performance5
						{
							std::string rps;
							std::string flow;
						};
						struct PrecheckStatus6
						{
							struct PrecheckDetail12
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
							std::vector<PrecheckDetail12> detail11;
						};
						struct SourceEndpoint7
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
						struct StructureInitializationStatus8
						{
							std::string status;
							std::string progress;
							std::string percent;
							std::string errorMessage;
						};
						struct ErrorDetail10
						{
							std::string errorCode;
							std::string helpUrl;
						};
						long duUsage;
						SourceEndpoint7 sourceEndpoint7;
						std::string dtsJobName;
						PrecheckStatus6 precheckStatus6;
						std::vector<ErrorDetail10> errorDetails9;
						std::string cpuUsage;
						MigrationMode4 migrationMode4;
						StructureInitializationStatus8 structureInitializationStatus8;
						std::string dtsInstanceID;
						long delay;
						std::string etlSafeCheckpoint;
						Performance5 performance5;
						std::string dtsJobClass;
						std::string dtsJobId;
						DataInitializationStatus1 dataInitializationStatus1;
						std::string memUsage;
						std::string status;
						std::string dedicatedClusterId;
						std::string dbObject;
						std::string createTime;
						std::string payType;
						DestinationEndpoint3 destinationEndpoint3;
						std::string checkpoint;
						std::string dtsJobDirection;
						std::string errorMessage;
						std::string expireTime;
						DataSynchronizationStatus2 dataSynchronizationStatus2;
						std::string reserved;
					};
					struct SourceEndpoint
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
					struct StructureInitializationStatus
					{
						std::string status;
						std::string progress;
						std::string percent;
						std::string errorMessage;
					};
					struct RetryState
					{
						int maxRetryTime;
						std::string retryTarget;
						std::string migrationErrType;
						std::string migrationErrCode;
						std::string migrationErrWorkaround;
						std::string errMessage;
						std::string migrationErrHelpDocKey;
						int retryCount;
						int retryTime;
						std::string module;
						bool retrying;
						std::string migrationErrHelpDocId;
						std::string jobId;
						std::string migrationErrMsg;
					};
					struct DataCloudStatus
					{
						std::string status;
						std::string progress;
						std::string percent;
						bool needUpgrade;
						std::string errorMessage;
					};
					struct FullDataCheckStatus
					{
						std::string status;
						std::string progress;
						std::string percent;
						std::string errorMessage;
					};
					struct IncDataCheckStatus
					{
						std::string status;
						std::string progress;
						std::string percent;
						std::string errorMessage;
					};
					struct DtsTag
					{
						std::string tagKey;
						std::string tagValue;
					};
					struct ErrorDetail
					{
						std::string errorCode;
						std::string helpUrl;
					};
					DataInitializationStatus dataInitializationStatus;
					std::string resourceGroupId;
					std::string dtsJobName;
					std::string migrationErrWorkaround;
					std::string migrationErrCode;
					std::string endTimestamp;
					std::string dtsInstanceID;
					MigrationMode migrationMode;
					long delay;
					std::string etlSafeCheckpoint;
					std::string dtsJobId;
					std::string migrationErrHelpDocId;
					DataSynchronizationStatus dataSynchronizationStatus;
					std::string memUsage;
					std::string status;
					std::string originType;
					std::string dedicatedClusterId;
					DataEtlStatus dataEtlStatus;
					std::string dbObject;
					ReverseJob reverseJob;
					std::string payType;
					PrecheckStatus precheckStatus;
					std::string migrationErrHelpDocKey;
					std::string consumptionClient;
					SourceEndpoint sourceEndpoint;
					Performance performance;
					std::string expireTime;
					std::string migrationErrMsg;
					RetryState retryState;
					std::string reserved;
					IncDataCheckStatus incDataCheckStatus;
					long duUsage;
					std::string migrationErrType;
					FullDataCheckStatus fullDataCheckStatus;
					std::string cpuUsage;
					std::vector<DtsJobStatus::ErrorDetail> errorDetails;
					std::string appName;
					std::string dtsJobClass;
					DataCloudStatus dataCloudStatus;
					std::vector<DtsJobStatus::DtsTag> tagList;
					std::string createTime;
					std::string dtsBisLabel;
					std::string consumptionCheckpoint;
					std::string checkpoint;
					std::string dtsJobDirection;
					std::string jobType;
					DestinationEndpoint destinationEndpoint;
					std::string errorMessage;
					std::string resourceGroupDisplayName;
					std::string beginTimestamp;
					StructureInitializationStatus structureInitializationStatus;
				};
				struct DtsJobStatus13
				{
					struct DataInitializationStatus14
					{
						std::string status;
						std::string progress;
						std::string percent;
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
						std::string errorMessage;
					};
					struct DestinationEndpoint17
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
					struct MigrationMode18
					{
						bool dataInitialization;
						bool dataSynchronization;
						bool structureInitialization;
					};
					struct Performance19
					{
						std::string rps;
						std::string flow;
					};
					struct PrecheckStatus20
					{
						struct PrecheckDetail
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
						std::vector<PrecheckDetail> detail;
					};
					struct ReverseJob21
					{
						struct DataInitializationStatus26
						{
							std::string status;
							std::string progress;
							std::string percent;
							std::string errorMessage;
						};
						struct DataSynchronizationStatus27
						{
							std::string status;
							std::string progress;
							std::string percent;
							bool needUpgrade;
							std::string errorMessage;
						};
						struct DestinationEndpoint28
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
						struct MigrationMode29
						{
							bool dataInitialization;
							bool dataSynchronization;
							bool structureInitialization;
						};
						struct Performance30
						{
							std::string rps;
							std::string flow;
						};
						struct PrecheckStatus31
						{
							struct PrecheckDetail35
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
							std::vector<PrecheckDetail35> detail34;
						};
						struct SourceEndpoint32
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
						struct StructureInitializationStatus33
						{
							std::string status;
							std::string progress;
							std::string percent;
							std::string errorMessage;
						};
						DataSynchronizationStatus27 dataSynchronizationStatus27;
						std::string status;
						PrecheckStatus31 precheckStatus31;
						DestinationEndpoint28 destinationEndpoint28;
						std::string dbObject;
						std::string createTime;
						std::string dtsJobName;
						DataInitializationStatus26 dataInitializationStatus26;
						std::string payType;
						std::string dtsInstanceID;
						long delay;
						std::string etlSafeCheckpoint;
						MigrationMode29 migrationMode29;
						std::string dtsJobClass;
						std::string checkpoint;
						Performance30 performance30;
						std::string dtsJobId;
						std::string dtsJobDirection;
						SourceEndpoint32 sourceEndpoint32;
						StructureInitializationStatus33 structureInitializationStatus33;
						std::string errorMessage;
						std::string expireTime;
						std::string reserved;
					};
					struct SourceEndpoint22
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
					struct StructureInitializationStatus23
					{
						std::string status;
						std::string progress;
						std::string percent;
						std::string errorMessage;
					};
					struct RetryState24
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
					struct DtsTag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string resourceGroupId;
					std::string dtsJobName;
					std::string endTimestamp;
					std::string dtsInstanceID;
					long delay;
					std::string etlSafeCheckpoint;
					std::string appName;
					MigrationMode18 migrationMode18;
					std::string dtsJobClass;
					std::string dtsJobId;
					DataEtlStatus16 dataEtlStatus16;
					ReverseJob21 reverseJob21;
					StructureInitializationStatus23 structureInitializationStatus23;
					RetryState24 retryState24;
					std::string status;
					DataSynchronizationStatus15 dataSynchronizationStatus15;
					std::string originType;
					PrecheckStatus20 precheckStatus20;
					DestinationEndpoint17 destinationEndpoint17;
					std::string dbObject;
					Performance19 performance19;
					std::string createTime;
					SourceEndpoint22 sourceEndpoint22;
					std::string payType;
					std::vector<DtsJobStatus13::DtsTag> tagList25;
					std::string consumptionCheckpoint;
					std::string checkpoint;
					std::string dtsJobDirection;
					std::string jobType;
					DataInitializationStatus14 dataInitializationStatus14;
					std::string consumptionClient;
					std::string errorMessage;
					std::string expireTime;
					std::string resourceGroupDisplayName;
					std::string beginTimestamp;
					std::string reserved;
				};


				DescribeDtsJobsResult();
				explicit DescribeDtsJobsResult(const std::string &payload);
				~DescribeDtsJobsResult();
				int getTotalRecordCount()const;
				std::vector<DtsJobStatus> getDtsJobList()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				int getHttpStatusCode()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getErrMessage()const;
				std::vector<DtsJobStatus13> getEtlDemoList()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				std::vector<DtsJobStatus> dtsJobList_;
				int pageRecordCount_;
				int pageNumber_;
				int httpStatusCode_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string errMessage_;
				std::vector<DtsJobStatus13> etlDemoList_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBSRESULT_H_