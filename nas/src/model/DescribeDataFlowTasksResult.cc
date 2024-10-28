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

#include <alibabacloud/nas/model/DescribeDataFlowTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeDataFlowTasksResult::DescribeDataFlowTasksResult() :
	ServiceResult()
{}

DescribeDataFlowTasksResult::DescribeDataFlowTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataFlowTasksResult::~DescribeDataFlowTasksResult()
{}

void DescribeDataFlowTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskInfoNode = value["TaskInfo"]["Task"];
	for (auto valueTaskInfoTask : allTaskInfoNode)
	{
		Task taskInfoObject;
		if(!valueTaskInfoTask["FilesystemId"].isNull())
			taskInfoObject.filesystemId = valueTaskInfoTask["FilesystemId"].asString();
		if(!valueTaskInfoTask["DataFlowId"].isNull())
			taskInfoObject.dataFlowId = valueTaskInfoTask["DataFlowId"].asString();
		if(!valueTaskInfoTask["TaskId"].isNull())
			taskInfoObject.taskId = valueTaskInfoTask["TaskId"].asString();
		if(!valueTaskInfoTask["SourceStorage"].isNull())
			taskInfoObject.sourceStorage = valueTaskInfoTask["SourceStorage"].asString();
		if(!valueTaskInfoTask["FileSystemPath"].isNull())
			taskInfoObject.fileSystemPath = valueTaskInfoTask["FileSystemPath"].asString();
		if(!valueTaskInfoTask["Originator"].isNull())
			taskInfoObject.originator = valueTaskInfoTask["Originator"].asString();
		if(!valueTaskInfoTask["TaskAction"].isNull())
			taskInfoObject.taskAction = valueTaskInfoTask["TaskAction"].asString();
		if(!valueTaskInfoTask["DataType"].isNull())
			taskInfoObject.dataType = valueTaskInfoTask["DataType"].asString();
		if(!valueTaskInfoTask["Progress"].isNull())
			taskInfoObject.progress = std::stol(valueTaskInfoTask["Progress"].asString());
		if(!valueTaskInfoTask["Status"].isNull())
			taskInfoObject.status = valueTaskInfoTask["Status"].asString();
		if(!valueTaskInfoTask["ReportPath"].isNull())
			taskInfoObject.reportPath = valueTaskInfoTask["ReportPath"].asString();
		if(!valueTaskInfoTask["CreateTime"].isNull())
			taskInfoObject.createTime = valueTaskInfoTask["CreateTime"].asString();
		if(!valueTaskInfoTask["StartTime"].isNull())
			taskInfoObject.startTime = valueTaskInfoTask["StartTime"].asString();
		if(!valueTaskInfoTask["EndTime"].isNull())
			taskInfoObject.endTime = valueTaskInfoTask["EndTime"].asString();
		if(!valueTaskInfoTask["FsPath"].isNull())
			taskInfoObject.fsPath = valueTaskInfoTask["FsPath"].asString();
		if(!valueTaskInfoTask["ConflictPolicy"].isNull())
			taskInfoObject.conflictPolicy = valueTaskInfoTask["ConflictPolicy"].asString();
		if(!valueTaskInfoTask["Directory"].isNull())
			taskInfoObject.directory = valueTaskInfoTask["Directory"].asString();
		if(!valueTaskInfoTask["DstDirectory"].isNull())
			taskInfoObject.dstDirectory = valueTaskInfoTask["DstDirectory"].asString();
		if(!valueTaskInfoTask["ErrorMsg"].isNull())
			taskInfoObject.errorMsg = valueTaskInfoTask["ErrorMsg"].asString();
		auto allReportsNode = valueTaskInfoTask["Reports"]["Report"];
		for (auto valueTaskInfoTaskReportsReport : allReportsNode)
		{
			Task::Report reportsObject;
			if(!valueTaskInfoTaskReportsReport["Name"].isNull())
				reportsObject.name = valueTaskInfoTaskReportsReport["Name"].asString();
			if(!valueTaskInfoTaskReportsReport["Path"].isNull())
				reportsObject.path = valueTaskInfoTaskReportsReport["Path"].asString();
			taskInfoObject.reports.push_back(reportsObject);
		}
		auto progressStatsNode = value["ProgressStats"];
		if(!progressStatsNode["FilesTotal"].isNull())
			taskInfoObject.progressStats.filesTotal = std::stol(progressStatsNode["FilesTotal"].asString());
		if(!progressStatsNode["FilesDone"].isNull())
			taskInfoObject.progressStats.filesDone = std::stol(progressStatsNode["FilesDone"].asString());
		if(!progressStatsNode["ActualFiles"].isNull())
			taskInfoObject.progressStats.actualFiles = std::stol(progressStatsNode["ActualFiles"].asString());
		if(!progressStatsNode["BytesTotal"].isNull())
			taskInfoObject.progressStats.bytesTotal = std::stol(progressStatsNode["BytesTotal"].asString());
		if(!progressStatsNode["BytesDone"].isNull())
			taskInfoObject.progressStats.bytesDone = std::stol(progressStatsNode["BytesDone"].asString());
		if(!progressStatsNode["ActualBytes"].isNull())
			taskInfoObject.progressStats.actualBytes = std::stol(progressStatsNode["ActualBytes"].asString());
		if(!progressStatsNode["RemainTime"].isNull())
			taskInfoObject.progressStats.remainTime = std::stol(progressStatsNode["RemainTime"].asString());
		if(!progressStatsNode["AverageSpeed"].isNull())
			taskInfoObject.progressStats.averageSpeed = std::stol(progressStatsNode["AverageSpeed"].asString());
		taskInfo_.push_back(taskInfoObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<DescribeDataFlowTasksResult::Task> DescribeDataFlowTasksResult::getTaskInfo()const
{
	return taskInfo_;
}

std::string DescribeDataFlowTasksResult::getNextToken()const
{
	return nextToken_;
}

