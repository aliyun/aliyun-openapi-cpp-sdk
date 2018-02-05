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
	auto allItems = value["Items"]["BinLogFile"];
	for (auto value : allItems)
	{
		BinLogFile itemsObject;
		if(!value["FileSize"].isNull())
			itemsObject.fileSize = std::stol(value["FileSize"].asString());
		if(!value["LogBeginTime"].isNull())
			itemsObject.logBeginTime = value["LogBeginTime"].asString();
		if(!value["LogEndTime"].isNull())
			itemsObject.logEndTime = value["LogEndTime"].asString();
		if(!value["DownloadLink"].isNull())
			itemsObject.downloadLink = value["DownloadLink"].asString();
		if(!value["IntranetDownloadLink"].isNull())
			itemsObject.intranetDownloadLink = value["IntranetDownloadLink"].asString();
		if(!value["LinkExpiredTime"].isNull())
			itemsObject.linkExpiredTime = value["LinkExpiredTime"].asString();
		if(!value["Checksum"].isNull())
			itemsObject.checksum = value["Checksum"].asString();
		if(!value["HostInstanceID"].isNull())
			itemsObject.hostInstanceID = value["HostInstanceID"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalFileSize"].isNull())
		totalFileSize_ = std::stol(value["TotalFileSize"].asString());

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

