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

#include <alibabacloud/vpc/model/CreateDefaultVpcResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateDefaultVpcResult::CreateDefaultVpcResult() :
	ServiceResult()
{}

CreateDefaultVpcResult::CreateDefaultVpcResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDefaultVpcResult::~CreateDefaultVpcResult()
{}

void CreateDefaultVpcResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDefaultVSwitchsNode = value["DefaultVSwitchs"]["DefaultVSwitch"];
	for (auto valueDefaultVSwitchsDefaultVSwitch : allDefaultVSwitchsNode)
	{
		DefaultVSwitch defaultVSwitchsObject;
		if(!valueDefaultVSwitchsDefaultVSwitch["ZoneId"].isNull())
			defaultVSwitchsObject.zoneId = valueDefaultVSwitchsDefaultVSwitch["ZoneId"].asString();
		if(!valueDefaultVSwitchsDefaultVSwitch["VSwitchId"].isNull())
			defaultVSwitchsObject.vSwitchId = valueDefaultVSwitchsDefaultVSwitch["VSwitchId"].asString();
		defaultVSwitchs_.push_back(defaultVSwitchsObject);
	}
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VRouterId"].isNull())
		vRouterId_ = value["VRouterId"].asString();
	if(!value["RouteTableId"].isNull())
		routeTableId_ = value["RouteTableId"].asString();

}

std::string CreateDefaultVpcResult::getVRouterId()const
{
	return vRouterId_;
}

std::vector<CreateDefaultVpcResult::DefaultVSwitch> CreateDefaultVpcResult::getDefaultVSwitchs()const
{
	return defaultVSwitchs_;
}

std::string CreateDefaultVpcResult::getRouteTableId()const
{
	return routeTableId_;
}

std::string CreateDefaultVpcResult::getVpcId()const
{
	return vpcId_;
}

