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

#include <alibabacloud/jarvis/model/DescribeResetRecordQueryCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

DescribeResetRecordQueryCountResult::DescribeResetRecordQueryCountResult() :
	ServiceResult()
{}

DescribeResetRecordQueryCountResult::DescribeResetRecordQueryCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResetRecordQueryCountResult::~DescribeResetRecordQueryCountResult()
{}

void DescribeResetRecordQueryCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["QueryCount"].isNull())
		queryCount_ = std::stoi(value["QueryCount"].asString());
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();

}

int DescribeResetRecordQueryCountResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeResetRecordQueryCountResult::getQueryCount()const
{
	return queryCount_;
}

std::string DescribeResetRecordQueryCountResult::getModule()const
{
	return module_;
}

