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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTSRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeDataObjectsResult : public ServiceResult
			{
			public:
				struct Rule
				{
					struct ModelTagsItem
					{
						long id;
						std::string name;
					};
					struct RuleListItem
					{
						int ruleCount;
						long ruleId;
						std::string riskLevelName;
						long riskLevelId;
						std::string ruleName;
					};
					std::string path;
					std::vector<Rule::RuleListItem> ruleList;
					std::string productCode;
					std::string instanceId;
					std::vector<std::string> categories;
					std::string objectFileCategory;
					long productId;
					long lastScanTime;
					std::string name;
					std::string objectType;
					std::string regionName;
					std::vector<Rule::ModelTagsItem> modelTags;
					std::string instanceDescription;
					std::string id;
					int sensitiveCount;
					long templateId;
				};


				DescribeDataObjectsResult();
				explicit DescribeDataObjectsResult(const std::string &payload);
				~DescribeDataObjectsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Rule> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Rule> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTSRESULT_H_