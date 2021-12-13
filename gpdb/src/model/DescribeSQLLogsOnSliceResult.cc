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

#include <alibabacloud/gpdb/model/DescribeSQLLogsOnSliceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeSQLLogsOnSliceResult::DescribeSQLLogsOnSliceResult() :
	ServiceResult()
{}

DescribeSQLLogsOnSliceResult::DescribeSQLLogsOnSliceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogsOnSliceResult::~DescribeSQLLogsOnSliceResult()
{}

void DescribeSQLLogsOnSliceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSliceLogItemsNode = value["SliceLogItems"]["SQLLogsSliceItem"];
	for (auto valueSliceLogItemsSQLLogsSliceItem : allSliceLogItemsNode)
	{
		SQLLogsSliceItem sliceLogItemsObject;
		if(!valueSliceLogItemsSQLLogsSliceItem["ExecuteStatus"].isNull())
			sliceLogItemsObject.executeStatus = valueSliceLogItemsSQLLogsSliceItem["ExecuteStatus"].asString();
		if(!valueSliceLogItemsSQLLogsSliceItem["ExecuteCost"].isNull())
			sliceLogItemsObject.executeCost = std::stof(valueSliceLogItemsSQLLogsSliceItem["ExecuteCost"].asString());
		if(!valueSliceLogItemsSQLLogsSliceItem["ReturnRowCounts"].isNull())
			sliceLogItemsObject.returnRowCounts = std::stol(valueSliceLogItemsSQLLogsSliceItem["ReturnRowCounts"].asString());
		if(!valueSliceLogItemsSQLLogsSliceItem["OperationExecuteTime"].isNull())
			sliceLogItemsObject.operationExecuteTime = valueSliceLogItemsSQLLogsSliceItem["OperationExecuteTime"].asString();
		if(!valueSliceLogItemsSQLLogsSliceItem["SegmentId"].isNull())
			sliceLogItemsObject.segmentId = valueSliceLogItemsSQLLogsSliceItem["SegmentId"].asString();
		if(!valueSliceLogItemsSQLLogsSliceItem["PeakMemory"].isNull())
			sliceLogItemsObject.peakMemory = std::stof(valueSliceLogItemsSQLLogsSliceItem["PeakMemory"].asString());
		if(!valueSliceLogItemsSQLLogsSliceItem["OperationExecuteEndTime"].isNull())
			sliceLogItemsObject.operationExecuteEndTime = valueSliceLogItemsSQLLogsSliceItem["OperationExecuteEndTime"].asString();
		if(!valueSliceLogItemsSQLLogsSliceItem["SegmentName"].isNull())
			sliceLogItemsObject.segmentName = valueSliceLogItemsSQLLogsSliceItem["SegmentName"].asString();
		sliceLogItems_.push_back(sliceLogItemsObject);
	}
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeSQLLogsOnSliceResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::vector<DescribeSQLLogsOnSliceResult::SQLLogsSliceItem> DescribeSQLLogsOnSliceResult::getSliceLogItems()const
{
	return sliceLogItems_;
}

int DescribeSQLLogsOnSliceResult::getPageNumber()const
{
	return pageNumber_;
}

