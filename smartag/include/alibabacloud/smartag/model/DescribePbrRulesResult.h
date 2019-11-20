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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEPBRRULESRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEPBRRULESRESULT_H_

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
			class ALIBABACLOUD_SMARTAG_EXPORT DescribePbrRulesResult : public ServiceResult
			{
			public:
				struct PbrRule
				{
					std::string srcPort;
					std::string description;
					std::string srcCidr;
					std::string pbrRuleId;
					std::string dstPort;
					std::string protocol;
					std::string dstCidr;
					std::string name;
				};


				DescribePbrRulesResult();
				explicit DescribePbrRulesResult(const std::string &payload);
				~DescribePbrRulesResult();
				int getTotalCount()const;
				std::vector<PbrRule> getPbrRules()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<PbrRule> pbrRules_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBEPBRRULESRESULT_H_