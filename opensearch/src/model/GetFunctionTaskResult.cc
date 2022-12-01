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

#include <alibabacloud/opensearch/model/GetFunctionTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

GetFunctionTaskResult::GetFunctionTaskResult() :
	ServiceResult()
{}

GetFunctionTaskResult::GetFunctionTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFunctionTaskResult::~GetFunctionTaskResult()
{}

void GetFunctionTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["EndTime"].isNull())
		result_.endTime = std::stol(resultNode["EndTime"].asString());
	if(!resultNode["ExtendInfo"].isNull())
		result_.extendInfo = resultNode["ExtendInfo"].asString();
	if(!resultNode["FunctionName"].isNull())
		result_.functionName = resultNode["FunctionName"].asString();
	if(!resultNode["Generation"].isNull())
		result_.generation = resultNode["Generation"].asString();
	if(!resultNode["Progress"].isNull())
		result_.progress = std::stol(resultNode["Progress"].asString());
	if(!resultNode["RunId"].isNull())
		result_.runId = resultNode["RunId"].asString();
	if(!resultNode["StartTime"].isNull())
		result_.startTime = std::stol(resultNode["StartTime"].asString());
	if(!resultNode["Status"].isNull())
		result_.status = resultNode["Status"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = std::stol(value["HttpCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Latency"].isNull())
		latency_ = std::stol(value["Latency"].asString());

}

std::string GetFunctionTaskResult::getStatus()const
{
	return status_;
}

long GetFunctionTaskResult::getHttpCode()const
{
	return httpCode_;
}

std::string GetFunctionTaskResult::getMessage()const
{
	return message_;
}

std::string GetFunctionTaskResult::getCode()const
{
	return code_;
}

GetFunctionTaskResult::Result GetFunctionTaskResult::getResult()const
{
	return result_;
}

long GetFunctionTaskResult::getLatency()const
{
	return latency_;
}

