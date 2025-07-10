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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEVIRTUALPHYSICALCONNECTIONREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEVIRTUALPHYSICALCONNECTIONREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT CreateVirtualPhysicalConnectionRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateVirtualPhysicalConnectionRequest();
	~CreateVirtualPhysicalConnectionRequest();
	long getVpconnAliUid() const;
	void setVpconnAliUid(long vpconnAliUid);
	std::string getOrderMode() const;
	void setOrderMode(const std::string &orderMode);
	long getVlanId() const;
	void setVlanId(long vlanId);
	std::string getVpconnUidResourceGroupId() const;
	void setVpconnUidResourceGroupId(const std::string &vpconnUidResourceGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSpec() const;
	void setSpec(const std::string &spec);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getToken() const;
	void setToken(const std::string &token);
	std::string getPhysicalConnectionId() const;
	void setPhysicalConnectionId(const std::string &physicalConnectionId);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long vpconnAliUid_;
	std::string orderMode_;
	long vlanId_;
	std::string vpconnUidResourceGroupId_;
	std::string description_;
	std::string spec_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::string token_;
	std::string physicalConnectionId_;
	std::string name_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEVIRTUALPHYSICALCONNECTIONREQUEST_H_
