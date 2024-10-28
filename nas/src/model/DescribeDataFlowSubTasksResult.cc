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

#include <alibabacloud/nas/model/DescribeDataFlowSubTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeDataFlowSubTasksResult::DescribeDataFlowSubTasksResult() :
	ServiceResult()
{}

DescribeDataFlowSubTasksResult::DescribeDataFlowSubTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataFlowSubTasksResult::~DescribeDataFlowSubTasksResult()
{}

void DescribeDataFlowSubTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataFlowSubTaskNode = value["DataFlowSubTask"]["DataFlowSubTaskItem"];
	for (auto valueDataFlowSubTaskDataFlowSubTaskItem : allDataFlowSubTaskNode)
	{
		DataFlowSubTaskItem dataFlowSubTaskObject;
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["FileSystemId"].isNull())
			dataFlowSubTaskObject.fileSystemId = valueDataFlowSubTaskDataFlowSubTaskItem["FileSystemId"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["DataFlowId"].isNull())
			dataFlowSubTaskObject.dataFlowId = valueDataFlowSubTaskDataFlowSubTaskItem["DataFlowId"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["DataFlowTaskId"].isNull())
			dataFlowSubTaskObject.dataFlowTaskId = valueDataFlowSubTaskDataFlowSubTaskItem["DataFlowTaskId"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["DataFlowSubTaskId"].isNull())
			dataFlowSubTaskObject.dataFlowSubTaskId = valueDataFlowSubTaskDataFlowSubTaskItem["DataFlowSubTaskId"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["SrcFilePath"].isNull())
			dataFlowSubTaskObject.srcFilePath = valueDataFlowSubTaskDataFlowSubTaskItem["SrcFilePath"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["DstFilePath"].isNull())
			dataFlowSubTaskObject.dstFilePath = valueDataFlowSubTaskDataFlowSubTaskItem["DstFilePath"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["Status"].isNull())
			dataFlowSubTaskObject.status = valueDataFlowSubTaskDataFlowSubTaskItem["Status"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["Progress"].isNull())
			dataFlowSubTaskObject.progress = std::stoi(valueDataFlowSubTaskDataFlowSubTaskItem["Progress"].asString());
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["CreateTime"].isNull())
			dataFlowSubTaskObject.createTime = valueDataFlowSubTaskDataFlowSubTaskItem["CreateTime"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["StartTime"].isNull())
			dataFlowSubTaskObject.startTime = valueDataFlowSubTaskDataFlowSubTaskItem["StartTime"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["EndTime"].isNull())
			dataFlowSubTaskObject.endTime = valueDataFlowSubTaskDataFlowSubTaskItem["EndTime"].asString();
		if(!valueDataFlowSubTaskDataFlowSubTaskItem["ErrorMsg"].isNull())
			dataFlowSubTaskObject.errorMsg = valueDataFlowSubTaskDataFlowSubTaskItem["ErrorMsg"].asString();
		auto progressStatsNode = value["ProgressStats"];
		if(!progressStatsNode["BytesTotal"].isNull())
			dataFlowSubTaskObject.progressStats.bytesTotal = std::stol(progressStatsNode["BytesTotal"].asString());
		if(!progressStatsNode["BytesDone"].isNull())
			dataFlowSubTaskObject.progressStats.bytesDone = std::stol(progressStatsNode["BytesDone"].asString());
		if(!progressStatsNode["ActualBytes"].isNull())
			dataFlowSubTaskObject.progressStats.actualBytes = std::stol(progressStatsNode["ActualBytes"].asString());
		if(!progressStatsNode["AverageSpeed"].isNull())
			dataFlowSubTaskObject.progressStats.averageSpeed = std::stol(progressStatsNode["AverageSpeed"].asString());
		auto fileDetailNode = value["FileDetail"];
		if(!fileDetailNode["ModifyTime"].isNull())
			dataFlowSubTaskObject.fileDetail.modifyTime = std::stol(fileDetailNode["ModifyTime"].asString());
		if(!fileDetailNode["Size"].isNull())
			dataFlowSubTaskObject.fileDetail.size = std::stol(fileDetailNode["Size"].asString());
		if(!fileDetailNode["Checksum"].isNull())
			dataFlowSubTaskObject.fileDetail.checksum = fileDetailNode["Checksum"].asString();
		dataFlowSubTask_.push_back(dataFlowSubTaskObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeDataFlowSubTasksResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeDataFlowSubTasksResult::DataFlowSubTaskItem> DescribeDataFlowSubTasksResult::getDataFlowSubTask()const
{
	return dataFlowSubTask_;
}

