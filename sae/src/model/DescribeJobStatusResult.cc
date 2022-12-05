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

#include <alibabacloud/sae/model/DescribeJobStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeJobStatusResult::DescribeJobStatusResult() :
	ServiceResult()
{}

DescribeJobStatusResult::DescribeJobStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobStatusResult::~DescribeJobStatusResult()
{}

void DescribeJobStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!dataNode["Active"].isNull())
		data_.active = std::stol(dataNode["Active"].asString());
	if(!dataNode["Succeeded"].isNull())
		data_.succeeded = std::stol(dataNode["Succeeded"].asString());
	if(!dataNode["Failed"].isNull())
		data_.failed = std::stol(dataNode["Failed"].asString());
	if(!dataNode["StartTime"].isNull())
		data_.startTime = std::stol(dataNode["StartTime"].asString());
	if(!dataNode["CompletionTime"].isNull())
		data_.completionTime = std::stol(dataNode["CompletionTime"].asString());
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!dataNode["State"].isNull())
		data_.state = dataNode["State"].asString();
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

std::string DescribeJobStatusResult::getMessage()const
{
	return message_;
}

std::string DescribeJobStatusResult::getTraceId()const
{
	return traceId_;
}

DescribeJobStatusResult::Data DescribeJobStatusResult::getData()const
{
	return data_;
}

std::string DescribeJobStatusResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeJobStatusResult::getCode()const
{
	return code_;
}

bool DescribeJobStatusResult::getSuccess()const
{
	return success_;
}

