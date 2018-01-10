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

#ifndef ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERRESULT_H_

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
			class ALIBABACLOUD_SLB_EXPORT CreateLoadBalancerResult : public ServiceResult
			{
			public:


				CreateLoadBalancerResult();
				explicit CreateLoadBalancerResult(const std::string &payload);
				~CreateLoadBalancerResult();
				std::string getLoadBalancerName()const;
				void setLoadBalancerName(const std::string& loadBalancerName);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getLoadBalancerId()const;
				void setLoadBalancerId(const std::string& loadBalancerId);
				long getOrderId()const;
				void setOrderId(long orderId);

			protected:
				void parse(const std::string &payload);
			private:
				std::string loadBalancerName_;
				std::string resourceGroupId_;
				std::string address_;
				std::string vpcId_;
				std::string networkType_;
				std::string vSwitchId_;
				std::string loadBalancerId_;
				long orderId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_CREATELOADBALANCERRESULT_H_