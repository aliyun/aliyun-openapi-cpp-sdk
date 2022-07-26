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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTTEMPLATESRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_LISTTEMPLATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT ListTemplatesResult : public ServiceResult
			{
			public:
				struct _Template
				{
					std::string description;
					std::string createdBy;
					std::string category;
					std::string templateFormat;
					std::string resourceGroupId;
					std::string updatedDate;
					int popularity;
					std::string templateVersion;
					std::string templateType;
					std::string hash;
					std::string updatedBy;
					bool hasTrigger;
					int totalExecutionCount;
					std::string createdDate;
					std::string templateName;
					std::string tags;
					std::string templateId;
					std::string shareType;
				};


				ListTemplatesResult();
				explicit ListTemplatesResult(const std::string &payload);
				~ListTemplatesResult();
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<_Template> getTemplates()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				int maxResults_;
				std::vector<_Template> templates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_LISTTEMPLATESRESULT_H_