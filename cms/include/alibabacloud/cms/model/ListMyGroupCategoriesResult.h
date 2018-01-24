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

#ifndef ALIBABACLOUD_CMS_MODEL_LISTMYGROUPCATEGORIESRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_LISTMYGROUPCATEGORIESRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT ListMyGroupCategoriesResult : public ServiceResult
			{
			public:
				struct Category
				{
					struct CategoryItem
					{
						std::string category;
						int count;
					};
					std::vector<CategoryItem> categoryItems;
					long groupId;
				};


				ListMyGroupCategoriesResult();
				explicit ListMyGroupCategoriesResult(const std::string &payload);
				~ListMyGroupCategoriesResult();
				std::vector<Category> getCategory()const;
				int getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Category> category_;
				int errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_LISTMYGROUPCATEGORIESRESULT_H_