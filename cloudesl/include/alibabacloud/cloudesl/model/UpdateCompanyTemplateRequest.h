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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_UPDATECOMPANYTEMPLATEREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_UPDATECOMPANYTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT UpdateCompanyTemplateRequest : public RpcServiceRequest
			{

			public:
				UpdateCompanyTemplateRequest();
				~UpdateCompanyTemplateRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getScene()const;
				void setScene(const std::string& scene);
				std::string getTemplateVersion()const;
				void setTemplateVersion(const std::string& templateVersion);
				std::string getTemplateName()const;
				void setTemplateName(const std::string& templateName);
				std::string getTemplateSceneId()const;
				void setTemplateSceneId(const std::string& templateSceneId);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);

            private:
				std::string extraParams_;
				std::string scene_;
				std::string templateVersion_;
				std::string templateName_;
				std::string templateSceneId_;
				std::string templateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_UPDATECOMPANYTEMPLATEREQUEST_H_