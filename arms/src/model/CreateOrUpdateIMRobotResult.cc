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

#include <alibabacloud/arms/model/CreateOrUpdateIMRobotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateOrUpdateIMRobotResult::CreateOrUpdateIMRobotResult() :
	ServiceResult()
{}

CreateOrUpdateIMRobotResult::CreateOrUpdateIMRobotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOrUpdateIMRobotResult::~CreateOrUpdateIMRobotResult()
{}

void CreateOrUpdateIMRobotResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alertRobotNode = value["AlertRobot"];
	if(!alertRobotNode["RobotId"].isNull())
		alertRobot_.robotId = std::stof(alertRobotNode["RobotId"].asString());
	if(!alertRobotNode["RobotName"].isNull())
		alertRobot_.robotName = alertRobotNode["RobotName"].asString();
	if(!alertRobotNode["Type"].isNull())
		alertRobot_.type = alertRobotNode["Type"].asString();
	if(!alertRobotNode["RobotAddress"].isNull())
		alertRobot_.robotAddress = alertRobotNode["RobotAddress"].asString();
	if(!alertRobotNode["DailyNoc"].isNull())
		alertRobot_.dailyNoc = alertRobotNode["DailyNoc"].asString() == "true";
	if(!alertRobotNode["DailyNocTime"].isNull())
		alertRobot_.dailyNocTime = alertRobotNode["DailyNocTime"].asString();
	if(!alertRobotNode["Token"].isNull())
		alertRobot_.token = alertRobotNode["Token"].asString();
	if(!alertRobotNode["EnableOutgoing"].isNull())
		alertRobot_.enableOutgoing = alertRobotNode["EnableOutgoing"].asString() == "true";
	if(!alertRobotNode["CardTemplate"].isNull())
		alertRobot_.cardTemplate = alertRobotNode["CardTemplate"].asString();

}

CreateOrUpdateIMRobotResult::AlertRobot CreateOrUpdateIMRobotResult::getAlertRobot()const
{
	return alertRobot_;
}

