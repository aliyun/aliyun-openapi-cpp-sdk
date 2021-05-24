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

#ifndef ALIBABACLOUD_DTS_MODEL_CONFIGUREMIGRATIONJOBALERTREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CONFIGUREMIGRATIONJOBALERTREQUEST_H_

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
			class ALIBABACLOUD_DTS_EXPORT ConfigureMigrationJobAlertRequest : public RpcServiceRequest
			{

			public:
				ConfigureMigrationJobAlertRequest();
				~ConfigureMigrationJobAlertRequest();

				std::string getDelayOverSeconds()const;
				void setDelayOverSeconds(const std::string& delayOverSeconds);
				std::string getDelayAlertStatus()const;
				void setDelayAlertStatus(const std::string& delayAlertStatus);
				std::string getMigrationJobId()const;
				void setMigrationJobId(const std::string& migrationJobId);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				std::string getErrorAlertPhone()const;
				void setErrorAlertPhone(const std::string& errorAlertPhone);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDelayAlertPhone()const;
				void setDelayAlertPhone(const std::string& delayAlertPhone);
				std::string getErrorAlertStatus()const;
				void setErrorAlertStatus(const std::string& errorAlertStatus);

            private:
				std::string delayOverSeconds_;
				std::string delayAlertStatus_;
				std::string migrationJobId_;
				std::string ownerId_;
				std::string accessKeyId_;
				std::string accountId_;
				std::string errorAlertPhone_;
				std::string regionId_;
				std::string delayAlertPhone_;
				std::string errorAlertStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_CONFIGUREMIGRATIONJOBALERTREQUEST_H_