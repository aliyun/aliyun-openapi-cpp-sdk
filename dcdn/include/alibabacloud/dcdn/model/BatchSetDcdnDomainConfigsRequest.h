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

#ifndef ALIBABACLOUD_DCDN_MODEL_BATCHSETDCDNDOMAINCONFIGSREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_BATCHSETDCDNDOMAINCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT BatchSetDcdnDomainConfigsRequest : public RpcServiceRequest
			{

			public:
				BatchSetDcdnDomainConfigsRequest();
				~BatchSetDcdnDomainConfigsRequest();

				std::string getFunctions()const;
				void setFunctions(const std::string& functions);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomainNames()const;
				void setDomainNames(const std::string& domainNames);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string functions_;
				std::string securityToken_;
				std::string domainNames_;
				std::string ownerAccount_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_BATCHSETDCDNDOMAINCONFIGSREQUEST_H_