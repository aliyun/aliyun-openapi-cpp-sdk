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

#ifndef ALIBABACLOUD_CDN_MODEL_BATCHDELETECDNDOMAINCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_BATCHDELETECDNDOMAINCONFIGREQUEST_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT BatchDeleteCdnDomainConfigRequest : public RpcServiceRequest {
public:
	BatchDeleteCdnDomainConfigRequest();
	~BatchDeleteCdnDomainConfigRequest();
	std::string getFunctionNames() const;
	void setFunctionNames(const std::string &functionNames);
	std::string getDomainNames() const;
	void setDomainNames(const std::string &domainNames);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);

private:
	std::string functionNames_;
	std::string domainNames_;
	std::string ownerAccount_;
	long ownerId_;
	std::string securityToken_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_BATCHDELETECDNDOMAINCONFIGREQUEST_H_
