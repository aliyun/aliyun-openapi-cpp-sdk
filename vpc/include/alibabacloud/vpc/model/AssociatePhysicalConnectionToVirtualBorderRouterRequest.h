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

#ifndef ALIBABACLOUD_VPC_MODEL_ASSOCIATEPHYSICALCONNECTIONTOVIRTUALBORDERROUTERREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_ASSOCIATEPHYSICALCONNECTIONTOVIRTUALBORDERROUTERREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT AssociatePhysicalConnectionToVirtualBorderRouterRequest : public RpcServiceRequest {
public:
	AssociatePhysicalConnectionToVirtualBorderRouterRequest();
	~AssociatePhysicalConnectionToVirtualBorderRouterRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCircuitCode() const;
	void setCircuitCode(const std::string &circuitCode);
	std::string getVlanId() const;
	void setVlanId(const std::string &vlanId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getEnableIpv6() const;
	void setEnableIpv6(const std::string &enableIpv6);
	std::string getVbrId() const;
	void setVbrId(const std::string &vbrId);
	std::string getPeerGatewayIp() const;
	void setPeerGatewayIp(const std::string &peerGatewayIp);
	std::string getPeerIpv6GatewayIp() const;
	void setPeerIpv6GatewayIp(const std::string &peerIpv6GatewayIp);
	std::string getPeeringSubnetMask() const;
	void setPeeringSubnetMask(const std::string &peeringSubnetMask);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLocalGatewayIp() const;
	void setLocalGatewayIp(const std::string &localGatewayIp);
	std::string getPeeringIpv6SubnetMask() const;
	void setPeeringIpv6SubnetMask(const std::string &peeringIpv6SubnetMask);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPhysicalConnectionId() const;
	void setPhysicalConnectionId(const std::string &physicalConnectionId);
	std::string getLocalIpv6GatewayIp() const;
	void setLocalIpv6GatewayIp(const std::string &localIpv6GatewayIp);

private:
	long resourceOwnerId_;
	std::string circuitCode_;
	std::string vlanId_;
	std::string clientToken_;
	std::string enableIpv6_;
	std::string vbrId_;
	std::string peerGatewayIp_;
	std::string peerIpv6GatewayIp_;
	std::string peeringSubnetMask_;
	std::string regionId_;
	std::string localGatewayIp_;
	std::string peeringIpv6SubnetMask_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string physicalConnectionId_;
	std::string localIpv6GatewayIp_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_ASSOCIATEPHYSICALCONNECTIONTOVIRTUALBORDERROUTERREQUEST_H_
