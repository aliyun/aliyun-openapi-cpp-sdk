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

#include <alibabacloud/dataworks-public/model/ListShiftPersonnelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListShiftPersonnelsResult::ListShiftPersonnelsResult() :
	ServiceResult()
{}

ListShiftPersonnelsResult::ListShiftPersonnelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListShiftPersonnelsResult::~ListShiftPersonnelsResult()
{}

void ListShiftPersonnelsResult::parse(const std::string &payload)
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
	auto allShiftPersonsNode = pagingNode["ShiftPersons"]["ShiftPersonsItem"];
	for (auto pagingNodeShiftPersonsShiftPersonsItem : allShiftPersonsNode)
	{
		Paging::ShiftPersonsItem shiftPersonsItemObject;
		if(!pagingNodeShiftPersonsShiftPersonsItem["ShiftPersonUID"].isNull())
			shiftPersonsItemObject.shiftPersonUID = pagingNodeShiftPersonsShiftPersonsItem["ShiftPersonUID"].asString();
		if(!pagingNodeShiftPersonsShiftPersonsItem["ShiftPersonName"].isNull())
			shiftPersonsItemObject.shiftPersonName = pagingNodeShiftPersonsShiftPersonsItem["ShiftPersonName"].asString();
		if(!pagingNodeShiftPersonsShiftPersonsItem["BeginTime"].isNull())
			shiftPersonsItemObject.beginTime = std::stol(pagingNodeShiftPersonsShiftPersonsItem["BeginTime"].asString());
		if(!pagingNodeShiftPersonsShiftPersonsItem["EndTime"].isNull())
			shiftPersonsItemObject.endTime = std::stol(pagingNodeShiftPersonsShiftPersonsItem["EndTime"].asString());
		paging_.shiftPersons.push_back(shiftPersonsItemObject);
	}

}

ListShiftPersonnelsResult::Paging ListShiftPersonnelsResult::getPaging()const
{
	return paging_;
}

