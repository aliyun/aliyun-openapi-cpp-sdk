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

#include <alibabacloud/cloudphoto/model/ListAlbumsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListAlbumsResult::ListAlbumsResult() :
	ServiceResult()
{}

ListAlbumsResult::ListAlbumsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlbumsResult::~ListAlbumsResult()
{}

void ListAlbumsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAlbums = value["Albums"]["Album"];
	for (auto value : allAlbums)
	{
		Album albumsObject;
		if(!value["Id"].isNull())
			albumsObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			albumsObject.name = value["Name"].asString();
		if(!value["State"].isNull())
			albumsObject.state = value["State"].asString();
		if(!value["PhotosCount"].isNull())
			albumsObject.photosCount = std::stol(value["PhotosCount"].asString());
		if(!value["Ctime"].isNull())
			albumsObject.ctime = std::stol(value["Ctime"].asString());
		if(!value["Mtime"].isNull())
			albumsObject.mtime = std::stol(value["Mtime"].asString());
		auto allCover = value["Cover"];
		for (auto value : allCover)
		{
			Album::Cover coverObject;
			if(!value["Id"].isNull())
				coverObject.id = std::stol(value["Id"].asString());
			if(!value["Title"].isNull())
				coverObject.title = value["Title"].asString();
			if(!value["FileId"].isNull())
				coverObject.fileId = value["FileId"].asString();
			if(!value["State"].isNull())
				coverObject.state = value["State"].asString();
			if(!value["Md5"].isNull())
				coverObject.md5 = value["Md5"].asString();
			if(!value["IsVideo"].isNull())
				coverObject.isVideo = value["IsVideo"].asString() == "true";
			if(!value["Remark"].isNull())
				coverObject.remark = value["Remark"].asString();
			if(!value["Width"].isNull())
				coverObject.width = std::stol(value["Width"].asString());
			if(!value["Height"].isNull())
				coverObject.height = std::stol(value["Height"].asString());
			if(!value["Ctime"].isNull())
				coverObject.ctime = std::stol(value["Ctime"].asString());
			if(!value["Mtime"].isNull())
				coverObject.mtime = std::stol(value["Mtime"].asString());
			albumsObject.cover.push_back(coverObject);
		}
		albums_.push_back(albumsObject);
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

std::string ListAlbumsResult::getNextCursor()const
{
	return nextCursor_;
}

int ListAlbumsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAlbumsResult::getAction()const
{
	return action_;
}

std::string ListAlbumsResult::getMessage()const
{
	return message_;
}

std::string ListAlbumsResult::getCode()const
{
	return code_;
}

std::vector<ListAlbumsResult::Album> ListAlbumsResult::getAlbums()const
{
	return albums_;
}

