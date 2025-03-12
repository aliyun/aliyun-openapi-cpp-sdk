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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyNetworkInterfaceAttributeRequest : public RpcServiceRequest {
public:
	struct NetworkInterfaceTrafficConfig {
		std::string networkInterfaceTrafficMode;
		int queueNumber;
		int queuePairNumber;
		int rxQueueSize;
		int txQueueSize;
	};
	struct EnhancedNetwork {
		bool enableSriov;
		bool enableRss;
	};
	struct ConnectionTrackingConfiguration {
		int tcpEstablishedTimeout;
		int tcpClosedAndTimeWaitTimeout;
		int udpTimeout;
	};
	ModifyNetworkInterfaceAttributeRequest();
	~ModifyNetworkInterfaceAttributeRequest();
	int getQueueNumber() const;
	void setQueueNumber(int queueNumber);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::vector<std::string> getSecurityGroupId() const;
	void setSecurityGroupId(const std::vector<std::string> &securityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	NetworkInterfaceTrafficConfig getNetworkInterfaceTrafficConfig() const;
	void setNetworkInterfaceTrafficConfig(const NetworkInterfaceTrafficConfig &networkInterfaceTrafficConfig);
	EnhancedNetwork getEnhancedNetwork() const;
	void setEnhancedNetwork(const EnhancedNetwork &enhancedNetwork);
	bool getSourceDestCheck() const;
	void setSourceDestCheck(bool sourceDestCheck);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNetworkInterfaceName() const;
	void setNetworkInterfaceName(const std::string &networkInterfaceName);
	int getTxQueueSize() const;
	void setTxQueueSize(int txQueueSize);
	bool getDeleteOnRelease() const;
	void setDeleteOnRelease(bool deleteOnRelease);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getRxQueueSize() const;
	void setRxQueueSize(int rxQueueSize);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	ConnectionTrackingConfiguration getConnectionTrackingConfiguration() const;
	void setConnectionTrackingConfiguration(const ConnectionTrackingConfiguration &connectionTrackingConfiguration);
	std::string getNetworkInterfaceId() const;
	void setNetworkInterfaceId(const std::string &networkInterfaceId);

private:
	int queueNumber_;
	long resourceOwnerId_;
	std::vector<std::string> securityGroupId_;
	std::string description_;
	NetworkInterfaceTrafficConfig networkInterfaceTrafficConfig_;
	EnhancedNetwork enhancedNetwork_;
	bool sourceDestCheck_;
	std::string regionId_;
	std::string networkInterfaceName_;
	int txQueueSize_;
	bool deleteOnRelease_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int rxQueueSize_;
	long ownerId_;
	ConnectionTrackingConfiguration connectionTrackingConfiguration_;
	std::string networkInterfaceId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_
