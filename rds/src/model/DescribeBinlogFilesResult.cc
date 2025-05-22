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

#include <alibabacloud/rds/model/DescribeBinlogFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allItemsNode = value["Items"]["BinLogFile"];
	for (auto valueItemsBinLogFile : allItemsNode)
	{
		BinLogFile itemsObject;
		if(!valueItemsBinLogFile["Checksum"].isNull())
			itemsObject.checksum = valueItemsBinLogFile["Checksum"].asString();
		if(!valueItemsBinLogFile["DownloadLink"].isNull())
			itemsObject.downloadLink = valueItemsBinLogFile["DownloadLink"].asString();
		if(!valueItemsBinLogFile["FileSize"].isNull())
			itemsObject.fileSize = std::stol(valueItemsBinLogFile["FileSize"].asString());
		if(!valueItemsBinLogFile["HostInstanceID"].isNull())
			itemsObject.hostInstanceID = valueItemsBinLogFile["HostInstanceID"].asString();
		if(!valueItemsBinLogFile["IntranetDownloadLink"].isNull())
			itemsObject.intranetDownloadLink = valueItemsBinLogFile["IntranetDownloadLink"].asString();
		if(!valueItemsBinLogFile["LinkExpiredTime"].isNull())
			itemsObject.linkExpiredTime = valueItemsBinLogFile["LinkExpiredTime"].asString();
		if(!valueItemsBinLogFile["LogBeginTime"].isNull())
			itemsObject.logBeginTime = valueItemsBinLogFile["LogBeginTime"].asString();
		if(!valueItemsBinLogFile["LogEndTime"].isNull())
			itemsObject.logEndTime = valueItemsBinLogFile["LogEndTime"].asString();
		if(!valueItemsBinLogFile["LogFileName"].isNull())
			itemsObject.logFileName = valueItemsBinLogFile["LogFileName"].asString();
		if(!valueItemsBinLogFile["RemoteStatus"].isNull())
			itemsObject.remoteStatus = valueItemsBinLogFile["RemoteStatus"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalFileSize"].isNull())
		totalFileSize_ = std::stol(value["TotalFileSize"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeBinlogFilesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeBinlogFilesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeBinlogFilesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBinlogFilesResult::BinLogFile> DescribeBinlogFilesResult::getItems()const
{
	return items_;
}

long DescribeBinlogFilesResult::getTotalFileSize()const
{
	return totalFileSize_;
}

