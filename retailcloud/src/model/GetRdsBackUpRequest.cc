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

#include <alibabacloud/retailcloud/model/GetRdsBackUpRequest.h>

using AlibabaCloud::Retailcloud::Model::GetRdsBackUpRequest;

GetRdsBackUpRequest::GetRdsBackUpRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "GetRdsBackUp")
{
	setMethod(HttpRequest::Method::Post);
}

GetRdsBackUpRequest::~GetRdsBackUpRequest()
{}

std::string GetRdsBackUpRequest::getBackupId()const
{
	return backupId_;
}

void GetRdsBackUpRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setBodyParameter("BackupId", backupId);
}

int GetRdsBackUpRequest::getPageSize()const
{
	return pageSize_;
}

void GetRdsBackUpRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string GetRdsBackUpRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void GetRdsBackUpRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setBodyParameter("DbInstanceId", dbInstanceId);
}

std::string GetRdsBackUpRequest::getBackupType()const
{
	return backupType_;
}

void GetRdsBackUpRequest::setBackupType(const std::string& backupType)
{
	backupType_ = backupType;
	setBodyParameter("BackupType", backupType);
}

int GetRdsBackUpRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetRdsBackUpRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

