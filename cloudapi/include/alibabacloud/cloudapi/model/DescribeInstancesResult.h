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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEINSTANCESRESULT_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT DescribeInstancesResult : public ServiceResult
			{
			public:
				struct InstanceAttribute
				{
					struct SpecAttribute
					{
						std::string value;
						std::string localName;
					};
					struct NetworkInterfaceAttribute
					{
						std::string zoneId;
						std::string securityGroupId;
						std::string cidrBlock;
						std::string networkInterfaceId;
						std::string vswitchId;
					};
					std::string classicEgressAddress;
					std::string instanceSpec;
					std::string internetEgressAddress;
					std::string createdTime;
					std::string instanceClusterId;
					std::vector<InstanceAttribute::SpecAttribute> instanceSpecAttributes;
					std::string zoneLocalName;
					std::string instanceChargeType;
					int instanceRpsLimit;
					std::string iPV6AclName;
					bool vpcSlbIntranetEnable;
					std::string intranetSegments;
					std::string maintainEndTime;
					std::string userVpcId;
					std::string expiredTime;
					std::string connectVpcId;
					std::string instanceType;
					std::string dedicatedInstanceType;
					std::string connectCidrBlocks;
					std::string maintainStartTime;
					std::string userVswitchId;
					std::string iPV6AclId;
					std::string status;
					std::string vpcEgressAddress;
					std::string zoneId;
					std::string instanceId;
					std::string aclId;
					std::string instanceCidrBlock;
					long vpcOwnerId;
					std::string aclName;
					std::string iPV6AclStatus;
					std::string instanceName;
					bool egressIpv6Enable;
					std::vector<InstanceAttribute::NetworkInterfaceAttribute> networkInterfaceAttributes;
					std::string aclStatus;
					bool vpcIntranetEnable;
					std::string httpsPolicies;
					std::string iPV6AclType;
					bool supportIpv6;
					std::string aclType;
					std::string regionId;
					std::string vipTypeList;
				};


				DescribeInstancesResult();
				explicit DescribeInstancesResult(const std::string &payload);
				~DescribeInstancesResult();
				std::vector<InstanceAttribute> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<InstanceAttribute> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEINSTANCESRESULT_H_