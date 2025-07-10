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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTIPSECSERVERSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTIPSECSERVERSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListIpsecServersResult : public ServiceResult
			{
			public:
				struct IpsecServer
				{
					struct IkeConfig
					{
						std::string ikeAuthAlg;
						std::string localId;
						std::string ikeEncAlg;
						std::string ikeVersion;
						std::string ikeMode;
						long ikeLifetime;
						std::string remoteId;
						std::string ikePfs;
					};
					struct IpsecConfig
					{
						std::string ipsecPfs;
						std::string ipsecEncAlg;
						std::string ipsecAuthAlg;
						long ipsecLifetime;
					};
					std::string localSubnet;
					std::string clientIpPool;
					std::string iDaaSInstanceId;
					bool multiFactorAuthEnabled;
					int maxConnections;
					std::string resourceGroupId;
					std::string ipsecServerId;
					std::string psk;
					std::string ipsecServerName;
					bool pskEnabled;
					bool effectImmediately;
					std::string internetIp;
					std::string vpnGatewayId;
					IpsecConfig ipsecConfig;
					int onlineClientCount;
					std::string creationTime;
					std::string regionId;
					IkeConfig ikeConfig;
				};


				ListIpsecServersResult();
				explicit ListIpsecServersResult(const std::string &payload);
				~ListIpsecServersResult();
				std::vector<IpsecServer> getIpsecServers()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<IpsecServer> ipsecServers_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTIPSECSERVERSRESULT_H_