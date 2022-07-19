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

#include <alibabacloud/dataworks-public/model/ListShiftSchedulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListShiftSchedulesResult::ListShiftSchedulesResult() :
	ServiceResult()
{}

ListShiftSchedulesResult::ListShiftSchedulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListShiftSchedulesResult::~ListShiftSchedulesResult()
{}

void ListShiftSchedulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pagingNode = value["Paging"];
	if(!pagingNode["PageNumber"].isNull())
		paging_.pageNumber = std::stoi(pagingNode["PageNumber"].asString());
	if(!pagingNode["PageSize"].isNull())
		paging_.pageSize = std::stoi(pagingNode["PageSize"].asString());
	if(!pagingNode["TotalCount"].isNull())
		paging_.totalCount = std::stoi(pagingNode["TotalCount"].asString());
	auto allShiftSchedulesNode = pagingNode["ShiftSchedules"]["ShiftSchedulesItem"];
	for (auto pagingNodeShiftSchedulesShiftSchedulesItem : allShiftSchedulesNode)
	{
		Paging::ShiftSchedulesItem shiftSchedulesItemObject;
		if(!pagingNodeShiftSchedulesShiftSchedulesItem["ShiftScheduleIdentifier"].isNull())
			shiftSchedulesItemObject.shiftScheduleIdentifier = pagingNodeShiftSchedulesShiftSchedulesItem["ShiftScheduleIdentifier"].asString();
		if(!pagingNodeShiftSchedulesShiftSchedulesItem["ShiftScheduleName"].isNull())
			shiftSchedulesItemObject.shiftScheduleName = pagingNodeShiftSchedulesShiftSchedulesItem["ShiftScheduleName"].asString();
		paging_.shiftSchedules.push_back(shiftSchedulesItemObject);
	}

}

ListShiftSchedulesResult::Paging ListShiftSchedulesResult::getPaging()const
{
	return paging_;
}

