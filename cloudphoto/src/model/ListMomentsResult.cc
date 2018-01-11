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

#include <alibabacloud/cloudphoto/model/ListMomentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListMomentsResult::ListMomentsResult() :
	ServiceResult()
{}

ListMomentsResult::ListMomentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMomentsResult::~ListMomentsResult()
{}

void ListMomentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMoments = value["Moments"]["Moment"];
	for (auto value : allMoments)
	{
		Moment momentObject;
		momentObject.id = std::stol(value["Id"].asString());
		momentObject.locationName = value["LocationName"].asString();
		momentObject.photosCount = std::stoi(value["PhotosCount"].asString());
		momentObject.state = value["State"].asString();
		momentObject.takenAt = std::stol(value["TakenAt"].asString());
		momentObject.ctime = std::stol(value["Ctime"].asString());
		momentObject.mtime = std::stol(value["Mtime"].asString());
		moments_.push_back(momentObject);
	}
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	nextCursor_ = value["NextCursor"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	action_ = value["Action"].asString();

}

std::string ListMomentsResult::getNextCursor()const
{
	return nextCursor_;
}

void ListMomentsResult::setNextCursor(const std::string& nextCursor)
{
	nextCursor_ = nextCursor;
}

int ListMomentsResult::getTotalCount()const
{
	return totalCount_;
}

void ListMomentsResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string ListMomentsResult::getAction()const
{
	return action_;
}

void ListMomentsResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string ListMomentsResult::getMessage()const
{
	return message_;
}

void ListMomentsResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string ListMomentsResult::getCode()const
{
	return code_;
}

void ListMomentsResult::setCode(const std::string& code)
{
	code_ = code;
}

