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

#include <alibabacloud/airec/model/DescribeSyncReportDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeSyncReportDetailResult::DescribeSyncReportDetailResult() :
	ServiceResult()
{}

DescribeSyncReportDetailResult::DescribeSyncReportDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSyncReportDetailResult::~DescribeSyncReportDetailResult()
{}

void DescribeSyncReportDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Type"].isNull())
			resultObject.type = valueResultResultItem["Type"].asString();
		if(!valueResultResultItem["ErrorPercent"].isNull())
			resultObject.errorPercent = std::stof(valueResultResultItem["ErrorPercent"].asString());
		if(!valueResultResultItem["ErrorCount"].isNull())
			resultObject.errorCount = std::stoi(valueResultResultItem["ErrorCount"].asString());
		if(!valueResultResultItem["DefaultDisplay"].isNull())
			resultObject.defaultDisplay = valueResultResultItem["DefaultDisplay"].asString() == "true";
		if(!valueResultResultItem["SampleDisplay"].isNull())
			resultObject.sampleDisplay = valueResultResultItem["SampleDisplay"].asString() == "true";
		auto allHistoryDataNode = allResultNode["HistoryData"]["HistoryDataItem"];
		for (auto allResultNodeHistoryDataHistoryDataItem : allHistoryDataNode)
		{
			ResultItem::HistoryDataItem historyDataObject;
			if(!allResultNodeHistoryDataHistoryDataItem["ErrorPercent"].isNull())
				historyDataObject.errorPercent = std::stof(allResultNodeHistoryDataHistoryDataItem["ErrorPercent"].asString());
			if(!allResultNodeHistoryDataHistoryDataItem["StartTime"].isNull())
				historyDataObject.startTime = std::stol(allResultNodeHistoryDataHistoryDataItem["StartTime"].asString());
			if(!allResultNodeHistoryDataHistoryDataItem["EndTime"].isNull())
				historyDataObject.endTime = std::stol(allResultNodeHistoryDataHistoryDataItem["EndTime"].asString());
			resultObject.historyData.push_back(historyDataObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeSyncReportDetailResult::getMessage()const
{
	return message_;
}

std::string DescribeSyncReportDetailResult::getCode()const
{
	return code_;
}

std::vector<DescribeSyncReportDetailResult::ResultItem> DescribeSyncReportDetailResult::getResult()const
{
	return result_;
}

