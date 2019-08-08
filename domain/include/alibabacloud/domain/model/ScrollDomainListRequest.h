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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SCROLLDOMAINLISTREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SCROLLDOMAINLISTREQUEST_H_

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
			class ALIBABACLOUD_DOMAIN_EXPORT ScrollDomainListRequest : public RpcServiceRequest
			{

			public:
				ScrollDomainListRequest();
				~ScrollDomainListRequest();

				long getEndExpirationDate()const;
				void setEndExpirationDate(long endExpirationDate);
				std::string getProductDomainType()const;
				void setProductDomainType(const std::string& productDomainType);
				std::string getSuffixs()const;
				void setSuffixs(const std::string& suffixs);
				long getStartExpirationDate()const;
				void setStartExpirationDate(long startExpirationDate);
				int getDomainStatus()const;
				void setDomainStatus(int domainStatus);
				long getDomainGroupId()const;
				void setDomainGroupId(long domainGroupId);
				bool getKeyWordSuffix()const;
				void setKeyWordSuffix(bool keyWordSuffix);
				std::string getScrollId()const;
				void setScrollId(const std::string& scrollId);
				std::string getExcluded()const;
				void setExcluded(const std::string& excluded);
				bool getKeyWordPrefix()const;
				void setKeyWordPrefix(bool keyWordPrefix);
				int getStartLength()const;
				void setStartLength(int startLength);
				int getTradeType()const;
				void setTradeType(int tradeType);
				bool getExcludedSuffix()const;
				void setExcludedSuffix(bool excludedSuffix);
				long getEndRegistrationDate()const;
				void setEndRegistrationDate(long endRegistrationDate);
				int getForm()const;
				void setForm(int form);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				bool getExcludedPrefix()const;
				void setExcludedPrefix(bool excludedPrefix);
				std::string getKeyWord()const;
				void setKeyWord(const std::string& keyWord);
				long getStartRegistrationDate()const;
				void setStartRegistrationDate(long startRegistrationDate);
				int getEndLength()const;
				void setEndLength(int endLength);

            private:
				long endExpirationDate_;
				std::string productDomainType_;
				std::string suffixs_;
				long startExpirationDate_;
				int domainStatus_;
				long domainGroupId_;
				bool keyWordSuffix_;
				std::string scrollId_;
				std::string excluded_;
				bool keyWordPrefix_;
				int startLength_;
				int tradeType_;
				bool excludedSuffix_;
				long endRegistrationDate_;
				int form_;
				std::string userClientIp_;
				int pageSize_;
				std::string lang_;
				bool excludedPrefix_;
				std::string keyWord_;
				long startRegistrationDate_;
				int endLength_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SCROLLDOMAINLISTREQUEST_H_