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

#include <alibabacloud/cassandra/model/DescribeNodeToolExecutionHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeNodeToolExecutionHistoryResult::DescribeNodeToolExecutionHistoryResult() :
	ServiceResult()
{}

DescribeNodeToolExecutionHistoryResult::DescribeNodeToolExecutionHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNodeToolExecutionHistoryResult::~DescribeNodeToolExecutionHistoryResult()
{}

void DescribeNodeToolExecutionHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["Command"].isNull())
		command_ = value["Command"].asString();
	if(!value["Nodes"].isNull())
		nodes_ = value["Nodes"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = std::stol(value["ModifyTime"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["IsEnded"].isNull())
		isEnded_ = value["IsEnded"].asString() == "true";
	if(!value["Arguments"].isNull())
		arguments_ = value["Arguments"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["DataCenterId"].isNull())
		dataCenterId_ = value["DataCenterId"].asString();
	if(!value["Result"].isNull())
		result_ = value["Result"].asString();

}

long DescribeNodeToolExecutionHistoryResult::getModifyTime()const
{
	return modifyTime_;
}

std::string DescribeNodeToolExecutionHistoryResult::getDataCenterId()const
{
	return dataCenterId_;
}

bool DescribeNodeToolExecutionHistoryResult::getIsEnded()const
{
	return isEnded_;
}

std::string DescribeNodeToolExecutionHistoryResult::getCommand()const
{
	return command_;
}

long DescribeNodeToolExecutionHistoryResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeNodeToolExecutionHistoryResult::getArguments()const
{
	return arguments_;
}

std::string DescribeNodeToolExecutionHistoryResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeNodeToolExecutionHistoryResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeNodeToolExecutionHistoryResult::getJobId()const
{
	return jobId_;
}

std::string DescribeNodeToolExecutionHistoryResult::getNodes()const
{
	return nodes_;
}

std::string DescribeNodeToolExecutionHistoryResult::getResult()const
{
	return result_;
}

