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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeSslVpnClientsResult : public ServiceResult
			{
			public:
				struct ClientInfo
				{
					std::string status;
					long sendBytes;
					std::string privateIp;
					std::string ip;
					std::string port;
					long connectedTime;
					std::string commonName;
					long receiveBytes;
				};


				DescribeSslVpnClientsResult();
				explicit DescribeSslVpnClientsResult(const std::string &payload);
				~DescribeSslVpnClientsResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::string getVpnGatewayId()const;
				int getPageNumber()const;
				std::vector<ClientInfo> getClientInfoList()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::string vpnGatewayId_;
				int pageNumber_;
				std::vector<ClientInfo> clientInfoList_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBESSLVPNCLIENTSRESULT_H_