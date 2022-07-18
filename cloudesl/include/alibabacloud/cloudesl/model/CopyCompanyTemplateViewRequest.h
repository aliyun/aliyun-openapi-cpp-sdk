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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_COPYCOMPANYTEMPLATEVIEWREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_COPYCOMPANYTEMPLATEVIEWREQUEST_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT CopyCompanyTemplateViewRequest : public RpcServiceRequest
			{

			public:
				CopyCompanyTemplateViewRequest();
				~CopyCompanyTemplateViewRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getTargetName()const;
				void setTargetName(const std::string& targetName);
				std::string getModelId()const;
				void setModelId(const std::string& modelId);
				std::string getTargetVersion()const;
				void setTargetVersion(const std::string& targetVersion);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				long getTargetGroupId()const;
				void setTargetGroupId(long targetGroupId);

            private:
				std::string extraParams_;
				std::string targetName_;
				std::string modelId_;
				std::string targetVersion_;
				std::string templateId_;
				long targetGroupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_COPYCOMPANYTEMPLATEVIEWREQUEST_H_