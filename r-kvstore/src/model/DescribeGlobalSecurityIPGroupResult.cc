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

#include <alibabacloud/r-kvstore/model/DescribeGlobalSecurityIPGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeGlobalSecurityIPGroupResult::DescribeGlobalSecurityIPGroupResult() :
	ServiceResult()
{}

DescribeGlobalSecurityIPGroupResult::DescribeGlobalSecurityIPGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGlobalSecurityIPGroupResult::~DescribeGlobalSecurityIPGroupResult()
{}

void DescribeGlobalSecurityIPGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGlobalSecurityIPGroupNode = value["GlobalSecurityIPGroup"]["GlobalSecurityIPGroupItem"];
	for (auto valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem : allGlobalSecurityIPGroupNode)
	{
		GlobalSecurityIPGroupItem globalSecurityIPGroupObject;
		if(!valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["GlobalSecurityGroupId"].isNull())
			globalSecurityIPGroupObject.globalSecurityGroupId = valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["GlobalSecurityGroupId"].asString();
		if(!valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["GlobalIgName"].isNull())
			globalSecurityIPGroupObject.globalIgName = valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["GlobalIgName"].asString();
		if(!valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["SecurityIPType"].isNull())
			globalSecurityIPGroupObject.securityIPType = valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["SecurityIPType"].asString();
		if(!valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["GIpList"].isNull())
			globalSecurityIPGroupObject.gIpList = valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["GIpList"].asString();
		if(!valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["WhitelistNetType"].isNull())
			globalSecurityIPGroupObject.whitelistNetType = valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["WhitelistNetType"].asString();
		if(!valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["RegionId"].isNull())
			globalSecurityIPGroupObject.regionId = valueGlobalSecurityIPGroupGlobalSecurityIPGroupItem["RegionId"].asString();
		auto allDBInstances = value["DBInstances"]["DBInstances"];
		for (auto value : allDBInstances)
			globalSecurityIPGroupObject.dBInstances.push_back(value.asString());
		globalSecurityIPGroup_.push_back(globalSecurityIPGroupObject);
	}

}

std::vector<DescribeGlobalSecurityIPGroupResult::GlobalSecurityIPGroupItem> DescribeGlobalSecurityIPGroupResult::getGlobalSecurityIPGroup()const
{
	return globalSecurityIPGroup_;
}

