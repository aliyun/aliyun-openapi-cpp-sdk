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

#ifndef ALIBABACLOUD_GWLB_MODEL_UPDATESERVERGROUPATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_GWLB_MODEL_UPDATESERVERGROUPATTRIBUTEREQUEST_H_

#include <alibabacloud/gwlb/GwlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gwlb {
namespace Model {
class ALIBABACLOUD_GWLB_EXPORT UpdateServerGroupAttributeRequest : public RpcServiceRequest {
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
	struct ConnectionDrainConfig {
		bool connectionDrainEnabled;
		int connectionDrainTimeout;
	};
	UpdateServerGroupAttributeRequest();
	~UpdateServerGroupAttributeRequest();
	std::string getServerGroupName() const;
	void setServerGroupName(const std::string &serverGroupName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	HealthCheckConfig getHealthCheckConfig() const;
	void setHealthCheckConfig(const HealthCheckConfig &healthCheckConfig);
	std::string getServerGroupId() const;
	void setServerGroupId(const std::string &serverGroupId);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	ConnectionDrainConfig getConnectionDrainConfig() const;
	void setConnectionDrainConfig(const ConnectionDrainConfig &connectionDrainConfig);

private:
	std::string serverGroupName_;
	std::string clientToken_;
	HealthCheckConfig healthCheckConfig_;
	std::string serverGroupId_;
	std::string scheduler_;
	bool dryRun_;
	ConnectionDrainConfig connectionDrainConfig_;
};
} // namespace Model
} // namespace Gwlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GWLB_MODEL_UPDATESERVERGROUPATTRIBUTEREQUEST_H_
