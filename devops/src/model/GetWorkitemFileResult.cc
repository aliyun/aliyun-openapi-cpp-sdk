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

#include <alibabacloud/devops/model/GetWorkitemFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetWorkitemFileResult::GetWorkitemFileResult() :
	ServiceResult()
{}

GetWorkitemFileResult::GetWorkitemFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkitemFileResult::~GetWorkitemFileResult()
{}

void GetWorkitemFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto workitemFileNode = value["workitemFile"];
	if(!workitemFileNode["id"].isNull())
		workitemFile_.id = workitemFileNode["id"].asString();
	if(!workitemFileNode["name"].isNull())
		workitemFile_.name = workitemFileNode["name"].asString();
	if(!workitemFileNode["suffix"].isNull())
		workitemFile_.suffix = workitemFileNode["suffix"].asString();
	if(!workitemFileNode["size"].isNull())
		workitemFile_.size = std::stoi(workitemFileNode["size"].asString());
	if(!workitemFileNode["url"].isNull())
		workitemFile_.url = workitemFileNode["url"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();

}

GetWorkitemFileResult::WorkitemFile GetWorkitemFileResult::getWorkitemFile()const
{
	return workitemFile_;
}

std::string GetWorkitemFileResult::getRequestId()const
{
	return requestId_;
}

std::string GetWorkitemFileResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetWorkitemFileResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetWorkitemFileResult::getSuccess()const
{
	return success_;
}

