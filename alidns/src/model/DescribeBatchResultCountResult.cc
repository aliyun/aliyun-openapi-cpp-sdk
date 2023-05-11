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

#include <alibabacloud/alidns/model/DescribeBatchResultCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeBatchResultCountResult::DescribeBatchResultCountResult() :
	ServiceResult()
{}

DescribeBatchResultCountResult::DescribeBatchResultCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBatchResultCountResult::~DescribeBatchResultCountResult()
{}

void DescribeBatchResultCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = std::stol(value["TaskId"].asString());
	if(!value["FailedCount"].isNull())
		failedCount_ = std::stoi(value["FailedCount"].asString());
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());
	if(!value["BatchType"].isNull())
		batchType_ = value["BatchType"].asString();
	if(!value["Reason"].isNull())
		reason_ = value["Reason"].asString();

}

int DescribeBatchResultCountResult::getStatus()const
{
	return status_;
}

int DescribeBatchResultCountResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeBatchResultCountResult::getTaskId()const
{
	return taskId_;
}

int DescribeBatchResultCountResult::getFailedCount()const
{
	return failedCount_;
}

int DescribeBatchResultCountResult::getSuccessCount()const
{
	return successCount_;
}

std::string DescribeBatchResultCountResult::getBatchType()const
{
	return batchType_;
}

std::string DescribeBatchResultCountResult::getReason()const
{
	return reason_;
}

