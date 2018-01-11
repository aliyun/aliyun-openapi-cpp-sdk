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

#include <alibabacloud/cloudphoto/model/ListTimeLinePhotosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListTimeLinePhotosResult::ListTimeLinePhotosResult() :
	ServiceResult()
{}

ListTimeLinePhotosResult::ListTimeLinePhotosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTimeLinePhotosResult::~ListTimeLinePhotosResult()
{}

void ListTimeLinePhotosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPhotos = value["Photos"]["Photo"];
	for (auto value : allPhotos)
	{
		Photo photoObject;
		photoObject.id = std::stol(value["Id"].asString());
		photoObject.title = value["Title"].asString();
		photoObject.fileId = value["FileId"].asString();
		photoObject.location = value["Location"].asString();
		photoObject.state = value["State"].asString();
		photoObject.md5 = value["Md5"].asString();
		photoObject.isVideo = std::stoi(value["IsVideo"].asString());
		photoObject.remark = value["Remark"].asString();
		photoObject.size = std::stol(value["Size"].asString());
		photoObject.width = std::stol(value["Width"].asString());
		photoObject.height = std::stol(value["Height"].asString());
		photoObject.ctime = std::stol(value["Ctime"].asString());
		photoObject.mtime = std::stol(value["Mtime"].asString());
		photoObject.takenAt = std::stol(value["TakenAt"].asString());
		photoObject.shareExpireTime = std::stol(value["ShareExpireTime"].asString());
		photoObject.like = std::stol(value["Like"].asString());
		photos_.push_back(photoObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	action_ = value["Action"].asString();

}

int ListTimeLinePhotosResult::getTotalCount()const
{
	return totalCount_;
}

void ListTimeLinePhotosResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string ListTimeLinePhotosResult::getAction()const
{
	return action_;
}

void ListTimeLinePhotosResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string ListTimeLinePhotosResult::getMessage()const
{
	return message_;
}

void ListTimeLinePhotosResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string ListTimeLinePhotosResult::getCode()const
{
	return code_;
}

void ListTimeLinePhotosResult::setCode(const std::string& code)
{
	code_ = code;
}

