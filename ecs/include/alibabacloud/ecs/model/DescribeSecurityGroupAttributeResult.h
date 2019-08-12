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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESECURITYGROUPATTRIBUTERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESECURITYGROUPATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeSecurityGroupAttributeResult : public ServiceResult
			{
			public:
				struct Permission
				{
					std::string sourceGroupId;
					std::string policy;
					std::string description;
					std::string sourcePortRange;
					std::string priority;
					std::string createTime;
					std::string ipv6SourceCidrIp;
					std::string nicType;
					std::string destGroupId;
					std::string direction;
					std::string sourceGroupName;
					std::string portRange;
					std::string destGroupOwnerAccount;
					std::string sourceCidrIp;
					std::string ipProtocol;
					std::string destGroupName;
					std::string destCidrIp;
					std::string sourceGroupOwnerAccount;
					std::string ipv6DestCidrIp;
				};


				DescribeSecurityGroupAttributeResult();
				explicit DescribeSecurityGroupAttributeResult(const std::string &payload);
				~DescribeSecurityGroupAttributeResult();
				std::string getDescription()const;
				std::string getSecurityGroupName()const;
				std::string getVpcId()const;
				std::string getSecurityGroupId()const;
				std::vector<Permission> getPermissions()const;
				std::string getRegionId()const;
				std::string getInnerAccessPolicy()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string securityGroupName_;
				std::string vpcId_;
				std::string securityGroupId_;
				std::vector<Permission> permissions_;
				std::string regionId_;
				std::string innerAccessPolicy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESECURITYGROUPATTRIBUTERESULT_H_