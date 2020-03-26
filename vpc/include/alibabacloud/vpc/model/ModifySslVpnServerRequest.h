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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYSSLVPNSERVERREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYSSLVPNSERVERREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT ModifySslVpnServerRequest : public RpcServiceRequest
			{

			public:
				ModifySslVpnServerRequest();
				~ModifySslVpnServerRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getSslVpnServerId()const;
				void setSslVpnServerId(const std::string& sslVpnServerId);
				std::string getLocalSubnet()const;
				void setLocalSubnet(const std::string& localSubnet);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getEnableMultiFactorAuth()const;
				void setEnableMultiFactorAuth(bool enableMultiFactorAuth);
				std::string getIDaaSInstanceId()const;
				void setIDaaSInstanceId(const std::string& iDaaSInstanceId);
				std::string getCipher()const;
				void setCipher(const std::string& cipher);
				std::string getClientIpPool()const;
				void setClientIpPool(const std::string& clientIpPool);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				bool getCompress()const;
				void setCompress(bool compress);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPort()const;
				void setPort(int port);
				std::string getProto()const;
				void setProto(const std::string& proto);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string sslVpnServerId_;
				std::string localSubnet_;
				std::string regionId_;
				bool enableMultiFactorAuth_;
				std::string iDaaSInstanceId_;
				std::string cipher_;
				std::string clientIpPool_;
				std::string resourceOwnerAccount_;
				bool compress_;
				std::string ownerAccount_;
				long ownerId_;
				int port_;
				std::string proto_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYSSLVPNSERVERREQUEST_H_