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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCSECURITYGROUPPERMISSIONRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCSECURITYGROUPPERMISSIONRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeRCSecurityGroupPermissionResult : public ServiceResult
			{
			public:
				struct SecurityGroupPermissionsItem
				{
					std::string policy;
					std::string portRange;
					std::string sourcePortRange;
					std::string priority;
					std::string sourceCidrIp;
					std::string createTime;
					std::string ipProtocol;
					std::string securityGroupRuleId;
					std::string destCidrIp;
					std::string direction;
				};


				DescribeRCSecurityGroupPermissionResult();
				explicit DescribeRCSecurityGroupPermissionResult(const std::string &payload);
				~DescribeRCSecurityGroupPermissionResult();
				std::vector<SecurityGroupPermissionsItem> getSecurityGroupPermissions()const;
				std::string getVpcId()const;
				std::string getSecurityGroupId()const;
				std::string getRegionId()const;
				std::string getInnerAccessPolicy()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SecurityGroupPermissionsItem> securityGroupPermissions_;
				std::string vpcId_;
				std::string securityGroupId_;
				std::string regionId_;
				std::string innerAccessPolicy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCSECURITYGROUPPERMISSIONRESULT_H_