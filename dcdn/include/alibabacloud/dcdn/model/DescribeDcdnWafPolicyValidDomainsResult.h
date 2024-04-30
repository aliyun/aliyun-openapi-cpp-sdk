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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSRESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnWafPolicyValidDomainsResult : public ServiceResult
			{
			public:
				struct DomainItem
				{
					struct Policy
					{
						std::string type;
						long id;
						std::string name;
					};
					std::string policyType;
					std::vector<DomainItem::Policy> policies;
					std::string domainName;
					std::string policyName;
					long policyId;
				};


				DescribeDcdnWafPolicyValidDomainsResult();
				explicit DescribeDcdnWafPolicyValidDomainsResult(const std::string &payload);
				~DescribeDcdnWafPolicyValidDomainsResult();
				std::vector<DomainItem> getDomains()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DomainItem> domains_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFPOLICYVALIDDOMAINSRESULT_H_