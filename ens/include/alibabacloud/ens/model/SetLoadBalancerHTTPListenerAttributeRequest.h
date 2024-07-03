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

#ifndef ALIBABACLOUD_ENS_MODEL_SETLOADBALANCERHTTPLISTENERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_SETLOADBALANCERHTTPLISTENERATTRIBUTEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT SetLoadBalancerHTTPListenerAttributeRequest : public RpcServiceRequest {
public:
	SetLoadBalancerHTTPListenerAttributeRequest();
	~SetLoadBalancerHTTPListenerAttributeRequest();
	int getHealthCheckTimeout() const;
	void setHealthCheckTimeout(int healthCheckTimeout);
	std::string getHealthCheckURI() const;
	void setHealthCheckURI(const std::string &healthCheckURI);
	std::string getXForwardedFor() const;
	void setXForwardedFor(const std::string &xForwardedFor);
	std::string getHealthCheck() const;
	void setHealthCheck(const std::string &healthCheck);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getCookie() const;
	void setCookie(const std::string &cookie);
	std::string getHealthCheckMethod() const;
	void setHealthCheckMethod(const std::string &healthCheckMethod);
	std::string getHealthCheckDomain() const;
	void setHealthCheckDomain(const std::string &healthCheckDomain);
	int getRequestTimeout() const;
	void setRequestTimeout(int requestTimeout);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	int getHealthCheckInterval() const;
	void setHealthCheckInterval(int healthCheckInterval);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getUnhealthyThreshold() const;
	void setUnhealthyThreshold(int unhealthyThreshold);
	int getHealthyThreshold() const;
	void setHealthyThreshold(int healthyThreshold);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	int getCookieTimeout() const;
	void setCookieTimeout(int cookieTimeout);
	std::string getStickySessionType() const;
	void setStickySessionType(const std::string &stickySessionType);
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	std::string getStickySession() const;
	void setStickySession(const std::string &stickySession);
	int getIdleTimeout() const;
	void setIdleTimeout(int idleTimeout);
	int getHealthCheckConnectPort() const;
	void setHealthCheckConnectPort(int healthCheckConnectPort);
	std::string getHealthCheckHttpCode() const;
	void setHealthCheckHttpCode(const std::string &healthCheckHttpCode);

private:
	int healthCheckTimeout_;
	std::string healthCheckURI_;
	std::string xForwardedFor_;
	std::string healthCheck_;
	std::string protocol_;
	std::string cookie_;
	std::string healthCheckMethod_;
	std::string healthCheckDomain_;
	int requestTimeout_;
	std::string loadBalancerId_;
	int healthCheckInterval_;
	std::string description_;
	int unhealthyThreshold_;
	int healthyThreshold_;
	std::string scheduler_;
	int cookieTimeout_;
	std::string stickySessionType_;
	int listenerPort_;
	std::string stickySession_;
	int idleTimeout_;
	int healthCheckConnectPort_;
	std::string healthCheckHttpCode_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_SETLOADBALANCERHTTPLISTENERATTRIBUTEREQUEST_H_
