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

#include <alibabacloud/appmallsservice/model/TaobaoFilmLockSeatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmLockSeatResult::TaobaoFilmLockSeatResult() :
	ServiceResult()
{}

TaobaoFilmLockSeatResult::TaobaoFilmLockSeatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmLockSeatResult::~TaobaoFilmLockSeatResult()
{}

void TaobaoFilmLockSeatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto seatLockedNode = value["SeatLocked"];
	if(!seatLockedNode["ApplyKey"].isNull())
		seatLocked_.applyKey = seatLockedNode["ApplyKey"].asString();
	if(!seatLockedNode["DefaultLockSecond"].isNull())
		seatLocked_.defaultLockSecond = std::stol(seatLockedNode["DefaultLockSecond"].asString());
	if(!seatLockedNode["LockTime"].isNull())
		seatLocked_.lockTime = std::stol(seatLockedNode["LockTime"].asString());
	if(!seatLockedNode["Status"].isNull())
		seatLocked_.status = seatLockedNode["Status"].asString();
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

}

TaobaoFilmLockSeatResult::SeatLocked TaobaoFilmLockSeatResult::getSeatLocked()const
{
	return seatLocked_;
}

std::string TaobaoFilmLockSeatResult::getMsg()const
{
	return msg_;
}

std::string TaobaoFilmLockSeatResult::getSubMsg()const
{
	return subMsg_;
}

std::string TaobaoFilmLockSeatResult::getLogsId()const
{
	return logsId_;
}

std::string TaobaoFilmLockSeatResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaobaoFilmLockSeatResult::getSubCode()const
{
	return subCode_;
}

