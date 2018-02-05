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

#include <alibabacloud/rds/model/DescribeFilesForSQLServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeFilesForSQLServerResult::DescribeFilesForSQLServerResult() :
	ServiceResult()
{}

DescribeFilesForSQLServerResult::DescribeFilesForSQLServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFilesForSQLServerResult::~DescribeFilesForSQLServerResult()
{}

void DescribeFilesForSQLServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["SQLServerUploadFile"];
	for (auto value : allItems)
	{
		SQLServerUploadFile itemsObject;
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["FileName"].isNull())
			itemsObject.fileName = value["FileName"].asString();
		if(!value["FileSize"].isNull())
			itemsObject.fileSize = std::stol(value["FileSize"].asString());
		if(!value["InternetFtpServer"].isNull())
			itemsObject.internetFtpServer = value["InternetFtpServer"].asString();
		if(!value["InternetPort"].isNull())
			itemsObject.internetPort = std::stoi(value["InternetPort"].asString());
		if(!value["IntranetFtpserver"].isNull())
			itemsObject.intranetFtpserver = value["IntranetFtpserver"].asString();
		if(!value["Intranetport"].isNull())
			itemsObject.intranetport = std::stoi(value["Intranetport"].asString());
		if(!value["UserName"].isNull())
			itemsObject.userName = value["UserName"].asString();
		if(!value["Password"].isNull())
			itemsObject.password = value["Password"].asString();
		if(!value["FileStatus"].isNull())
			itemsObject.fileStatus = value["FileStatus"].asString();
		if(!value["Description"].isNull())
			itemsObject.description = value["Description"].asString();
		if(!value["CreationTime"].isNull())
			itemsObject.creationTime = value["CreationTime"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeFilesForSQLServerResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeFilesForSQLServerResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeFilesForSQLServerResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeFilesForSQLServerResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeFilesForSQLServerResult::SQLServerUploadFile> DescribeFilesForSQLServerResult::getItems()const
{
	return items_;
}

