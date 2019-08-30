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

#include <alibabacloud/ros/model/GetChangeSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

GetChangeSetResult::GetChangeSetResult() :
	ServiceResult()
{}

GetChangeSetResult::GetChangeSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetChangeSetResult::~GetChangeSetResult()
{}

void GetChangeSetResult::parse(const std::string &payload)
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
	auto allChanges = value["Changes"]["Change"];
	for (const auto &item : allChanges)
		changes_.push_back(item.asString());
	if(!value["ChangeSetId"].isNull())
		changeSetId_ = value["ChangeSetId"].asString();
	if(!value["ChangeSetName"].isNull())
		changeSetName_ = value["ChangeSetName"].asString();
	if(!value["ChangeSetType"].isNull())
		changeSetType_ = value["ChangeSetType"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["DisableRollback"].isNull())
		disableRollback_ = value["DisableRollback"].asString() == "true";
	if(!value["ExecutionStatus"].isNull())
		executionStatus_ = value["ExecutionStatus"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["StackId"].isNull())
		stackId_ = value["StackId"].asString();
	if(!value["StackName"].isNull())
		stackName_ = value["StackName"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["TemplateBody"].isNull())
		templateBody_ = value["TemplateBody"].asString();
	if(!value["TimeoutInMinutes"].isNull())
		timeoutInMinutes_ = std::stoi(value["TimeoutInMinutes"].asString());

}

std::vector<std::string> GetChangeSetResult::getChanges()const
{
	return changes_;
}

std::string GetChangeSetResult::getStatus()const
{
	return status_;
}

std::vector<GetChangeSetResult::Parameter> GetChangeSetResult::getParameters()const
{
	return parameters_;
}

std::string GetChangeSetResult::getDescription()const
{
	return description_;
}

std::string GetChangeSetResult::getCreateTime()const
{
	return createTime_;
}

std::string GetChangeSetResult::getTemplateBody()const
{
	return templateBody_;
}

std::string GetChangeSetResult::getChangeSetName()const
{
	return changeSetName_;
}

std::string GetChangeSetResult::getChangeSetId()const
{
	return changeSetId_;
}

std::string GetChangeSetResult::getExecutionStatus()const
{
	return executionStatus_;
}

std::string GetChangeSetResult::getChangeSetType()const
{
	return changeSetType_;
}

std::string GetChangeSetResult::getRegionId()const
{
	return regionId_;
}

bool GetChangeSetResult::getDisableRollback()const
{
	return disableRollback_;
}

std::string GetChangeSetResult::getStackName()const
{
	return stackName_;
}

std::string GetChangeSetResult::getStackId()const
{
	return stackId_;
}

int GetChangeSetResult::getTimeoutInMinutes()const
{
	return timeoutInMinutes_;
}

