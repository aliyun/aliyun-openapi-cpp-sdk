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
		SQLServerUploadFile sQLServerUploadFileObject;
		sQLServerUploadFileObject.dBName = value["DBName"].asString();
		sQLServerUploadFileObject.fileName = value["FileName"].asString();
		sQLServerUploadFileObject.fileSize = std::stol(value["FileSize"].asString());
		sQLServerUploadFileObject.internetFtpServer = value["InternetFtpServer"].asString();
		sQLServerUploadFileObject.internetPort = std::stoi(value["InternetPort"].asString());
		sQLServerUploadFileObject.intranetFtpserver = value["IntranetFtpserver"].asString();
		sQLServerUploadFileObject.intranetport = std::stoi(value["Intranetport"].asString());
		sQLServerUploadFileObject.userName = value["UserName"].asString();
		sQLServerUploadFileObject.password = value["Password"].asString();
		sQLServerUploadFileObject.fileStatus = value["FileStatus"].asString();
		sQLServerUploadFileObject.description = value["Description"].asString();
		sQLServerUploadFileObject.creationTime = value["CreationTime"].asString();
		items_.push_back(sQLServerUploadFileObject);
	}
	dBInstanceId_ = value["DBInstanceId"].asString();
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeFilesForSQLServerResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeFilesForSQLServerResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeFilesForSQLServerResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeFilesForSQLServerResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

std::string DescribeFilesForSQLServerResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeFilesForSQLServerResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

int DescribeFilesForSQLServerResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeFilesForSQLServerResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

