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

#include <alibabacloud/cdrs/model/ListAreaHotSpotMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListAreaHotSpotMetricsResult::ListAreaHotSpotMetricsResult() :
	ServiceResult()
{}

ListAreaHotSpotMetricsResult::ListAreaHotSpotMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAreaHotSpotMetricsResult::~ListAreaHotSpotMetricsResult()
{}

void ListAreaHotSpotMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Times"].isNull())
			dataObject.times = valueDataDataItem["Times"].asString();
		if(!valueDataDataItem["Coordinates"].isNull())
			dataObject.coordinates = valueDataDataItem["Coordinates"].asString();
		if(!valueDataDataItem["DeviceId"].isNull())
			dataObject.deviceId = valueDataDataItem["DeviceId"].asString();
		if(!valueDataDataItem["PersonId"].isNull())
			dataObject.personId = valueDataDataItem["PersonId"].asString();
		if(!valueDataDataItem["IntervalTime"].isNull())
			dataObject.intervalTime = valueDataDataItem["IntervalTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListAreaHotSpotMetricsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAreaHotSpotMetricsResult::getMessage()const
{
	return message_;
}

std::string ListAreaHotSpotMetricsResult::getPageSize()const
{
	return pageSize_;
}

std::string ListAreaHotSpotMetricsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAreaHotSpotMetricsResult::DataItem> ListAreaHotSpotMetricsResult::getData()const
{
	return data_;
}

std::string ListAreaHotSpotMetricsResult::getCode()const
{
	return code_;
}

