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

#include <alibabacloud/drds/model/DescribeDataImportTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDataImportTasksResult::DescribeDataImportTasksResult() :
	ServiceResult()
{}

DescribeDataImportTasksResult::DescribeDataImportTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataImportTasksResult::~DescribeDataImportTasksResult()
{}

void DescribeDataImportTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataImportTask"];
	for (auto valueDataDataImportTask : allDataNode)
	{
		DataImportTask dataObject;
		if(!valueDataDataImportTask["Id"].isNull())
			dataObject.id = std::stoi(valueDataDataImportTask["Id"].asString());
		if(!valueDataDataImportTask["TaskName"].isNull())
			dataObject.taskName = valueDataDataImportTask["TaskName"].asString();
		if(!valueDataDataImportTask["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataDataImportTask["GmtCreate"].asString();
		if(!valueDataDataImportTask["GmtModified"].isNull())
			dataObject.gmtModified = valueDataDataImportTask["GmtModified"].asString();
		if(!valueDataDataImportTask["Type"].isNull())
			dataObject.type = std::stoi(valueDataDataImportTask["Type"].asString());
		if(!valueDataDataImportTask["Status"].isNull())
			dataObject.status = valueDataDataImportTask["Status"].asString();
		if(!valueDataDataImportTask["Stage"].isNull())
			dataObject.stage = valueDataDataImportTask["Stage"].asString();
		if(!valueDataDataImportTask["SrcInstId"].isNull())
			dataObject.srcInstId = valueDataDataImportTask["SrcInstId"].asString();
		if(!valueDataDataImportTask["SrcDbName"].isNull())
			dataObject.srcDbName = valueDataDataImportTask["SrcDbName"].asString();
		if(!valueDataDataImportTask["DstInstId"].isNull())
			dataObject.dstInstId = valueDataDataImportTask["DstInstId"].asString();
		if(!valueDataDataImportTask["DstDbName"].isNull())
			dataObject.dstDbName = valueDataDataImportTask["DstDbName"].asString();
		if(!valueDataDataImportTask["EvaluateTaskId"].isNull())
			dataObject.evaluateTaskId = std::stoi(valueDataDataImportTask["EvaluateTaskId"].asString());
		if(!valueDataDataImportTask["BatchEvaluateTaskId"].isNull())
			dataObject.batchEvaluateTaskId = std::stoi(valueDataDataImportTask["BatchEvaluateTaskId"].asString());
		if(!valueDataDataImportTask["CreateDbProgress"].isNull())
			dataObject.createDbProgress = std::stoi(valueDataDataImportTask["CreateDbProgress"].asString());
		if(!valueDataDataImportTask["CreateTablesProgress"].isNull())
			dataObject.createTablesProgress = std::stoi(valueDataDataImportTask["CreateTablesProgress"].asString());
		if(!valueDataDataImportTask["Progress"].isNull())
			dataObject.progress = std::stoi(valueDataDataImportTask["Progress"].asString());
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

int DescribeDataImportTasksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDataImportTasksResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDataImportTasksResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDataImportTasksResult::DataImportTask> DescribeDataImportTasksResult::getData()const
{
	return data_;
}

bool DescribeDataImportTasksResult::getSuccess()const
{
	return success_;
}

