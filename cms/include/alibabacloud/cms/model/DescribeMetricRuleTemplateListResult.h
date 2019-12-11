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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULETEMPLATELISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULETEMPLATELISTRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeMetricRuleTemplateListResult : public ServiceResult
			{
			public:
				struct _Template
				{
					struct ApplyHistory
					{
						std::string groupName;
						long applyTime;
						long groupId;
					};
					long gmtCreate;
					std::string description;
					long gmtModified;
					long restVersion;
					std::vector<_Template::ApplyHistory> applyHistories;
					long templateId;
					std::string name;
				};


				DescribeMetricRuleTemplateListResult();
				explicit DescribeMetricRuleTemplateListResult(const std::string &payload);
				~DescribeMetricRuleTemplateListResult();
				std::string getMessage()const;
				long getTotal()const;
				std::vector<_Template> getTemplates()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				long total_;
				std::vector<_Template> templates_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULETEMPLATELISTRESULT_H_