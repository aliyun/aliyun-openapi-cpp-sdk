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

#include <alibabacloud/antiddos-public/model/DescribeInstanceIpAddressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

DescribeInstanceIpAddressResult::DescribeInstanceIpAddressResult() :
	ServiceResult()
{}

DescribeInstanceIpAddressResult::DescribeInstanceIpAddressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceIpAddressResult::~DescribeInstanceIpAddressResult()
{}

void DescribeInstanceIpAddressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceListNode = value["InstanceList"]["Instance"];
	for (auto valueInstanceListInstance : allInstanceListNode)
	{
		Instance instanceListObject;
		if(!valueInstanceListInstance["InstanceId"].isNull())
			instanceListObject.instanceId = valueInstanceListInstance["InstanceId"].asString();
		if(!valueInstanceListInstance["InstanceType"].isNull())
			instanceListObject.instanceType = valueInstanceListInstance["InstanceType"].asString();
		if(!valueInstanceListInstance["InstanceName"].isNull())
			instanceListObject.instanceName = valueInstanceListInstance["InstanceName"].asString();
		if(!valueInstanceListInstance["InstanceStatus"].isNull())
			instanceListObject.instanceStatus = valueInstanceListInstance["InstanceStatus"].asString();
		auto allIpAddressConfigNode = valueInstanceListInstance["IpAddressConfig"]["IpAddressConfigItem"];
		for (auto valueInstanceListInstanceIpAddressConfigIpAddressConfigItem : allIpAddressConfigNode)
		{
			Instance::IpAddressConfigItem ipAddressConfigObject;
			if(!valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["InstanceIp"].isNull())
				ipAddressConfigObject.instanceIp = valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["InstanceIp"].asString();
			if(!valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["IsBgppack"].isNull())
				ipAddressConfigObject.isBgppack = valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["IsBgppack"].asString() == "true";
			if(!valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["IpVersion"].isNull())
				ipAddressConfigObject.ipVersion = valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["IpVersion"].asString();
			if(!valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["IpStatus"].isNull())
				ipAddressConfigObject.ipStatus = valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["IpStatus"].asString();
			if(!valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["RegionId"].isNull())
				ipAddressConfigObject.regionId = valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["RegionId"].asString();
			if(!valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["ElasticThreshold"].isNull())
				ipAddressConfigObject.elasticThreshold = std::stoi(valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["ElasticThreshold"].asString());
			if(!valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["BlackholeThreshold"].isNull())
				ipAddressConfigObject.blackholeThreshold = std::stoi(valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["BlackholeThreshold"].asString());
			if(!valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["DefenseBpsThreshold"].isNull())
				ipAddressConfigObject.defenseBpsThreshold = std::stoi(valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["DefenseBpsThreshold"].asString());
			if(!valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["DefensePpsThreshold"].isNull())
				ipAddressConfigObject.defensePpsThreshold = std::stoi(valueInstanceListInstanceIpAddressConfigIpAddressConfigItem["DefensePpsThreshold"].asString());
			instanceListObject.ipAddressConfig.push_back(ipAddressConfigObject);
		}
		instanceList_.push_back(instanceListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeInstanceIpAddressResult::getTotal()const
{
	return total_;
}

std::vector<DescribeInstanceIpAddressResult::Instance> DescribeInstanceIpAddressResult::getInstanceList()const
{
	return instanceList_;
}

