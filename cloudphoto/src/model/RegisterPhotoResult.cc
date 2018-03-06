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

#include <alibabacloud/cloudphoto/model/RegisterPhotoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

RegisterPhotoResult::RegisterPhotoResult() :
	ServiceResult()
{}

RegisterPhotoResult::RegisterPhotoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RegisterPhotoResult::~RegisterPhotoResult()
{}

void RegisterPhotoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPhoto = value["Photo"];
	for (auto value : allPhoto)
	{
		Photo photoObject;
		if(!value["Id"].isNull())
			photoObject.id = std::stol(value["Id"].asString());
		if(!value["IdStr"].isNull())
			photoObject.idStr = value["IdStr"].asString();
		if(!value["Title"].isNull())
			photoObject.title = value["Title"].asString();
		if(!value["Location"].isNull())
			photoObject.location = value["Location"].asString();
		if(!value["FileId"].isNull())
			photoObject.fileId = value["FileId"].asString();
		if(!value["State"].isNull())
			photoObject.state = value["State"].asString();
		if(!value["Md5"].isNull())
			photoObject.md5 = value["Md5"].asString();
		if(!value["IsVideo"].isNull())
			photoObject.isVideo = value["IsVideo"].asString() == "true";
		if(!value["Size"].isNull())
			photoObject.size = std::stol(value["Size"].asString());
		if(!value["Remark"].isNull())
			photoObject.remark = value["Remark"].asString();
		if(!value["Width"].isNull())
			photoObject.width = std::stol(value["Width"].asString());
		if(!value["Height"].isNull())
			photoObject.height = std::stol(value["Height"].asString());
		if(!value["Ctime"].isNull())
			photoObject.ctime = std::stol(value["Ctime"].asString());
		if(!value["Mtime"].isNull())
			photoObject.mtime = std::stol(value["Mtime"].asString());
		if(!value["TakenAt"].isNull())
			photoObject.takenAt = std::stol(value["TakenAt"].asString());
		if(!value["ShareExpireTime"].isNull())
			photoObject.shareExpireTime = std::stol(value["ShareExpireTime"].asString());
		photo_.push_back(photoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string RegisterPhotoResult::getAction()const
{
	return action_;
}

std::string RegisterPhotoResult::getMessage()const
{
	return message_;
}

std::vector<RegisterPhotoResult::Photo> RegisterPhotoResult::getPhoto()const
{
	return photo_;
}

std::string RegisterPhotoResult::getCode()const
{
	return code_;
}

