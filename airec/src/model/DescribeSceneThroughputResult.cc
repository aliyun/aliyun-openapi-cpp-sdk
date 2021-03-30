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

#include <alibabacloud/airec/model/DescribeSceneThroughputResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeSceneThroughputResult::DescribeSceneThroughputResult() :
	ServiceResult()
{}

DescribeSceneThroughputResult::DescribeSceneThroughputResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSceneThroughputResult::~DescribeSceneThroughputResult()
{}

void DescribeSceneThroughputResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["pvCount"].isNull())
		result_.pvCount = std::stol(resultNode["pvCount"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::string DescribeSceneThroughputResult::getRequestId()const
{
	return requestId_;
}

std::string DescribeSceneThroughputResult::getMessage()const
{
	return message_;
}

std::string DescribeSceneThroughputResult::getCode()const
{
	return code_;
}

DescribeSceneThroughputResult::Result DescribeSceneThroughputResult::getResult()const
{
	return result_;
}

