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

#include <alibabacloud/polardb/model/DescribeGlobalSecurityIPGroupRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeGlobalSecurityIPGroupRelationResult::DescribeGlobalSecurityIPGroupRelationResult() :
	ServiceResult()
{}

DescribeGlobalSecurityIPGroupRelationResult::DescribeGlobalSecurityIPGroupRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGlobalSecurityIPGroupRelationResult::~DescribeGlobalSecurityIPGroupRelationResult()
{}

void DescribeGlobalSecurityIPGroupRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGlobalSecurityIPGroupRelNode = value["GlobalSecurityIPGroupRel"]["GlobalSecurityIPGroupRelItem"];
	for (auto valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem : allGlobalSecurityIPGroupRelNode)
	{
		GlobalSecurityIPGroupRelItem globalSecurityIPGroupRelObject;
		if(!valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["GlobalSecurityGroupId"].isNull())
			globalSecurityIPGroupRelObject.globalSecurityGroupId = valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["GlobalSecurityGroupId"].asString();
		if(!valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["GIpList"].isNull())
			globalSecurityIPGroupRelObject.gIpList = valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["GIpList"].asString();
		if(!valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["RegionId"].isNull())
			globalSecurityIPGroupRelObject.regionId = valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["RegionId"].asString();
		if(!valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["WhitelistNetType"].isNull())
			globalSecurityIPGroupRelObject.whitelistNetType = valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["WhitelistNetType"].asString();
		if(!valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["GlobalIgName"].isNull())
			globalSecurityIPGroupRelObject.globalIgName = valueGlobalSecurityIPGroupRelGlobalSecurityIPGroupRelItem["GlobalIgName"].asString();
		globalSecurityIPGroupRel_.push_back(globalSecurityIPGroupRelObject);
	}
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeGlobalSecurityIPGroupRelationResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeGlobalSecurityIPGroupRelationResult::GlobalSecurityIPGroupRelItem> DescribeGlobalSecurityIPGroupRelationResult::getGlobalSecurityIPGroupRel()const
{
	return globalSecurityIPGroupRel_;
}

