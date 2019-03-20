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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_OPERATEBATCHDOMAINREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_OPERATEBATCHDOMAINREQUEST_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT OperateBatchDomainRequest : public RpcServiceRequest
			{
				struct DomainRecordInfo
				{
					std::string rr;
					std::string line;
					std::string domain;
					std::string type;
					int priority;
					std::string value;
					int ttl;
				};

			public:
				OperateBatchDomainRequest();
				~OperateBatchDomainRequest();

				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::vector<DomainRecordInfo> getDomainRecordInfo()const;
				void setDomainRecordInfo(const std::vector<DomainRecordInfo>& domainRecordInfo);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getType()const;
				void setType(const std::string& type);

            private:
				std::string userClientIp_;
				std::vector<DomainRecordInfo> domainRecordInfo_;
				std::string lang_;
				std::string type_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_OPERATEBATCHDOMAINREQUEST_H_