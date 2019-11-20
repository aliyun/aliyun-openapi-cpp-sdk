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

#ifndef ALIBABACLOUD_CDN_MODEL_ADDCDNDOMAINREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_ADDCDNDOMAINREQUEST_H_

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
			class ALIBABACLOUD_CDN_EXPORT AddCdnDomainRequest : public RpcServiceRequest
			{

			public:
				AddCdnDomainRequest();
				~AddCdnDomainRequest();

				std::string getSources()const;
				void setSources(const std::string& sources);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				int getSourcePort()const;
				void setSourcePort(int sourcePort);
				std::string getPriorities()const;
				void setPriorities(const std::string& priorities);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getCdnType()const;
				void setCdnType(const std::string& cdnType);
				std::string getScope()const;
				void setScope(const std::string& scope);
				std::string getSourceType()const;
				void setSourceType(const std::string& sourceType);
				std::string getTopLevelDomain()const;
				void setTopLevelDomain(const std::string& topLevelDomain);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getCheckUrl()const;
				void setCheckUrl(const std::string& checkUrl);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string sources_;
				std::string resourceGroupId_;
				int sourcePort_;
				std::string priorities_;
				std::string securityToken_;
				std::string cdnType_;
				std::string scope_;
				std::string sourceType_;
				std::string topLevelDomain_;
				std::string ownerAccount_;
				std::string domainName_;
				long ownerId_;
				std::string checkUrl_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_ADDCDNDOMAINREQUEST_H_