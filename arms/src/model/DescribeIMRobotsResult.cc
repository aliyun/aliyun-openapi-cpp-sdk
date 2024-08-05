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

#include <alibabacloud/arms/model/DescribeIMRobotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribeIMRobotsResult::DescribeIMRobotsResult() :
	ServiceResult()
{}

DescribeIMRobotsResult::DescribeIMRobotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIMRobotsResult::~DescribeIMRobotsResult()
{}

void DescribeIMRobotsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["Total"].isNull())
		pageBean_.total = std::stol(pageBeanNode["Total"].asString());
	if(!pageBeanNode["Page"].isNull())
		pageBean_.page = std::stol(pageBeanNode["Page"].asString());
	if(!pageBeanNode["Size"].isNull())
		pageBean_.size = std::stol(pageBeanNode["Size"].asString());
	auto allAlertIMRobotsNode = pageBeanNode["AlertIMRobots"]["IMRobots"];
	for (auto pageBeanNodeAlertIMRobotsIMRobots : allAlertIMRobotsNode)
	{
		PageBean::IMRobots iMRobotsObject;
		if(!pageBeanNodeAlertIMRobotsIMRobots["RobotId"].isNull())
			iMRobotsObject.robotId = std::stof(pageBeanNodeAlertIMRobotsIMRobots["RobotId"].asString());
		if(!pageBeanNodeAlertIMRobotsIMRobots["Type"].isNull())
			iMRobotsObject.type = pageBeanNodeAlertIMRobotsIMRobots["Type"].asString();
		if(!pageBeanNodeAlertIMRobotsIMRobots["RobotName"].isNull())
			iMRobotsObject.robotName = pageBeanNodeAlertIMRobotsIMRobots["RobotName"].asString();
		if(!pageBeanNodeAlertIMRobotsIMRobots["RobotAddr"].isNull())
			iMRobotsObject.robotAddr = pageBeanNodeAlertIMRobotsIMRobots["RobotAddr"].asString();
		if(!pageBeanNodeAlertIMRobotsIMRobots["DailyNoc"].isNull())
			iMRobotsObject.dailyNoc = pageBeanNodeAlertIMRobotsIMRobots["DailyNoc"].asString() == "true";
		if(!pageBeanNodeAlertIMRobotsIMRobots["DailyNocTime"].isNull())
			iMRobotsObject.dailyNocTime = pageBeanNodeAlertIMRobotsIMRobots["DailyNocTime"].asString();
		if(!pageBeanNodeAlertIMRobotsIMRobots["DingSignKey"].isNull())
			iMRobotsObject.dingSignKey = pageBeanNodeAlertIMRobotsIMRobots["DingSignKey"].asString();
		if(!pageBeanNodeAlertIMRobotsIMRobots["CreateTime"].isNull())
			iMRobotsObject.createTime = pageBeanNodeAlertIMRobotsIMRobots["CreateTime"].asString();
		auto allDispatchRulesNode = pageBeanNodeAlertIMRobotsIMRobots["DispatchRules"]["DispatchRule"];
		for (auto pageBeanNodeAlertIMRobotsIMRobotsDispatchRulesDispatchRule : allDispatchRulesNode)
		{
			PageBean::IMRobots::DispatchRule dispatchRulesObject;
			if(!pageBeanNodeAlertIMRobotsIMRobotsDispatchRulesDispatchRule["id"].isNull())
				dispatchRulesObject.id = std::stol(pageBeanNodeAlertIMRobotsIMRobotsDispatchRulesDispatchRule["id"].asString());
			if(!pageBeanNodeAlertIMRobotsIMRobotsDispatchRulesDispatchRule["name"].isNull())
				dispatchRulesObject.name = pageBeanNodeAlertIMRobotsIMRobotsDispatchRulesDispatchRule["name"].asString();
			iMRobotsObject.dispatchRules.push_back(dispatchRulesObject);
		}
		pageBean_.alertIMRobots.push_back(iMRobotsObject);
	}

}

DescribeIMRobotsResult::PageBean DescribeIMRobotsResult::getPageBean()const
{
	return pageBean_;
}

