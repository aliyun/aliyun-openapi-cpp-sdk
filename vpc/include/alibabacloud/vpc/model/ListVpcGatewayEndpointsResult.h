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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTVPCGATEWAYENDPOINTSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTVPCGATEWAYENDPOINTSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListVpcGatewayEndpointsResult : public ServiceResult
			{
			public:
				struct Endpoint
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string endpointStatus;
					std::string endpointName;
					std::string vpcId;
					std::string resourceGroupId;
					std::vector<std::string> associatedRouteTables;
					std::string serviceName;
					std::string endpointId;
					std::string creationTime;
					std::string policyDocument;
					std::string endpointDescription;
					std::vector<Endpoint::Tag> tags;
				};


				ListVpcGatewayEndpointsResult();
				explicit ListVpcGatewayEndpointsResult(const std::string &payload);
				~ListVpcGatewayEndpointsResult();
				std::vector<Endpoint> getEndpoints()const;
				long getTotalCount()const;
				std::string getNextToken()const;
				long getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Endpoint> endpoints_;
				long totalCount_;
				std::string nextToken_;
				long maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTVPCGATEWAYENDPOINTSRESULT_H_