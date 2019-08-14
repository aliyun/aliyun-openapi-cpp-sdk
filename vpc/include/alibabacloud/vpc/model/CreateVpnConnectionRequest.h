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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEVPNCONNECTIONREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEVPNCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT CreateVpnConnectionRequest : public RpcServiceRequest
			{

			public:
				CreateVpnConnectionRequest();
				~CreateVpnConnectionRequest();

				std::string getIkeConfig()const;
				void setIkeConfig(const std::string& ikeConfig);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRemoteSubnet()const;
				void setRemoteSubnet(const std::string& remoteSubnet);
				bool getEffectImmediately()const;
				void setEffectImmediately(bool effectImmediately);
				bool getAutoConfigRoute()const;
				void setAutoConfigRoute(bool autoConfigRoute);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getIpsecConfig()const;
				void setIpsecConfig(const std::string& ipsecConfig);
				std::string getVpnGatewayId()const;
				void setVpnGatewayId(const std::string& vpnGatewayId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getHealthCheckConfig()const;
				void setHealthCheckConfig(const std::string& healthCheckConfig);
				std::string getCustomerGatewayId()const;
				void setCustomerGatewayId(const std::string& customerGatewayId);
				std::string getLocalSubnet()const;
				void setLocalSubnet(const std::string& localSubnet);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string ikeConfig_;
				long resourceOwnerId_;
				std::string remoteSubnet_;
				bool effectImmediately_;
				bool autoConfigRoute_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string ownerAccount_;
				std::string ipsecConfig_;
				std::string vpnGatewayId_;
				long ownerId_;
				std::string healthCheckConfig_;
				std::string customerGatewayId_;
				std::string localSubnet_;
				std::string regionId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEVPNCONNECTIONREQUEST_H_