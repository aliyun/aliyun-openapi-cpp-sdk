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

#ifndef ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERTCPLISTENERATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERTCPLISTENERATTRIBUTEREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT SetLoadBalancerTCPListenerAttributeRequest : public RpcServiceRequest {
public:
	SetLoadBalancerTCPListenerAttributeRequest();
	~SetLoadBalancerTCPListenerAttributeRequest();
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
	int getPersistenceTimeout() const;
	void setPersistenceTimeout(int persistenceTimeout);
	int getConnectTimeout() const;
	void setConnectTimeout(int connectTimeout);
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	int getConnectPort() const;
	void setConnectPort(int connectPort);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	int getInterval() const;
	void setInterval(int interval);

private:
	std::string hostId_;
	int unhealthyThreshold_;
	int healthyThreshold_;
	std::string accessKeyId_;
	std::string scheduler_;
	std::string healthCheck_;
	int persistenceTimeout_;
	int connectTimeout_;
	int listenerPort_;
	int connectPort_;
	std::string ownerAccount_;
	std::string ownerId_;
	std::string loadBalancerId_;
	int interval_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_SETLOADBALANCERTCPLISTENERATTRIBUTEREQUEST_H_
