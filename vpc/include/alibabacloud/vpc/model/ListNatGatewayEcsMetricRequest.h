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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTNATGATEWAYECSMETRICREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTNATGATEWAYECSMETRICREQUEST_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListNatGatewayEcsMetricRequest : public RpcServiceRequest
			{

			public:
				ListNatGatewayEcsMetricRequest();
				~ListNatGatewayEcsMetricRequest();

				std::string getOrderKey()const;
				void setOrderKey(const std::string& orderKey);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getNatGatewayId()const;
				void setNatGatewayId(const std::string& natGatewayId);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getMaxResults()const;
				void setMaxResults(const std::string& maxResults);
				long getTimePoint()const;
				void setTimePoint(long timePoint);
				std::string getOrderType()const;
				void setOrderType(const std::string& orderType);

            private:
				std::string orderKey_;
				std::string regionId_;
				std::string nextToken_;
				std::string natGatewayId_;
				bool dryRun_;
				std::string privateIpAddress_;
				std::string maxResults_;
				long timePoint_;
				std::string orderType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTNATGATEWAYECSMETRICREQUEST_H_