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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWCATEGORYRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWCATEGORYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListFlowCategoryResult : public ServiceResult
			{
			public:
				struct Category
				{
					std::string parentId;
					std::string objectType;
					long gmtCreate;
					std::string type;
					std::string objectId;
					long gmtModified;
					std::string projectId;
					std::string id;
					std::string categoryType;
					std::string name;
				};


				ListFlowCategoryResult();
				explicit ListFlowCategoryResult(const std::string &payload);
				~ListFlowCategoryResult();
				int getPageSize()const;
				std::vector<Category> getCategories()const;
				int getPageNumber()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				std::vector<Category> categories_;
				int pageNumber_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWCATEGORYRESULT_H_