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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATENETWORKINTERFACEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATENETWORKINTERFACEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateNetworkInterfaceRequest : public RpcServiceRequest {
public:
	struct NetworkInterfaceTrafficConfig {
		int queueNumber;
		std::string networkInterfaceTrafficMode;
		int queuePairNumber;
		int txQueueSize;
		int rxQueueSize;
	};
	struct EnhancedNetwork {
		bool enableSriov;
		bool enableRss;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	struct ConnectionTrackingConfiguration {
		int tcpEstablishedTimeout;
		int tcpClosedAndTimeWaitTimeout;
		int udpTimeout;
	};
	CreateNetworkInterfaceRequest();
	~CreateNetworkInterfaceRequest();
	int getQueueNumber() const;
	void setQueueNumber(int queueNumber);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getIpv4Prefix() const;
	void setIpv4Prefix(const std::vector<std::string> &ipv4Prefix);
	NetworkInterfaceTrafficConfig getNetworkInterfaceTrafficConfig() const;
	void setNetworkInterfaceTrafficConfig(const NetworkInterfaceTrafficConfig &networkInterfaceTrafficConfig);
	int getSecondaryPrivateIpAddressCount() const;
	void setSecondaryPrivateIpAddressCount(int secondaryPrivateIpAddressCount);
	std::string getBusinessType() const;
	void setBusinessType(const std::string &businessType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	EnhancedNetwork getEnhancedNetwork() const;
	void setEnhancedNetwork(const EnhancedNetwork &enhancedNetwork);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getNetworkInterfaceName() const;
	void setNetworkInterfaceName(const std::string &networkInterfaceName);
	bool getVisible() const;
	void setVisible(bool visible);
	int getIpv6AddressCount() const;
	void setIpv6AddressCount(int ipv6AddressCount);
	int getRxQueueSize() const;
	void setRxQueueSize(int rxQueueSize);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::vector<std::string> getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::vector<std::string> &privateIpAddress);
	std::vector<std::string> getIpv6Address() const;
	void setIpv6Address(const std::vector<std::string> &ipv6Address);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<std::string> getIpv6Prefix() const;
	void setIpv6Prefix(const std::vector<std::string> &ipv6Prefix);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getIpv6PrefixCount() const;
	void setIpv6PrefixCount(int ipv6PrefixCount);
	bool getSourceDestCheck() const;
	void setSourceDestCheck(bool sourceDestCheck);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	int getTxQueueSize() const;
	void setTxQueueSize(int txQueueSize);
	bool getDeleteOnRelease() const;
	void setDeleteOnRelease(bool deleteOnRelease);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getQueuePairNumber() const;
	void setQueuePairNumber(int queuePairNumber);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	std::string getNetworkInterfaceTrafficMode() const;
	void setNetworkInterfaceTrafficMode(const std::string &networkInterfaceTrafficMode);
	int getIpv4PrefixCount() const;
	void setIpv4PrefixCount(int ipv4PrefixCount);
	ConnectionTrackingConfiguration getConnectionTrackingConfiguration() const;
	void setConnectionTrackingConfiguration(const ConnectionTrackingConfiguration &connectionTrackingConfiguration);
	std::string getPrimaryIpAddress() const;
	void setPrimaryIpAddress(const std::string &primaryIpAddress);

private:
	int queueNumber_;
	long resourceOwnerId_;
	std::vector<std::string> ipv4Prefix_;
	NetworkInterfaceTrafficConfig networkInterfaceTrafficConfig_;
	int secondaryPrivateIpAddressCount_;
	std::string businessType_;
	std::string resourceGroupId_;
	EnhancedNetwork enhancedNetwork_;
	std::vector<Tag> tag_;
	std::string networkInterfaceName_;
	bool visible_;
	int ipv6AddressCount_;
	int rxQueueSize_;
	long ownerId_;
	std::string vSwitchId_;
	std::vector<std::string> privateIpAddress_;
	std::vector<std::string> ipv6Address_;
	std::string clientToken_;
	std::vector<std::string> ipv6Prefix_;
	std::string securityGroupId_;
	std::string description_;
	int ipv6PrefixCount_;
	bool sourceDestCheck_;
	std::string regionId_;
	std::string instanceType_;
	int txQueueSize_;
	bool deleteOnRelease_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int queuePairNumber_;
	std::vector<std::string> securityGroupIds_;
	std::string networkInterfaceTrafficMode_;
	int ipv4PrefixCount_;
	ConnectionTrackingConfiguration connectionTrackingConfiguration_;
	std::string primaryIpAddress_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATENETWORKINTERFACEREQUEST_H_
