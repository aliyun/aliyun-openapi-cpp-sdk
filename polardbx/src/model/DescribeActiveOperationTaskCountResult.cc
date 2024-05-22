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

#include <alibabacloud/polardbx/model/DescribeActiveOperationTaskCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeActiveOperationTaskCountResult::DescribeActiveOperationTaskCountResult() :
	ServiceResult()
{}

DescribeActiveOperationTaskCountResult::DescribeActiveOperationTaskCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActiveOperationTaskCountResult::~DescribeActiveOperationTaskCountResult()
{}

void DescribeActiveOperationTaskCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["NeedPop"].isNull())
		needPop_ = std::stol(value["NeedPop"].asString());
	if(!value["TaskCount"].isNull())
		taskCount_ = std::stol(value["TaskCount"].asString());

}

long DescribeActiveOperationTaskCountResult::getNeedPop()const
{
	return needPop_;
}

long DescribeActiveOperationTaskCountResult::getTaskCount()const
{
	return taskCount_;
}

