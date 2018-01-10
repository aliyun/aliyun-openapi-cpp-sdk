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

#include <alibabacloud/rds/model/DescribeDBInstanceECSSGRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceECSSGRelationResult::DescribeDBInstanceECSSGRelationResult() :
	ServiceResult()
{}

DescribeDBInstanceECSSGRelationResult::DescribeDBInstanceECSSGRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceECSSGRelationResult::~DescribeDBInstanceECSSGRelationResult()
{}

void DescribeDBInstanceECSSGRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["RdsEcsSecurityGroupRel"];
	for (auto value : allItems)
	{
		RdsEcsSecurityGroupRel rdsEcsSecurityGroupRelObject;
		rdsEcsSecurityGroupRelObject.regionId = value["RegionId"].asString();
		rdsEcsSecurityGroupRelObject.securityGroupId = value["SecurityGroupId"].asString();
		rdsEcsSecurityGroupRelObject.netType = value["NetType"].asString();
		items_.push_back(rdsEcsSecurityGroupRelObject);
	}
	dBInstanceName_ = value["DBInstanceName"].asString();

}

std::string DescribeDBInstanceECSSGRelationResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

void DescribeDBInstanceECSSGRelationResult::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
}

