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

#include <alibabacloud/sddp/model/DescribeDataMaskingRunHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataMaskingRunHistoryResult::DescribeDataMaskingRunHistoryResult() :
	ServiceResult()
{}

DescribeDataMaskingRunHistoryResult::DescribeDataMaskingRunHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataMaskingRunHistoryResult::~DescribeDataMaskingRunHistoryResult()
{}

void DescribeDataMaskingRunHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Task"];
	for (auto valueItemsTask : allItemsNode)
	{
		Task itemsObject;
		if(!valueItemsTask["Status"].isNull())
			itemsObject.status = std::stoi(valueItemsTask["Status"].asString());
		if(!valueItemsTask["Type"].isNull())
			itemsObject.type = std::stoi(valueItemsTask["Type"].asString());
		if(!valueItemsTask["SrcType"].isNull())
			itemsObject.srcType = std::stoi(valueItemsTask["SrcType"].asString());
		if(!valueItemsTask["SrcTableName"].isNull())
			itemsObject.srcTableName = valueItemsTask["SrcTableName"].asString();
		if(!valueItemsTask["MaskingCount"].isNull())
			itemsObject.maskingCount = std::stol(valueItemsTask["MaskingCount"].asString());
		if(!valueItemsTask["Percentage"].isNull())
			itemsObject.percentage = std::stoi(valueItemsTask["Percentage"].asString());
		if(!valueItemsTask["DstType"].isNull())
			itemsObject.dstType = std::stoi(valueItemsTask["DstType"].asString());
		if(!valueItemsTask["FailMsg"].isNull())
			itemsObject.failMsg = valueItemsTask["FailMsg"].asString();
		if(!valueItemsTask["FailCode"].isNull())
			itemsObject.failCode = valueItemsTask["FailCode"].asString();
		if(!valueItemsTask["ConflictCount"].isNull())
			itemsObject.conflictCount = std::stol(valueItemsTask["ConflictCount"].asString());
		if(!valueItemsTask["DstTypeCode"].isNull())
			itemsObject.dstTypeCode = valueItemsTask["DstTypeCode"].asString();
		if(!valueItemsTask["EndTime"].isNull())
			itemsObject.endTime = std::stol(valueItemsTask["EndTime"].asString());
		if(!valueItemsTask["RunIndex"].isNull())
			itemsObject.runIndex = std::stoi(valueItemsTask["RunIndex"].asString());
		if(!valueItemsTask["StartTime"].isNull())
			itemsObject.startTime = std::stol(valueItemsTask["StartTime"].asString());
		if(!valueItemsTask["HasSubProcess"].isNull())
			itemsObject.hasSubProcess = std::stoi(valueItemsTask["HasSubProcess"].asString());
		if(!valueItemsTask["HasDownloadFile"].isNull())
			itemsObject.hasDownloadFile = std::stoi(valueItemsTask["HasDownloadFile"].asString());
		if(!valueItemsTask["TaskId"].isNull())
			itemsObject.taskId = valueItemsTask["TaskId"].asString();
		if(!valueItemsTask["SrcTypeCode"].isNull())
			itemsObject.srcTypeCode = valueItemsTask["SrcTypeCode"].asString();
		if(!valueItemsTask["Id"].isNull())
			itemsObject.id = std::stol(valueItemsTask["Id"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataMaskingRunHistoryResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataMaskingRunHistoryResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataMaskingRunHistoryResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataMaskingRunHistoryResult::Task> DescribeDataMaskingRunHistoryResult::getItems()const
{
	return items_;
}

