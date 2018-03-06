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
		Moment momentsObject;
		if(!value["Id"].isNull())
			momentsObject.id = std::stol(value["Id"].asString());
		if(!value["IdStr"].isNull())
			momentsObject.idStr = value["IdStr"].asString();
		if(!value["LocationName"].isNull())
			momentsObject.locationName = value["LocationName"].asString();
		if(!value["PhotosCount"].isNull())
			momentsObject.photosCount = std::stoi(value["PhotosCount"].asString());
		if(!value["State"].isNull())
			momentsObject.state = value["State"].asString();
		if(!value["TakenAt"].isNull())
			momentsObject.takenAt = std::stol(value["TakenAt"].asString());
		if(!value["Ctime"].isNull())
			momentsObject.ctime = std::stol(value["Ctime"].asString());
		if(!value["Mtime"].isNull())
			momentsObject.mtime = std::stol(value["Mtime"].asString());
		moments_.push_back(momentsObject);
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

std::string ListMomentsResult::getNextCursor()const
{
	return nextCursor_;
}

int ListMomentsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListMomentsResult::getAction()const
{
	return action_;
}

std::string ListMomentsResult::getMessage()const
{
	return message_;
}

std::vector<ListMomentsResult::Moment> ListMomentsResult::getMoments()const
{
	return moments_;
}

std::string ListMomentsResult::getCode()const
{
	return code_;
}

