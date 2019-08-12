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

#include <alibabacloud/cloudphoto/model/ListEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListEventsResult::ListEventsResult() :
	ServiceResult()
{}

ListEventsResult::ListEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEventsResult::~ListEventsResult()
{}

void ListEventsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEvents = value["Events"]["Event"];
	for (auto value : allEvents)
	{
		Event eventsObject;
		if(!value["Id"].isNull())
			eventsObject.id = std::stol(value["Id"].asString());
		if(!value["IdStr"].isNull())
			eventsObject.idStr = value["IdStr"].asString();
		if(!value["Title"].isNull())
			eventsObject.title = value["Title"].asString();
		if(!value["BannerPhotoId"].isNull())
			eventsObject.bannerPhotoId = value["BannerPhotoId"].asString();
		if(!value["Identity"].isNull())
			eventsObject.identity = value["Identity"].asString();
		if(!value["SplashPhotoId"].isNull())
			eventsObject.splashPhotoId = value["SplashPhotoId"].asString();
		if(!value["State"].isNull())
			eventsObject.state = value["State"].asString();
		if(!value["WeixinTitle"].isNull())
			eventsObject.weixinTitle = value["WeixinTitle"].asString();
		if(!value["WatermarkPhotoId"].isNull())
			eventsObject.watermarkPhotoId = value["WatermarkPhotoId"].asString();
		if(!value["StartAt"].isNull())
			eventsObject.startAt = std::stol(value["StartAt"].asString());
		if(!value["EndAt"].isNull())
			eventsObject.endAt = std::stol(value["EndAt"].asString());
		if(!value["Ctime"].isNull())
			eventsObject.ctime = std::stol(value["Ctime"].asString());
		if(!value["Mtime"].isNull())
			eventsObject.mtime = std::stol(value["Mtime"].asString());
		if(!value["ViewsCount"].isNull())
			eventsObject.viewsCount = std::stol(value["ViewsCount"].asString());
		if(!value["LibraryId"].isNull())
			eventsObject.libraryId = value["LibraryId"].asString();
		if(!value["IdStr"].isNull())
			eventsObject.idStr1 = value["IdStr"].asString();
		events_.push_back(eventsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextCursor"].isNull())
		nextCursor_ = value["NextCursor"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string ListEventsResult::getNextCursor()const
{
	return nextCursor_;
}

int ListEventsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListEventsResult::getAction()const
{
	return action_;
}

std::string ListEventsResult::getMessage()const
{
	return message_;
}

std::vector<ListEventsResult::Event> ListEventsResult::getEvents()const
{
	return events_;
}

std::string ListEventsResult::getCode()const
{
	return code_;
}

