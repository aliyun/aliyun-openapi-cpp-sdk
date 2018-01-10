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
		BinLogFile binLogFileObject;
		binLogFileObject.fileSize = std::stol(value["FileSize"].asString());
		binLogFileObject.logBeginTime = value["LogBeginTime"].asString();
		binLogFileObject.logEndTime = value["LogEndTime"].asString();
		binLogFileObject.downloadLink = value["DownloadLink"].asString();
		binLogFileObject.intranetDownloadLink = value["IntranetDownloadLink"].asString();
		binLogFileObject.linkExpiredTime = value["LinkExpiredTime"].asString();
		binLogFileObject.checksum = value["Checksum"].asString();
		binLogFileObject.hostInstanceID = value["HostInstanceID"].asString();
		items_.push_back(binLogFileObject);
	}
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	totalFileSize_ = std::stol(value["TotalFileSize"].asString());

}

int DescribeBinlogFilesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeBinlogFilesResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeBinlogFilesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeBinlogFilesResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeBinlogFilesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBinlogFilesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

long DescribeBinlogFilesResult::getTotalFileSize()const
{
	return totalFileSize_;
}

void DescribeBinlogFilesResult::setTotalFileSize(long totalFileSize)
{
	totalFileSize_ = totalFileSize;
}

