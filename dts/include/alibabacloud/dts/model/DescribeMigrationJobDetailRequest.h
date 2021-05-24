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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBDETAILREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBDETAILREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeMigrationJobDetailRequest : public RpcServiceRequest
			{

			public:
				DescribeMigrationJobDetailRequest();
				~DescribeMigrationJobDetailRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				bool getMigrationModeDataInitialization()const;
				void setMigrationModeDataInitialization(bool migrationModeDataInitialization);
				std::string getMigrationJobId()const;
				void setMigrationJobId(const std::string& migrationJobId);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				bool getMigrationModeDataSynchronization()const;
				void setMigrationModeDataSynchronization(bool migrationModeDataSynchronization);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				bool getMigrationModeStructureInitialization()const;
				void setMigrationModeStructureInitialization(bool migrationModeStructureInitialization);

            private:
				std::string clientToken_;
				bool migrationModeDataInitialization_;
				std::string migrationJobId_;
				int pageNum_;
				std::string accessKeyId_;
				std::string accountId_;
				bool migrationModeDataSynchronization_;
				std::string regionId_;
				int pageSize_;
				std::string ownerId_;
				bool migrationModeStructureInitialization_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEMIGRATIONJOBDETAILREQUEST_H_