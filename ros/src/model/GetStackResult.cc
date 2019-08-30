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

#include <alibabacloud/ros/model/GetStackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

GetStackResult::GetStackResult() :
	ServiceResult()
{}

GetStackResult::GetStackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStackResult::~GetStackResult()
{}

void GetStackResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allParameters = value["Parameters"]["Parameter"];
	for (auto value : allParameters)
	{
		Parameter parametersObject;
		if(!value["ParameterKey"].isNull())
			parametersObject.parameterKey = value["ParameterKey"].asString();
		if(!value["ParameterValue"].isNull())
			parametersObject.parameterValue = value["ParameterValue"].asString();
		parameters_.push_back(parametersObject);
	}
	auto allOutputs = value["Outputs"]["Output"];
	for (const auto &item : allOutputs)
		outputs_.push_back(item.asString());
	auto allNotificationURLs = value["NotificationURLs"]["NotificationURL"];
	for (const auto &item : allNotificationURLs)
		notificationURLs_.push_back(item.asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["DisableRollback"].isNull())
		disableRollback_ = value["DisableRollback"].asString() == "true";
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["StackId"].isNull())
		stackId_ = value["StackId"].asString();
	if(!value["StackName"].isNull())
		stackName_ = value["StackName"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["StatusReason"].isNull())
		statusReason_ = value["StatusReason"].asString();
	if(!value["TemplateDescription"].isNull())
		templateDescription_ = value["TemplateDescription"].asString();
	if(!value["TimeoutInMinutes"].isNull())
		timeoutInMinutes_ = std::stoi(value["TimeoutInMinutes"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["ParentStackId"].isNull())
		parentStackId_ = value["ParentStackId"].asString();

}

std::string GetStackResult::getStatus()const
{
	return status_;
}

std::vector<GetStackResult::Parameter> GetStackResult::getParameters()const
{
	return parameters_;
}

std::string GetStackResult::getDescription()const
{
	return description_;
}

std::string GetStackResult::getStatusReason()const
{
	return statusReason_;
}

std::string GetStackResult::getParentStackId()const
{
	return parentStackId_;
}

std::string GetStackResult::getCreateTime()const
{
	return createTime_;
}

std::string GetStackResult::getTemplateDescription()const
{
	return templateDescription_;
}

std::vector<std::string> GetStackResult::getOutputs()const
{
	return outputs_;
}

std::string GetStackResult::getUpdateTime()const
{
	return updateTime_;
}

std::string GetStackResult::getRegionId()const
{
	return regionId_;
}

std::vector<std::string> GetStackResult::getNotificationURLs()const
{
	return notificationURLs_;
}

bool GetStackResult::getDisableRollback()const
{
	return disableRollback_;
}

std::string GetStackResult::getStackName()const
{
	return stackName_;
}

std::string GetStackResult::getStackId()const
{
	return stackId_;
}

int GetStackResult::getTimeoutInMinutes()const
{
	return timeoutInMinutes_;
}

