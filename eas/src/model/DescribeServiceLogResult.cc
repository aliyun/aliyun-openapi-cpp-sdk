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

#include <alibabacloud/eas/model/DescribeServiceLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeServiceLogResult::DescribeServiceLogResult() :
	ServiceResult()
{}

DescribeServiceLogResult::DescribeServiceLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServiceLogResult::~DescribeServiceLogResult()
{}

void DescribeServiceLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogs = value["Logs"]["Log"];
	for (const auto &item : allLogs)
		logs_.push_back(item.asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stol(value["TotalPageNum"].asString());

}

long DescribeServiceLogResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeServiceLogResult::getPageNum()const
{
	return pageNum_;
}

long DescribeServiceLogResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<std::string> DescribeServiceLogResult::getLogs()const
{
	return logs_;
}

