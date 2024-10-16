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

#ifndef ALIBABACLOUD_GWLB_MODEL_CREATESERVERGROUPREQUEST_H_
#define ALIBABACLOUD_GWLB_MODEL_CREATESERVERGROUPREQUEST_H_

#include <alibabacloud/gwlb/GwlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gwlb {
namespace Model {
class ALIBABACLOUD_GWLB_EXPORT CreateServerGroupRequest : public RpcServiceRequest {
public:
	struct HealthCheckConfig {
		int healthCheckConnectPort;
		int healthCheckConnectTimeout;
		std::string healthCheckDomain;
		bool healthCheckEnabled;
		std::string string;
		std::vector<std::string> healthCheckHttpCode;
		int healthCheckInterval;
		std::string healthCheckPath;
		std::string healthCheckProtocol;
		int healthyThreshold;
		int unhealthyThreshold;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	struct ConnectionDrainConfig {
		bool connectionDrainEnabled;
		int connectionDrainTimeout;
	};
	CreateServerGroupRequest();
	~CreateServerGroupRequest();
	std::string getServerGroupName() const;
	void setServerGroupName(const std::string &serverGroupName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	HealthCheckConfig getHealthCheckConfig() const;
	void setHealthCheckConfig(const HealthCheckConfig &healthCheckConfig);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	ConnectionDrainConfig getConnectionDrainConfig() const;
	void setConnectionDrainConfig(const ConnectionDrainConfig &connectionDrainConfig);
	std::string getServerGroupType() const;
	void setServerGroupType(const std::string &serverGroupType);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	std::string serverGroupName_;
	std::string clientToken_;
	HealthCheckConfig healthCheckConfig_;
	std::string scheduler_;
	std::string resourceGroupId_;
	std::string protocol_;
	std::vector<Tag> tag_;
	bool dryRun_;
	ConnectionDrainConfig connectionDrainConfig_;
	std::string serverGroupType_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Gwlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GWLB_MODEL_CREATESERVERGROUPREQUEST_H_
