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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SCROLLDOMAINLISTRESULT_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SCROLLDOMAINLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/domain/DomainExport.h>

namespace AlibabaCloud
{
	namespace Domain
	{
		namespace Model
		{
			class ALIBABACLOUD_DOMAIN_EXPORT ScrollDomainListResult : public ServiceResult
			{
			public:
				struct Domain
				{
					struct TagItem
					{
						std::string value;
						std::string key;
					};
					std::string registrantType;
					std::string email;
					std::string registrationDate;
					int expirationCurrDateDiff;
					long registrationDateLong;
					std::string resourceGroupId;
					std::string instanceId;
					std::string domainName;
					std::string domainGroupId;
					bool premium;
					std::string productId;
					std::string domainAuditStatus;
					std::string remark;
					long expirationDateLong;
					std::vector<std::string> dnsList;
					std::string expirationDateStatus;
					std::string domainType;
					std::string domainGroupName;
					std::string expirationDate;
					std::string zhRegistrantOrganization;
					std::vector<Domain::TagItem> tag;
					std::string registrantOrganization;
					std::string domainStatus;
				};


				ScrollDomainListResult();
				explicit ScrollDomainListResult(const std::string &payload);
				~ScrollDomainListResult();
				int getPageSize()const;
				std::string getScrollId()const;
				std::vector<Domain> getData()const;
				int getTotalItemNum()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				std::string scrollId_;
				std::vector<Domain> data_;
				int totalItemNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SCROLLDOMAINLISTRESULT_H_