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

#include <alibabacloud/hbase/model/DescribeBackupTablesRequest.h>

using AlibabaCloud::HBase::Model::DescribeBackupTablesRequest;

DescribeBackupTablesRequest::DescribeBackupTablesRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "DescribeBackupTables")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBackupTablesRequest::~DescribeBackupTablesRequest()
{}

int DescribeBackupTablesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBackupTablesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeBackupTablesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBackupTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBackupTablesRequest::getBackupRecordId()const
{
	return backupRecordId_;
}

void DescribeBackupTablesRequest::setBackupRecordId(const std::string& backupRecordId)
{
	backupRecordId_ = backupRecordId;
	setParameter("BackupRecordId", backupRecordId);
}

std::string DescribeBackupTablesRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeBackupTablesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

