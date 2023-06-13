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

#include <alibabacloud/ecs/model/CreateAutoProvisioningGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateAutoProvisioningGroupResult::CreateAutoProvisioningGroupResult() :
	ServiceResult()
{}

CreateAutoProvisioningGroupResult::CreateAutoProvisioningGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAutoProvisioningGroupResult::~CreateAutoProvisioningGroupResult()
{}

void CreateAutoProvisioningGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLaunchResultsNode = value["LaunchResults"]["LaunchResult"];
	for (auto valueLaunchResultsLaunchResult : allLaunchResultsNode)
	{
		LaunchResult launchResultsObject;
		if(!valueLaunchResultsLaunchResult["ZoneId"].isNull())
			launchResultsObject.zoneId = valueLaunchResultsLaunchResult["ZoneId"].asString();
		if(!valueLaunchResultsLaunchResult["ErrorMsg"].isNull())
			launchResultsObject.errorMsg = valueLaunchResultsLaunchResult["ErrorMsg"].asString();
		if(!valueLaunchResultsLaunchResult["InstanceType"].isNull())
			launchResultsObject.instanceType = valueLaunchResultsLaunchResult["InstanceType"].asString();
		if(!valueLaunchResultsLaunchResult["ErrorCode"].isNull())
			launchResultsObject.errorCode = valueLaunchResultsLaunchResult["ErrorCode"].asString();
		if(!valueLaunchResultsLaunchResult["SpotStrategy"].isNull())
			launchResultsObject.spotStrategy = valueLaunchResultsLaunchResult["SpotStrategy"].asString();
		if(!valueLaunchResultsLaunchResult["Amount"].isNull())
			launchResultsObject.amount = std::stoi(valueLaunchResultsLaunchResult["Amount"].asString());
		auto allInstanceIds = value["InstanceIds"]["InstanceId"];
		for (auto value : allInstanceIds)
			launchResultsObject.instanceIds.push_back(value.asString());
		launchResults_.push_back(launchResultsObject);
	}
	if(!value["AutoProvisioningGroupId"].isNull())
		autoProvisioningGroupId_ = value["AutoProvisioningGroupId"].asString();

}

std::string CreateAutoProvisioningGroupResult::getAutoProvisioningGroupId()const
{
	return autoProvisioningGroupId_;
}

std::vector<CreateAutoProvisioningGroupResult::LaunchResult> CreateAutoProvisioningGroupResult::getLaunchResults()const
{
	return launchResults_;
}

