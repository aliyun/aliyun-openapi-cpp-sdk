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
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["defaultDisplay"].isNull())
			resultObject.defaultDisplay = valueresultresultItem["defaultDisplay"].asString() == "true";
		if(!valueresultresultItem["errorCount"].isNull())
			resultObject.errorCount = std::stoi(valueresultresultItem["errorCount"].asString());
		if(!valueresultresultItem["errorPercent"].isNull())
			resultObject.errorPercent = std::stof(valueresultresultItem["errorPercent"].asString());
		if(!valueresultresultItem["sampleDisplay"].isNull())
			resultObject.sampleDisplay = valueresultresultItem["sampleDisplay"].asString() == "true";
		if(!valueresultresultItem["type"].isNull())
			resultObject.type = valueresultresultItem["type"].asString();
		auto allhistoryDataNode = valueresultresultItem["historyData"]["HistoryDataItem"];
		for (auto valueresultresultItemhistoryDataHistoryDataItem : allhistoryDataNode)
		{
			ResultItem::HistoryDataItem historyDataObject;
			if(!valueresultresultItemhistoryDataHistoryDataItem["endTime"].isNull())
				historyDataObject.endTime = std::stol(valueresultresultItemhistoryDataHistoryDataItem["endTime"].asString());
			if(!valueresultresultItemhistoryDataHistoryDataItem["errorPercent"].isNull())
				historyDataObject.errorPercent = std::stof(valueresultresultItemhistoryDataHistoryDataItem["errorPercent"].asString());
			if(!valueresultresultItemhistoryDataHistoryDataItem["startTime"].isNull())
				historyDataObject.startTime = std::stol(valueresultresultItemhistoryDataHistoryDataItem["startTime"].asString());
			resultObject.historyData.push_back(historyDataObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<DescribeSyncReportDetailResult::ResultItem> DescribeSyncReportDetailResult::getresult()const
{
	return result_;
}

std::string DescribeSyncReportDetailResult::getMessage()const
{
	return message_;
}

std::string DescribeSyncReportDetailResult::getRequestId()const
{
	return requestId_;
}

std::string DescribeSyncReportDetailResult::getCode()const
{
	return code_;
}

