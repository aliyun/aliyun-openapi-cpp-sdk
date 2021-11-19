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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEDYNAMICTAGRULELISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEDYNAMICTAGRULELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeDynamicTagRuleListResult : public ServiceResult
			{
			public:
				struct TagGroup
				{
					struct MatchExpressItem
					{
						std::string tagValue;
						std::string tagValueMatchFunction;
					};
					std::string status;
					std::vector<std::string> contactGroupList;
					std::string matchExpressFilterRelation;
					std::string dynamicTagRuleId;
					std::vector<std::string> templateIdList;
					std::string tagKey;
					std::vector<TagGroup::MatchExpressItem> matchExpress;
					std::string regionId;
				};


				DescribeDynamicTagRuleListResult();
				explicit DescribeDynamicTagRuleListResult(const std::string &payload);
				~DescribeDynamicTagRuleListResult();
				std::string getMessage()const;
				std::string getPageSize()const;
				std::string getPageNumber()const;
				int getTotal()const;
				std::vector<TagGroup> getTagGroupList()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string pageSize_;
				std::string pageNumber_;
				int total_;
				std::vector<TagGroup> tagGroupList_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEDYNAMICTAGRULELISTRESULT_H_