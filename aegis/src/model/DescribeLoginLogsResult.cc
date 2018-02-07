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

#include <alibabacloud/aegis/model/DescribeLoginLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeLoginLogsResult::DescribeLoginLogsResult() :
	ServiceResult()
{}

DescribeLoginLogsResult::DescribeLoginLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLoginLogsResult::~DescribeLoginLogsResult()
{}

void DescribeLoginLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLoginLogs = value["LoginLogs"]["StringItem"];
	for (const auto &item : allLoginLogs)
		loginLogs_.push_back(item.asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int DescribeLoginLogsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLoginLogsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLoginLogsResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeLoginLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> DescribeLoginLogsResult::getLoginLogs()const
{
	return loginLogs_;
}

