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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetCinemasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmGetCinemasResult::TaobaoFilmGetCinemasResult() :
	ServiceResult()
{}

TaobaoFilmGetCinemasResult::TaobaoFilmGetCinemasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmGetCinemasResult::~TaobaoFilmGetCinemasResult()
{}

void TaobaoFilmGetCinemasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCinemasNode = value["Cinemas"]["CinemasItem"];
	for (auto valueCinemasCinemasItem : allCinemasNode)
	{
		CinemasItem cinemasObject;
		if(!valueCinemasCinemasItem["Address"].isNull())
			cinemasObject.address = valueCinemasCinemasItem["Address"].asString();
		if(!valueCinemasCinemasItem["CinemaName"].isNull())
			cinemasObject.cinemaName = valueCinemasCinemasItem["CinemaName"].asString();
		if(!valueCinemasCinemasItem["CityId"].isNull())
			cinemasObject.cityId = std::stol(valueCinemasCinemasItem["CityId"].asString());
		if(!valueCinemasCinemasItem["Id"].isNull())
			cinemasObject.id = std::stol(valueCinemasCinemasItem["Id"].asString());
		if(!valueCinemasCinemasItem["Latitude"].isNull())
			cinemasObject.latitude = valueCinemasCinemasItem["Latitude"].asString();
		if(!valueCinemasCinemasItem["Longitude"].isNull())
			cinemasObject.longitude = valueCinemasCinemasItem["Longitude"].asString();
		if(!valueCinemasCinemasItem["Phone"].isNull())
			cinemasObject.phone = valueCinemasCinemasItem["Phone"].asString();
		if(!valueCinemasCinemasItem["RegionName"].isNull())
			cinemasObject.regionName = valueCinemasCinemasItem["RegionName"].asString();
		if(!valueCinemasCinemasItem["ScheduleCloseTime"].isNull())
			cinemasObject.scheduleCloseTime = std::stol(valueCinemasCinemasItem["ScheduleCloseTime"].asString());
		if(!valueCinemasCinemasItem["StandardId"].isNull())
			cinemasObject.standardId = valueCinemasCinemasItem["StandardId"].asString();
		cinemas_.push_back(cinemasObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["SubCode"].isNull())
		subCode_ = value["SubCode"].asString();
	if(!value["SubMsg"].isNull())
		subMsg_ = value["SubMsg"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["LogsId"].isNull())
		logsId_ = value["LogsId"].asString();

}

std::string TaobaoFilmGetCinemasResult::getMsg()const
{
	return msg_;
}

std::string TaobaoFilmGetCinemasResult::getSubMsg()const
{
	return subMsg_;
}

long TaobaoFilmGetCinemasResult::getTotalCount()const
{
	return totalCount_;
}

std::string TaobaoFilmGetCinemasResult::getLogsId()const
{
	return logsId_;
}

std::string TaobaoFilmGetCinemasResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaobaoFilmGetCinemasResult::getSubCode()const
{
	return subCode_;
}

std::vector<TaobaoFilmGetCinemasResult::CinemasItem> TaobaoFilmGetCinemasResult::getCinemas()const
{
	return cinemas_;
}

