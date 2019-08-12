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

#include <alibabacloud/gpdb/model/DescribeSQLLogFilesRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeSQLLogFilesRequest;

DescribeSQLLogFilesRequest::DescribeSQLLogFilesRequest() :
	RpcServiceRequest("gpdb", "2016-05-03", "DescribeSQLLogFiles")
{}

DescribeSQLLogFilesRequest::~DescribeSQLLogFilesRequest()
{}

std::string DescribeSQLLogFilesRequest::getFileName()const
{
	return fileName_;
}

void DescribeSQLLogFilesRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setCoreParameter("FileName", fileName);
}

int DescribeSQLLogFilesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSQLLogFilesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeSQLLogFilesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLLogFilesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

int DescribeSQLLogFilesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLLogFilesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeSQLLogFilesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLLogFilesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

