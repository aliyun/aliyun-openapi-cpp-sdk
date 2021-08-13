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

#include <alibabacloud/dts/model/DescribePreCheckStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribePreCheckStatusResult::DescribePreCheckStatusResult() :
	ServiceResult()
{}

DescribePreCheckStatusResult::DescribePreCheckStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePreCheckStatusResult::~DescribePreCheckStatusResult()
{}

void DescribePreCheckStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobProgressNode = value["JobProgress"]["ProgressInfo"];
	for (auto valueJobProgressProgressInfo : allJobProgressNode)
	{
		ProgressInfo jobProgressObject;
		if(!valueJobProgressProgressInfo["Skip"].isNull())
			jobProgressObject.skip = valueJobProgressProgressInfo["Skip"].asString() == "true";
		if(!valueJobProgressProgressInfo["CanSkip"].isNull())
			jobProgressObject.canSkip = valueJobProgressProgressInfo["CanSkip"].asString() == "true";
		if(!valueJobProgressProgressInfo["ErrMsg"].isNull())
			jobProgressObject.errMsg = valueJobProgressProgressInfo["ErrMsg"].asString();
		if(!valueJobProgressProgressInfo["BootTime"].isNull())
			jobProgressObject.bootTime = valueJobProgressProgressInfo["BootTime"].asString();
		if(!valueJobProgressProgressInfo["DelaySeconds"].isNull())
			jobProgressObject.delaySeconds = std::stoi(valueJobProgressProgressInfo["DelaySeconds"].asString());
		if(!valueJobProgressProgressInfo["FinishTime"].isNull())
			jobProgressObject.finishTime = valueJobProgressProgressInfo["FinishTime"].asString();
		if(!valueJobProgressProgressInfo["IgnoreFlag"].isNull())
			jobProgressObject.ignoreFlag = valueJobProgressProgressInfo["IgnoreFlag"].asString();
		if(!valueJobProgressProgressInfo["Item"].isNull())
			jobProgressObject.item = valueJobProgressProgressInfo["Item"].asString();
		if(!valueJobProgressProgressInfo["JobId"].isNull())
			jobProgressObject.jobId = valueJobProgressProgressInfo["JobId"].asString();
		if(!valueJobProgressProgressInfo["Names"].isNull())
			jobProgressObject.names = valueJobProgressProgressInfo["Names"].asString();
		if(!valueJobProgressProgressInfo["OrderNum"].isNull())
			jobProgressObject.orderNum = std::stoi(valueJobProgressProgressInfo["OrderNum"].asString());
		if(!valueJobProgressProgressInfo["State"].isNull())
			jobProgressObject.state = valueJobProgressProgressInfo["State"].asString();
		if(!valueJobProgressProgressInfo["Sub"].isNull())
			jobProgressObject.sub = valueJobProgressProgressInfo["Sub"].asString();
		if(!valueJobProgressProgressInfo["RepairMethod"].isNull())
			jobProgressObject.repairMethod = valueJobProgressProgressInfo["RepairMethod"].asString();
		if(!valueJobProgressProgressInfo["TargetNames"].isNull())
			jobProgressObject.targetNames = valueJobProgressProgressInfo["TargetNames"].asString();
		if(!valueJobProgressProgressInfo["Total"].isNull())
			jobProgressObject.total = std::stoi(valueJobProgressProgressInfo["Total"].asString());
		if(!valueJobProgressProgressInfo["SourceSchema"].isNull())
			jobProgressObject.sourceSchema = valueJobProgressProgressInfo["SourceSchema"].asString();
		if(!valueJobProgressProgressInfo["ParentObj"].isNull())
			jobProgressObject.parentObj = valueJobProgressProgressInfo["ParentObj"].asString();
		if(!valueJobProgressProgressInfo["DiffRow"].isNull())
			jobProgressObject.diffRow = std::stol(valueJobProgressProgressInfo["DiffRow"].asString());
		if(!valueJobProgressProgressInfo["DestSchema"].isNull())
			jobProgressObject.destSchema = valueJobProgressProgressInfo["DestSchema"].asString();
		if(!valueJobProgressProgressInfo["ErrDetail"].isNull())
			jobProgressObject.errDetail = valueJobProgressProgressInfo["ErrDetail"].asString();
		if(!valueJobProgressProgressInfo["DdlSql"].isNull())
			jobProgressObject.ddlSql = valueJobProgressProgressInfo["DdlSql"].asString();
		if(!valueJobProgressProgressInfo["Id"].isNull())
			jobProgressObject.id = valueJobProgressProgressInfo["Id"].asString();
		auto allLogsNode = valueJobProgressProgressInfo["Logs"]["JobLog"];
		for (auto valueJobProgressProgressInfoLogsJobLog : allLogsNode)
		{
			ProgressInfo::JobLog logsObject;
			if(!valueJobProgressProgressInfoLogsJobLog["ErrData"].isNull())
				logsObject.errData = valueJobProgressProgressInfoLogsJobLog["ErrData"].asString();
			if(!valueJobProgressProgressInfoLogsJobLog["ErrMsg"].isNull())
				logsObject.errMsg = valueJobProgressProgressInfoLogsJobLog["ErrMsg"].asString();
			if(!valueJobProgressProgressInfoLogsJobLog["ErrType"].isNull())
				logsObject.errType = valueJobProgressProgressInfoLogsJobLog["ErrType"].asString();
			if(!valueJobProgressProgressInfoLogsJobLog["LogLevel"].isNull())
				logsObject.logLevel = valueJobProgressProgressInfoLogsJobLog["LogLevel"].asString();
			jobProgressObject.logs.push_back(logsObject);
		}
		jobProgress_.push_back(jobProgressObject);
	}
	auto allSubDistributedJobStatusNode = value["SubDistributedJobStatus"]["SubDistributedJobStatusItem"];
	for (auto valueSubDistributedJobStatusSubDistributedJobStatusItem : allSubDistributedJobStatusNode)
	{
		SubDistributedJobStatusItem subDistributedJobStatusObject;
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["State"].isNull())
			subDistributedJobStatusObject.state = valueSubDistributedJobStatusSubDistributedJobStatusItem["State"].asString();
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["ErrorItem"].isNull())
			subDistributedJobStatusObject.errorItem = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItem["ErrorItem"].asString());
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["JobName"].isNull())
			subDistributedJobStatusObject.jobName = valueSubDistributedJobStatusSubDistributedJobStatusItem["JobName"].asString();
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["JobId"].isNull())
			subDistributedJobStatusObject.jobId = valueSubDistributedJobStatusSubDistributedJobStatusItem["JobId"].asString();
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["Code"].isNull())
			subDistributedJobStatusObject.code = valueSubDistributedJobStatusSubDistributedJobStatusItem["Code"].asString();
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["Total"].isNull())
			subDistributedJobStatusObject.total = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItem["Total"].asString());
		auto allJobProgress1Node = valueSubDistributedJobStatusSubDistributedJobStatusItem["JobProgress"]["ProgressInfo"];
		for (auto valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo : allJobProgress1Node)
		{
			SubDistributedJobStatusItem::ProgressInfo2 jobProgress1Object;
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Skip"].isNull())
				jobProgress1Object.skip = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Skip"].asString() == "true";
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["CanSkip"].isNull())
				jobProgress1Object.canSkip = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["CanSkip"].asString() == "true";
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ErrMsg"].isNull())
				jobProgress1Object.errMsg = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ErrMsg"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["BootTime"].isNull())
				jobProgress1Object.bootTime = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["BootTime"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DelaySeconds"].isNull())
				jobProgress1Object.delaySeconds = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DelaySeconds"].asString());
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["FinishTime"].isNull())
				jobProgress1Object.finishTime = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["FinishTime"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["IgnoreFlag"].isNull())
				jobProgress1Object.ignoreFlag = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["IgnoreFlag"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Item"].isNull())
				jobProgress1Object.item = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Item"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["JobId"].isNull())
				jobProgress1Object.jobId = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["JobId"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Names"].isNull())
				jobProgress1Object.names = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Names"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["OrderNum"].isNull())
				jobProgress1Object.orderNum = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["OrderNum"].asString());
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["State"].isNull())
				jobProgress1Object.state = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["State"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Sub"].isNull())
				jobProgress1Object.sub = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Sub"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["RepairMethod"].isNull())
				jobProgress1Object.repairMethod = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["RepairMethod"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["TargetNames"].isNull())
				jobProgress1Object.targetNames = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["TargetNames"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Total"].isNull())
				jobProgress1Object.total = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Total"].asString());
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["SourceSchema"].isNull())
				jobProgress1Object.sourceSchema = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["SourceSchema"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ParentObj"].isNull())
				jobProgress1Object.parentObj = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ParentObj"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DiffRow"].isNull())
				jobProgress1Object.diffRow = std::stol(valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DiffRow"].asString());
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DestSchema"].isNull())
				jobProgress1Object.destSchema = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DestSchema"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ErrDetail"].isNull())
				jobProgress1Object.errDetail = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ErrDetail"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DdlSql"].isNull())
				jobProgress1Object.ddlSql = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DdlSql"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Id"].isNull())
				jobProgress1Object.id = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Id"].asString();
			auto allLogs3Node = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Logs"]["JobLog"];
			for (auto valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog : allLogs3Node)
			{
				SubDistributedJobStatusItem::ProgressInfo2::JobLog4 logs3Object;
				if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrData"].isNull())
					logs3Object.errData = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrData"].asString();
				if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrMsg"].isNull())
					logs3Object.errMsg = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrMsg"].asString();
				if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrType"].isNull())
					logs3Object.errType = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrType"].asString();
				if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["LogLevel"].isNull())
					logs3Object.logLevel = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["LogLevel"].asString();
				jobProgress1Object.logs3.push_back(logs3Object);
			}
			subDistributedJobStatusObject.jobProgress1.push_back(jobProgress1Object);
		}
		subDistributedJobStatus_.push_back(subDistributedJobStatusObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorItem"].isNull())
		errorItem_ = std::stoi(value["ErrorItem"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["JobName"].isNull())
		jobName_ = value["JobName"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stol(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long DescribePreCheckStatusResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

long DescribePreCheckStatusResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribePreCheckStatusResult::getJobName()const
{
	return jobName_;
}

int DescribePreCheckStatusResult::getErrorItem()const
{
	return errorItem_;
}

std::vector<DescribePreCheckStatusResult::SubDistributedJobStatusItem> DescribePreCheckStatusResult::getSubDistributedJobStatus()const
{
	return subDistributedJobStatus_;
}

std::string DescribePreCheckStatusResult::getCode()const
{
	return code_;
}

bool DescribePreCheckStatusResult::getSuccess()const
{
	return success_;
}

long DescribePreCheckStatusResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribePreCheckStatusResult::getState()const
{
	return state_;
}

int DescribePreCheckStatusResult::getTotal()const
{
	return total_;
}

int DescribePreCheckStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribePreCheckStatusResult::getJobId()const
{
	return jobId_;
}

std::vector<DescribePreCheckStatusResult::ProgressInfo> DescribePreCheckStatusResult::getJobProgress()const
{
	return jobProgress_;
}

