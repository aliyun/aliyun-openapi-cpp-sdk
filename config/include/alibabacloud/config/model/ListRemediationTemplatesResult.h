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

#ifndef ALIBABACLOUD_CONFIG_MODEL_LISTREMEDIATIONTEMPLATESRESULT_H_
#define ALIBABACLOUD_CONFIG_MODEL_LISTREMEDIATIONTEMPLATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/config/ConfigExport.h>

namespace AlibabaCloud
{
	namespace Config
	{
		namespace Model
		{
			class ALIBABACLOUD_CONFIG_EXPORT ListRemediationTemplatesResult : public ServiceResult
			{
			public:
				struct RemediationTemplate
				{
					std::string templateIdentifier;
					std::string compulsoryParameters;
					std::string templateName;
					std::string templateDefinition;
					std::string templateDescription;
					std::string remediationType;
				};


				ListRemediationTemplatesResult();
				explicit ListRemediationTemplatesResult(const std::string &payload);
				~ListRemediationTemplatesResult();
				std::string getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<RemediationTemplate> getRemediationTemplates()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<RemediationTemplate> remediationTemplates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CONFIG_MODEL_LISTREMEDIATIONTEMPLATESRESULT_H_