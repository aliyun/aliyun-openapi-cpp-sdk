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

#include <alibabacloud/websitebuild/model/GetCreateLogoTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

GetCreateLogoTaskResult::GetCreateLogoTaskResult() :
	ServiceResult()
{}

GetCreateLogoTaskResult::GetCreateLogoTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCreateLogoTaskResult::~GetCreateLogoTaskResult()
{}

void GetCreateLogoTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto taskNode = value["Task"];
	if(!taskNode["TaskId"].isNull())
		task_.taskId = taskNode["TaskId"].asString();
	if(!taskNode["TaskStatus"].isNull())
		task_.taskStatus = taskNode["TaskStatus"].asString();
		auto allUrls = taskNode["Urls"]["url"];
		for (auto value : allUrls)
			task_.urls.push_back(value.asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetCreateLogoTaskResult::Task GetCreateLogoTaskResult::getTask()const
{
	return task_;
}

std::string GetCreateLogoTaskResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetCreateLogoTaskResult::getErrorCode()const
{
	return errorCode_;
}

bool GetCreateLogoTaskResult::getSuccess()const
{
	return success_;
}

