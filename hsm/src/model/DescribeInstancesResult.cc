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
	auto allInstances = value["Instances"]["Instance"];
	for (auto value : allInstances)
	{
		Instance instancesObject;
		if(!value["InstanceId"].isNull())
			instancesObject.instanceId = value["InstanceId"].asString();
		if(!value["RegionId"].isNull())
			instancesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			instancesObject.zoneId = value["ZoneId"].asString();
		if(!value["HsmStatus"].isNull())
			instancesObject.hsmStatus = std::stoi(value["HsmStatus"].asString());
		if(!value["HsmOem"].isNull())
			instancesObject.hsmOem = value["HsmOem"].asString();
		if(!value["HsmDeviceType"].isNull())
			instancesObject.hsmDeviceType = value["HsmDeviceType"].asString();
		if(!value["VpcId"].isNull())
			instancesObject.vpcId = value["VpcId"].asString();
		if(!value["VswitchId"].isNull())
			instancesObject.vswitchId = value["VswitchId"].asString();
		if(!value["Ip"].isNull())
			instancesObject.ip = value["Ip"].asString();
		if(!value["Remark"].isNull())
			instancesObject.remark = value["Remark"].asString();
		if(!value["ExpiredTime"].isNull())
			instancesObject.expiredTime = std::stol(value["ExpiredTime"].asString());
		if(!value["CreateTime"].isNull())
			instancesObject.createTime = std::stol(value["CreateTime"].asString());
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

