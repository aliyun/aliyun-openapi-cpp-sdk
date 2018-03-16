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

#include <alibabacloud/ecs/model/DescribeDeploymentSetTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDeploymentSetTopologyResult::DescribeDeploymentSetTopologyResult() :
	ServiceResult()
{}

DescribeDeploymentSetTopologyResult::DescribeDeploymentSetTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeploymentSetTopologyResult::~DescribeDeploymentSetTopologyResult()
{}

void DescribeDeploymentSetTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSwitchs = value["Switchs"]["Switch"];
	for (auto value : allSwitchs)
	{
		Switch switchsObject;
		if(!value["SwitchId"].isNull())
			switchsObject.switchId = value["SwitchId"].asString();
		auto allHosts = value["Hosts"]["Host"];
		for (auto value : allHosts)
		{
			Switch::Host hostsObject;
			if(!value["HostId"].isNull())
				hostsObject.hostId = value["HostId"].asString();
			auto allInstanceIds = value["InstanceIds"]["InstanceId"];
			for (auto value : allInstanceIds)
				hostsObject.instanceIds.push_back(value.asString());
			switchsObject.hosts.push_back(hostsObject);
		}
		switchs_.push_back(switchsObject);
	}
	auto allRacks = value["Racks"]["Rack"];
	for (auto value : allRacks)
	{
		Rack racksObject;
		if(!value["RackId"].isNull())
			racksObject.rackId = value["RackId"].asString();
		auto allHosts1 = value["Hosts"]["Host"];
		for (auto value : allHosts1)
		{
			Rack::Host2 hosts1Object;
			if(!value["HostId"].isNull())
				hosts1Object.hostId = value["HostId"].asString();
			auto allInstanceIds3 = value["InstanceIds"]["InstanceId"];
			for (auto value : allInstanceIds3)
				hosts1Object.instanceIds3.push_back(value.asString());
			racksObject.hosts1.push_back(hosts1Object);
		}
		racks_.push_back(racksObject);
	}

}

std::vector<DescribeDeploymentSetTopologyResult::Switch> DescribeDeploymentSetTopologyResult::getSwitchs()const
{
	return switchs_;
}

std::vector<DescribeDeploymentSetTopologyResult::Rack> DescribeDeploymentSetTopologyResult::getRacks()const
{
	return racks_;
}

