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

#ifndef ALIBABACLOUD_CDN_MODEL_SETFILECACHEEXPIREDCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_SETFILECACHEEXPIREDCONFIGREQUEST_H_

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
			class ALIBABACLOUD_CDN_EXPORT SetFileCacheExpiredConfigRequest : public RpcServiceRequest
			{

			public:
				SetFileCacheExpiredConfigRequest();
				~SetFileCacheExpiredConfigRequest();

				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getWeight()const;
				void setWeight(const std::string& weight);
				std::string getCacheContent()const;
				void setCacheContent(const std::string& cacheContent);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTTL()const;
				void setTTL(const std::string& tTL);

            private:
				std::string securityToken_;
				std::string domainName_;
				std::string weight_;
				std::string cacheContent_;
				long ownerId_;
				std::string tTL_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_SETFILECACHEEXPIREDCONFIGREQUEST_H_