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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_UPDATEDOMAINRECORDREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_UPDATEDOMAINRECORDREQUEST_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT UpdateDomainRecordRequest : public RpcServiceRequest
			{

			public:
				UpdateDomainRecordRequest();
				~UpdateDomainRecordRequest();

				std::string getRecordId()const;
				void setRecordId(const std::string& recordId);
				std::string getRR()const;
				void setRR(const std::string& rR);
				std::string getLine()const;
				void setLine(const std::string& line);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getType()const;
				void setType(const std::string& type);
				long getPriority()const;
				void setPriority(long priority);
				std::string getValue()const;
				void setValue(const std::string& value);
				long getTTL()const;
				void setTTL(long tTL);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string recordId_;
				std::string rR_;
				std::string line_;
				std::string userClientIp_;
				std::string lang_;
				std::string type_;
				long priority_;
				std::string value_;
				long tTL_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_UPDATEDOMAINRECORDREQUEST_H_