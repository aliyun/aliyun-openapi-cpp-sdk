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

#ifndef ALIBABACLOUD_GWLB_MODEL_LISTLOADBALANCERSRESULT_H_
#define ALIBABACLOUD_GWLB_MODEL_LISTLOADBALANCERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gwlb/GwlbExport.h>

namespace AlibabaCloud
{
	namespace Gwlb
	{
		namespace Model
		{
			class ALIBABACLOUD_GWLB_EXPORT ListLoadBalancersResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TagModel
					{
						std::string value;
						std::string key;
					};
					struct ZoneEniModel
					{
						struct EniModels
						{
							std::string eniId;
							std::string privateIpv4Address;
						};
						std::string zoneId;
						std::string vSwitchId;
						std::vector<ZoneEniModel::EniModels> loadBalancerAddresses;
					};
					std::string loadBalancerName;
					std::string addressIpVersion;
					std::string resourceGroupId;
					std::string vpcId;
					std::string createTime;
					std::string loadBalancerId;
					std::vector<Data::ZoneEniModel> zoneMappings;
					std::string loadBalancerBusinessStatus;
					std::string loadBalancerStatus;
					std::vector<Data::TagModel> tags;
					bool crossZoneEnabled;
				};


				ListLoadBalancersResult();
				explicit ListLoadBalancersResult(const std::string &payload);
				~ListLoadBalancersResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<Data> getLoadBalancers()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<Data> loadBalancers_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GWLB_MODEL_LISTLOADBALANCERSRESULT_H_