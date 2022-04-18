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

#include <alibabacloud/sddp/model/DescribeDataMaskingTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeDataMaskingTasksResult::DescribeDataMaskingTasksResult() :
	ServiceResult()
{}

DescribeDataMaskingTasksResult::DescribeDataMaskingTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataMaskingTasksResult::~DescribeDataMaskingTasksResult()
{}

void DescribeDataMaskingTasksResult::parse(const std::string &payload)
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
		if(!valueItemsTask["Owner"].isNull())
			itemsObject.owner = valueItemsTask["Owner"].asString();
		if(!valueItemsTask["TaskName"].isNull())
			itemsObject.taskName = valueItemsTask["TaskName"].asString();
		if(!valueItemsTask["SrcType"].isNull())
			itemsObject.srcType = std::stoi(valueItemsTask["SrcType"].asString());
		if(!valueItemsTask["DstType"].isNull())
			itemsObject.dstType = std::stoi(valueItemsTask["DstType"].asString());
		if(!valueItemsTask["HasUnfinishProcess"].isNull())
			itemsObject.hasUnfinishProcess = valueItemsTask["HasUnfinishProcess"].asString() == "true";
		if(!valueItemsTask["OriginalTable"].isNull())
			itemsObject.originalTable = valueItemsTask["OriginalTable"].asString() == "true";
		if(!valueItemsTask["TriggerType"].isNull())
			itemsObject.triggerType = std::stoi(valueItemsTask["TriggerType"].asString());
		if(!valueItemsTask["DstTypeCode"].isNull())
			itemsObject.dstTypeCode = valueItemsTask["DstTypeCode"].asString();
		if(!valueItemsTask["RunCount"].isNull())
			itemsObject.runCount = std::stoi(valueItemsTask["RunCount"].asString());
		if(!valueItemsTask["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(valueItemsTask["GmtCreate"].asString());
		if(!valueItemsTask["TaskId"].isNull())
			itemsObject.taskId = valueItemsTask["TaskId"].asString();
		if(!valueItemsTask["DstPath"].isNull())
			itemsObject.dstPath = valueItemsTask["DstPath"].asString();
		if(!valueItemsTask["SrcTypeCode"].isNull())
			itemsObject.srcTypeCode = valueItemsTask["SrcTypeCode"].asString();
		if(!valueItemsTask["Id"].isNull())
			itemsObject.id = std::stol(valueItemsTask["Id"].asString());
		if(!valueItemsTask["SrcPath"].isNull())
			itemsObject.srcPath = valueItemsTask["SrcPath"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDataMaskingTasksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDataMaskingTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataMaskingTasksResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeDataMaskingTasksResult::Task> DescribeDataMaskingTasksResult::getItems()const
{
	return items_;
}

