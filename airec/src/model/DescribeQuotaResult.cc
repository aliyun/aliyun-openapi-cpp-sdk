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
	auto resultNode = value["Result"];
	if(!resultNode["UserCount"].isNull())
		result_.userCount = std::stol(resultNode["UserCount"].asString());
	if(!resultNode["UserCountUsed"].isNull())
		result_.userCountUsed = std::stol(resultNode["UserCountUsed"].asString());
	if(!resultNode["ItemCount"].isNull())
		result_.itemCount = std::stol(resultNode["ItemCount"].asString());
	if(!resultNode["ItemCountUsed"].isNull())
		result_.itemCountUsed = std::stol(resultNode["ItemCountUsed"].asString());
	if(!resultNode["Qps"].isNull())
		result_.qps = std::stoi(resultNode["Qps"].asString());
	if(!resultNode["CurrentQps"].isNull())
		result_.currentQps = std::stoi(resultNode["CurrentQps"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeQuotaResult::getMessage()const
{
	return message_;
}

std::string DescribeQuotaResult::getCode()const
{
	return code_;
}

DescribeQuotaResult::Result DescribeQuotaResult::getResult()const
{
	return result_;
}

