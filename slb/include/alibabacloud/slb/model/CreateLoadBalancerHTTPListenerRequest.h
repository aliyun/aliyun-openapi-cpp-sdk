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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERHTTPLISTENERREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERHTTPLISTENERREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT CreateLoadBalancerHTTPListenerRequest : public RpcServiceRequest {
public:
	CreateLoadBalancerHTTPListenerRequest();
	~CreateLoadBalancerHTTPListenerRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getHealthCheckTimeout() const;
	void setHealthCheckTimeout(int healthCheckTimeout);
	std::string getXForwardedFor() const;
	void setXForwardedFor(const std::string &xForwardedFor);
	std::string getHostId() const;
	void setHostId(const std::string &hostId);
	int getUnhealthyThreshold() const;
	void setUnhealthyThreshold(int unhealthyThreshold);
	int getHealthyThreshold() const;
	void setHealthyThreshold(int healthyThreshold);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	std::string getHealthCheck() const;
	void setHealthCheck(const std::string &healthCheck);
	int getCookieTimeout() const;
	void setCookieTimeout(int cookieTimeout);
	std::string getStickySessionType() const;
	void setStickySessionType(const std::string &stickySessionType);
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	std::string getCookie() const;
	void setCookie(const std::string &cookie);
	std::string getStickySession() const;
	void setStickySession(const std::string &stickySession);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getURI() const;
	void setURI(const std::string &uRI);
	std::string getListenerStatus() const;
	void setListenerStatus(const std::string &listenerStatus);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	int getBackendServerPort() const;
	void setBackendServerPort(int backendServerPort);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	int getInterval() const;
	void setInterval(int interval);

private:
	long resourceOwnerId_;
	int healthCheckTimeout_;
	std::string xForwardedFor_;
	std::string hostId_;
	int unhealthyThreshold_;
	int healthyThreshold_;
	std::string accessKeyId_;
	std::string scheduler_;
	std::string healthCheck_;
	int cookieTimeout_;
	std::string stickySessionType_;
	int listenerPort_;
	std::string cookie_;
	std::string stickySession_;
	int bandwidth_;
	std::string ownerAccount_;
	std::string ownerId_;
	std::string uRI_;
	std::string listenerStatus_;
	std::string loadBalancerId_;
	int backendServerPort_;
	std::string domain_;
	int interval_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERHTTPLISTENERREQUEST_H_
