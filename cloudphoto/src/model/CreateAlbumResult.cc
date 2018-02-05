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

#include <alibabacloud/cloudphoto/model/CreateAlbumResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

CreateAlbumResult::CreateAlbumResult() :
	ServiceResult()
{}

CreateAlbumResult::CreateAlbumResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAlbumResult::~CreateAlbumResult()
{}

void CreateAlbumResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAlbum = value["Album"];
	for (auto value : allAlbum)
	{
		Album albumObject;
		if(!value["Id"].isNull())
			albumObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			albumObject.name = value["Name"].asString();
		if(!value["State"].isNull())
			albumObject.state = value["State"].asString();
		if(!value["Remark"].isNull())
			albumObject.remark = value["Remark"].asString();
		if(!value["PhotosCount"].isNull())
			albumObject.photosCount = std::stol(value["PhotosCount"].asString());
		if(!value["Ctime"].isNull())
			albumObject.ctime = std::stol(value["Ctime"].asString());
		if(!value["Mtime"].isNull())
			albumObject.mtime = std::stol(value["Mtime"].asString());
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
			if(!value["Width"].isNull())
				coverObject.width = std::stol(value["Width"].asString());
			if(!value["Height"].isNull())
				coverObject.height = std::stol(value["Height"].asString());
			if(!value["Ctime"].isNull())
				coverObject.ctime = std::stol(value["Ctime"].asString());
			if(!value["Mtime"].isNull())
				coverObject.mtime = std::stol(value["Mtime"].asString());
			if(!value["Remark"].isNull())
				coverObject.remark = value["Remark"].asString();
			albumObject.cover.push_back(coverObject);
		}
		album_.push_back(albumObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string CreateAlbumResult::getAction()const
{
	return action_;
}

std::string CreateAlbumResult::getMessage()const
{
	return message_;
}

std::vector<CreateAlbumResult::Album> CreateAlbumResult::getAlbum()const
{
	return album_;
}

std::string CreateAlbumResult::getCode()const
{
	return code_;
}

