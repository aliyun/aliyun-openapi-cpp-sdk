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

#include <alibabacloud/rds/model/DescribeSQLLogFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSQLLogFilesResult::DescribeSQLLogFilesResult() :
	ServiceResult()
{}

DescribeSQLLogFilesResult::DescribeSQLLogFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogFilesResult::~DescribeSQLLogFilesResult()
{}

void DescribeSQLLogFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["LogFile"];
	for (auto value : allItems)
	{
		LogFile logFileObject;
		logFileObject.fileID = value["FileID"].asString();
		logFileObject.logStatus = value["LogStatus"].asString();
		logFileObject.logDownloadURL = value["LogDownloadURL"].asString();
		logFileObject.logSize = value["LogSize"].asString();
		logFileObject.logStartTime = value["LogStartTime"].asString();
		logFileObject.logEndTime = value["LogEndTime"].asString();
		items_.push_back(logFileObject);
	}
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeSQLLogFilesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeSQLLogFilesResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeSQLLogFilesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeSQLLogFilesResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeSQLLogFilesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLLogFilesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

