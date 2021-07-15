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

#ifndef ALIBABACLOUD_ALB_MODEL_UPDATESERVERGROUPATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_UPDATESERVERGROUPATTRIBUTEREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT UpdateServerGroupAttributeRequest : public RpcServiceRequest {
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
	UpdateServerGroupAttributeRequest();
	~UpdateServerGroupAttributeRequest();
	std::string getServerGroupName() const;
	void setServerGroupName(const std::string &serverGroupName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	HealthCheckConfig getHealthCheckConfig() const;
	void setHealthCheckConfig(const HealthCheckConfig &healthCheckConfig);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	std::string getServerGroupId() const;
	void setServerGroupId(const std::string &serverGroupId);
	StickySessionConfig getStickySessionConfig() const;
	void setStickySessionConfig(const StickySessionConfig &stickySessionConfig);
	bool getDryRun() const;
	void setDryRun(bool dryRun);

private:
	std::string serverGroupName_;
	std::string clientToken_;
	HealthCheckConfig healthCheckConfig_;
	std::string scheduler_;
	std::string serverGroupId_;
	StickySessionConfig stickySessionConfig_;
	bool dryRun_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_UPDATESERVERGROUPATTRIBUTEREQUEST_H_
