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

#include <alibabacloud/appmallsservice/model/TaobaoFilmUnLockSeatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmUnLockSeatResult::TaobaoFilmUnLockSeatResult() :
	ServiceResult()
{}

TaobaoFilmUnLockSeatResult::TaobaoFilmUnLockSeatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmUnLockSeatResult::~TaobaoFilmUnLockSeatResult()
{}

void TaobaoFilmUnLockSeatResult::parse(const std::string &payload)
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
	if(!value["ReturnCode"].isNull())
		returnCode_ = value["ReturnCode"].asString();
	if(!value["ReturnMessage"].isNull())
		returnMessage_ = value["ReturnMessage"].asString();
	if(!value["ReturnValue"].isNull())
		returnValue_ = value["ReturnValue"].asString() == "true";
	if(!value["LogsId"].isNull())
		logsId_ = value["LogsId"].asString();

}

std::string TaobaoFilmUnLockSeatResult::getMsg()const
{
	return msg_;
}

std::string TaobaoFilmUnLockSeatResult::getSubMsg()const
{
	return subMsg_;
}

std::string TaobaoFilmUnLockSeatResult::getReturnCode()const
{
	return returnCode_;
}

std::string TaobaoFilmUnLockSeatResult::getLogsId()const
{
	return logsId_;
}

std::string TaobaoFilmUnLockSeatResult::getReturnMessage()const
{
	return returnMessage_;
}

bool TaobaoFilmUnLockSeatResult::getReturnValue()const
{
	return returnValue_;
}

std::string TaobaoFilmUnLockSeatResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaobaoFilmUnLockSeatResult::getSubCode()const
{
	return subCode_;
}

