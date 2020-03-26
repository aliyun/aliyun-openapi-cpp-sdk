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

#include <alibabacloud/drds/model/ModifyFullTableScanRequest.h>

using AlibabaCloud::Drds::Model::ModifyFullTableScanRequest;

ModifyFullTableScanRequest::ModifyFullTableScanRequest() :
	RpcServiceRequest("drds", "2017-10-16", "ModifyFullTableScan")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyFullTableScanRequest::~ModifyFullTableScanRequest()
{}

std::string ModifyFullTableScanRequest::getTableNames()const
{
	return tableNames_;
}

void ModifyFullTableScanRequest::setTableNames(const std::string& tableNames)
{
	tableNames_ = tableNames;
	setParameter("TableNames", tableNames);
}

std::string ModifyFullTableScanRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ModifyFullTableScanRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ModifyFullTableScanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyFullTableScanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyFullTableScanRequest::getDbName()const
{
	return dbName_;
}

void ModifyFullTableScanRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

bool ModifyFullTableScanRequest::getFullTableScan()const
{
	return fullTableScan_;
}

void ModifyFullTableScanRequest::setFullTableScan(bool fullTableScan)
{
	fullTableScan_ = fullTableScan;
	setParameter("FullTableScan", fullTableScan ? "true" : "false");
}

