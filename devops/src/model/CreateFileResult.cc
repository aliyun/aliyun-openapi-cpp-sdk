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

#include <alibabacloud/devops/model/CreateFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateFileResult::CreateFileResult() :
	ServiceResult()
{}

CreateFileResult::CreateFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFileResult::~CreateFileResult()
{}

void CreateFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["filePath"].isNull())
		result_.filePath = resultNode["filePath"].asString();
	if(!resultNode["branchName"].isNull())
		result_.branchName = resultNode["branchName"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string CreateFileResult::getRequestId()const
{
	return requestId_;
}

std::string CreateFileResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateFileResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateFileResult::getSuccess()const
{
	return success_;
}

CreateFileResult::Result CreateFileResult::getResult()const
{
	return result_;
}

