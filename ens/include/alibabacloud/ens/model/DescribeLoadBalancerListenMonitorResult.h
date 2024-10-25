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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERLISTENMONITORRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERLISTENMONITORRESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribeLoadBalancerListenMonitorResult : public ServiceResult
			{
			public:
				struct ElbListenMonitorList
				{
					std::string outDropPkts;
					std::string conns;
					std::string inDropPkts;
					std::string bizTime;
					std::string loadBalancerId;
					std::string validRsNum;
					std::string vni;
					std::string inBytes;
					std::string inDropBytes;
					std::string outDropBytes;
					std::string dropConns;
					std::string outPkts;
					std::string proto;
					std::string vPort;
					std::string inPkts;
					std::string ensRegionId;
					std::string vip;
					std::string actConns;
					std::string inActConns;
					std::string outBytes;
					std::string inValidRsNum;
				};


				DescribeLoadBalancerListenMonitorResult();
				explicit DescribeLoadBalancerListenMonitorResult(const std::string &payload);
				~DescribeLoadBalancerListenMonitorResult();
				std::vector<ElbListenMonitorList> getLoadBalancerMonitorListenData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ElbListenMonitorList> loadBalancerMonitorListenData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBELOADBALANCERLISTENMONITORRESULT_H_