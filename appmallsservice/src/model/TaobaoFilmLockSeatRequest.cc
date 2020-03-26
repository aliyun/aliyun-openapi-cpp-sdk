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

#include <alibabacloud/appmallsservice/model/TaobaoFilmLockSeatRequest.h>

using AlibabaCloud::AppMallsService::Model::TaobaoFilmLockSeatRequest;

TaobaoFilmLockSeatRequest::TaobaoFilmLockSeatRequest() :
	RpcServiceRequest("appmallsservice", "2018-02-24", "TaobaoFilmLockSeat")
{
	setMethod(HttpRequest::Method::Post);
}

TaobaoFilmLockSeatRequest::~TaobaoFilmLockSeatRequest()
{}

long TaobaoFilmLockSeatRequest::getScheduleId()const
{
	return scheduleId_;
}

void TaobaoFilmLockSeatRequest::setScheduleId(long scheduleId)
{
	scheduleId_ = scheduleId;
	setParameter("ScheduleId", std::to_string(scheduleId));
}

std::string TaobaoFilmLockSeatRequest::getSeatIds()const
{
	return seatIds_;
}

void TaobaoFilmLockSeatRequest::setSeatIds(const std::string& seatIds)
{
	seatIds_ = seatIds;
	setParameter("SeatIds", seatIds);
}

std::string TaobaoFilmLockSeatRequest::getSeatNames()const
{
	return seatNames_;
}

void TaobaoFilmLockSeatRequest::setSeatNames(const std::string& seatNames)
{
	seatNames_ = seatNames;
	setParameter("SeatNames", seatNames);
}

std::string TaobaoFilmLockSeatRequest::getMobile()const
{
	return mobile_;
}

void TaobaoFilmLockSeatRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setParameter("Mobile", mobile);
}

std::string TaobaoFilmLockSeatRequest::getExtUserId()const
{
	return extUserId_;
}

void TaobaoFilmLockSeatRequest::setExtUserId(const std::string& extUserId)
{
	extUserId_ = extUserId;
	setParameter("ExtUserId", extUserId);
}

std::string TaobaoFilmLockSeatRequest::getParamsJson()const
{
	return paramsJson_;
}

void TaobaoFilmLockSeatRequest::setParamsJson(const std::string& paramsJson)
{
	paramsJson_ = paramsJson;
	setParameter("ParamsJson", paramsJson);
}

