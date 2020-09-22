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

#ifndef ALIBABACLOUD_VS_MODEL_BINDTEMPLATEREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_BINDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT BindTemplateRequest : public RpcServiceRequest
			{

			public:
				BindTemplateRequest();
				~BindTemplateRequest();

				bool getReplace()const;
				void setReplace(bool replace);
				std::string getTemplateType()const;
				void setTemplateType(const std::string& templateType);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				bool getApplyAll()const;
				void setApplyAll(bool applyAll);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				bool replace_;
				std::string templateType_;
				std::string instanceType_;
				std::string showLog_;
				bool applyAll_;
				long ownerId_;
				std::string templateId_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_BINDTEMPLATEREQUEST_H_