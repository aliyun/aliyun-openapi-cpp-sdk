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

#include <alibabacloud/sae/model/DescribeJobHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeJobHistoryResult::DescribeJobHistoryResult() :
	ServiceResult()
{}

DescribeJobHistoryResult::DescribeJobHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobHistoryResult::~DescribeJobHistoryResult()
{}

void DescribeJobHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stol(dataNode["CurrentPage"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stol(dataNode["TotalSize"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	auto allJobsNode = dataNode["Jobs"]["job"];
	for (auto dataNodeJobsjob : allJobsNode)
	{
		Data::Job jobObject;
		if(!dataNodeJobsjob["JobId"].isNull())
			jobObject.jobId = dataNodeJobsjob["JobId"].asString();
		if(!dataNodeJobsjob["Active"].isNull())
			jobObject.active = std::stol(dataNodeJobsjob["Active"].asString());
		if(!dataNodeJobsjob["Succeeded"].isNull())
			jobObject.succeeded = std::stol(dataNodeJobsjob["Succeeded"].asString());
		if(!dataNodeJobsjob["Failed"].isNull())
			jobObject.failed = std::stol(dataNodeJobsjob["Failed"].asString());
		if(!dataNodeJobsjob["StartTime"].isNull())
			jobObject.startTime = std::stol(dataNodeJobsjob["StartTime"].asString());
		if(!dataNodeJobsjob["CompletionTime"].isNull())
			jobObject.completionTime = std::stol(dataNodeJobsjob["CompletionTime"].asString());
		if(!dataNodeJobsjob["Message"].isNull())
			jobObject.message = dataNodeJobsjob["Message"].asString();
		if(!dataNodeJobsjob["State"].isNull())
			jobObject.state = dataNodeJobsjob["State"].asString();
		data_.jobs.push_back(jobObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeJobHistoryResult::getMessage()const
{
	return message_;
}

std::string DescribeJobHistoryResult::getTraceId()const
{
	return traceId_;
}

DescribeJobHistoryResult::Data DescribeJobHistoryResult::getData()const
{
	return data_;
}

std::string DescribeJobHistoryResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeJobHistoryResult::getCode()const
{
	return code_;
}

bool DescribeJobHistoryResult::getSuccess()const
{
	return success_;
}

