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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBECATEGORYTEMPLATELISTRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBECATEGORYTEMPLATELISTRESULT_H_

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
			class ALIBABACLOUD_SDDP_EXPORT DescribeCategoryTemplateListResult : public ServiceResult
			{
			public:
				struct _Template
				{
					int currentRiskLevel;
					int status;
					int type;
					long gmtCreate;
					int supportEdit;
					std::string description;
					long gmtModified;
					int maxCategoryLevel;
					long id;
					int maxRiskLevel;
					std::string name;
				};


				DescribeCategoryTemplateListResult();
				explicit DescribeCategoryTemplateListResult(const std::string &payload);
				~DescribeCategoryTemplateListResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<_Template> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<_Template> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBECATEGORYTEMPLATELISTRESULT_H_