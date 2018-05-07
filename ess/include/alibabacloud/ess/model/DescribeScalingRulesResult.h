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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGRULESRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingRulesResult : public ServiceResult
			{
			public:
				struct ScalingRule
				{
					std::string scalingRuleAri;
					int minSize;
					std::string scalingRuleName;
					int adjustmentValue;
					std::string scalingGroupId;
					int cooldown;
					std::string scalingRuleId;
					int maxSize;
					std::string adjustmentType;
				};


				DescribeScalingRulesResult();
				explicit DescribeScalingRulesResult(const std::string &payload);
				~DescribeScalingRulesResult();
				std::vector<ScalingRule> getScalingRules()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ScalingRule> scalingRules_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGRULESRESULT_H_