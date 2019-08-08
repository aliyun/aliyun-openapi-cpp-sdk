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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeRecommendInstanceTypeRequest : public RpcServiceRequest
			{

			public:
				DescribeRecommendInstanceTypeRequest();
				~DescribeRecommendInstanceTypeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getChannel()const;
				void setChannel(const std::string& channel);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string get_Operator()const;
				void set_Operator(const std::string& _operator);
				std::string getToken()const;
				void setToken(const std::string& token);
				std::string getScene()const;
				void setScene(const std::string& scene);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getProxyId()const;
				void setProxyId(const std::string& proxyId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string channel_;
				std::string networkType_;
				long ownerId_;
				std::string _operator_;
				std::string token_;
				std::string scene_;
				std::string sourceRegionId_;
				std::string regionId_;
				std::string instanceType_;
				std::string proxyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPEREQUEST_H_