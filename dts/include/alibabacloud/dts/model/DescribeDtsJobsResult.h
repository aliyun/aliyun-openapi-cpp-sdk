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
							struct PrecheckDetail10
							{
								std::string repairMethod;
								std::string checkItem;
								std::string checkResult;
								std::string failedReason;
								std::string checkItemDescription;
							};
							std::string status;
							std::string percent;
							std::vector<PrecheckDetail10> detail9;
							std::string errorMessage;
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
						std::string status;
						SourceEndpoint7 sourceEndpoint7;
						std::string dbObject;
						std::string createTime;
						std::string dtsJobName;
						PrecheckStatus6 precheckStatus6;
						std::string payType;
						MigrationMode4 migrationMode4;
						StructureInitializationStatus8 structureInitializationStatus8;
						std::string dtsInstanceID;
						DestinationEndpoint3 destinationEndpoint3;
						int delay;
						Performance5 performance5;
						std::string checkpoint;
						std::string dtsJobClass;
						std::string dtsJobDirection;
						std::string dtsJobId;
						DataInitializationStatus1 dataInitializationStatus1;
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
					struct DtsTag
					{
						std::string tagKey;
						std::string tagValue;
					};
					DataInitializationStatus dataInitializationStatus;
					std::string dtsJobName;
					std::string endTimestamp;
					std::string dtsInstanceID;
					MigrationMode migrationMode;
					int delay;
					std::string appName;
					std::string dtsJobClass;
					std::string dtsJobId;
					std::vector<DtsJobStatus::DtsTag> tagList;
					DataSynchronizationStatus dataSynchronizationStatus;
					std::string status;
					DataEtlStatus dataEtlStatus;
					std::string dbObject;
					std::string createTime;
					ReverseJob reverseJob;
					std::string payType;
					PrecheckStatus precheckStatus;
					std::string checkpoint;
					std::string consumptionCheckpoint;
					std::string dtsJobDirection;
					DestinationEndpoint destinationEndpoint;
					std::string consumptionClient;
					SourceEndpoint sourceEndpoint;
					Performance performance;
					std::string errorMessage;
					std::string expireTime;
					std::string beginTimestamp;
					StructureInitializationStatus structureInitializationStatus;
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
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBSRESULT_H_