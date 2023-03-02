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

#include <alibabacloud/swas-open/model/DescribeDatabaseErrorLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

DescribeDatabaseErrorLogsResult::DescribeDatabaseErrorLogsResult() :
	ServiceResult()
{}

DescribeDatabaseErrorLogsResult::DescribeDatabaseErrorLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatabaseErrorLogsResult::~DescribeDatabaseErrorLogsResult()
{}

void DescribeDatabaseErrorLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allErrorLogsNode = value["ErrorLogs"]["ErrorLog"];
	for (auto valueErrorLogsErrorLog : allErrorLogsNode)
	{
		ErrorLog errorLogsObject;
		if(!valueErrorLogsErrorLog["ErrorInfo"].isNull())
			errorLogsObject.errorInfo = valueErrorLogsErrorLog["ErrorInfo"].asString();
		if(!valueErrorLogsErrorLog["CreateTime"].isNull())
			errorLogsObject.createTime = valueErrorLogsErrorLog["CreateTime"].asString();
		errorLogs_.push_back(errorLogsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDatabaseErrorLogsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDatabaseErrorLogsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeDatabaseErrorLogsResult::ErrorLog> DescribeDatabaseErrorLogsResult::getErrorLogs()const
{
	return errorLogs_;
}

int DescribeDatabaseErrorLogsResult::getPageNumber()const
{
	return pageNumber_;
}

