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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetSeatsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmGetSeatsResult::TaobaoFilmGetSeatsResult() :
	ServiceResult()
{}

TaobaoFilmGetSeatsResult::TaobaoFilmGetSeatsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmGetSeatsResult::~TaobaoFilmGetSeatsResult()
{}

void TaobaoFilmGetSeatsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto seatMapNode = value["SeatMap"];
	if(!seatMapNode["MaxCanBuy"].isNull())
		seatMap_.maxCanBuy = std::stol(seatMapNode["MaxCanBuy"].asString());
	if(!seatMapNode["MaxColumn"].isNull())
		seatMap_.maxColumn = std::stol(seatMapNode["MaxColumn"].asString());
	if(!seatMapNode["MaxLeftPx"].isNull())
		seatMap_.maxLeftPx = std::stol(seatMapNode["MaxLeftPx"].asString());
	if(!seatMapNode["MaxRow"].isNull())
		seatMap_.maxRow = std::stol(seatMapNode["MaxRow"].asString());
	if(!seatMapNode["MaxTopPx"].isNull())
		seatMap_.maxTopPx = std::stol(seatMapNode["MaxTopPx"].asString());
	if(!seatMapNode["MinColumn"].isNull())
		seatMap_.minColumn = std::stol(seatMapNode["MinColumn"].asString());
	if(!seatMapNode["MinLeftPx"].isNull())
		seatMap_.minLeftPx = std::stol(seatMapNode["MinLeftPx"].asString());
	if(!seatMapNode["MinRow"].isNull())
		seatMap_.minRow = std::stol(seatMapNode["MinRow"].asString());
	if(!seatMapNode["MinTopPx"].isNull())
		seatMap_.minTopPx = std::stol(seatMapNode["MinTopPx"].asString());
	if(!seatMapNode["Notice"].isNull())
		seatMap_.notice = seatMapNode["Notice"].asString();
	if(!seatMapNode["Regular"].isNull())
		seatMap_.regular = seatMapNode["Regular"].asString() == "true";
	if(!seatMapNode["SeatCount"].isNull())
		seatMap_.seatCount = std::stol(seatMapNode["SeatCount"].asString());
	if(!seatMapNode["SoldCount"].isNull())
		seatMap_.soldCount = std::stol(seatMapNode["SoldCount"].asString());
	if(!seatMapNode["TipMessage"].isNull())
		seatMap_.tipMessage = seatMapNode["TipMessage"].asString();
	auto allSeatsNode = seatMapNode["Seats"]["SeatsItem"];
	for (auto seatMapNodeSeatsSeatsItem : allSeatsNode)
	{
		SeatMap::SeatsItem seatsItemObject;
		if(!seatMapNodeSeatsSeatsItem["Area"].isNull())
			seatsItemObject.area = seatMapNodeSeatsSeatsItem["Area"].asString();
		if(!seatMapNodeSeatsSeatsItem["Column"].isNull())
			seatsItemObject.column = std::stol(seatMapNodeSeatsSeatsItem["Column"].asString());
		if(!seatMapNodeSeatsSeatsItem["ExtId"].isNull())
			seatsItemObject.extId = seatMapNodeSeatsSeatsItem["ExtId"].asString();
		if(!seatMapNodeSeatsSeatsItem["Flag"].isNull())
			seatsItemObject.flag = std::stol(seatMapNodeSeatsSeatsItem["Flag"].asString());
		if(!seatMapNodeSeatsSeatsItem["LeftPx"].isNull())
			seatsItemObject.leftPx = std::stol(seatMapNodeSeatsSeatsItem["LeftPx"].asString());
		if(!seatMapNodeSeatsSeatsItem["Name"].isNull())
			seatsItemObject.name = seatMapNodeSeatsSeatsItem["Name"].asString();
		if(!seatMapNodeSeatsSeatsItem["Row"].isNull())
			seatsItemObject.row = std::stol(seatMapNodeSeatsSeatsItem["Row"].asString());
		if(!seatMapNodeSeatsSeatsItem["RowName"].isNull())
			seatsItemObject.rowName = seatMapNodeSeatsSeatsItem["RowName"].asString();
		if(!seatMapNodeSeatsSeatsItem["Status"].isNull())
			seatsItemObject.status = std::stol(seatMapNodeSeatsSeatsItem["Status"].asString());
		if(!seatMapNodeSeatsSeatsItem["TopPx"].isNull())
			seatsItemObject.topPx = std::stol(seatMapNodeSeatsSeatsItem["TopPx"].asString());
		seatMap_.seats.push_back(seatsItemObject);
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

std::string TaobaoFilmGetSeatsResult::getMsg()const
{
	return msg_;
}

std::string TaobaoFilmGetSeatsResult::getSubMsg()const
{
	return subMsg_;
}

std::string TaobaoFilmGetSeatsResult::getLogsId()const
{
	return logsId_;
}

std::string TaobaoFilmGetSeatsResult::getErrorCode()const
{
	return errorCode_;
}

TaobaoFilmGetSeatsResult::SeatMap TaobaoFilmGetSeatsResult::getSeatMap()const
{
	return seatMap_;
}

std::string TaobaoFilmGetSeatsResult::getSubCode()const
{
	return subCode_;
}

