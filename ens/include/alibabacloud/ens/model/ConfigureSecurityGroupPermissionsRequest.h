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

#ifndef ALIBABACLOUD_ENS_MODEL_CONFIGURESECURITYGROUPPERMISSIONSREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CONFIGURESECURITYGROUPPERMISSIONSREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT ConfigureSecurityGroupPermissionsRequest : public RpcServiceRequest {
public:
	struct RevokePermissions {
		std::string sourcePortRange;
		std::string portRange;
		std::string ipProtocol;
		std::string sourceCidrIp;
		int priority;
		std::string destCidrIp;
		std::string direction;
		std::string policy;
	};
	struct AuthorizePermissions {
		std::string sourcePortRange;
		std::string portRange;
		std::string ipProtocol;
		std::string sourceCidrIp;
		std::string description;
		int priority;
		std::string destCidrIp;
		std::string direction;
		std::string policy;
	};
	ConfigureSecurityGroupPermissionsRequest();
	~ConfigureSecurityGroupPermissionsRequest();
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::vector<RevokePermissions> getRevokePermissions() const;
	void setRevokePermissions(const std::vector<RevokePermissions> &revokePermissions);
	std::vector<AuthorizePermissions> getAuthorizePermissions() const;
	void setAuthorizePermissions(const std::vector<AuthorizePermissions> &authorizePermissions);

private:
	std::string securityGroupId_;
	std::vector<RevokePermissions> revokePermissions_;
	std::vector<AuthorizePermissions> authorizePermissions_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CONFIGURESECURITYGROUPPERMISSIONSREQUEST_H_
