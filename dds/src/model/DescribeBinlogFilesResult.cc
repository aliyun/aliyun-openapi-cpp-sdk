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

#include <alibabacloud/dds/model/DescribeBinlogFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeBinlogFilesResult::DescribeBinlogFilesResult() :
	ServiceResult()
{}

DescribeBinlogFilesResult::DescribeBinlogFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBinlogFilesResult::~DescribeBinlogFilesResult()
{}

void DescribeBinlogFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["LogFile"];
	for (auto valueItemsLogFile : allItemsNode)
	{
		LogFile itemsObject;
		if(!valueItemsLogFile["LogFileName"].isNull())
			itemsObject.logFileName = valueItemsLogFile["LogFileName"].asString();
		if(!valueItemsLogFile["DumpDownloadURL"].isNull())
			itemsObject.dumpDownloadURL = valueItemsLogFile["DumpDownloadURL"].asString();
		if(!valueItemsLogFile["LogBeginTime"].isNull())
			itemsObject.logBeginTime = valueItemsLogFile["LogBeginTime"].asString();
		if(!valueItemsLogFile["DumpBucket"].isNull())
			itemsObject.dumpBucket = valueItemsLogFile["DumpBucket"].asString();
		if(!valueItemsLogFile["LinkExpiredTime"].isNull())
			itemsObject.linkExpiredTime = valueItemsLogFile["LinkExpiredTime"].asString();
		if(!valueItemsLogFile["DownloadLink"].isNull())
			itemsObject.downloadLink = valueItemsLogFile["DownloadLink"].asString();
		if(!valueItemsLogFile["OSSEndpoint"].isNull())
			itemsObject.oSSEndpoint = valueItemsLogFile["OSSEndpoint"].asString();
		if(!valueItemsLogFile["LogEndTime"].isNull())
			itemsObject.logEndTime = valueItemsLogFile["LogEndTime"].asString();
		if(!valueItemsLogFile["DumpState"].isNull())
			itemsObject.dumpState = std::stoi(valueItemsLogFile["DumpState"].asString());
		if(!valueItemsLogFile["FileSize"].isNull())
			itemsObject.fileSize = valueItemsLogFile["FileSize"].asString();
		if(!valueItemsLogFile["FileId"].isNull())
			itemsObject.fileId = valueItemsLogFile["FileId"].asString();
		if(!valueItemsLogFile["BinLogId"].isNull())
			itemsObject.binLogId = valueItemsLogFile["BinLogId"].asString();
		if(!valueItemsLogFile["LogStatus"].isNull())
			itemsObject.logStatus = valueItemsLogFile["LogStatus"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["MaxRecordsPerPage"].isNull())
		maxRecordsPerPage_ = std::stoi(value["MaxRecordsPerPage"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeBinlogFilesResult::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

int DescribeBinlogFilesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeBinlogFilesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBinlogFilesResult::LogFile> DescribeBinlogFilesResult::getItems()const
{
	return items_;
}

