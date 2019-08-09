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

#include <alibabacloud/dds/model/DescribeAuditFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeAuditFilesResult::DescribeAuditFilesResult() :
	ServiceResult()
{}

DescribeAuditFilesResult::DescribeAuditFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuditFilesResult::~DescribeAuditFilesResult()
{}

void DescribeAuditFilesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["LogFile"];
	for (auto value : allItems)
	{
		LogFile itemsObject;
		if(!value["FileID"].isNull())
			itemsObject.fileID = std::stoi(value["FileID"].asString());
		if(!value["LogStatus"].isNull())
			itemsObject.logStatus = value["LogStatus"].asString();
		if(!value["LogStartTime"].isNull())
			itemsObject.logStartTime = value["LogStartTime"].asString();
		if(!value["LogEndTime"].isNull())
			itemsObject.logEndTime = value["LogEndTime"].asString();
		if(!value["LogDownloadURL"].isNull())
			itemsObject.logDownloadURL = value["LogDownloadURL"].asString();
		if(!value["LogSize"].isNull())
			itemsObject.logSize = std::stol(value["LogSize"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();

}

int DescribeAuditFilesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeAuditFilesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeAuditFilesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeAuditFilesResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::vector<DescribeAuditFilesResult::LogFile> DescribeAuditFilesResult::getItems()const
{
	return items_;
}

