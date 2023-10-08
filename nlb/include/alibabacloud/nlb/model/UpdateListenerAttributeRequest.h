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

#ifndef ALIBABACLOUD_NLB_MODEL_UPDATELISTENERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_NLB_MODEL_UPDATELISTENERATTRIBUTEREQUEST_H_

#include <alibabacloud/nlb/NlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlb {
namespace Model {
class ALIBABACLOUD_NLB_EXPORT UpdateListenerAttributeRequest : public RpcServiceRequest {
public:
	UpdateListenerAttributeRequest();
	~UpdateListenerAttributeRequest();
	std::vector<std::string> getCaCertificateIds() const;
	void setCaCertificateIds(const std::vector<std::string> &caCertificateIds);
	int getStartPort() const;
	void setStartPort(int startPort);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getSecSensorEnabled() const;
	void setSecSensorEnabled(bool secSensorEnabled);
	std::string getAlpnPolicy() const;
	void setAlpnPolicy(const std::string &alpnPolicy);
	int getMss() const;
	void setMss(int mss);
	std::string getServerGroupId() const;
	void setServerGroupId(const std::string &serverGroupId);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	std::vector<std::string> getCertificateIds() const;
	void setCertificateIds(const std::vector<std::string> &certificateIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getAlpnEnabled() const;
	void setAlpnEnabled(bool alpnEnabled);
	int getEndPort() const;
	void setEndPort(int endPort);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	bool getProxyProtocolEnabled() const;
	void setProxyProtocolEnabled(bool proxyProtocolEnabled);
	int getCps() const;
	void setCps(int cps);
	std::string getSecurityPolicyId() const;
	void setSecurityPolicyId(const std::string &securityPolicyId);
	int getIdleTimeout() const;
	void setIdleTimeout(int idleTimeout);
	std::string getListenerDescription() const;
	void setListenerDescription(const std::string &listenerDescription);
	bool getCaEnabled() const;
	void setCaEnabled(bool caEnabled);

private:
	std::vector<std::string> caCertificateIds_;
	int startPort_;
	std::string clientToken_;
	bool secSensorEnabled_;
	std::string alpnPolicy_;
	int mss_;
	std::string serverGroupId_;
	std::string listenerId_;
	std::vector<std::string> certificateIds_;
	std::string regionId_;
	bool alpnEnabled_;
	int endPort_;
	bool dryRun_;
	bool proxyProtocolEnabled_;
	int cps_;
	std::string securityPolicyId_;
	int idleTimeout_;
	std::string listenerDescription_;
	bool caEnabled_;
};
} // namespace Model
} // namespace Nlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLB_MODEL_UPDATELISTENERATTRIBUTEREQUEST_H_
