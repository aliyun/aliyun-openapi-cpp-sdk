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

#include <alibabacloud/dataworks-public/model/GetBaselineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetBaselineResult::GetBaselineResult() :
	ServiceResult()
{}

GetBaselineResult::GetBaselineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBaselineResult::~GetBaselineResult()
{}

void GetBaselineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["BaselineId"].isNull())
		data_.baselineId = std::stol(dataNode["BaselineId"].asString());
	if(!dataNode["BaselineName"].isNull())
		data_.baselineName = dataNode["BaselineName"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["Owner"].isNull())
		data_.owner = dataNode["Owner"].asString();
	if(!dataNode["Priority"].isNull())
		data_.priority = std::stoi(dataNode["Priority"].asString());
	if(!dataNode["BaselineType"].isNull())
		data_.baselineType = dataNode["BaselineType"].asString();
	if(!dataNode["Enabled"].isNull())
		data_.enabled = dataNode["Enabled"].asString() == "true";
	if(!dataNode["AlertEnabled"].isNull())
		data_.alertEnabled = dataNode["AlertEnabled"].asString() == "true";
	if(!dataNode["AlertMarginThreshold"].isNull())
		data_.alertMarginThreshold = std::stoi(dataNode["AlertMarginThreshold"].asString());
	auto allOverTimeSettingsNode = dataNode["OverTimeSettings"]["OverTimeSetting"];
	for (auto dataNodeOverTimeSettingsOverTimeSetting : allOverTimeSettingsNode)
	{
		Data::OverTimeSetting overTimeSettingObject;
		if(!dataNodeOverTimeSettingsOverTimeSetting["Cycle"].isNull())
			overTimeSettingObject.cycle = std::stoi(dataNodeOverTimeSettingsOverTimeSetting["Cycle"].asString());
		if(!dataNodeOverTimeSettingsOverTimeSetting["Time"].isNull())
			overTimeSettingObject.time = dataNodeOverTimeSettingsOverTimeSetting["Time"].asString();
		data_.overTimeSettings.push_back(overTimeSettingObject);
	}
	auto allAlertSettingsNode = dataNode["AlertSettings"]["AlertSetting"];
	for (auto dataNodeAlertSettingsAlertSetting : allAlertSettingsNode)
	{
		Data::AlertSetting alertSettingObject;
		if(!dataNodeAlertSettingsAlertSetting["AlertType"].isNull())
			alertSettingObject.alertType = dataNodeAlertSettingsAlertSetting["AlertType"].asString();
		if(!dataNodeAlertSettingsAlertSetting["SilenceStartTime"].isNull())
			alertSettingObject.silenceStartTime = dataNodeAlertSettingsAlertSetting["SilenceStartTime"].asString();
		if(!dataNodeAlertSettingsAlertSetting["SilenceEndTime"].isNull())
			alertSettingObject.silenceEndTime = dataNodeAlertSettingsAlertSetting["SilenceEndTime"].asString();
		if(!dataNodeAlertSettingsAlertSetting["AlertInterval"].isNull())
			alertSettingObject.alertInterval = std::stoi(dataNodeAlertSettingsAlertSetting["AlertInterval"].asString());
		if(!dataNodeAlertSettingsAlertSetting["AlertMaximum"].isNull())
			alertSettingObject.alertMaximum = std::stoi(dataNodeAlertSettingsAlertSetting["AlertMaximum"].asString());
		if(!dataNodeAlertSettingsAlertSetting["BaselineAlertEnabled"].isNull())
			alertSettingObject.baselineAlertEnabled = dataNodeAlertSettingsAlertSetting["BaselineAlertEnabled"].asString() == "true";
		if(!dataNodeAlertSettingsAlertSetting["AlertRecipientType"].isNull())
			alertSettingObject.alertRecipientType = dataNodeAlertSettingsAlertSetting["AlertRecipientType"].asString();
		if(!dataNodeAlertSettingsAlertSetting["AlertRecipient"].isNull())
			alertSettingObject.alertRecipient = dataNodeAlertSettingsAlertSetting["AlertRecipient"].asString();
		auto allDingRobotsNode = dataNodeAlertSettingsAlertSetting["DingRobots"]["DingRobot"];
		for (auto dataNodeAlertSettingsAlertSettingDingRobotsDingRobot : allDingRobotsNode)
		{
			Data::AlertSetting::DingRobot dingRobotsObject;
			if(!dataNodeAlertSettingsAlertSettingDingRobotsDingRobot["WebUrl"].isNull())
				dingRobotsObject.webUrl = dataNodeAlertSettingsAlertSettingDingRobotsDingRobot["WebUrl"].asString();
			if(!dataNodeAlertSettingsAlertSettingDingRobotsDingRobot["AtAll"].isNull())
				dingRobotsObject.atAll = dataNodeAlertSettingsAlertSettingDingRobotsDingRobot["AtAll"].asString() == "true";
			alertSettingObject.dingRobots.push_back(dingRobotsObject);
		}
		auto allAlertMethods = value["AlertMethods"]["AlertMethod"];
		for (auto value : allAlertMethods)
			alertSettingObject.alertMethods.push_back(value.asString());
		auto allWebhooks = value["Webhooks"]["Webhook"];
		for (auto value : allWebhooks)
			alertSettingObject.webhooks.push_back(value.asString());
		auto allTopicTypes = value["TopicTypes"]["TopicType"];
		for (auto value : allTopicTypes)
			alertSettingObject.topicTypes.push_back(value.asString());
		data_.alertSettings.push_back(alertSettingObject);
	}
		auto allNodeIds = dataNode["NodeIds"]["NodeId"];
		for (auto value : allNodeIds)
			data_.nodeIds.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int GetBaselineResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetBaselineResult::Data GetBaselineResult::getData()const
{
	return data_;
}

std::string GetBaselineResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetBaselineResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetBaselineResult::getSuccess()const
{
	return success_;
}

