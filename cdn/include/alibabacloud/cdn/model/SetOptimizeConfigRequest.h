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

#ifndef ALIBABACLOUD_CDN_MODEL_SETOPTIMIZECONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_SETOPTIMIZECONFIGREQUEST_H_

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
			class ALIBABACLOUD_CDN_EXPORT SetOptimizeConfigRequest : public RpcServiceRequest
			{

			public:
				SetOptimizeConfigRequest();
				~SetOptimizeConfigRequest();

				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getEnable()const;
				void setEnable(const std::string& enable);

            private:
				std::string domainName_;
				long ownerId_;
				std::string securityToken_;
				std::string enable_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_SETOPTIMIZECONFIGREQUEST_H_