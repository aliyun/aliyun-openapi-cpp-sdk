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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_ADDSMSTEMPLATEREQUEST_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_ADDSMSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dysmsapi/DysmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dysmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYSMSAPI_EXPORT AddSmsTemplateRequest : public RpcServiceRequest
			{

			public:
				AddSmsTemplateRequest();
				~AddSmsTemplateRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getTemplateType()const;
				void setTemplateType(int templateType);
				std::string getTemplateName()const;
				void setTemplateName(const std::string& templateName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTemplateContent()const;
				void setTemplateContent(const std::string& templateContent);

            private:
				long resourceOwnerId_;
				std::string remark_;
				std::string accessKeyId_;
				int templateType_;
				std::string templateName_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string templateContent_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_ADDSMSTEMPLATEREQUEST_H_