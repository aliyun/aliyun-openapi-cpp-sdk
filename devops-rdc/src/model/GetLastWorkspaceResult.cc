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

#include <alibabacloud/devops-rdc/model/GetLastWorkspaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetLastWorkspaceResult::GetLastWorkspaceResult() :
	ServiceResult()
{}

GetLastWorkspaceResult::GetLastWorkspaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLastWorkspaceResult::~GetLastWorkspaceResult()
{}

void GetLastWorkspaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Object"].isNull())
		object_ = value["Object"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetLastWorkspaceResult::getObject()const
{
	return object_;
}

std::string GetLastWorkspaceResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetLastWorkspaceResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetLastWorkspaceResult::getSuccess()const
{
	return success_;
}

