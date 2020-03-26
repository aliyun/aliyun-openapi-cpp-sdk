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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEGRANTSAGVBRRULESRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEGRANTSAGVBRRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeGrantSagVbrRulesResult : public ServiceResult
			{
			public:
				struct GrantRule
				{
					long vbrUid;
					long smartAGUid;
					std::string vbrInstanceId;
					std::string instanceId;
					long createTime;
					bool bound;
					std::string vbrRegionId;
					std::string smartAGId;
				};


				DescribeGrantSagVbrRulesResult();
				explicit DescribeGrantSagVbrRulesResult(const std::string &payload);
				~DescribeGrantSagVbrRulesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<GrantRule> getGrantRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<GrantRule> grantRules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEGRANTSAGVBRRULESRESULT_H_