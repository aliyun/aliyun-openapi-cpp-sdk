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

#ifndef ALIBABACLOUD_ALB_MODEL_CREATESERVERGROUPREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_CREATESERVERGROUPREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT CreateServerGroupRequest : public RpcServiceRequest {
public:
	struct HealthCheckConfig {
		std::string string;
		std::vector<std::string> healthCheckCodes;
		bool healthCheckEnabled;
		int healthCheckTimeout;
		std::string healthCheckMethod;
		std::string healthCheckHost;
		std::string healthCheckProtocol;
		int unhealthyThreshold;
		int healthyThreshold;
		bool healthCheckTcpFastCloseEnabled;
		std::string healthCheckPath;
		int healthCheckInterval;
		std::string string;
		std::vector<std::string> healthCheckHttpCodes;
		std::string healthCheckHttpVersion;
		int healthCheckConnectPort;
	};
	struct StickySessionConfig {
		bool stickySessionEnabled;
		std::string cookie;
		int cookieTimeout;
		std::string stickySessionType;
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
	bool getUpstreamKeepaliveEnabled() const;
	void setUpstreamKeepaliveEnabled(bool upstreamKeepaliveEnabled);
	std::string getServiceName() const;
	void setServiceName(const std::string &serviceName);
	StickySessionConfig getStickySessionConfig() const;
	void setStickySessionConfig(const StickySessionConfig &stickySessionConfig);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	bool getIpv6Enabled() const;
	void setIpv6Enabled(bool ipv6Enabled);
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
	bool upstreamKeepaliveEnabled_;
	std::string serviceName_;
	StickySessionConfig stickySessionConfig_;
	bool dryRun_;
	bool ipv6Enabled_;
	std::string serverGroupType_;
	std::string vpcId_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_CREATESERVERGROUPREQUEST_H_
