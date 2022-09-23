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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATENETWORKACLENTRYREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATENETWORKACLENTRYREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateNetworkAclEntryRequest : public RpcServiceRequest {
public:
	CreateNetworkAclEntryRequest();
	~CreateNetworkAclEntryRequest();
	std::string getNetworkAclEntryName() const;
	void setNetworkAclEntryName(const std::string &networkAclEntryName);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getPortRange() const;
	void setPortRange(const std::string &portRange);
	int getPriority() const;
	void setPriority(int priority);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getNetworkAclId() const;
	void setNetworkAclId(const std::string &networkAclId);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);
	std::string getCidrBlock() const;
	void setCidrBlock(const std::string &cidrBlock);

private:
	std::string networkAclEntryName_;
	std::string protocol_;
	std::string portRange_;
	int priority_;
	std::string description_;
	std::string networkAclId_;
	std::string direction_;
	std::string policy_;
	std::string cidrBlock_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATENETWORKACLENTRYREQUEST_H_
