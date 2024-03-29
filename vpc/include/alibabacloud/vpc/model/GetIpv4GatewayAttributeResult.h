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

#ifndef ALIBABACLOUD_VPC_MODEL_GETIPV4GATEWAYATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_GETIPV4GATEWAYATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT GetIpv4GatewayAttributeResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};


				GetIpv4GatewayAttributeResult();
				explicit GetIpv4GatewayAttributeResult(const std::string &payload);
				~GetIpv4GatewayAttributeResult();
				std::string getStatus()const;
				std::string getIpv4GatewayRouteTableId()const;
				std::string getIpv4GatewayName()const;
				std::string getVpcId()const;
				std::string getIpv4GatewayId()const;
				std::string getResourceGroupId()const;
				std::string getCreateTime()const;
				bool getEnabled()const;
				std::vector<Tag> getTags()const;
				std::string getIpv4GatewayDescription()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string ipv4GatewayRouteTableId_;
				std::string ipv4GatewayName_;
				std::string vpcId_;
				std::string ipv4GatewayId_;
				std::string resourceGroupId_;
				std::string createTime_;
				bool enabled_;
				std::vector<Tag> tags_;
				std::string ipv4GatewayDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_GETIPV4GATEWAYATTRIBUTERESULT_H_