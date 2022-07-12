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

#include <alibabacloud/antiddos-public/model/DescribeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

DescribeInstanceResult::DescribeInstanceResult() :
	ServiceResult()
{}

DescribeInstanceResult::DescribeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceResult::~DescribeInstanceResult()
{}

void DescribeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceListNode = value["InstanceList"]["Instance"];
	for (auto valueInstanceListInstance : allInstanceListNode)
	{
		Instance instanceListObject;
		if(!valueInstanceListInstance["InstanceIp"].isNull())
			instanceListObject.instanceIp = valueInstanceListInstance["InstanceIp"].asString();
		if(!valueInstanceListInstance["IsBgppack"].isNull())
			instanceListObject.isBgppack = valueInstanceListInstance["IsBgppack"].asString() == "true";
		if(!valueInstanceListInstance["IpVersion"].isNull())
			instanceListObject.ipVersion = valueInstanceListInstance["IpVersion"].asString();
		if(!valueInstanceListInstance["ElasticThreshold"].isNull())
			instanceListObject.elasticThreshold = std::stoi(valueInstanceListInstance["ElasticThreshold"].asString());
		if(!valueInstanceListInstance["BlackholeThreshold"].isNull())
			instanceListObject.blackholeThreshold = std::stoi(valueInstanceListInstance["BlackholeThreshold"].asString());
		if(!valueInstanceListInstance["DefenseBpsThreshold"].isNull())
			instanceListObject.defenseBpsThreshold = std::stoi(valueInstanceListInstance["DefenseBpsThreshold"].asString());
		if(!valueInstanceListInstance["InstanceName"].isNull())
			instanceListObject.instanceName = valueInstanceListInstance["InstanceName"].asString();
		if(!valueInstanceListInstance["InstanceStatus"].isNull())
			instanceListObject.instanceStatus = valueInstanceListInstance["InstanceStatus"].asString();
		if(!valueInstanceListInstance["DefensePpsThreshold"].isNull())
			instanceListObject.defensePpsThreshold = std::stoi(valueInstanceListInstance["DefensePpsThreshold"].asString());
		if(!valueInstanceListInstance["InstanceId"].isNull())
			instanceListObject.instanceId = valueInstanceListInstance["InstanceId"].asString();
		if(!valueInstanceListInstance["InstanceType"].isNull())
			instanceListObject.instanceType = valueInstanceListInstance["InstanceType"].asString();
		instanceList_.push_back(instanceListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeInstanceResult::getTotal()const
{
	return total_;
}

std::vector<DescribeInstanceResult::Instance> DescribeInstanceResult::getInstanceList()const
{
	return instanceList_;
}

