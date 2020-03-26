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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNSERVERSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNSERVERSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeSslVpnServersResult : public ServiceResult
			{
			public:
				struct SslVpnServer
				{
					std::string localSubnet;
					bool compress;
					int connections;
					std::string clientIpPool;
					std::string iDaaSInstanceId;
					int maxConnections;
					bool enableMultiFactorAuth;
					std::string sslVpnServerId;
					long createTime;
					int port;
					std::string name;
					std::string proto;
					std::string internetIp;
					std::string vpnGatewayId;
					std::string regionId;
					std::string cipher;
				};


				DescribeSslVpnServersResult();
				explicit DescribeSslVpnServersResult(const std::string &payload);
				~DescribeSslVpnServersResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<SslVpnServer> getSslVpnServers()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<SslVpnServer> sslVpnServers_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNSERVERSRESULT_H_