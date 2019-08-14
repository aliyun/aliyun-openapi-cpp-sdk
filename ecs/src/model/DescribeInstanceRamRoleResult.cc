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

#include <alibabacloud/ecs/model/DescribeInstanceRamRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceRamRoleResult::DescribeInstanceRamRoleResult() :
	ServiceResult()
{}

DescribeInstanceRamRoleResult::DescribeInstanceRamRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceRamRoleResult::~DescribeInstanceRamRoleResult()
{}

void DescribeInstanceRamRoleResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allInstanceRamRoleSets = value["InstanceRamRoleSets"]["InstanceRamRoleSet"];
	for (auto value : allInstanceRamRoleSets)
	{
		InstanceRamRoleSet instanceRamRoleSetsObject;
		if(!value["InstanceId"].isNull())
			instanceRamRoleSetsObject.instanceId = value["InstanceId"].asString();
		if(!value["RamRoleName"].isNull())
			instanceRamRoleSetsObject.ramRoleName = value["RamRoleName"].asString();
		instanceRamRoleSets_.push_back(instanceRamRoleSetsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeInstanceRamRoleResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeInstanceRamRoleResult::getRegionId()const
{
	return regionId_;
}

std::vector<DescribeInstanceRamRoleResult::InstanceRamRoleSet> DescribeInstanceRamRoleResult::getInstanceRamRoleSets()const
{
	return instanceRamRoleSets_;
}

