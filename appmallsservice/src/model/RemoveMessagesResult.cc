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

#include <alibabacloud/appmallsservice/model/RemoveMessagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

RemoveMessagesResult::RemoveMessagesResult() :
	ServiceResult()
{}

RemoveMessagesResult::RemoveMessagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RemoveMessagesResult::~RemoveMessagesResult()
{}

void RemoveMessagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["SubCode"].isNull())
		subCode_ = value["SubCode"].asString();
	if(!value["SubMsg"].isNull())
		subMsg_ = value["SubMsg"].asString();
	if(!value["LogsId"].isNull())
		logsId_ = value["LogsId"].asString();
	if(!value["ReturnCode"].isNull())
		returnCode_ = value["ReturnCode"].asString();
	if(!value["ReturnMessage"].isNull())
		returnMessage_ = value["ReturnMessage"].asString();
	if(!value["ReturnValue"].isNull())
		returnValue_ = value["ReturnValue"].asString();

}

std::string RemoveMessagesResult::getMsg()const
{
	return msg_;
}

std::string RemoveMessagesResult::getSubMsg()const
{
	return subMsg_;
}

std::string RemoveMessagesResult::getReturnCode()const
{
	return returnCode_;
}

std::string RemoveMessagesResult::getLogsId()const
{
	return logsId_;
}

std::string RemoveMessagesResult::getReturnMessage()const
{
	return returnMessage_;
}

std::string RemoveMessagesResult::getReturnValue()const
{
	return returnValue_;
}

std::string RemoveMessagesResult::getErrorCode()const
{
	return errorCode_;
}

std::string RemoveMessagesResult::getSubCode()const
{
	return subCode_;
}

