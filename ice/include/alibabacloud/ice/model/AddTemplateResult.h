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

#ifndef ALIBABACLOUD_ICE_MODEL_ADDTEMPLATERESULT_H_
#define ALIBABACLOUD_ICE_MODEL_ADDTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT AddTemplateResult : public ServiceResult
			{
			public:
				struct _Template
				{
					std::string status;
					std::string type;
					std::string previewMedia;
					std::string modifiedSource;
					std::string config;
					std::string createSource;
					std::string coverUrl;
					std::string templateId;
					std::string name;
				};


				AddTemplateResult();
				explicit AddTemplateResult(const std::string &payload);
				~AddTemplateResult();
				_Template get_Template()const;

			protected:
				void parse(const std::string &payload);
			private:
				_Template _template_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_ADDTEMPLATERESULT_H_