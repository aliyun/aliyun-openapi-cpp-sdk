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

#ifndef ALIBABACLOUD_VPC_MODEL_GETVPCGATEWAYENDPOINTATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_GETVPCGATEWAYENDPOINTATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT GetVpcGatewayEndpointAttributeResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};


				GetVpcGatewayEndpointAttributeResult();
				explicit GetVpcGatewayEndpointAttributeResult(const std::string &payload);
				~GetVpcGatewayEndpointAttributeResult();
				std::string getEndpointStatus()const;
				std::string getEndpointName()const;
				std::string getVpcId()const;
				std::string getResourceGroupId()const;
				std::string getServiceName()const;
				std::vector<std::string> getRouteTables()const;
				std::string getEndpointId()const;
				std::string getCreationTime()const;
				std::string getPolicyDocument()const;
				std::string getEndpointDescription()const;
				std::vector<Tag> getTags()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endpointStatus_;
				std::string endpointName_;
				std::string vpcId_;
				std::string resourceGroupId_;
				std::string serviceName_;
				std::vector<std::string> routeTables_;
				std::string endpointId_;
				std::string creationTime_;
				std::string policyDocument_;
				std::string endpointDescription_;
				std::vector<Tag> tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_GETVPCGATEWAYENDPOINTATTRIBUTERESULT_H_