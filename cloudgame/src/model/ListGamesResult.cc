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

#include <alibabacloud/cloudgame/model/ListGamesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudgame;
using namespace AlibabaCloud::Cloudgame::Model;

ListGamesResult::ListGamesResult() :
	ServiceResult()
{}

ListGamesResult::ListGamesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGamesResult::~ListGamesResult()
{}

void ListGamesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["DataListItem"];
	for (auto valueDataListDataListItem : allDataListNode)
	{
		DataListItem dataListObject;
		if(!valueDataListDataListItem["GameId"].isNull())
			dataListObject.gameId = valueDataListDataListItem["GameId"].asString();
		if(!valueDataListDataListItem["GameName"].isNull())
			dataListObject.gameName = valueDataListDataListItem["GameName"].asString();
		if(!valueDataListDataListItem["InstallPath"].isNull())
			dataListObject.installPath = valueDataListDataListItem["InstallPath"].asString();
		if(!valueDataListDataListItem["SavePath"].isNull())
			dataListObject.savePath = valueDataListDataListItem["SavePath"].asString();
		if(!valueDataListDataListItem["Resolution"].isNull())
			dataListObject.resolution = valueDataListDataListItem["Resolution"].asString();
		if(!valueDataListDataListItem["FrameRate"].isNull())
			dataListObject.frameRate = valueDataListDataListItem["FrameRate"].asString();
		if(!valueDataListDataListItem["InputType"].isNull())
			dataListObject.inputType = valueDataListDataListItem["InputType"].asString();
		if(!valueDataListDataListItem["Device"].isNull())
			dataListObject.device = valueDataListDataListItem["Device"].asString();
		if(!valueDataListDataListItem["Status"].isNull())
			dataListObject.status = valueDataListDataListItem["Status"].asString();
		if(!valueDataListDataListItem["CurVersion"].isNull())
			dataListObject.curVersion = valueDataListDataListItem["CurVersion"].asString();
		dataList_.push_back(dataListObject);
	}
	if(!value["Count"].isNull())
		count_ = value["Count"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

std::vector<ListGamesResult::DataListItem> ListGamesResult::getDataList()const
{
	return dataList_;
}

int ListGamesResult::getPageSize()const
{
	return pageSize_;
}

int ListGamesResult::getCurrentPage()const
{
	return currentPage_;
}

std::string ListGamesResult::getCount()const
{
	return count_;
}

