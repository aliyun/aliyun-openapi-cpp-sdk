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

#ifndef ALIBABACLOUD_NLB_MODEL_UPDATESERVERGROUPATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_NLB_MODEL_UPDATESERVERGROUPATTRIBUTEREQUEST_H_

#include <alibabacloud/nlb/NlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlb {
namespace Model {
class ALIBABACLOUD_NLB_EXPORT UpdateServerGroupAttributeRequest : public RpcServiceRequest {
public:
	struct HealthCheckConfig {
		bool healthCheckEnabled;
		std::string healthCheckType;
		int healthCheckConnectPort;
		int healthyThreshold;
		int unhealthyThreshold;
		int healthCheckConnectTimeout;
		int healthCheckInterval;
		std::string healthCheckDomain;
		std::string healthCheckUrl;
		std::string string;
		std::vector<std::string> healthCheckHttpCode;
		std::string httpCheckMethod;
	};
	UpdateServerGroupAttributeRequest();
	~UpdateServerGroupAttributeRequest();
	std::string getQuicVersion() const;
	void setQuicVersion(const std::string &quicVersion);
	std::string getServerGroupName() const;
	void setServerGroupName(const std::string &serverGroupName);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getPreserveClientIpEnabled() const;
	void setPreserveClientIpEnabled(bool preserveClientIpEnabled);
	HealthCheckConfig getHealthCheckConfig() const;
	void setHealthCheckConfig(const HealthCheckConfig &healthCheckConfig);
	std::string getServerGroupId() const;
	void setServerGroupId(const std::string &serverGroupId);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getPersistenceEnabled() const;
	void setPersistenceEnabled(bool persistenceEnabled);
	int getPersistenceTimeout() const;
	void setPersistenceTimeout(int persistenceTimeout);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	bool getConnectionDrainEnabled() const;
	void setConnectionDrainEnabled(bool connectionDrainEnabled);
	int getConnectionDrainTimeout() const;
	void setConnectionDrainTimeout(int connectionDrainTimeout);

private:
	std::string quicVersion_;
	std::string serverGroupName_;
	std::string clientToken_;
	bool preserveClientIpEnabled_;
	HealthCheckConfig healthCheckConfig_;
	std::string serverGroupId_;
	std::string scheduler_;
	std::string regionId_;
	bool persistenceEnabled_;
	int persistenceTimeout_;
	bool dryRun_;
	bool connectionDrainEnabled_;
	int connectionDrainTimeout_;
};
} // namespace Model
} // namespace Nlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLB_MODEL_UPDATESERVERGROUPATTRIBUTEREQUEST_H_
