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

#include <alibabacloud/hsm/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hsm;
using namespace AlibabaCloud::Hsm::Model;

DescribeInstancesResult::DescribeInstancesResult() :
	ServiceResult()
{}

DescribeInstancesResult::DescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesResult::~DescribeInstancesResult()
{}

void DescribeInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstance["ZoneId"].asString();
		if(!valueInstancesInstance["HsmStatus"].isNull())
			instancesObject.hsmStatus = std::stoi(valueInstancesInstance["HsmStatus"].asString());
		if(!valueInstancesInstance["HsmOem"].isNull())
			instancesObject.hsmOem = valueInstancesInstance["HsmOem"].asString();
		if(!valueInstancesInstance["HsmDeviceType"].isNull())
			instancesObject.hsmDeviceType = valueInstancesInstance["HsmDeviceType"].asString();
		if(!valueInstancesInstance["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesInstance["VpcId"].asString();
		if(!valueInstancesInstance["VswitchId"].isNull())
			instancesObject.vswitchId = valueInstancesInstance["VswitchId"].asString();
		if(!valueInstancesInstance["Ip"].isNull())
			instancesObject.ip = valueInstancesInstance["Ip"].asString();
		if(!valueInstancesInstance["Remark"].isNull())
			instancesObject.remark = valueInstancesInstance["Remark"].asString();
		if(!valueInstancesInstance["ExpiredTime"].isNull())
			instancesObject.expiredTime = std::stol(valueInstancesInstance["ExpiredTime"].asString());
		if(!valueInstancesInstance["CreateTime"].isNull())
			instancesObject.createTime = std::stol(valueInstancesInstance["CreateTime"].asString());
		auto allWhiteList = value["WhiteList"]["WhiteListItem"];
		for (auto value : allWhiteList)
			instancesObject.whiteList.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeInstancesResult::Instance> DescribeInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

