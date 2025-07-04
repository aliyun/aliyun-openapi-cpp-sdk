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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCESRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeRCInstancesResult : public ServiceResult
			{
			public:
				struct RCInstancesItem
				{
					struct VpcAttributes
					{
						std::vector<std::string> privateIpAddress;
						std::string vpcId;
						std::string vSwitchId;
						std::string natIpAddress;
					};
					struct TagResource
					{
						std::string resourceId;
						std::string tagKey;
						std::string resourceType;
						std::string tagValue;
					};
					struct Tag
					{
						std::string resourceId;
						std::string tagKey;
						std::string resourceType;
						std::string tagValue;
					};
					std::string description;
					std::string instanceChargeType;
					std::string instanceTypeFamily;
					int memory;
					int cpu;
					std::string gmtCreated;
					std::string expiredTime;
					std::string imageId;
					std::string clusterName;
					std::string instanceType;
					std::vector<RCInstancesItem::Tag> tags;
					std::string hostName;
					std::string spotStrategy;
					std::string hostIp;
					std::string status;
					std::string zoneId;
					std::string instanceId;
					std::string publicIp;
					std::string securityGroupId;
					VpcAttributes vpcAttributes;
					std::string dbType;
					std::string deploymentSetId;
					std::string vpcId;
					std::string createMode;
					std::vector<RCInstancesItem::TagResource> tagResources;
					std::string nodeType;
					std::string regionId;
				};


				DescribeRCInstancesResult();
				explicit DescribeRCInstancesResult(const std::string &payload);
				~DescribeRCInstancesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<RCInstancesItem> getRCInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<RCInstancesItem> rCInstances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCINSTANCESRESULT_H_