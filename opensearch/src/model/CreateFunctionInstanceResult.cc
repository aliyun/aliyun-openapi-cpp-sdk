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

#include <alibabacloud/opensearch/model/CreateFunctionInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

CreateFunctionInstanceResult::CreateFunctionInstanceResult() :
	ServiceResult()
{}

CreateFunctionInstanceResult::CreateFunctionInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateFunctionInstanceResult::~CreateFunctionInstanceResult()
{}

void CreateFunctionInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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

std::string CreateFunctionInstanceResult::getStatus()const
{
	return status_;
}

long CreateFunctionInstanceResult::getHttpCode()const
{
	return httpCode_;
}

std::string CreateFunctionInstanceResult::getMessage()const
{
	return message_;
}

std::string CreateFunctionInstanceResult::getCode()const
{
	return code_;
}

long CreateFunctionInstanceResult::getLatency()const
{
	return latency_;
}

