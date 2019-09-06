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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEVPNGATEWAYREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEVPNGATEWAYREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreateVpnGatewayRequest : public RpcServiceRequest
			{

			public:
				CreateVpnGatewayRequest();
				~CreateVpnGatewayRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getEnableIpsec()const;
				void setEnableIpsec(bool enableIpsec);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				int getPeriod()const;
				void setPeriod(int period);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				bool getEnableSsl()const;
				void setEnableSsl(bool enableSsl);
				int getSslConnections()const;
				void setSslConnections(int sslConnections);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				bool enableIpsec_;
				std::string regionId_;
				std::string instanceChargeType_;
				int period_;
				bool autoPay_;
				std::string resourceOwnerAccount_;
				int bandwidth_;
				std::string ownerAccount_;
				long ownerId_;
				std::string vSwitchId_;
				bool enableSsl_;
				int sslConnections_;
				std::string vpcId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEVPNGATEWAYREQUEST_H_