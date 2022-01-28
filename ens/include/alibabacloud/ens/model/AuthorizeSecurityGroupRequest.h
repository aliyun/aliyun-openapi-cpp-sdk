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

#ifndef ALIBABACLOUD_ENS_MODEL_AUTHORIZESECURITYGROUPREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_AUTHORIZESECURITYGROUPREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT AuthorizeSecurityGroupRequest : public RpcServiceRequest {
public:
	AuthorizeSecurityGroupRequest();
	~AuthorizeSecurityGroupRequest();
	std::string getSourcePortRange() const;
	void setSourcePortRange(const std::string &sourcePortRange);
	std::string getPortRange() const;
	void setPortRange(const std::string &portRange);
	std::string getIpProtocol() const;
	void setIpProtocol(const std::string &ipProtocol);
	std::string getSourceCidrIp() const;
	void setSourceCidrIp(const std::string &sourceCidrIp);
	int getPriority() const;
	void setPriority(int priority);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);

private:
	std::string sourcePortRange_;
	std::string portRange_;
	std::string ipProtocol_;
	std::string sourceCidrIp_;
	int priority_;
	std::string securityGroupId_;
	std::string policy_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_AUTHORIZESECURITYGROUPREQUEST_H_
