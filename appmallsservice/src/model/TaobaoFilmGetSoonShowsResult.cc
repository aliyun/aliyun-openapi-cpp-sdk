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

#include <alibabacloud/appmallsservice/model/TaobaoFilmGetSoonShowsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmGetSoonShowsResult::TaobaoFilmGetSoonShowsResult() :
	ServiceResult()
{}

TaobaoFilmGetSoonShowsResult::TaobaoFilmGetSoonShowsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmGetSoonShowsResult::~TaobaoFilmGetSoonShowsResult()
{}

void TaobaoFilmGetSoonShowsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allShows = value["Shows"]["ShowsItem"];
	for (auto value : allShows)
	{
		ShowsItem showsObject;
		if(!value["BackgroundPicture"].isNull())
			showsObject.backgroundPicture = value["BackgroundPicture"].asString();
		if(!value["Country"].isNull())
			showsObject.country = value["Country"].asString();
		if(!value["Description"].isNull())
			showsObject.description = value["Description"].asString();
		if(!value["Director"].isNull())
			showsObject.director = value["Director"].asString();
		if(!value["Duration"].isNull())
			showsObject.duration = std::stol(value["Duration"].asString());
		if(!value["Highlight"].isNull())
			showsObject.highlight = value["Highlight"].asString();
		if(!value["Id"].isNull())
			showsObject.id = std::stol(value["Id"].asString());
		if(!value["Language"].isNull())
			showsObject.language = value["Language"].asString();
		if(!value["LeadingRole"].isNull())
			showsObject.leadingRole = value["LeadingRole"].asString();
		if(!value["OpenDay"].isNull())
			showsObject.openDay = value["OpenDay"].asString();
		if(!value["OpenTime"].isNull())
			showsObject.openTime = value["OpenTime"].asString();
		if(!value["Poster"].isNull())
			showsObject.poster = value["Poster"].asString();
		if(!value["Remark"].isNull())
			showsObject.remark = value["Remark"].asString();
		if(!value["ShowMark"].isNull())
			showsObject.showMark = value["ShowMark"].asString();
		if(!value["ShowName"].isNull())
			showsObject.showName = value["ShowName"].asString();
		if(!value["ShowNameEn"].isNull())
			showsObject.showNameEn = value["ShowNameEn"].asString();
		if(!value["Type"].isNull())
			showsObject.type = value["Type"].asString();
		auto allShowVersionList = value["ShowVersionList"]["ShowVersionList"];
		for (auto value : allShowVersionList)
			showsObject.showVersionList.push_back(value.asString());
		auto allTrailerList = value["TrailerList"]["TrailerList"];
		for (auto value : allTrailerList)
			showsObject.trailerList.push_back(value.asString());
		shows_.push_back(showsObject);
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

std::string TaobaoFilmGetSoonShowsResult::getMsg()const
{
	return msg_;
}

std::string TaobaoFilmGetSoonShowsResult::getSubMsg()const
{
	return subMsg_;
}

std::vector<TaobaoFilmGetSoonShowsResult::ShowsItem> TaobaoFilmGetSoonShowsResult::getShows()const
{
	return shows_;
}

std::string TaobaoFilmGetSoonShowsResult::getLogsId()const
{
	return logsId_;
}

std::string TaobaoFilmGetSoonShowsResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaobaoFilmGetSoonShowsResult::getSubCode()const
{
	return subCode_;
}

