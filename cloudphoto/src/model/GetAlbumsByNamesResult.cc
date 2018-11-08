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

#include <alibabacloud/cloudphoto/model/GetAlbumsByNamesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

GetAlbumsByNamesResult::GetAlbumsByNamesResult() :
	ServiceResult()
{}

GetAlbumsByNamesResult::GetAlbumsByNamesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAlbumsByNamesResult::~GetAlbumsByNamesResult()
{}

void GetAlbumsByNamesResult::parse(const std::string &payload)
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
		if(!value["IdStr"].isNull())
			albumsObject.idStr = value["IdStr"].asString();
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
		auto coverNode = value["Cover"];
		if(!coverNode["Id"].isNull())
			albumsObject.cover.id = std::stol(coverNode["Id"].asString());
		if(!coverNode["IdStr"].isNull())
			albumsObject.cover.idStr = coverNode["IdStr"].asString();
		if(!coverNode["Title"].isNull())
			albumsObject.cover.title = coverNode["Title"].asString();
		if(!coverNode["FileId"].isNull())
			albumsObject.cover.fileId = coverNode["FileId"].asString();
		if(!coverNode["State"].isNull())
			albumsObject.cover.state = coverNode["State"].asString();
		if(!coverNode["Md5"].isNull())
			albumsObject.cover.md5 = coverNode["Md5"].asString();
		if(!coverNode["IsVideo"].isNull())
			albumsObject.cover.isVideo = coverNode["IsVideo"].asString() == "true";
		if(!coverNode["Remark"].isNull())
			albumsObject.cover.remark = coverNode["Remark"].asString();
		if(!coverNode["Width"].isNull())
			albumsObject.cover.width = std::stol(coverNode["Width"].asString());
		if(!coverNode["Height"].isNull())
			albumsObject.cover.height = std::stol(coverNode["Height"].asString());
		if(!coverNode["Ctime"].isNull())
			albumsObject.cover.ctime = std::stol(coverNode["Ctime"].asString());
		if(!coverNode["Mtime"].isNull())
			albumsObject.cover.mtime = std::stol(coverNode["Mtime"].asString());
		albums_.push_back(albumsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string GetAlbumsByNamesResult::getAction()const
{
	return action_;
}

std::string GetAlbumsByNamesResult::getMessage()const
{
	return message_;
}

std::string GetAlbumsByNamesResult::getCode()const
{
	return code_;
}

std::vector<GetAlbumsByNamesResult::Album> GetAlbumsByNamesResult::getAlbums()const
{
	return albums_;
}

