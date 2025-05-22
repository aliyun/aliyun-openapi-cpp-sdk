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
	auto allItemsNode = value["Items"]["LogFile"];
	for (auto valueItemsLogFile : allItemsNode)
	{
		LogFile itemsObject;
		if(!valueItemsLogFile["FileID"].isNull())
			itemsObject.fileID = valueItemsLogFile["FileID"].asString();
		if(!valueItemsLogFile["LogDownloadURL"].isNull())
			itemsObject.logDownloadURL = valueItemsLogFile["LogDownloadURL"].asString();
		if(!valueItemsLogFile["LogEndTime"].isNull())
			itemsObject.logEndTime = valueItemsLogFile["LogEndTime"].asString();
		if(!valueItemsLogFile["LogSize"].isNull())
			itemsObject.logSize = valueItemsLogFile["LogSize"].asString();
		if(!valueItemsLogFile["LogStartTime"].isNull())
			itemsObject.logStartTime = valueItemsLogFile["LogStartTime"].asString();
		if(!valueItemsLogFile["LogStatus"].isNull())
			itemsObject.logStatus = valueItemsLogFile["LogStatus"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeSQLLogFilesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSQLLogFilesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSQLLogFilesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSQLLogFilesResult::LogFile> DescribeSQLLogFilesResult::getItems()const
{
	return items_;
}

