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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_ADDCOMPANYTEMPLATEREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_ADDCOMPANYTEMPLATEREQUEST_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT AddCompanyTemplateRequest : public RpcServiceRequest
			{

			public:
				AddCompanyTemplateRequest();
				~AddCompanyTemplateRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getEslSize()const;
				void setEslSize(const std::string& eslSize);
				bool getIfPromotion()const;
				void setIfPromotion(bool ifPromotion);
				std::string getDeviceType()const;
				void setDeviceType(const std::string& deviceType);
				std::string getScene()const;
				void setScene(const std::string& scene);
				std::string getTemplateVersion()const;
				void setTemplateVersion(const std::string& templateVersion);
				std::string getTemplateType()const;
				void setTemplateType(const std::string& templateType);
				std::string getVendor()const;
				void setVendor(const std::string& vendor);
				bool getIfDefault()const;
				void setIfDefault(bool ifDefault);
				std::string getTemplateName()const;
				void setTemplateName(const std::string& templateName);
				std::string getTemplateSceneId()const;
				void setTemplateSceneId(const std::string& templateSceneId);
				bool getIfSourceCode()const;
				void setIfSourceCode(bool ifSourceCode);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				bool getIfMember()const;
				void setIfMember(bool ifMember);
				int getLayout()const;
				void setLayout(int layout);
				bool getIfOutOfInventory()const;
				void setIfOutOfInventory(bool ifOutOfInventory);

            private:
				std::string extraParams_;
				std::string eslSize_;
				bool ifPromotion_;
				std::string deviceType_;
				std::string scene_;
				std::string templateVersion_;
				std::string templateType_;
				std::string vendor_;
				bool ifDefault_;
				std::string templateName_;
				std::string templateSceneId_;
				bool ifSourceCode_;
				std::string groupId_;
				bool ifMember_;
				int layout_;
				bool ifOutOfInventory_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_ADDCOMPANYTEMPLATEREQUEST_H_