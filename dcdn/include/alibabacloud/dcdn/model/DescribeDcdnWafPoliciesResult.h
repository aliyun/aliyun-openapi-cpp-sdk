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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFPOLICIESRESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFPOLICIESRESULT_H_

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
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnWafPoliciesResult : public ServiceResult
			{
			public:
				struct PolicyItem
				{
					long ruleCount;
					std::string policyType;
					std::string policyStatus;
					std::string policyName;
					std::string defenseScene;
					std::string gmtModified;
					long policyId;
					int domainCount;
				};


				DescribeDcdnWafPoliciesResult();
				explicit DescribeDcdnWafPoliciesResult(const std::string &payload);
				~DescribeDcdnWafPoliciesResult();
				int getTotalCount()const;
				std::vector<PolicyItem> getPolicies()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<PolicyItem> policies_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFPOLICIESRESULT_H_