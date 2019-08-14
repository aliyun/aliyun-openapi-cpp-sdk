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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBESUBDOMAINRECORDSREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBESUBDOMAINRECORDSREQUEST_H_

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
			class ALIBABACLOUD_ALIDNS_EXPORT DescribeSubDomainRecordsRequest : public RpcServiceRequest
			{

			public:
				DescribeSubDomainRecordsRequest();
				~DescribeSubDomainRecordsRequest();

				std::string getLine()const;
				void setLine(const std::string& line);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getSubDomain()const;
				void setSubDomain(const std::string& subDomain);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getType()const;
				void setType(const std::string& type);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string line_;
				std::string userClientIp_;
				long pageSize_;
				std::string domainName_;
				std::string subDomain_;
				std::string lang_;
				std::string type_;
				long pageNumber_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBESUBDOMAINRECORDSREQUEST_H_