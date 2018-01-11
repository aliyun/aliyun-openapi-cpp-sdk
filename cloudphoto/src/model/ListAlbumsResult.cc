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
		Album albumObject;
		albumObject.id = std::stol(value["Id"].asString());
		albumObject.name = value["Name"].asString();
		albumObject.state = value["State"].asString();
		albumObject.photosCount = std::stol(value["PhotosCount"].asString());
		albumObject.ctime = std::stol(value["Ctime"].asString());
		albumObject.mtime = std::stol(value["Mtime"].asString());
		auto allCover = value["Cover"];
		for (auto value : allCover)
		{
			Album::Cover coverObject;
			coverObject.id = std::stol(value["Id"].asString());
			coverObject.title = value["Title"].asString();
			coverObject.fileId = value["FileId"].asString();
			coverObject.state = value["State"].asString();
			coverObject.md5 = value["Md5"].asString();
			coverObject.isVideo = std::stoi(value["IsVideo"].asString());
			coverObject.remark = value["Remark"].asString();
			coverObject.width = std::stol(value["Width"].asString());
			coverObject.height = std::stol(value["Height"].asString());
			coverObject.ctime = std::stol(value["Ctime"].asString());
			coverObject.mtime = std::stol(value["Mtime"].asString());
			albumObject.cover.push_back(coverObject);
		}
		albums_.push_back(albumObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	nextCursor_ = value["NextCursor"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	action_ = value["Action"].asString();

}

std::string ListAlbumsResult::getNextCursor()const
{
	return nextCursor_;
}

void ListAlbumsResult::setNextCursor(const std::string& nextCursor)
{
	nextCursor_ = nextCursor;
}

int ListAlbumsResult::getTotalCount()const
{
	return totalCount_;
}

void ListAlbumsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string ListAlbumsResult::getAction()const
{
	return action_;
}

void ListAlbumsResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string ListAlbumsResult::getMessage()const
{
	return message_;
}

void ListAlbumsResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string ListAlbumsResult::getCode()const
{
	return code_;
}

void ListAlbumsResult::setCode(const std::string& code)
{
	code_ = code;
}

