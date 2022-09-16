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

#include <alibabacloud/ecd/model/DescribeScanTaskProgressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeScanTaskProgressResult::DescribeScanTaskProgressResult() :
	ServiceResult()
{}

DescribeScanTaskProgressResult::DescribeScanTaskProgressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScanTaskProgressResult::~DescribeScanTaskProgressResult()
{}

void DescribeScanTaskProgressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TaskStatus"].isNull())
		taskStatus_ = value["TaskStatus"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();

}

std::string DescribeScanTaskProgressResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeScanTaskProgressResult::getTaskStatus()const
{
	return taskStatus_;
}

