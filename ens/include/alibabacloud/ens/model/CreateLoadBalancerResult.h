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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATELOADBALANCERRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_CREATELOADBALANCERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT CreateLoadBalancerResult : public ServiceResult
			{
			public:


				CreateLoadBalancerResult();
				explicit CreateLoadBalancerResult(const std::string &payload);
				~CreateLoadBalancerResult();
				std::string getLoadBalancerName()const;
				std::string getVSwitchId()const;
				std::string getLoadBalancerId()const;
				std::string getNetworkId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string loadBalancerName_;
				std::string vSwitchId_;
				std::string loadBalancerId_;
				std::string networkId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_CREATELOADBALANCERRESULT_H_