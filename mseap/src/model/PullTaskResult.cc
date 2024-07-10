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

#include <alibabacloud/mseap/model/PullTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mseap;
using namespace AlibabaCloud::Mseap::Model;

PullTaskResult::PullTaskResult() :
	ServiceResult()
{}

PullTaskResult::PullTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PullTaskResult::~PullTaskResult()
{}

void PullTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["TaskId"].isNull())
		module_.taskId = moduleNode["TaskId"].asString();
	if(!moduleNode["OutTaskId"].isNull())
		module_.outTaskId = moduleNode["OutTaskId"].asString();
	if(!moduleNode["TaskType"].isNull())
		module_.taskType = moduleNode["TaskType"].asString();
	if(!moduleNode["TaskData"].isNull())
		module_.taskData = moduleNode["TaskData"].asString();
	if(!moduleNode["OrderId"].isNull())
		module_.orderId = moduleNode["OrderId"].asString();
	if(!moduleNode["BizCode"].isNull())
		module_.bizCode = moduleNode["BizCode"].asString();
	if(!moduleNode["PrincipalKey"].isNull())
		module_.principalKey = moduleNode["PrincipalKey"].asString();
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();

}

bool PullTaskResult::getAllowRetry()const
{
	return allowRetry_;
}

std::string PullTaskResult::getErrorMsg()const
{
	return errorMsg_;
}

int PullTaskResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string PullTaskResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string PullTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string PullTaskResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

PullTaskResult::Module PullTaskResult::getModule()const
{
	return module_;
}

bool PullTaskResult::getSuccess()const
{
	return success_;
}

std::string PullTaskResult::getAppName()const
{
	return appName_;
}

