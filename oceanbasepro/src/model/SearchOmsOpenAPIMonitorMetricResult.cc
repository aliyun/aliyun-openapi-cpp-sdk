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

#include <alibabacloud/oceanbasepro/model/SearchOmsOpenAPIMonitorMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

SearchOmsOpenAPIMonitorMetricResult::SearchOmsOpenAPIMonitorMetricResult() :
	ServiceResult()
{}

SearchOmsOpenAPIMonitorMetricResult::SearchOmsOpenAPIMonitorMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchOmsOpenAPIMonitorMetricResult::~SearchOmsOpenAPIMonitorMetricResult()
{}

void SearchOmsOpenAPIMonitorMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Metric"].isNull())
			dataObject.metric = valueDataDataItem["Metric"].asString();
		if(!valueDataDataItem["Tags"].isNull())
			dataObject.tags = valueDataDataItem["Tags"].asString();
		auto allDataPointsNode = valueDataDataItem["DataPoints"]["DataPoint"];
		for (auto valueDataDataItemDataPointsDataPoint : allDataPointsNode)
		{
			DataItem::DataPoint dataPointsObject;
			if(!valueDataDataItemDataPointsDataPoint["Timestamp"].isNull())
				dataPointsObject.timestamp = std::stol(valueDataDataItemDataPointsDataPoint["Timestamp"].asString());
			if(!valueDataDataItemDataPointsDataPoint["Value"].isNull())
				dataPointsObject.value = valueDataDataItemDataPointsDataPoint["Value"].asString();
			dataObject.dataPoints.push_back(dataPointsObject);
		}
		data_.push_back(dataObject);
	}
	auto errorDetailNode = value["ErrorDetail"];
	if(!errorDetailNode["Code"].isNull())
		errorDetail_.code = errorDetailNode["Code"].asString();
	if(!errorDetailNode["Level"].isNull())
		errorDetail_.level = errorDetailNode["Level"].asString();
	if(!errorDetailNode["Message"].isNull())
		errorDetail_.message = errorDetailNode["Message"].asString();
	if(!errorDetailNode["Proposal"].isNull())
		errorDetail_.proposal = errorDetailNode["Proposal"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Advice"].isNull())
		advice_ = value["Advice"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Cost"].isNull())
		cost_ = value["Cost"].asString();

}

SearchOmsOpenAPIMonitorMetricResult::ErrorDetail SearchOmsOpenAPIMonitorMetricResult::getErrorDetail()const
{
	return errorDetail_;
}

long SearchOmsOpenAPIMonitorMetricResult::getTotalCount()const
{
	return totalCount_;
}

std::string SearchOmsOpenAPIMonitorMetricResult::getMessage()const
{
	return message_;
}

int SearchOmsOpenAPIMonitorMetricResult::getPageSize()const
{
	return pageSize_;
}

int SearchOmsOpenAPIMonitorMetricResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<SearchOmsOpenAPIMonitorMetricResult::DataItem> SearchOmsOpenAPIMonitorMetricResult::getData()const
{
	return data_;
}

std::string SearchOmsOpenAPIMonitorMetricResult::getAdvice()const
{
	return advice_;
}

std::string SearchOmsOpenAPIMonitorMetricResult::getCode()const
{
	return code_;
}

std::string SearchOmsOpenAPIMonitorMetricResult::getCost()const
{
	return cost_;
}

bool SearchOmsOpenAPIMonitorMetricResult::getSuccess()const
{
	return success_;
}

