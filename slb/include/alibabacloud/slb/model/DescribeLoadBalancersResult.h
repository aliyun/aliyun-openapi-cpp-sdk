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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERSRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeLoadBalancersResult : public ServiceResult
			{
			public:
				struct LoadBalancer
				{
					std::string address;
					std::string resourceGroupId;
					std::string vSwitchId;
					std::string createTime;
					std::string loadBalancerId;
					std::string payType;
					std::string slaveZoneId;
					std::string internetChargeType;
					std::string regionIdAlias;
					std::string loadBalancerName;
					std::string vpcId;
					std::string networkType;
					std::string regionId;
					std::string addressType;
					std::string loadBalancerStatus;
					std::string masterZoneId;
					long createTimeStamp;
				};


				DescribeLoadBalancersResult();
				explicit DescribeLoadBalancersResult(const std::string &payload);
				~DescribeLoadBalancersResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<LoadBalancer> getLoadBalancers()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<LoadBalancer> loadBalancers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBELOADBALANCERSRESULT_H_