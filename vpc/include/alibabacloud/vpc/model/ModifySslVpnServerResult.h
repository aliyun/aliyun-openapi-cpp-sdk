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

#ifndef ALIBABACLOUD_VPC_MODEL_MODIFYSSLVPNSERVERRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_MODIFYSSLVPNSERVERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ModifySslVpnServerResult : public ServiceResult
			{
			public:


				ModifySslVpnServerResult();
				explicit ModifySslVpnServerResult(const std::string &payload);
				~ModifySslVpnServerResult();
				bool getCompress()const;
				std::string getLocalSubnet()const;
				int getConnections()const;
				std::string getClientIpPool()const;
				std::string getIDaaSInstanceId()const;
				int getMaxConnections()const;
				std::string getResourceGroupId()const;
				bool getEnableMultiFactorAuth()const;
				long getCreateTime()const;
				int getPort()const;
				std::string getSslVpnServerId()const;
				std::string getIDaaSInstanceVersion()const;
				std::string getName()const;
				std::string getIDaaSApplicationId()const;
				std::string getInternetIp()const;
				std::string getProto()const;
				std::string getVpnGatewayId()const;
				std::string getRegionId()const;
				std::string getCipher()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool compress_;
				std::string localSubnet_;
				int connections_;
				std::string clientIpPool_;
				std::string iDaaSInstanceId_;
				int maxConnections_;
				std::string resourceGroupId_;
				bool enableMultiFactorAuth_;
				long createTime_;
				int port_;
				std::string sslVpnServerId_;
				std::string iDaaSInstanceVersion_;
				std::string name_;
				std::string iDaaSApplicationId_;
				std::string internetIp_;
				std::string proto_;
				std::string vpnGatewayId_;
				std::string regionId_;
				std::string cipher_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_MODIFYSSLVPNSERVERRESULT_H_