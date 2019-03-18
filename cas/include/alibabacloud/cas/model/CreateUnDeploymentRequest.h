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

#ifndef ALIBABACLOUD_CAS_MODEL_CREATEUNDEPLOYMENTREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_CREATEUNDEPLOYMENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT CreateUnDeploymentRequest : public RpcServiceRequest
			{

			public:
				CreateUnDeploymentRequest();
				~CreateUnDeploymentRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				long getDeploymentId()const;
				void setDeploymentId(long deploymentId);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string sourceIp_;
				long deploymentId_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_CREATEUNDEPLOYMENTREQUEST_H_