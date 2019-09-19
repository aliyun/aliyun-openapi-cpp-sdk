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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetSchedulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmGetSchedulesResult::TaobaoFilmGetSchedulesResult() :
	ServiceResult()
{}

TaobaoFilmGetSchedulesResult::TaobaoFilmGetSchedulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmGetSchedulesResult::~TaobaoFilmGetSchedulesResult()
{}

void TaobaoFilmGetSchedulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSchedulesNode = value["Schedules"]["SchedulesItem"];
	for (auto valueSchedulesSchedulesItem : allSchedulesNode)
	{
		SchedulesItem schedulesObject;
		if(!valueSchedulesSchedulesItem["CinemaId"].isNull())
			schedulesObject.cinemaId = std::stol(valueSchedulesSchedulesItem["CinemaId"].asString());
		if(!valueSchedulesSchedulesItem["CloseTime"].isNull())
			schedulesObject.closeTime = valueSchedulesSchedulesItem["CloseTime"].asString();
		if(!valueSchedulesSchedulesItem["HallName"].isNull())
			schedulesObject.hallName = valueSchedulesSchedulesItem["HallName"].asString();
		if(!valueSchedulesSchedulesItem["Id"].isNull())
			schedulesObject.id = std::stol(valueSchedulesSchedulesItem["Id"].asString());
		if(!valueSchedulesSchedulesItem["IsExpired"].isNull())
			schedulesObject.isExpired = valueSchedulesSchedulesItem["IsExpired"].asString() == "true";
		if(!valueSchedulesSchedulesItem["MaxCanBuy"].isNull())
			schedulesObject.maxCanBuy = std::stol(valueSchedulesSchedulesItem["MaxCanBuy"].asString());
		if(!valueSchedulesSchedulesItem["Price"].isNull())
			schedulesObject.price = std::stol(valueSchedulesSchedulesItem["Price"].asString());
		if(!valueSchedulesSchedulesItem["ScheduleArea"].isNull())
			schedulesObject.scheduleArea = valueSchedulesSchedulesItem["ScheduleArea"].asString();
		if(!valueSchedulesSchedulesItem["SectionId"].isNull())
			schedulesObject.sectionId = valueSchedulesSchedulesItem["SectionId"].asString();
		if(!valueSchedulesSchedulesItem["ServiceFee"].isNull())
			schedulesObject.serviceFee = std::stol(valueSchedulesSchedulesItem["ServiceFee"].asString());
		if(!valueSchedulesSchedulesItem["ShowDate"].isNull())
			schedulesObject.showDate = valueSchedulesSchedulesItem["ShowDate"].asString();
		if(!valueSchedulesSchedulesItem["ShowId"].isNull())
			schedulesObject.showId = std::stol(valueSchedulesSchedulesItem["ShowId"].asString());
		if(!valueSchedulesSchedulesItem["ShowTime"].isNull())
			schedulesObject.showTime = valueSchedulesSchedulesItem["ShowTime"].asString();
		if(!valueSchedulesSchedulesItem["ShowVersion"].isNull())
			schedulesObject.showVersion = valueSchedulesSchedulesItem["ShowVersion"].asString();
		if(!valueSchedulesSchedulesItem["HallId"].isNull())
			schedulesObject.hallId = valueSchedulesSchedulesItem["HallId"].asString();
		schedules_.push_back(schedulesObject);
	}
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

std::string TaobaoFilmGetSchedulesResult::getMsg()const
{
	return msg_;
}

std::vector<TaobaoFilmGetSchedulesResult::SchedulesItem> TaobaoFilmGetSchedulesResult::getSchedules()const
{
	return schedules_;
}

std::string TaobaoFilmGetSchedulesResult::getSubMsg()const
{
	return subMsg_;
}

std::string TaobaoFilmGetSchedulesResult::getLogsId()const
{
	return logsId_;
}

std::string TaobaoFilmGetSchedulesResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaobaoFilmGetSchedulesResult::getSubCode()const
{
	return subCode_;
}

