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

#ifndef ALIBABACLOUD_CBN_MODEL_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESULT_H_
#define ALIBABACLOUD_CBN_MODEL_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT ListCenInterRegionTrafficQosPoliciesResult : public ServiceResult
			{
			public:
				struct TrafficQosPolicy
				{
					struct TrafficQosQueue
					{
						int remainBandwidthPercent;
						std::string qosQueueId;
						std::vector<std::string> dscps;
						std::string qosQueueName;
						std::string qosQueueDescription;
					};
					std::string transitRouterAttachmentId;
					std::vector<TrafficQosPolicy::TrafficQosQueue> trafficQosQueues;
					std::string trafficQosPolicyStatus;
					std::string trafficQosPolicyName;
					std::string trafficQosPolicyId;
					std::string trafficQosPolicyDescription;
					std::string transitRouterId;
				};


				ListCenInterRegionTrafficQosPoliciesResult();
				explicit ListCenInterRegionTrafficQosPoliciesResult(const std::string &payload);
				~ListCenInterRegionTrafficQosPoliciesResult();
				std::vector<TrafficQosPolicy> getTrafficQosPolicies()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TrafficQosPolicy> trafficQosPolicies_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_LISTCENINTERREGIONTRAFFICQOSPOLICIESRESULT_H_