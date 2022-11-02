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

#include <alibabacloud/schedulerx2/model/ListJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

ListJobsResult::ListJobsResult() :
	ServiceResult()
{}

ListJobsResult::ListJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobsResult::~ListJobsResult()
{}

void ListJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allJobsNode = dataNode["Jobs"]["Job"];
	for (auto dataNodeJobsJob : allJobsNode)
	{
		Data::Job jobObject;
		if(!dataNodeJobsJob["Status"].isNull())
			jobObject.status = std::stoi(dataNodeJobsJob["Status"].asString());
		if(!dataNodeJobsJob["JarUrl"].isNull())
			jobObject.jarUrl = dataNodeJobsJob["JarUrl"].asString();
		if(!dataNodeJobsJob["MaxAttempt"].isNull())
			jobObject.maxAttempt = std::stoi(dataNodeJobsJob["MaxAttempt"].asString());
		if(!dataNodeJobsJob["Parameters"].isNull())
			jobObject.parameters = dataNodeJobsJob["Parameters"].asString();
		if(!dataNodeJobsJob["Description"].isNull())
			jobObject.description = dataNodeJobsJob["Description"].asString();
		if(!dataNodeJobsJob["JobId"].isNull())
			jobObject.jobId = std::stol(dataNodeJobsJob["JobId"].asString());
		if(!dataNodeJobsJob["ExecuteMode"].isNull())
			jobObject.executeMode = dataNodeJobsJob["ExecuteMode"].asString();
		if(!dataNodeJobsJob["MaxConcurrency"].isNull())
			jobObject.maxConcurrency = dataNodeJobsJob["MaxConcurrency"].asString();
		if(!dataNodeJobsJob["Name"].isNull())
			jobObject.name = dataNodeJobsJob["Name"].asString();
		if(!dataNodeJobsJob["ClassName"].isNull())
			jobObject.className = dataNodeJobsJob["ClassName"].asString();
		if(!dataNodeJobsJob["Content"].isNull())
			jobObject.content = dataNodeJobsJob["Content"].asString();
		if(!dataNodeJobsJob["JobType"].isNull())
			jobObject.jobType = dataNodeJobsJob["JobType"].asString();
		if(!dataNodeJobsJob["AttemptInterval"].isNull())
			jobObject.attemptInterval = std::stoi(dataNodeJobsJob["AttemptInterval"].asString());
		if(!dataNodeJobsJob["XAttrs"].isNull())
			jobObject.xAttrs = dataNodeJobsJob["XAttrs"].asString();
		auto mapTaskXAttrsNode = value["MapTaskXAttrs"];
		if(!mapTaskXAttrsNode["TaskMaxAttempt"].isNull())
			jobObject.mapTaskXAttrs.taskMaxAttempt = std::stoi(mapTaskXAttrsNode["TaskMaxAttempt"].asString());
		if(!mapTaskXAttrsNode["TaskAttemptInterval"].isNull())
			jobObject.mapTaskXAttrs.taskAttemptInterval = std::stoi(mapTaskXAttrsNode["TaskAttemptInterval"].asString());
		if(!mapTaskXAttrsNode["ConsumerSize"].isNull())
			jobObject.mapTaskXAttrs.consumerSize = std::stoi(mapTaskXAttrsNode["ConsumerSize"].asString());
		if(!mapTaskXAttrsNode["QueueSize"].isNull())
			jobObject.mapTaskXAttrs.queueSize = std::stoi(mapTaskXAttrsNode["QueueSize"].asString());
		if(!mapTaskXAttrsNode["DispatcherSize"].isNull())
			jobObject.mapTaskXAttrs.dispatcherSize = std::stoi(mapTaskXAttrsNode["DispatcherSize"].asString());
		if(!mapTaskXAttrsNode["PageSize"].isNull())
			jobObject.mapTaskXAttrs.pageSize = std::stoi(mapTaskXAttrsNode["PageSize"].asString());
		auto timeConfigNode = value["TimeConfig"];
		if(!timeConfigNode["Calendar"].isNull())
			jobObject.timeConfig.calendar = timeConfigNode["Calendar"].asString();
		if(!timeConfigNode["TimeType"].isNull())
			jobObject.timeConfig.timeType = std::stoi(timeConfigNode["TimeType"].asString());
		if(!timeConfigNode["DataOffset"].isNull())
			jobObject.timeConfig.dataOffset = std::stoi(timeConfigNode["DataOffset"].asString());
		if(!timeConfigNode["TimeExpression"].isNull())
			jobObject.timeConfig.timeExpression = timeConfigNode["TimeExpression"].asString();
		auto jobMonitorInfoNode = value["JobMonitorInfo"];
		auto allContactInfoNode = jobMonitorInfoNode["ContactInfo"]["ContactInfoItem"];
		for (auto jobMonitorInfoNodeContactInfoContactInfoItem : allContactInfoNode)
		{
			Data::Job::JobMonitorInfo::ContactInfoItem contactInfoItemObject;
			if(!jobMonitorInfoNodeContactInfoContactInfoItem["UserPhone"].isNull())
				contactInfoItemObject.userPhone = jobMonitorInfoNodeContactInfoContactInfoItem["UserPhone"].asString();
			if(!jobMonitorInfoNodeContactInfoContactInfoItem["UserName"].isNull())
				contactInfoItemObject.userName = jobMonitorInfoNodeContactInfoContactInfoItem["UserName"].asString();
			if(!jobMonitorInfoNodeContactInfoContactInfoItem["Ding"].isNull())
				contactInfoItemObject.ding = jobMonitorInfoNodeContactInfoContactInfoItem["Ding"].asString();
			if(!jobMonitorInfoNodeContactInfoContactInfoItem["UserMail"].isNull())
				contactInfoItemObject.userMail = jobMonitorInfoNodeContactInfoContactInfoItem["UserMail"].asString();
			jobObject.jobMonitorInfo.contactInfo.push_back(contactInfoItemObject);
		}
		auto monitorConfigNode = jobMonitorInfoNode["MonitorConfig"];
		if(!monitorConfigNode["Timeout"].isNull())
			jobObject.jobMonitorInfo.monitorConfig.timeout = std::stol(monitorConfigNode["Timeout"].asString());
		if(!monitorConfigNode["SendChannel"].isNull())
			jobObject.jobMonitorInfo.monitorConfig.sendChannel = monitorConfigNode["SendChannel"].asString();
		if(!monitorConfigNode["TimeoutKillEnable"].isNull())
			jobObject.jobMonitorInfo.monitorConfig.timeoutKillEnable = monitorConfigNode["TimeoutKillEnable"].asString() == "true";
		if(!monitorConfigNode["TimeoutEnable"].isNull())
			jobObject.jobMonitorInfo.monitorConfig.timeoutEnable = monitorConfigNode["TimeoutEnable"].asString() == "true";
		if(!monitorConfigNode["FailEnable"].isNull())
			jobObject.jobMonitorInfo.monitorConfig.failEnable = monitorConfigNode["FailEnable"].asString() == "true";
		if(!monitorConfigNode["MissWorkerEnable"].isNull())
			jobObject.jobMonitorInfo.monitorConfig.missWorkerEnable = monitorConfigNode["MissWorkerEnable"].asString() == "true";
		data_.jobs.push_back(jobObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListJobsResult::getMessage()const
{
	return message_;
}

ListJobsResult::Data ListJobsResult::getData()const
{
	return data_;
}

int ListJobsResult::getCode()const
{
	return code_;
}

bool ListJobsResult::getSuccess()const
{
	return success_;
}

