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

#ifndef ALIBABACLOUD_CDN_MODEL_SETFORWARDSCHEMECONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_SETFORWARDSCHEMECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT SetForwardSchemeConfigRequest : public RpcServiceRequest
			{

			public:
				SetForwardSchemeConfigRequest();
				~SetForwardSchemeConfigRequest();

				std::string getSchemeOriginPort()const;
				void setSchemeOriginPort(const std::string& schemeOriginPort);
				std::string getEnable()const;
				void setEnable(const std::string& enable);
				std::string getSchemeOrigin()const;
				void setSchemeOrigin(const std::string& schemeOrigin);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				long getConfigId()const;
				void setConfigId(long configId);

            private:
				std::string schemeOriginPort_;
				std::string enable_;
				std::string schemeOrigin_;
				std::string domainName_;
				long ownerId_;
				long configId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_SETFORWARDSCHEMECONFIGREQUEST_H_