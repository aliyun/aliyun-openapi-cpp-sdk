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

#include <alibabacloud/cloudphoto/model/ListFacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListFacesResult::ListFacesResult() :
	ServiceResult()
{}

ListFacesResult::ListFacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFacesResult::~ListFacesResult()
{}

void ListFacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allFaces = value["Faces"]["Face"];
	for (auto value : allFaces)
	{
		Face faceObject;
		faceObject.id = std::stol(value["Id"].asString());
		faceObject.name = value["Name"].asString();
		faceObject.photosCount = std::stoi(value["PhotosCount"].asString());
		faceObject.state = value["State"].asString();
		faceObject.isMe = std::stoi(value["IsMe"].asString());
		faceObject.ctime = std::stol(value["Ctime"].asString());
		faceObject.mtime = std::stol(value["Mtime"].asString());
		auto allCover = value["Cover"];
		for (auto value : allCover)
		{
			Face::Cover coverObject;
			coverObject.id = std::stol(value["Id"].asString());
			coverObject.title = value["Title"].asString();
			coverObject.fileId = value["FileId"].asString();
			coverObject.state = value["State"].asString();
			coverObject.md5 = value["Md5"].asString();
			coverObject.isVideo = std::stoi(value["IsVideo"].asString());
			coverObject.width = std::stol(value["Width"].asString());
			coverObject.height = std::stol(value["Height"].asString());
			coverObject.ctime = std::stol(value["Ctime"].asString());
			coverObject.mtime = std::stol(value["Mtime"].asString());
			coverObject.remark = value["Remark"].asString();
			faceObject.cover.push_back(coverObject);
		}
		auto allAxis = value["Axis"]["Axis"];
		for (auto value : allAxis)
			faceObject.axis.push_back(value.asString());
		faces_.push_back(faceObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	nextCursor_ = value["NextCursor"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	action_ = value["Action"].asString();

}

std::string ListFacesResult::getNextCursor()const
{
	return nextCursor_;
}

void ListFacesResult::setNextCursor(const std::string& nextCursor)
{
	nextCursor_ = nextCursor;
}

int ListFacesResult::getTotalCount()const
{
	return totalCount_;
}

void ListFacesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string ListFacesResult::getAction()const
{
	return action_;
}

void ListFacesResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string ListFacesResult::getMessage()const
{
	return message_;
}

void ListFacesResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string ListFacesResult::getCode()const
{
	return code_;
}

void ListFacesResult::setCode(const std::string& code)
{
	code_ = code;
}

