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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFGROUPSRESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFGROUPSRESULT_H_

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
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnWafGroupsResult : public ServiceResult
			{
			public:
				struct WafGroupItem
				{
					struct PolicyItem
					{
						std::string type;
						long id;
						std::string name;
					};
					int ruleCount;
					std::vector<WafGroupItem::PolicyItem> policies;
					std::string gmtModified;
					long id;
					std::string subscribe;
					long templateId;
					std::string name;
				};


				DescribeDcdnWafGroupsResult();
				explicit DescribeDcdnWafGroupsResult(const std::string &payload);
				~DescribeDcdnWafGroupsResult();
				std::vector<WafGroupItem> getWafGroups()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<WafGroupItem> wafGroups_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNWAFGROUPSRESULT_H_