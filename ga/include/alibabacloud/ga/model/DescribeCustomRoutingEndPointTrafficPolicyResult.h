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

#ifndef ALIBABACLOUD_GA_MODEL_DESCRIBECUSTOMROUTINGENDPOINTTRAFFICPOLICYRESULT_H_
#define ALIBABACLOUD_GA_MODEL_DESCRIBECUSTOMROUTINGENDPOINTTRAFFICPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT DescribeCustomRoutingEndPointTrafficPolicyResult : public ServiceResult
			{
			public:
				struct PortRangesItem
				{
					int fromPort;
					int toPort;
				};


				DescribeCustomRoutingEndPointTrafficPolicyResult();
				explicit DescribeCustomRoutingEndPointTrafficPolicyResult(const std::string &payload);
				~DescribeCustomRoutingEndPointTrafficPolicyResult();
				std::string getEndpointGroupId()const;
				std::string getEndpoint()const;
				std::string getAddress()const;
				std::string getState()const;
				std::vector<PortRangesItem> getPortRanges()const;
				std::string getEndpointId()const;
				std::string getAcceleratorId()const;
				std::string getPolicyId()const;
				std::string getListenerId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endpointGroupId_;
				std::string endpoint_;
				std::string address_;
				std::string state_;
				std::vector<PortRangesItem> portRanges_;
				std::string endpointId_;
				std::string acceleratorId_;
				std::string policyId_;
				std::string listenerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_DESCRIBECUSTOMROUTINGENDPOINTTRAFFICPOLICYRESULT_H_