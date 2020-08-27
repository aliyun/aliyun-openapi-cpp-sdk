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

#include <alibabacloud/vcs/model/ListCorpGroupMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListCorpGroupMetricsResult::ListCorpGroupMetricsResult() :
	ServiceResult()
{}

ListCorpGroupMetricsResult::ListCorpGroupMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCorpGroupMetricsResult::~ListCorpGroupMetricsResult()
{}

void ListCorpGroupMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["DateId"].isNull())
			dataObject.dateId = valueDataDataItem["DateId"].asString();
		if(!valueDataDataItem["TagMetrics"].isNull())
			dataObject.tagMetrics = valueDataDataItem["TagMetrics"].asString();
		if(!valueDataDataItem["TagCode"].isNull())
			dataObject.tagCode = valueDataDataItem["TagCode"].asString();
		if(!valueDataDataItem["TagValue"].isNull())
			dataObject.tagValue = valueDataDataItem["TagValue"].asString();
		if(!valueDataDataItem["CorpGroupId"].isNull())
			dataObject.corpGroupId = valueDataDataItem["CorpGroupId"].asString();
		if(!valueDataDataItem["CorpId"].isNull())
			dataObject.corpId = valueDataDataItem["CorpId"].asString();
		if(!valueDataDataItem["DeviceGroupId"].isNull())
			dataObject.deviceGroupId = valueDataDataItem["DeviceGroupId"].asString();
		if(!valueDataDataItem["DeviceId"].isNull())
			dataObject.deviceId = valueDataDataItem["DeviceId"].asString();
		if(!valueDataDataItem["UserGroupId"].isNull())
			dataObject.userGroupId = valueDataDataItem["UserGroupId"].asString();
		if(!valueDataDataItem["PersonID"].isNull())
			dataObject.personID = valueDataDataItem["PersonID"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

int ListCorpGroupMetricsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListCorpGroupMetricsResult::getMessage()const
{
	return message_;
}

int ListCorpGroupMetricsResult::getPageSize()const
{
	return pageSize_;
}

int ListCorpGroupMetricsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListCorpGroupMetricsResult::DataItem> ListCorpGroupMetricsResult::getData()const
{
	return data_;
}

std::string ListCorpGroupMetricsResult::getCode()const
{
	return code_;
}

std::string ListCorpGroupMetricsResult::getSuccess()const
{
	return success_;
}

