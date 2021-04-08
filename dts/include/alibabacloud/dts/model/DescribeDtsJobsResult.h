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
					struct StructureInitializationStatus
					{
						std::string status;
						std::string progress;
						std::string percent;
						std::string errorMessage;
					};
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
					struct Performance
					{
						std::string rps;
						std::string flow;
					};
					struct ReverseJob
					{
						struct SourceEndpoint1
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
						struct DestinationEndpoint2
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
						struct MigrationMode3
						{
							bool dataInitialization;
							bool dataSynchronization;
							bool structureInitialization;
						};
						struct PrecheckStatus4
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
						struct StructureInitializationStatus5
						{
							std::string status;
							std::string progress;
							std::string percent;
							std::string errorMessage;
						};
						struct DataInitializationStatus6
						{
							std::string status;
							std::string progress;
							std::string percent;
							std::string errorMessage;
						};
						struct DataSynchronizationStatus7
						{
							std::string status;
							std::string progress;
							std::string percent;
							std::string errorMessage;
						};
						struct Performance8
						{
							std::string rps;
							std::string flow;
						};
						std::string status;
						Performance8 performance8;
						SourceEndpoint1 sourceEndpoint1;
						std::string dbObject;
						std::string createTime;
						PrecheckStatus4 precheckStatus4;
						std::string dtsJobName;
						std::string payType;
						MigrationMode3 migrationMode3;
						std::string dtsInstanceID;
						int delay;
						StructureInitializationStatus5 structureInitializationStatus5;
						DestinationEndpoint2 destinationEndpoint2;
						std::string dtsJobClass;
						std::string checkpoint;
						std::string dtsJobId;
						std::string dtsJobDirection;
						DataInitializationStatus6 dataInitializationStatus6;
						DataSynchronizationStatus7 dataSynchronizationStatus7;
						std::string expireTime;
						std::string errorMessage;
						std::string reserved;
					};
					struct DtsTag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					DataInitializationStatus dataInitializationStatus;
					std::string dbObject;
					std::string createTime;
					ReverseJob reverseJob;
					std::string dtsJobName;
					std::string payType;
					std::string dtsInstanceID;
					MigrationMode migrationMode;
					int delay;
					PrecheckStatus precheckStatus;
					std::string dtsJobClass;
					std::string checkpoint;
					std::string dtsJobId;
					std::string dtsJobDirection;
					DestinationEndpoint destinationEndpoint;
					SourceEndpoint sourceEndpoint;
					std::vector<DtsJobStatus::DtsTag> tagList;
					Performance performance;
					std::string expireTime;
					std::string errorMessage;
					StructureInitializationStatus structureInitializationStatus;
					DataSynchronizationStatus dataSynchronizationStatus;
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