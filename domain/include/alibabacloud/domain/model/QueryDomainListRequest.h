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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINLISTREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT QueryDomainListRequest : public RpcServiceRequest
			{

			public:
				QueryDomainListRequest();
				~QueryDomainListRequest();

				long getEndExpirationDate()const;
				void setEndExpirationDate(long endExpirationDate);
				std::string getProductDomainType()const;
				void setProductDomainType(const std::string& productDomainType);
				std::string getOrderKeyType()const;
				void setOrderKeyType(const std::string& orderKeyType);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getStartExpirationDate()const;
				void setStartExpirationDate(long startExpirationDate);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getOrderByType()const;
				void setOrderByType(const std::string& orderByType);
				std::string getDomainGroupId()const;
				void setDomainGroupId(const std::string& domainGroupId);
				long getEndRegistrationDate()const;
				void setEndRegistrationDate(long endRegistrationDate);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getQueryType()const;
				void setQueryType(const std::string& queryType);
				long getStartRegistrationDate()const;
				void setStartRegistrationDate(long startRegistrationDate);

            private:
				long endExpirationDate_;
				std::string productDomainType_;
				std::string orderKeyType_;
				std::string domainName_;
				long startExpirationDate_;
				int pageNum_;
				std::string orderByType_;
				std::string domainGroupId_;
				long endRegistrationDate_;
				std::string userClientIp_;
				int pageSize_;
				std::string lang_;
				std::string queryType_;
				long startRegistrationDate_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_QUERYDOMAINLISTREQUEST_H_