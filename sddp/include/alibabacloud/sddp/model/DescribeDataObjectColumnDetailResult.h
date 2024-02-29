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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTCOLUMNDETAILRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTCOLUMNDETAILRESULT_H_

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
			class ALIBABACLOUD_SDDP_EXPORT DescribeDataObjectColumnDetailResult : public ServiceResult
			{
			public:
				struct Rule
				{
					struct ModelTagsItem
					{
						long id;
						std::string name;
					};
					std::string columnName;
					std::vector<std::string> categories;
					long ruleId;
					std::vector<Rule::ModelTagsItem> modelTags;
					std::string dataType;
					std::string columnComment;
					bool primaryKey;
					std::string riskLevelName;
					std::string id;
					long riskLevelId;
					std::string ruleName;
				};


				DescribeDataObjectColumnDetailResult();
				explicit DescribeDataObjectColumnDetailResult(const std::string &payload);
				~DescribeDataObjectColumnDetailResult();
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
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATAOBJECTCOLUMNDETAILRESULT_H_