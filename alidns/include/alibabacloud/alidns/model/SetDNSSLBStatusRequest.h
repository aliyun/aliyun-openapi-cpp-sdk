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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_SETDNSSLBSTATUSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_SETDNSSLBSTATUSREQUEST_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT SetDNSSLBStatusRequest : public RpcServiceRequest
			{

			public:
				SetDNSSLBStatusRequest();
				~SetDNSSLBStatusRequest();

				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getSubDomain()const;
				void setSubDomain(const std::string& subDomain);
				std::string getLang()const;
				void setLang(const std::string& lang);
				bool getOpen()const;
				void setOpen(bool open);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string userClientIp_;
				std::string domainName_;
				std::string subDomain_;
				std::string lang_;
				bool open_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_SETDNSSLBSTATUSREQUEST_H_