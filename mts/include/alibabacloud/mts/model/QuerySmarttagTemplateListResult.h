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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYSMARTTAGTEMPLATELISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYSMARTTAGTEMPLATELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT QuerySmarttagTemplateListResult : public ServiceResult
			{
			public:
				struct _Template
				{
					bool isDefault;
					std::string faceCategoryIds;
					std::string labelVersion;
					std::string objectGroupIds;
					std::string scene;
					std::string industry;
					std::string keywordConfig;
					std::string labelType;
					std::string analyseTypes;
					std::string templateName;
					std::string knowledgeConfig;
					std::string faceCustomParamsConfig;
					std::string templateId;
					std::string landmarkGroupIds;
				};


				QuerySmarttagTemplateListResult();
				explicit QuerySmarttagTemplateListResult(const std::string &payload);
				~QuerySmarttagTemplateListResult();
				std::vector<_Template> getTemplates()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<_Template> templates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYSMARTTAGTEMPLATELISTRESULT_H_