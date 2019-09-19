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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allShowsNode = value["Shows"]["ShowsItem"];
	for (auto valueShowsShowsItem : allShowsNode)
	{
		ShowsItem showsObject;
		if(!valueShowsShowsItem["BackgroundPicture"].isNull())
			showsObject.backgroundPicture = valueShowsShowsItem["BackgroundPicture"].asString();
		if(!valueShowsShowsItem["Country"].isNull())
			showsObject.country = valueShowsShowsItem["Country"].asString();
		if(!valueShowsShowsItem["Description"].isNull())
			showsObject.description = valueShowsShowsItem["Description"].asString();
		if(!valueShowsShowsItem["Director"].isNull())
			showsObject.director = valueShowsShowsItem["Director"].asString();
		if(!valueShowsShowsItem["Duration"].isNull())
			showsObject.duration = std::stol(valueShowsShowsItem["Duration"].asString());
		if(!valueShowsShowsItem["Highlight"].isNull())
			showsObject.highlight = valueShowsShowsItem["Highlight"].asString();
		if(!valueShowsShowsItem["Id"].isNull())
			showsObject.id = std::stol(valueShowsShowsItem["Id"].asString());
		if(!valueShowsShowsItem["Language"].isNull())
			showsObject.language = valueShowsShowsItem["Language"].asString();
		if(!valueShowsShowsItem["LeadingRole"].isNull())
			showsObject.leadingRole = valueShowsShowsItem["LeadingRole"].asString();
		if(!valueShowsShowsItem["OpenDay"].isNull())
			showsObject.openDay = valueShowsShowsItem["OpenDay"].asString();
		if(!valueShowsShowsItem["OpenTime"].isNull())
			showsObject.openTime = valueShowsShowsItem["OpenTime"].asString();
		if(!valueShowsShowsItem["Poster"].isNull())
			showsObject.poster = valueShowsShowsItem["Poster"].asString();
		if(!valueShowsShowsItem["Remark"].isNull())
			showsObject.remark = valueShowsShowsItem["Remark"].asString();
		if(!valueShowsShowsItem["ShowMark"].isNull())
			showsObject.showMark = valueShowsShowsItem["ShowMark"].asString();
		if(!valueShowsShowsItem["ShowName"].isNull())
			showsObject.showName = valueShowsShowsItem["ShowName"].asString();
		if(!valueShowsShowsItem["ShowNameEn"].isNull())
			showsObject.showNameEn = valueShowsShowsItem["ShowNameEn"].asString();
		if(!valueShowsShowsItem["Type"].isNull())
			showsObject.type = valueShowsShowsItem["Type"].asString();
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

