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
					bool structureInitialization;
				};


				DescribeDtsJobDetailResult();
				explicit DescribeDtsJobDetailResult(const std::string &payload);
				~DescribeDtsJobDetailResult();
				std::string getDtsJobName()const;
				std::string getDynamicMessage()const;
				std::string getDtsInstanceID()const;
				MigrationMode getMigrationMode()const;
				bool getSuccess()const;
				int getDelay()const;
				std::string getDtsJobClass()const;
				std::string getDtsJobId()const;
				std::string getFinishTime()const;
				int getHttpStatusCode()const;
				std::string getStatus()const;
				std::string getDbObject()const;
				std::string getCreateTime()const;
				std::string getPayType()const;
				std::string getErrMessage()const;
				int getCode()const;
				std::string getErrCode()const;
				int getCheckpoint()const;
				std::string getDtsJobDirection()const;
				DestinationEndpoint getDestinationEndpoint()const;
				SourceEndpoint getSourceEndpoint()const;
				std::string getExpireTime()const;
				std::string getErrorMessage()const;
				std::string getSynchronizationDirection()const;
				std::string getReserved()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dtsJobName_;
				std::string dynamicMessage_;
				std::string dtsInstanceID_;
				MigrationMode migrationMode_;
				bool success_;
				int delay_;
				std::string dtsJobClass_;
				std::string dtsJobId_;
				std::string finishTime_;
				int httpStatusCode_;
				std::string status_;
				std::string dbObject_;
				std::string createTime_;
				std::string payType_;
				std::string errMessage_;
				int code_;
				std::string errCode_;
				int checkpoint_;
				std::string dtsJobDirection_;
				DestinationEndpoint destinationEndpoint_;
				SourceEndpoint sourceEndpoint_;
				std::string expireTime_;
				std::string errorMessage_;
				std::string synchronizationDirection_;
				std::string reserved_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDTSJOBDETAILRESULT_H_