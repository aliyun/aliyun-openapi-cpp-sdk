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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SAVEPAGECONFIGTEMPLATEREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SAVEPAGECONFIGTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT SavePageConfigTemplateRequest : public RpcServiceRequest
			{

			public:
				SavePageConfigTemplateRequest();
				~SavePageConfigTemplateRequest();

				std::string getTempName()const;
				void setTempName(const std::string& tempName);
				std::string getTempPermission()const;
				void setTempPermission(const std::string& tempPermission);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getTempType()const;
				void setTempType(int tempType);
				std::string getTempDesc()const;
				void setTempDesc(const std::string& tempDesc);
				long getId()const;
				void setId(long id);

            private:
				std::string tempName_;
				std::string tempPermission_;
				std::string accessKeyId_;
				int tempType_;
				std::string tempDesc_;
				long id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SAVEPAGECONFIGTEMPLATEREQUEST_H_