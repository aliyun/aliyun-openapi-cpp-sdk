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

#include <alibabacloud/hbase/model/CreateRestorePlanRequest.h>

using AlibabaCloud::HBase::Model::CreateRestorePlanRequest;

CreateRestorePlanRequest::CreateRestorePlanRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "CreateRestorePlan")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRestorePlanRequest::~CreateRestorePlanRequest()
{}

std::string CreateRestorePlanRequest::getRestoreToDate()const
{
	return restoreToDate_;
}

void CreateRestorePlanRequest::setRestoreToDate(const std::string& restoreToDate)
{
	restoreToDate_ = restoreToDate;
	setParameter("RestoreToDate", restoreToDate);
}

std::string CreateRestorePlanRequest::getTables()const
{
	return tables_;
}

void CreateRestorePlanRequest::setTables(const std::string& tables)
{
	tables_ = tables;
	setParameter("Tables", tables);
}

bool CreateRestorePlanRequest::getRestoreByCopy()const
{
	return restoreByCopy_;
}

void CreateRestorePlanRequest::setRestoreByCopy(bool restoreByCopy)
{
	restoreByCopy_ = restoreByCopy;
	setParameter("RestoreByCopy", restoreByCopy ? "true" : "false");
}

bool CreateRestorePlanRequest::getRestoreAllTable()const
{
	return restoreAllTable_;
}

void CreateRestorePlanRequest::setRestoreAllTable(bool restoreAllTable)
{
	restoreAllTable_ = restoreAllTable;
	setParameter("RestoreAllTable", restoreAllTable ? "true" : "false");
}

std::string CreateRestorePlanRequest::getClusterId()const
{
	return clusterId_;
}

void CreateRestorePlanRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateRestorePlanRequest::getTargetClusterId()const
{
	return targetClusterId_;
}

void CreateRestorePlanRequest::setTargetClusterId(const std::string& targetClusterId)
{
	targetClusterId_ = targetClusterId;
	setParameter("TargetClusterId", targetClusterId);
}

