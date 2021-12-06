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

#include <alibabacloud/dataworks-public/model/CreateExportMigrationRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateExportMigrationRequest;

CreateExportMigrationRequest::CreateExportMigrationRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CreateExportMigration")
{
	setMethod(HttpRequest::Method::Post);
}

CreateExportMigrationRequest::~CreateExportMigrationRequest()
{}

std::string CreateExportMigrationRequest::getExportObjectStatus()const
{
	return exportObjectStatus_;
}

void CreateExportMigrationRequest::setExportObjectStatus(const std::string& exportObjectStatus)
{
	exportObjectStatus_ = exportObjectStatus;
	setBodyParameter("ExportObjectStatus", exportObjectStatus);
}

std::string CreateExportMigrationRequest::getExportMode()const
{
	return exportMode_;
}

void CreateExportMigrationRequest::setExportMode(const std::string& exportMode)
{
	exportMode_ = exportMode;
	setBodyParameter("ExportMode", exportMode);
}

long CreateExportMigrationRequest::getIncrementalSince()const
{
	return incrementalSince_;
}

void CreateExportMigrationRequest::setIncrementalSince(long incrementalSince)
{
	incrementalSince_ = incrementalSince;
	setBodyParameter("IncrementalSince", std::to_string(incrementalSince));
}

std::string CreateExportMigrationRequest::getName()const
{
	return name_;
}

void CreateExportMigrationRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateExportMigrationRequest::getDescription()const
{
	return description_;
}

void CreateExportMigrationRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

long CreateExportMigrationRequest::getProjectId()const
{
	return projectId_;
}

void CreateExportMigrationRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

