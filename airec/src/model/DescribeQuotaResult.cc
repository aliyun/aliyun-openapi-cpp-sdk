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

#include <alibabacloud/airec/model/DescribeQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeQuotaResult::DescribeQuotaResult() :
	ServiceResult()
{}

DescribeQuotaResult::DescribeQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeQuotaResult::~DescribeQuotaResult()
{}

void DescribeQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["currentQps"].isNull())
		result_.currentQps = std::stoi(resultNode["currentQps"].asString());
	if(!resultNode["itemCount"].isNull())
		result_.itemCount = std::stol(resultNode["itemCount"].asString());
	if(!resultNode["itemCountUsed"].isNull())
		result_.itemCountUsed = std::stol(resultNode["itemCountUsed"].asString());
	if(!resultNode["qps"].isNull())
		result_.qps = std::stoi(resultNode["qps"].asString());
	if(!resultNode["userCount"].isNull())
		result_.userCount = std::stol(resultNode["userCount"].asString());
	if(!resultNode["userCountUsed"].isNull())
		result_.userCountUsed = std::stol(resultNode["userCountUsed"].asString());
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeQuotaResult::getMessage()const
{
	return message_;
}

std::string DescribeQuotaResult::getRequestId()const
{
	return requestId_;
}

std::string DescribeQuotaResult::getCode()const
{
	return code_;
}

DescribeQuotaResult::Result DescribeQuotaResult::getResult()const
{
	return result_;
}

