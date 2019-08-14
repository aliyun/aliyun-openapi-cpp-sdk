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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_UPDATEGTMINSTANCEGLOBALCONFIGREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_UPDATEGTMINSTANCEGLOBALCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT UpdateGtmInstanceGlobalConfigRequest : public RpcServiceRequest
			{

			public:
				UpdateGtmInstanceGlobalConfigRequest();
				~UpdateGtmInstanceGlobalConfigRequest();

				std::string getAlertGroup()const;
				void setAlertGroup(const std::string& alertGroup);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getUserDomainName()const;
				void setUserDomainName(const std::string& userDomainName);
				std::string getCnameMode()const;
				void setCnameMode(const std::string& cnameMode);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLbaStrategy()const;
				void setLbaStrategy(const std::string& lbaStrategy);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getTtl()const;
				void setTtl(int ttl);
				std::string getCnameCustomDomainName()const;
				void setCnameCustomDomainName(const std::string& cnameCustomDomainName);

            private:
				std::string alertGroup_;
				std::string instanceId_;
				std::string instanceName_;
				std::string userDomainName_;
				std::string cnameMode_;
				std::string userClientIp_;
				std::string lbaStrategy_;
				std::string lang_;
				int ttl_;
				std::string cnameCustomDomainName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_UPDATEGTMINSTANCEGLOBALCONFIGREQUEST_H_