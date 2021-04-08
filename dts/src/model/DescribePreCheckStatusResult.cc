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
		if(!valueJobProgressProgressInfo["BootTime"].isNull())
			jobProgressObject.bootTime = std::stol(valueJobProgressProgressInfo["BootTime"].asString());
		if(!valueJobProgressProgressInfo["CanSkip"].isNull())
			jobProgressObject.canSkip = valueJobProgressProgressInfo["CanSkip"].asString() == "true";
		if(!valueJobProgressProgressInfo["DelaySeconds"].isNull())
			jobProgressObject.delaySeconds = std::stoi(valueJobProgressProgressInfo["DelaySeconds"].asString());
		if(!valueJobProgressProgressInfo["FinishTime"].isNull())
			jobProgressObject.finishTime = std::stol(valueJobProgressProgressInfo["FinishTime"].asString());
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
		if(!valueJobProgressProgressInfo["Skip"].isNull())
			jobProgressObject.skip = valueJobProgressProgressInfo["Skip"].asString() == "true";
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
		if(!valueJobProgressProgressInfo["ErrMsg"].isNull())
			jobProgressObject.errMsg = valueJobProgressProgressInfo["ErrMsg"].asString();
		if(!valueJobProgressProgressInfo["DdlSql"].isNull())
			jobProgressObject.ddlSql = valueJobProgressProgressInfo["DdlSql"].asString();
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

std::string DescribePreCheckStatusResult::getJobName()const
{
	return jobName_;
}

int DescribePreCheckStatusResult::getErrorItem()const
{
	return errorItem_;
}

std::string DescribePreCheckStatusResult::getCode()const
{
	return code_;
}

bool DescribePreCheckStatusResult::getSuccess()const
{
	return success_;
}

std::vector<DescribePreCheckStatusResult::ProgressInfo> DescribePreCheckStatusResult::getJobProgress()const
{
	return jobProgress_;
}

