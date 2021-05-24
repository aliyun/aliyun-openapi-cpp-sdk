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

#include <alibabacloud/dts/model/DescribeDtsJobLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDtsJobLogsResult::DescribeDtsJobLogsResult() :
	ServiceResult()
{}

DescribeDtsJobLogsResult::DescribeDtsJobLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDtsJobLogsResult::~DescribeDtsJobLogsResult()
{}

void DescribeDtsJobLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobRunningLogsNode = value["JobRunningLogs"]["JobRunningLog"];
	for (auto valueJobRunningLogsJobRunningLog : allJobRunningLogsNode)
	{
		JobRunningLog jobRunningLogsObject;
		if(!valueJobRunningLogsJobRunningLog["Id"].isNull())
			jobRunningLogsObject.id = std::stol(valueJobRunningLogsJobRunningLog["Id"].asString());
		if(!valueJobRunningLogsJobRunningLog["JobId"].isNull())
			jobRunningLogsObject.jobId = valueJobRunningLogsJobRunningLog["JobId"].asString();
		if(!valueJobRunningLogsJobRunningLog["LogDatetime"].isNull())
			jobRunningLogsObject.logDatetime = std::stol(valueJobRunningLogsJobRunningLog["LogDatetime"].asString());
		if(!valueJobRunningLogsJobRunningLog["ContentKey"].isNull())
			jobRunningLogsObject.contentKey = valueJobRunningLogsJobRunningLog["ContentKey"].asString();
		if(!valueJobRunningLogsJobRunningLog["Status"].isNull())
			jobRunningLogsObject.status = valueJobRunningLogsJobRunningLog["Status"].asString();
		auto allParams = value["Params"]["String"];
		for (auto value : allParams)
			jobRunningLogsObject.params.push_back(value.asString());
		jobRunningLogs_.push_back(jobRunningLogsObject);
	}
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long DescribeDtsJobLogsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDtsJobLogsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDtsJobLogsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDtsJobLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeDtsJobLogsResult::JobRunningLog> DescribeDtsJobLogsResult::getJobRunningLogs()const
{
	return jobRunningLogs_;
}

std::string DescribeDtsJobLogsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeDtsJobLogsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeDtsJobLogsResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeDtsJobLogsResult::getSuccess()const
{
	return success_;
}

std::string DescribeDtsJobLogsResult::getErrCode()const
{
	return errCode_;
}

