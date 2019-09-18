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

#include <alibabacloud/cloudphoto/model/ListTimeLinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListTimeLinesResult::ListTimeLinesResult() :
	ServiceResult()
{}

ListTimeLinesResult::ListTimeLinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTimeLinesResult::~ListTimeLinesResult()
{}

void ListTimeLinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTimeLines = value["TimeLines"]["TimeLine"];
	for (auto value : allTimeLines)
	{
		TimeLine timeLinesObject;
		if(!value["StartTime"].isNull())
			timeLinesObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			timeLinesObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["TotalCount"].isNull())
			timeLinesObject.totalCount = std::stoi(value["TotalCount"].asString());
		if(!value["PhotosCount"].isNull())
			timeLinesObject.photosCount = std::stoi(value["PhotosCount"].asString());
		auto allPhotos = value["Photos"]["Photo"];
		for (auto value : allPhotos)
		{
			TimeLine::Photo photosObject;
			if(!value["Id"].isNull())
				photosObject.id = std::stol(value["Id"].asString());
			if(!value["IdStr"].isNull())
				photosObject.idStr = value["IdStr"].asString();
			if(!value["Title"].isNull())
				photosObject.title = value["Title"].asString();
			if(!value["Location"].isNull())
				photosObject.location = value["Location"].asString();
			if(!value["FileId"].isNull())
				photosObject.fileId = value["FileId"].asString();
			if(!value["State"].isNull())
				photosObject.state = value["State"].asString();
			if(!value["Md5"].isNull())
				photosObject.md5 = value["Md5"].asString();
			if(!value["IsVideo"].isNull())
				photosObject.isVideo = value["IsVideo"].asString() == "true";
			if(!value["Remark"].isNull())
				photosObject.remark = value["Remark"].asString();
			if(!value["Size"].isNull())
				photosObject.size = std::stol(value["Size"].asString());
			if(!value["Width"].isNull())
				photosObject.width = std::stol(value["Width"].asString());
			if(!value["Height"].isNull())
				photosObject.height = std::stol(value["Height"].asString());
			if(!value["Ctime"].isNull())
				photosObject.ctime = std::stol(value["Ctime"].asString());
			if(!value["Mtime"].isNull())
				photosObject.mtime = std::stol(value["Mtime"].asString());
			if(!value["TakenAt"].isNull())
				photosObject.takenAt = std::stol(value["TakenAt"].asString());
			if(!value["ShareExpireTime"].isNull())
				photosObject.shareExpireTime = std::stol(value["ShareExpireTime"].asString());
			if(!value["Like"].isNull())
				photosObject.like = std::stol(value["Like"].asString());
			timeLinesObject.photos.push_back(photosObject);
		}
		timeLines_.push_back(timeLinesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextCursor"].isNull())
		nextCursor_ = std::stoi(value["NextCursor"].asString());
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::vector<ListTimeLinesResult::TimeLine> ListTimeLinesResult::getTimeLines()const
{
	return timeLines_;
}

int ListTimeLinesResult::getNextCursor()const
{
	return nextCursor_;
}

std::string ListTimeLinesResult::getAction()const
{
	return action_;
}

std::string ListTimeLinesResult::getMessage()const
{
	return message_;
}

std::string ListTimeLinesResult::getCode()const
{
	return code_;
}

