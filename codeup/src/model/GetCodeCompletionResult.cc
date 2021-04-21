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

#include <alibabacloud/codeup/model/GetCodeCompletionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

GetCodeCompletionResult::GetCodeCompletionResult() :
	ServiceResult()
{}

GetCodeCompletionResult::GetCodeCompletionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCodeCompletionResult::~GetCodeCompletionResult()
{}

void GetCodeCompletionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Body"].isNull())
		result_.body = resultNode["Body"].asString();
	if(!resultNode["ClientTimestamp"].isNull())
		result_.clientTimestamp = resultNode["ClientTimestamp"].asString();
	if(!resultNode["ReceiveTimestamp"].isNull())
		result_.receiveTimestamp = resultNode["ReceiveTimestamp"].asString();
	if(!resultNode["InvokeTimestamp"].isNull())
		result_.invokeTimestamp = resultNode["InvokeTimestamp"].asString();
	if(!resultNode["FetchTimestamp"].isNull())
		result_.fetchTimestamp = resultNode["FetchTimestamp"].asString();
	if(!resultNode["RspTimestamp"].isNull())
		result_.rspTimestamp = resultNode["RspTimestamp"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string GetCodeCompletionResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetCodeCompletionResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetCodeCompletionResult::getSuccess()const
{
	return success_;
}

GetCodeCompletionResult::Result GetCodeCompletionResult::getResult()const
{
	return result_;
}

