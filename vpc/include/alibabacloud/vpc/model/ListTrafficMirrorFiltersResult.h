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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTTRAFFICMIRRORFILTERSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTTRAFFICMIRRORFILTERSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT ListTrafficMirrorFiltersResult : public ServiceResult
			{
			public:
				struct TrafficMirrorFilter
				{
					struct TrafficMirrorRule
					{
						std::string destinationPortRange;
						std::string trafficMirrorFilterRuleId;
						std::string action;
						std::string sourcePortRange;
						std::string ipVersion;
						int priority;
						std::string trafficMirrorFilterRuleStatus;
						std::string sourceCidrBlock;
						std::string destinationCidrBlock;
						std::string trafficDirection;
						std::string protocol;
						std::string trafficMirrorFilterId;
					};
					struct TrafficMirrorRule
					{
						std::string destinationPortRange;
						std::string trafficMirrorFilterRuleId;
						std::string action;
						std::string sourcePortRange;
						std::string ipVersion;
						int priority;
						std::string trafficMirrorFilterRuleStatus;
						std::string sourceCidrBlock;
						std::string destinationCidrBlock;
						std::string trafficDirection;
						std::string protocol;
						std::string trafficMirrorFilterId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string trafficMirrorFilterDescription;
					std::string resourceGroupId;
					std::vector<TrafficMirrorFilter::TrafficMirrorRule> egressRules;
					std::string creationTime;
					std::string trafficMirrorFilterStatus;
					std::string trafficMirrorFilterId;
					std::string trafficMirrorFilterName;
					std::vector<TrafficMirrorFilter::Tag> tags;
					std::vector<TrafficMirrorFilter::TrafficMirrorRule> ingressRules;
				};


				ListTrafficMirrorFiltersResult();
				explicit ListTrafficMirrorFiltersResult(const std::string &payload);
				~ListTrafficMirrorFiltersResult();
				std::vector<TrafficMirrorFilter> getTrafficMirrorFilters()const;
				std::string getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				int getCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TrafficMirrorFilter> trafficMirrorFilters_;
				std::string totalCount_;
				std::string nextToken_;
				int maxResults_;
				int count_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTTRAFFICMIRRORFILTERSRESULT_H_