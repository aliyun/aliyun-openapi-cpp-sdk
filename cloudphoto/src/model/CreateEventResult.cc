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

#include <alibabacloud/cloudphoto/model/CreateEventResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

CreateEventResult::CreateEventResult() :
	ServiceResult()
{}

CreateEventResult::CreateEventResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateEventResult::~CreateEventResult()
{}

void CreateEventResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allEvent = value["Event"];
	for (auto value : allEvent)
	{
		Event eventObject;
		if(!value["Id"].isNull())
			eventObject.id = std::stol(value["Id"].asString());
		if(!value["IdStr"].isNull())
			eventObject.idStr = value["IdStr"].asString();
		if(!value["Title"].isNull())
			eventObject.title = value["Title"].asString();
		if(!value["BannerPhotoId"].isNull())
			eventObject.bannerPhotoId = value["BannerPhotoId"].asString();
		if(!value["Identity"].isNull())
			eventObject.identity = value["Identity"].asString();
		if(!value["SplashPhotoId"].isNull())
			eventObject.splashPhotoId = value["SplashPhotoId"].asString();
		if(!value["State"].isNull())
			eventObject.state = value["State"].asString();
		if(!value["WeixinTitle"].isNull())
			eventObject.weixinTitle = value["WeixinTitle"].asString();
		if(!value["WatermarkPhotoId"].isNull())
			eventObject.watermarkPhotoId = value["WatermarkPhotoId"].asString();
		if(!value["StartAt"].isNull())
			eventObject.startAt = std::stol(value["StartAt"].asString());
		if(!value["EndAt"].isNull())
			eventObject.endAt = std::stol(value["EndAt"].asString());
		if(!value["Ctime"].isNull())
			eventObject.ctime = std::stol(value["Ctime"].asString());
		if(!value["Mtime"].isNull())
			eventObject.mtime = std::stol(value["Mtime"].asString());
		if(!value["ViewsCount"].isNull())
			eventObject.viewsCount = std::stol(value["ViewsCount"].asString());
		if(!value["LibraryId"].isNull())
			eventObject.libraryId = value["LibraryId"].asString();
		if(!value["IdStr"].isNull())
			eventObject.idStr1 = value["IdStr"].asString();
		event_.push_back(eventObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string CreateEventResult::getAction()const
{
	return action_;
}

std::string CreateEventResult::getMessage()const
{
	return message_;
}

std::vector<CreateEventResult::Event> CreateEventResult::getEvent()const
{
	return event_;
}

std::string CreateEventResult::getCode()const
{
	return code_;
}

