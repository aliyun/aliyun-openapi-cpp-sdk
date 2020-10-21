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

#ifndef ALIBABACLOUD_SGW_MODEL_DEPLOYGATEWAYREQUEST_H_
#define ALIBABACLOUD_SGW_MODEL_DEPLOYGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sgw/SgwExport.h>

namespace AlibabaCloud
{
	namespace Sgw
	{
		namespace Model
		{
			class ALIBABACLOUD_SGW_EXPORT DeployGatewayRequest : public RpcServiceRequest
			{
			public:
				struct DataDisk
				{
					int size;
					std::string category;
					std::string cacheConfig;
				};

			public:
				DeployGatewayRequest();
				~DeployGatewayRequest();

				std::string getGatewayClass()const;
				void setGatewayClass(const std::string& gatewayClass);
				std::string getGatewayVersion()const;
				void setGatewayVersion(const std::string& gatewayVersion);
				std::vector<DataDisk> getDataDisk()const;
				void setDataDisk(const std::vector<DataDisk>& dataDisk);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getGatewayId()const;
				void setGatewayId(const std::string& gatewayId);

            private:
				std::string gatewayClass_;
				std::string gatewayVersion_;
				std::vector<DataDisk> dataDisk_;
				std::string accessKeyId_;
				std::string vSwitchId_;
				std::string securityToken_;
				std::string gatewayId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SGW_MODEL_DEPLOYGATEWAYREQUEST_H_