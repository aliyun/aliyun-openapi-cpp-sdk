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

#include <alibabacloud/ddosbgp/model/DescribeInstanceSpecsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

DescribeInstanceSpecsResult::DescribeInstanceSpecsResult() :
	ServiceResult()
{}

DescribeInstanceSpecsResult::DescribeInstanceSpecsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSpecsResult::~DescribeInstanceSpecsResult()
{}

void DescribeInstanceSpecsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceSpecsNode = value["InstanceSpecs"]["InstanceSpec"];
	for (auto valueInstanceSpecsInstanceSpec : allInstanceSpecsNode)
	{
		InstanceSpec instanceSpecsObject;
		if(!valueInstanceSpecsInstanceSpec["IsFullDefenseMode"].isNull())
			instanceSpecsObject.isFullDefenseMode = std::stoi(valueInstanceSpecsInstanceSpec["IsFullDefenseMode"].asString());
		if(!valueInstanceSpecsInstanceSpec["Region"].isNull())
			instanceSpecsObject.region = valueInstanceSpecsInstanceSpec["Region"].asString();
		if(!valueInstanceSpecsInstanceSpec["AvailableDefenseTimes"].isNull())
			instanceSpecsObject.availableDefenseTimes = std::stoi(valueInstanceSpecsInstanceSpec["AvailableDefenseTimes"].asString());
		if(!valueInstanceSpecsInstanceSpec["TotalDefenseTimes"].isNull())
			instanceSpecsObject.totalDefenseTimes = std::stoi(valueInstanceSpecsInstanceSpec["TotalDefenseTimes"].asString());
		if(!valueInstanceSpecsInstanceSpec["AvailableDeleteBlackholeCount"].isNull())
			instanceSpecsObject.availableDeleteBlackholeCount = valueInstanceSpecsInstanceSpec["AvailableDeleteBlackholeCount"].asString();
		if(!valueInstanceSpecsInstanceSpec["InstanceId"].isNull())
			instanceSpecsObject.instanceId = valueInstanceSpecsInstanceSpec["InstanceId"].asString();
		auto packConfigNode = value["PackConfig"];
		if(!packConfigNode["PackBasicThre"].isNull())
			instanceSpecsObject.packConfig.packBasicThre = std::stoi(packConfigNode["PackBasicThre"].asString());
		if(!packConfigNode["BindIpCount"].isNull())
			instanceSpecsObject.packConfig.bindIpCount = std::stoi(packConfigNode["BindIpCount"].asString());
		if(!packConfigNode["PackAdvThre"].isNull())
			instanceSpecsObject.packConfig.packAdvThre = std::stoi(packConfigNode["PackAdvThre"].asString());
		if(!packConfigNode["NormalBandwidth"].isNull())
			instanceSpecsObject.packConfig.normalBandwidth = std::stoi(packConfigNode["NormalBandwidth"].asString());
		if(!packConfigNode["IpBasicThre"].isNull())
			instanceSpecsObject.packConfig.ipBasicThre = std::stoi(packConfigNode["IpBasicThre"].asString());
		if(!packConfigNode["IpAdvanceThre"].isNull())
			instanceSpecsObject.packConfig.ipAdvanceThre = std::stoi(packConfigNode["IpAdvanceThre"].asString());
		if(!packConfigNode["IpSpec"].isNull())
			instanceSpecsObject.packConfig.ipSpec = std::stoi(packConfigNode["IpSpec"].asString());
		if(!packConfigNode["Bandwidth"].isNull())
			instanceSpecsObject.packConfig.bandwidth = std::stol(packConfigNode["Bandwidth"].asString());
		instanceSpecs_.push_back(instanceSpecsObject);
	}

}

std::vector<DescribeInstanceSpecsResult::InstanceSpec> DescribeInstanceSpecsResult::getInstanceSpecs()const
{
	return instanceSpecs_;
}

