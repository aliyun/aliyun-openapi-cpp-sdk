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
		if(!valueJobProgressProgressInfo["FinishTime"].isNull())
			jobProgressObject.finishTime = valueJobProgressProgressInfo["FinishTime"].asString();
		if(!valueJobProgressProgressInfo["IgnoreFlag"].isNull())
			jobProgressObject.ignoreFlag = valueJobProgressProgressInfo["IgnoreFlag"].asString();
		if(!valueJobProgressProgressInfo["DelaySeconds"].isNull())
			jobProgressObject.delaySeconds = std::stoi(valueJobProgressProgressInfo["DelaySeconds"].asString());
		if(!valueJobProgressProgressInfo["DdlSql"].isNull())
			jobProgressObject.ddlSql = valueJobProgressProgressInfo["DdlSql"].asString();
		if(!valueJobProgressProgressInfo["State"].isNull())
			jobProgressObject.state = valueJobProgressProgressInfo["State"].asString();
		if(!valueJobProgressProgressInfo["BootTime"].isNull())
			jobProgressObject.bootTime = valueJobProgressProgressInfo["BootTime"].asString();
		if(!valueJobProgressProgressInfo["Item"].isNull())
			jobProgressObject.item = valueJobProgressProgressInfo["Item"].asString();
		if(!valueJobProgressProgressInfo["Sub"].isNull())
			jobProgressObject.sub = valueJobProgressProgressInfo["Sub"].asString();
		if(!valueJobProgressProgressInfo["Total"].isNull())
			jobProgressObject.total = std::stoi(valueJobProgressProgressInfo["Total"].asString());
		if(!valueJobProgressProgressInfo["TargetNames"].isNull())
			jobProgressObject.targetNames = valueJobProgressProgressInfo["TargetNames"].asString();
		if(!valueJobProgressProgressInfo["CanSkip"].isNull())
			jobProgressObject.canSkip = valueJobProgressProgressInfo["CanSkip"].asString() == "true";
		if(!valueJobProgressProgressInfo["Names"].isNull())
			jobProgressObject.names = valueJobProgressProgressInfo["Names"].asString();
		if(!valueJobProgressProgressInfo["ErrDetail"].isNull())
			jobProgressObject.errDetail = valueJobProgressProgressInfo["ErrDetail"].asString();
		if(!valueJobProgressProgressInfo["DiffRow"].isNull())
			jobProgressObject.diffRow = std::stol(valueJobProgressProgressInfo["DiffRow"].asString());
		if(!valueJobProgressProgressInfo["JobId"].isNull())
			jobProgressObject.jobId = valueJobProgressProgressInfo["JobId"].asString();
		if(!valueJobProgressProgressInfo["SourceSchema"].isNull())
			jobProgressObject.sourceSchema = valueJobProgressProgressInfo["SourceSchema"].asString();
		if(!valueJobProgressProgressInfo["DestSchema"].isNull())
			jobProgressObject.destSchema = valueJobProgressProgressInfo["DestSchema"].asString();
		if(!valueJobProgressProgressInfo["ParentObj"].isNull())
			jobProgressObject.parentObj = valueJobProgressProgressInfo["ParentObj"].asString();
		if(!valueJobProgressProgressInfo["ErrMsg"].isNull())
			jobProgressObject.errMsg = valueJobProgressProgressInfo["ErrMsg"].asString();
		if(!valueJobProgressProgressInfo["OrderNum"].isNull())
			jobProgressObject.orderNum = std::stoi(valueJobProgressProgressInfo["OrderNum"].asString());
		if(!valueJobProgressProgressInfo["RepairMethod"].isNull())
			jobProgressObject.repairMethod = valueJobProgressProgressInfo["RepairMethod"].asString();
		if(!valueJobProgressProgressInfo["Id"].isNull())
			jobProgressObject.id = valueJobProgressProgressInfo["Id"].asString();
		if(!valueJobProgressProgressInfo["Current"].isNull())
			jobProgressObject.current = valueJobProgressProgressInfo["Current"].asString();
		auto allLogsNode = valueJobProgressProgressInfo["Logs"]["JobLog"];
		for (auto valueJobProgressProgressInfoLogsJobLog : allLogsNode)
		{
			ProgressInfo::JobLog logsObject;
			if(!valueJobProgressProgressInfoLogsJobLog["ErrData"].isNull())
				logsObject.errData = valueJobProgressProgressInfoLogsJobLog["ErrData"].asString();
			if(!valueJobProgressProgressInfoLogsJobLog["ErrMsg"].isNull())
				logsObject.errMsg = valueJobProgressProgressInfoLogsJobLog["ErrMsg"].asString();
			if(!valueJobProgressProgressInfoLogsJobLog["LogLevel"].isNull())
				logsObject.logLevel = valueJobProgressProgressInfoLogsJobLog["LogLevel"].asString();
			if(!valueJobProgressProgressInfoLogsJobLog["ErrType"].isNull())
				logsObject.errType = valueJobProgressProgressInfoLogsJobLog["ErrType"].asString();
			jobProgressObject.logs.push_back(logsObject);
		}
		jobProgress_.push_back(jobProgressObject);
	}
	auto allAnalysisJobProgressNode = value["AnalysisJobProgress"]["AnalysisProgressInfo"];
	for (auto valueAnalysisJobProgressAnalysisProgressInfo : allAnalysisJobProgressNode)
	{
		AnalysisProgressInfo analysisJobProgressObject;
		if(!valueAnalysisJobProgressAnalysisProgressInfo["Skip"].isNull())
			analysisJobProgressObject.skip = valueAnalysisJobProgressAnalysisProgressInfo["Skip"].asString() == "true";
		if(!valueAnalysisJobProgressAnalysisProgressInfo["FinishTime"].isNull())
			analysisJobProgressObject.finishTime = valueAnalysisJobProgressAnalysisProgressInfo["FinishTime"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["IgnoreFlag"].isNull())
			analysisJobProgressObject.ignoreFlag = valueAnalysisJobProgressAnalysisProgressInfo["IgnoreFlag"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["DelaySeconds"].isNull())
			analysisJobProgressObject.delaySeconds = std::stoi(valueAnalysisJobProgressAnalysisProgressInfo["DelaySeconds"].asString());
		if(!valueAnalysisJobProgressAnalysisProgressInfo["DdlSql"].isNull())
			analysisJobProgressObject.ddlSql = valueAnalysisJobProgressAnalysisProgressInfo["DdlSql"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["State"].isNull())
			analysisJobProgressObject.state = valueAnalysisJobProgressAnalysisProgressInfo["State"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["BootTime"].isNull())
			analysisJobProgressObject.bootTime = valueAnalysisJobProgressAnalysisProgressInfo["BootTime"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["Item"].isNull())
			analysisJobProgressObject.item = valueAnalysisJobProgressAnalysisProgressInfo["Item"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["Sub"].isNull())
			analysisJobProgressObject.sub = valueAnalysisJobProgressAnalysisProgressInfo["Sub"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["Total"].isNull())
			analysisJobProgressObject.total = std::stoi(valueAnalysisJobProgressAnalysisProgressInfo["Total"].asString());
		if(!valueAnalysisJobProgressAnalysisProgressInfo["TargetNames"].isNull())
			analysisJobProgressObject.targetNames = valueAnalysisJobProgressAnalysisProgressInfo["TargetNames"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["CanSkip"].isNull())
			analysisJobProgressObject.canSkip = valueAnalysisJobProgressAnalysisProgressInfo["CanSkip"].asString() == "true";
		if(!valueAnalysisJobProgressAnalysisProgressInfo["Names"].isNull())
			analysisJobProgressObject.names = valueAnalysisJobProgressAnalysisProgressInfo["Names"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["ErrDetail"].isNull())
			analysisJobProgressObject.errDetail = valueAnalysisJobProgressAnalysisProgressInfo["ErrDetail"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["DiffRow"].isNull())
			analysisJobProgressObject.diffRow = std::stol(valueAnalysisJobProgressAnalysisProgressInfo["DiffRow"].asString());
		if(!valueAnalysisJobProgressAnalysisProgressInfo["JobId"].isNull())
			analysisJobProgressObject.jobId = valueAnalysisJobProgressAnalysisProgressInfo["JobId"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["SourceSchema"].isNull())
			analysisJobProgressObject.sourceSchema = valueAnalysisJobProgressAnalysisProgressInfo["SourceSchema"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["DestSchema"].isNull())
			analysisJobProgressObject.destSchema = valueAnalysisJobProgressAnalysisProgressInfo["DestSchema"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["ParentObj"].isNull())
			analysisJobProgressObject.parentObj = valueAnalysisJobProgressAnalysisProgressInfo["ParentObj"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["ErrMsg"].isNull())
			analysisJobProgressObject.errMsg = valueAnalysisJobProgressAnalysisProgressInfo["ErrMsg"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["OrderNum"].isNull())
			analysisJobProgressObject.orderNum = std::stoi(valueAnalysisJobProgressAnalysisProgressInfo["OrderNum"].asString());
		if(!valueAnalysisJobProgressAnalysisProgressInfo["RepairMethod"].isNull())
			analysisJobProgressObject.repairMethod = valueAnalysisJobProgressAnalysisProgressInfo["RepairMethod"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["Id"].isNull())
			analysisJobProgressObject.id = valueAnalysisJobProgressAnalysisProgressInfo["Id"].asString();
		if(!valueAnalysisJobProgressAnalysisProgressInfo["Current"].isNull())
			analysisJobProgressObject.current = valueAnalysisJobProgressAnalysisProgressInfo["Current"].asString();
		auto allLogs1Node = valueAnalysisJobProgressAnalysisProgressInfo["Logs"]["JobLog"];
		for (auto valueAnalysisJobProgressAnalysisProgressInfoLogsJobLog : allLogs1Node)
		{
			AnalysisProgressInfo::JobLog2 logs1Object;
			if(!valueAnalysisJobProgressAnalysisProgressInfoLogsJobLog["ErrData"].isNull())
				logs1Object.errData = valueAnalysisJobProgressAnalysisProgressInfoLogsJobLog["ErrData"].asString();
			if(!valueAnalysisJobProgressAnalysisProgressInfoLogsJobLog["ErrMsg"].isNull())
				logs1Object.errMsg = valueAnalysisJobProgressAnalysisProgressInfoLogsJobLog["ErrMsg"].asString();
			if(!valueAnalysisJobProgressAnalysisProgressInfoLogsJobLog["LogLevel"].isNull())
				logs1Object.logLevel = valueAnalysisJobProgressAnalysisProgressInfoLogsJobLog["LogLevel"].asString();
			if(!valueAnalysisJobProgressAnalysisProgressInfoLogsJobLog["ErrType"].isNull())
				logs1Object.errType = valueAnalysisJobProgressAnalysisProgressInfoLogsJobLog["ErrType"].asString();
			analysisJobProgressObject.logs1.push_back(logs1Object);
		}
		analysisJobProgress_.push_back(analysisJobProgressObject);
	}
	auto allSubDistributedJobStatusNode = value["SubDistributedJobStatus"]["SubDistributedJobStatusItem"];
	for (auto valueSubDistributedJobStatusSubDistributedJobStatusItem : allSubDistributedJobStatusNode)
	{
		SubDistributedJobStatusItem subDistributedJobStatusObject;
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["JobName"].isNull())
			subDistributedJobStatusObject.jobName = valueSubDistributedJobStatusSubDistributedJobStatusItem["JobName"].asString();
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["State"].isNull())
			subDistributedJobStatusObject.state = valueSubDistributedJobStatusSubDistributedJobStatusItem["State"].asString();
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["JobId"].isNull())
			subDistributedJobStatusObject.jobId = valueSubDistributedJobStatusSubDistributedJobStatusItem["JobId"].asString();
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["ErrorItem"].isNull())
			subDistributedJobStatusObject.errorItem = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItem["ErrorItem"].asString());
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["Code"].isNull())
			subDistributedJobStatusObject.code = valueSubDistributedJobStatusSubDistributedJobStatusItem["Code"].asString();
		if(!valueSubDistributedJobStatusSubDistributedJobStatusItem["Total"].isNull())
			subDistributedJobStatusObject.total = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItem["Total"].asString());
		auto allJobProgress3Node = valueSubDistributedJobStatusSubDistributedJobStatusItem["JobProgress"]["ProgressInfo"];
		for (auto valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo : allJobProgress3Node)
		{
			SubDistributedJobStatusItem::ProgressInfo4 jobProgress3Object;
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Skip"].isNull())
				jobProgress3Object.skip = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Skip"].asString() == "true";
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["FinishTime"].isNull())
				jobProgress3Object.finishTime = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["FinishTime"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["IgnoreFlag"].isNull())
				jobProgress3Object.ignoreFlag = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["IgnoreFlag"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DelaySeconds"].isNull())
				jobProgress3Object.delaySeconds = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DelaySeconds"].asString());
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DdlSql"].isNull())
				jobProgress3Object.ddlSql = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DdlSql"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["State"].isNull())
				jobProgress3Object.state = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["State"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["BootTime"].isNull())
				jobProgress3Object.bootTime = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["BootTime"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Item"].isNull())
				jobProgress3Object.item = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Item"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Sub"].isNull())
				jobProgress3Object.sub = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Sub"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Total"].isNull())
				jobProgress3Object.total = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Total"].asString());
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["TargetNames"].isNull())
				jobProgress3Object.targetNames = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["TargetNames"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["CanSkip"].isNull())
				jobProgress3Object.canSkip = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["CanSkip"].asString() == "true";
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Names"].isNull())
				jobProgress3Object.names = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Names"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ErrDetail"].isNull())
				jobProgress3Object.errDetail = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ErrDetail"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DiffRow"].isNull())
				jobProgress3Object.diffRow = std::stol(valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DiffRow"].asString());
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["JobId"].isNull())
				jobProgress3Object.jobId = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["JobId"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["SourceSchema"].isNull())
				jobProgress3Object.sourceSchema = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["SourceSchema"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DestSchema"].isNull())
				jobProgress3Object.destSchema = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["DestSchema"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ParentObj"].isNull())
				jobProgress3Object.parentObj = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ParentObj"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ErrMsg"].isNull())
				jobProgress3Object.errMsg = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["ErrMsg"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["OrderNum"].isNull())
				jobProgress3Object.orderNum = std::stoi(valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["OrderNum"].asString());
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["RepairMethod"].isNull())
				jobProgress3Object.repairMethod = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["RepairMethod"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Id"].isNull())
				jobProgress3Object.id = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Id"].asString();
			if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Current"].isNull())
				jobProgress3Object.current = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Current"].asString();
			auto allLogs5Node = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfo["Logs"]["JobLog"];
			for (auto valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog : allLogs5Node)
			{
				SubDistributedJobStatusItem::ProgressInfo4::JobLog6 logs5Object;
				if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrData"].isNull())
					logs5Object.errData = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrData"].asString();
				if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrMsg"].isNull())
					logs5Object.errMsg = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrMsg"].asString();
				if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["LogLevel"].isNull())
					logs5Object.logLevel = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["LogLevel"].asString();
				if(!valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrType"].isNull())
					logs5Object.errType = valueSubDistributedJobStatusSubDistributedJobStatusItemJobProgressProgressInfoLogsJobLog["ErrType"].asString();
				jobProgress3Object.logs5.push_back(logs5Object);
			}
			subDistributedJobStatusObject.jobProgress3.push_back(jobProgress3Object);
		}
		subDistributedJobStatus_.push_back(subDistributedJobStatusObject);
	}
	auto allFullNetCheckJobStatusNode = value["FullNetCheckJobStatus"]["FullNetCheckJobStatusItem"];
	for (auto valueFullNetCheckJobStatusFullNetCheckJobStatusItem : allFullNetCheckJobStatusNode)
	{
		FullNetCheckJobStatusItem fullNetCheckJobStatusObject;
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["JobName"].isNull())
			fullNetCheckJobStatusObject.jobName = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["JobName"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["State"].isNull())
			fullNetCheckJobStatusObject.state = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["State"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["JobId"].isNull())
			fullNetCheckJobStatusObject.jobId = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["JobId"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["ErrorItem"].isNull())
			fullNetCheckJobStatusObject.errorItem = std::stoi(valueFullNetCheckJobStatusFullNetCheckJobStatusItem["ErrorItem"].asString());
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["Code"].isNull())
			fullNetCheckJobStatusObject.code = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["Code"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["Total"].isNull())
			fullNetCheckJobStatusObject.total = std::stoi(valueFullNetCheckJobStatusFullNetCheckJobStatusItem["Total"].asString());
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["HostRegion"].isNull())
			fullNetCheckJobStatusObject.hostRegion = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["HostRegion"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["SrcRegion"].isNull())
			fullNetCheckJobStatusObject.srcRegion = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["SrcRegion"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["DestRegion"].isNull())
			fullNetCheckJobStatusObject.destRegion = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["DestRegion"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["SrcRegionCidr"].isNull())
			fullNetCheckJobStatusObject.srcRegionCidr = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["SrcRegionCidr"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["DestRegionCidr"].isNull())
			fullNetCheckJobStatusObject.destRegionCidr = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["DestRegionCidr"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["SourceEndpointType"].isNull())
			fullNetCheckJobStatusObject.sourceEndpointType = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["SourceEndpointType"].asString();
		if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItem["DestinationEndpointType"].isNull())
			fullNetCheckJobStatusObject.destinationEndpointType = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["DestinationEndpointType"].asString();
		auto allJobProgress7Node = valueFullNetCheckJobStatusFullNetCheckJobStatusItem["JobProgress"]["ProgressInfo"];
		for (auto valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo : allJobProgress7Node)
		{
			FullNetCheckJobStatusItem::ProgressInfo8 jobProgress7Object;
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Skip"].isNull())
				jobProgress7Object.skip = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Skip"].asString() == "true";
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["FinishTime"].isNull())
				jobProgress7Object.finishTime = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["FinishTime"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["IgnoreFlag"].isNull())
				jobProgress7Object.ignoreFlag = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["IgnoreFlag"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["DelaySeconds"].isNull())
				jobProgress7Object.delaySeconds = std::stoi(valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["DelaySeconds"].asString());
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["DdlSql"].isNull())
				jobProgress7Object.ddlSql = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["DdlSql"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["State"].isNull())
				jobProgress7Object.state = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["State"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["BootTime"].isNull())
				jobProgress7Object.bootTime = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["BootTime"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Item"].isNull())
				jobProgress7Object.item = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Item"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Sub"].isNull())
				jobProgress7Object.sub = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Sub"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Total"].isNull())
				jobProgress7Object.total = std::stoi(valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Total"].asString());
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["TargetNames"].isNull())
				jobProgress7Object.targetNames = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["TargetNames"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["CanSkip"].isNull())
				jobProgress7Object.canSkip = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["CanSkip"].asString() == "true";
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Names"].isNull())
				jobProgress7Object.names = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Names"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["ErrDetail"].isNull())
				jobProgress7Object.errDetail = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["ErrDetail"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["DiffRow"].isNull())
				jobProgress7Object.diffRow = std::stol(valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["DiffRow"].asString());
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["JobId"].isNull())
				jobProgress7Object.jobId = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["JobId"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["SourceSchema"].isNull())
				jobProgress7Object.sourceSchema = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["SourceSchema"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["DestSchema"].isNull())
				jobProgress7Object.destSchema = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["DestSchema"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["ParentObj"].isNull())
				jobProgress7Object.parentObj = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["ParentObj"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["ErrMsg"].isNull())
				jobProgress7Object.errMsg = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["ErrMsg"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["OrderNum"].isNull())
				jobProgress7Object.orderNum = std::stoi(valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["OrderNum"].asString());
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["RepairMethod"].isNull())
				jobProgress7Object.repairMethod = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["RepairMethod"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Id"].isNull())
				jobProgress7Object.id = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Id"].asString();
			if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Current"].isNull())
				jobProgress7Object.current = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Current"].asString();
			auto allLogs9Node = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfo["Logs"]["JobLog"];
			for (auto valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfoLogsJobLog : allLogs9Node)
			{
				FullNetCheckJobStatusItem::ProgressInfo8::JobLog10 logs9Object;
				if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfoLogsJobLog["ErrData"].isNull())
					logs9Object.errData = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfoLogsJobLog["ErrData"].asString();
				if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfoLogsJobLog["ErrMsg"].isNull())
					logs9Object.errMsg = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfoLogsJobLog["ErrMsg"].asString();
				if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfoLogsJobLog["LogLevel"].isNull())
					logs9Object.logLevel = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfoLogsJobLog["LogLevel"].asString();
				if(!valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfoLogsJobLog["ErrType"].isNull())
					logs9Object.errType = valueFullNetCheckJobStatusFullNetCheckJobStatusItemJobProgressProgressInfoLogsJobLog["ErrType"].asString();
				jobProgress7Object.logs9.push_back(logs9Object);
			}
			fullNetCheckJobStatusObject.jobProgress7.push_back(jobProgress7Object);
		}
		fullNetCheckJobStatus_.push_back(fullNetCheckJobStatusObject);
	}
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stol(value["PageRecordCount"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["JobName"].isNull())
		jobName_ = value["JobName"].asString();
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["ErrorItem"].isNull())
		errorItem_ = std::stoi(value["ErrorItem"].asString());
	if(!value["ErrorAnalysisItem"].isNull())
		errorAnalysisItem_ = std::stoi(value["ErrorAnalysisItem"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribePreCheckStatusResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribePreCheckStatusResult::AnalysisProgressInfo> DescribePreCheckStatusResult::getAnalysisJobProgress()const
{
	return analysisJobProgress_;
}

long DescribePreCheckStatusResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::vector<DescribePreCheckStatusResult::FullNetCheckJobStatusItem> DescribePreCheckStatusResult::getFullNetCheckJobStatus()const
{
	return fullNetCheckJobStatus_;
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

int DescribePreCheckStatusResult::getErrorAnalysisItem()const
{
	return errorAnalysisItem_;
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

