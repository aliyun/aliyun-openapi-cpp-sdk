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

#include <alibabacloud/dds/model/DescribeActiveOperationTaskCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
		needPop_ = std::stoi(value["NeedPop"].asString());
	if(!value["TaskCount"].isNull())
		taskCount_ = std::stoi(value["TaskCount"].asString());

}

int DescribeActiveOperationTaskCountResult::getNeedPop()const
{
	return needPop_;
}

int DescribeActiveOperationTaskCountResult::getTaskCount()const
{
	return taskCount_;
}

