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

#include <alibabacloud/vcs/model/ListPersonTraceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListPersonTraceResult::ListPersonTraceResult() :
	ServiceResult()
{}

ListPersonTraceResult::ListPersonTraceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersonTraceResult::~ListPersonTraceResult()
{}

void ListPersonTraceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Day"];
	for (auto valueDataDay : allDataNode)
	{
		Day dataObject;
		if(!valueDataDay["Date"].isNull())
			dataObject.date = valueDataDay["Date"].asString();
		if(!valueDataDay["LastTime"].isNull())
			dataObject.lastTime = valueDataDay["LastTime"].asString();
		if(!valueDataDay["StartTime"].isNull())
			dataObject.startTime = valueDataDay["StartTime"].asString();
		if(!valueDataDay["EndSourceImage"].isNull())
			dataObject.endSourceImage = valueDataDay["EndSourceImage"].asString();
		if(!valueDataDay["DeviceId"].isNull())
			dataObject.deviceId = valueDataDay["DeviceId"].asString();
		if(!valueDataDay["StartTargetImage"].isNull())
			dataObject.startTargetImage = valueDataDay["StartTargetImage"].asString();
		if(!valueDataDay["GroupId"].isNull())
			dataObject.groupId = valueDataDay["GroupId"].asString();
		if(!valueDataDay["PersonId"].isNull())
			dataObject.personId = valueDataDay["PersonId"].asString();
		if(!valueDataDay["StartSourceImage"].isNull())
			dataObject.startSourceImage = valueDataDay["StartSourceImage"].asString();
		if(!valueDataDay["CorpId"].isNull())
			dataObject.corpId = valueDataDay["CorpId"].asString();
		if(!valueDataDay["EndTargetImage"].isNull())
			dataObject.endTargetImage = valueDataDay["EndTargetImage"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListPersonTraceResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPersonTraceResult::getMessage()const
{
	return message_;
}

int ListPersonTraceResult::getPageSize()const
{
	return pageSize_;
}

int ListPersonTraceResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListPersonTraceResult::Day> ListPersonTraceResult::getData()const
{
	return data_;
}

std::string ListPersonTraceResult::getCode()const
{
	return code_;
}

std::string ListPersonTraceResult::getSuccess()const
{
	return success_;
}

