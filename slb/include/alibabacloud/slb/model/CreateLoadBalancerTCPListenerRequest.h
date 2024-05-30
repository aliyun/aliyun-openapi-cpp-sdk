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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERTCPLISTENERREQUEST_H_
#define ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERTCPLISTENERREQUEST_H_

#include <alibabacloud/slb/SlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Slb {
namespace Model {
class ALIBABACLOUD_SLB_EXPORT CreateLoadBalancerTCPListenerRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	struct PortRange {
		int startPort;
		int endPort;
	};
	CreateLoadBalancerTCPListenerRequest();
	~CreateLoadBalancerTCPListenerRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getHealthCheckURI() const;
	void setHealthCheckURI(const std::string &healthCheckURI);
	std::string getAclStatus() const;
	void setAclStatus(const std::string &aclStatus);
	bool getFullNatEnabled() const;
	void setFullNatEnabled(bool fullNatEnabled);
	bool getHealthCheckTcpFastCloseEnabled() const;
	void setHealthCheckTcpFastCloseEnabled(bool healthCheckTcpFastCloseEnabled);
	std::string getAclType() const;
	void setAclType(const std::string &aclType);
	int getEstablishedTimeout() const;
	void setEstablishedTimeout(int establishedTimeout);
	std::string getFailoverStrategy() const;
	void setFailoverStrategy(const std::string &failoverStrategy);
	int getPersistenceTimeout() const;
	void setPersistenceTimeout(int persistenceTimeout);
	std::string getVpcIds() const;
	void setVpcIds(const std::string &vpcIds);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getMasterSlaveModeEnabled() const;
	void setMasterSlaveModeEnabled(bool masterSlaveModeEnabled);
	std::string getVServerGroupId() const;
	void setVServerGroupId(const std::string &vServerGroupId);
	std::string getAclId() const;
	void setAclId(const std::string &aclId);
	std::vector<PortRange> getPortRange() const;
	void setPortRange(const std::vector<PortRange> &portRange);
	std::string getHealthCheckMethod() const;
	void setHealthCheckMethod(const std::string &healthCheckMethod);
	std::string getHealthCheckDomain() const;
	void setHealthCheckDomain(const std::string &healthCheckDomain);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getLoadBalancerId() const;
	void setLoadBalancerId(const std::string &loadBalancerId);
	std::string getMasterSlaveServerGroupId() const;
	void setMasterSlaveServerGroupId(const std::string &masterSlaveServerGroupId);
	int getBackendServerPort() const;
	void setBackendServerPort(int backendServerPort);
	int getHealthCheckInterval() const;
	void setHealthCheckInterval(int healthCheckInterval);
	int getFailoverThreshold() const;
	void setFailoverThreshold(int failoverThreshold);
	bool getProxyProtocolV2Enabled() const;
	void setProxyProtocolV2Enabled(bool proxyProtocolV2Enabled);
	std::string getConnectionDrain() const;
	void setConnectionDrain(const std::string &connectionDrain);
	std::string getHealthCheckSwitch() const;
	void setHealthCheckSwitch(const std::string &healthCheckSwitch);
	std::string getAccess_key_id() const;
	void setAccess_key_id(const std::string &access_key_id);
	int getHealthCheckConnectTimeout() const;
	void setHealthCheckConnectTimeout(int healthCheckConnectTimeout);
	std::string getSlaveServerGroupId() const;
	void setSlaveServerGroupId(const std::string &slaveServerGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getUnhealthyThreshold() const;
	void setUnhealthyThreshold(int unhealthyThreshold);
	int getHealthyThreshold() const;
	void setHealthyThreshold(int healthyThreshold);
	std::string getScheduler() const;
	void setScheduler(const std::string &scheduler);
	int getMaxConnection() const;
	void setMaxConnection(int maxConnection);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getMasterServerGroupId() const;
	void setMasterServerGroupId(const std::string &masterServerGroupId);
	int getListenerPort() const;
	void setListenerPort(int listenerPort);
	std::string getHealthCheckType() const;
	void setHealthCheckType(const std::string &healthCheckType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getConnectionDrainTimeout() const;
	void setConnectionDrainTimeout(int connectionDrainTimeout);
	int getHealthCheckConnectPort() const;
	void setHealthCheckConnectPort(int healthCheckConnectPort);
	std::string getHealthCheckHttpCode() const;
	void setHealthCheckHttpCode(const std::string &healthCheckHttpCode);

private:
	long resourceOwnerId_;
	std::string healthCheckURI_;
	std::string aclStatus_;
	bool fullNatEnabled_;
	bool healthCheckTcpFastCloseEnabled_;
	std::string aclType_;
	int establishedTimeout_;
	std::string failoverStrategy_;
	int persistenceTimeout_;
	std::string vpcIds_;
	std::vector<Tag> tag_;
	bool masterSlaveModeEnabled_;
	std::string vServerGroupId_;
	std::string aclId_;
	std::vector<PortRange> portRange_;
	std::string healthCheckMethod_;
	std::string healthCheckDomain_;
	long ownerId_;
	std::string tags_;
	std::string loadBalancerId_;
	std::string masterSlaveServerGroupId_;
	int backendServerPort_;
	int healthCheckInterval_;
	int failoverThreshold_;
	bool proxyProtocolV2Enabled_;
	std::string connectionDrain_;
	std::string healthCheckSwitch_;
	std::string access_key_id_;
	int healthCheckConnectTimeout_;
	std::string slaveServerGroupId_;
	std::string description_;
	int unhealthyThreshold_;
	int healthyThreshold_;
	std::string scheduler_;
	int maxConnection_;
	std::string regionId_;
	std::string masterServerGroupId_;
	int listenerPort_;
	std::string healthCheckType_;
	std::string resourceOwnerAccount_;
	int bandwidth_;
	std::string ownerAccount_;
	int connectionDrainTimeout_;
	int healthCheckConnectPort_;
	std::string healthCheckHttpCode_;
};
} // namespace Model
} // namespace Slb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERTCPLISTENERREQUEST_H_
