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

#include <alibabacloud/drds/model/DescribeDataExportTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDataExportTasksResult::DescribeDataExportTasksResult() :
	ServiceResult()
{}

DescribeDataExportTasksResult::DescribeDataExportTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataExportTasksResult::~DescribeDataExportTasksResult()
{}

void DescribeDataExportTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataExportTask"];
	for (auto valueDataDataExportTask : allDataNode)
	{
		DataExportTask dataObject;
		if(!valueDataDataExportTask["Id"].isNull())
			dataObject.id = std::stoi(valueDataDataExportTask["Id"].asString());
		if(!valueDataDataExportTask["TaskName"].isNull())
			dataObject.taskName = valueDataDataExportTask["TaskName"].asString();
		if(!valueDataDataExportTask["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataDataExportTask["GmtCreate"].asString();
		if(!valueDataDataExportTask["GmtModified"].isNull())
			dataObject.gmtModified = valueDataDataExportTask["GmtModified"].asString();
		if(!valueDataDataExportTask["Type"].isNull())
			dataObject.type = std::stoi(valueDataDataExportTask["Type"].asString());
		if(!valueDataDataExportTask["Status"].isNull())
			dataObject.status = valueDataDataExportTask["Status"].asString();
		if(!valueDataDataExportTask["Stage"].isNull())
			dataObject.stage = valueDataDataExportTask["Stage"].asString();
		if(!valueDataDataExportTask["SrcInstId"].isNull())
			dataObject.srcInstId = valueDataDataExportTask["SrcInstId"].asString();
		if(!valueDataDataExportTask["SrcDbName"].isNull())
			dataObject.srcDbName = valueDataDataExportTask["SrcDbName"].asString();
		if(!valueDataDataExportTask["DstInstId"].isNull())
			dataObject.dstInstId = valueDataDataExportTask["DstInstId"].asString();
		if(!valueDataDataExportTask["DstDbName"].isNull())
			dataObject.dstDbName = valueDataDataExportTask["DstDbName"].asString();
		if(!valueDataDataExportTask["EvaluateTaskId"].isNull())
			dataObject.evaluateTaskId = std::stoi(valueDataDataExportTask["EvaluateTaskId"].asString());
		if(!valueDataDataExportTask["BatchEvaluateTaskId"].isNull())
			dataObject.batchEvaluateTaskId = std::stoi(valueDataDataExportTask["BatchEvaluateTaskId"].asString());
		if(!valueDataDataExportTask["CreateDbProgress"].isNull())
			dataObject.createDbProgress = std::stoi(valueDataDataExportTask["CreateDbProgress"].asString());
		if(!valueDataDataExportTask["CreateTablesProgress"].isNull())
			dataObject.createTablesProgress = std::stoi(valueDataDataExportTask["CreateTablesProgress"].asString());
		if(!valueDataDataExportTask["Progress"].isNull())
			dataObject.progress = std::stoi(valueDataDataExportTask["Progress"].asString());
		auto jingweiProgressNode = value["JingweiProgress"];
		if(!jingweiProgressNode["FullRunning"].isNull())
			dataObject.jingweiProgress.fullRunning = jingweiProgressNode["FullRunning"].asString() == "true";
		if(!jingweiProgressNode["IncrementRunning"].isNull())
			dataObject.jingweiProgress.incrementRunning = jingweiProgressNode["IncrementRunning"].asString() == "true";
		auto fullNode = jingweiProgressNode["Full"];
		if(!fullNode["Progress"].isNull())
			dataObject.jingweiProgress.full.progress = std::stoi(fullNode["Progress"].asString());
		if(!fullNode["Tps"].isNull())
			dataObject.jingweiProgress.full.tps = std::stoi(fullNode["Tps"].asString());
		if(!fullNode["NeedTime"].isNull())
			dataObject.jingweiProgress.full.needTime = std::stoi(fullNode["NeedTime"].asString());
		if(!fullNode["TransferCount"].isNull())
			dataObject.jingweiProgress.full.transferCount = std::stoi(fullNode["TransferCount"].asString());
		auto incrementNode = jingweiProgressNode["Increment"];
		if(!incrementNode["Delay"].isNull())
			dataObject.jingweiProgress.increment.delay = std::stoi(incrementNode["Delay"].asString());
		if(!incrementNode["Tps"].isNull())
			dataObject.jingweiProgress.increment.tps = std::stoi(incrementNode["Tps"].asString());
		if(!incrementNode["TransferCount"].isNull())
			dataObject.jingweiProgress.increment.transferCount = std::stoi(incrementNode["TransferCount"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeDataExportTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataExportTasksResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDataExportTasksResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDataExportTasksResult::DataExportTask> DescribeDataExportTasksResult::getData()const
{
	return data_;
}

bool DescribeDataExportTasksResult::getSuccess()const
{
	return success_;
}

