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

#include <alibabacloud/dataworks-public/model/CreateTableRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateTableRequest;

CreateTableRequest::CreateTableRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CreateTable")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTableRequest::~CreateTableRequest()
{}

int CreateTableRequest::getVisibility()const
{
	return visibility_;
}

void CreateTableRequest::setVisibility(int visibility)
{
	visibility_ = visibility;
	setParameter("Visibility", std::to_string(visibility));
}

long CreateTableRequest::getPhysicsLevelId()const
{
	return physicsLevelId_;
}

void CreateTableRequest::setPhysicsLevelId(long physicsLevelId)
{
	physicsLevelId_ = physicsLevelId;
	setParameter("PhysicsLevelId", std::to_string(physicsLevelId));
}

std::vector<CreateTableRequest::Columns> CreateTableRequest::getColumns()const
{
	return columns_;
}

void CreateTableRequest::setColumns(const std::vector<Columns>& columns)
{
	columns_ = columns;
	for(int dep1 = 0; dep1!= columns.size(); dep1++) {
		auto columnsObj = columns.at(dep1);
		std::string columnsObjStr = "Columns." + std::to_string(dep1 + 1);
		setParameter(columnsObjStr + ".SeqNumber", std::to_string(columnsObj.seqNumber));
		setParameter(columnsObjStr + ".IsPartitionCol", std::to_string(columnsObj.isPartitionCol));
		setParameter(columnsObjStr + ".ColumnNameCn", columnsObj.columnNameCn);
		setParameter(columnsObjStr + ".Length", std::to_string(columnsObj.length));
		setParameter(columnsObjStr + ".IsNullable", std::to_string(columnsObj.isNullable));
		setParameter(columnsObjStr + ".Comment", columnsObj.comment);
		setParameter(columnsObjStr + ".IsPrimaryKey", std::to_string(columnsObj.isPrimaryKey));
		setParameter(columnsObjStr + ".ColumnName", columnsObj.columnName);
		setParameter(columnsObjStr + ".ColumnType", columnsObj.columnType);
	}
}

std::string CreateTableRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTableRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

int CreateTableRequest::getLifeCycle()const
{
	return lifeCycle_;
}

void CreateTableRequest::setLifeCycle(int lifeCycle)
{
	lifeCycle_ = lifeCycle;
	setParameter("LifeCycle", std::to_string(lifeCycle));
}

std::vector<CreateTableRequest::Themes> CreateTableRequest::getThemes()const
{
	return themes_;
}

void CreateTableRequest::setThemes(const std::vector<Themes>& themes)
{
	themes_ = themes;
	for(int dep1 = 0; dep1!= themes.size(); dep1++) {
		auto themesObj = themes.at(dep1);
		std::string themesObjStr = "Themes." + std::to_string(dep1 + 1);
		setParameter(themesObjStr + ".ThemeLevel", std::to_string(themesObj.themeLevel));
		setParameter(themesObjStr + ".ThemeId", std::to_string(themesObj.themeId));
	}
}

long CreateTableRequest::getLogicalLevelId()const
{
	return logicalLevelId_;
}

void CreateTableRequest::setLogicalLevelId(long logicalLevelId)
{
	logicalLevelId_ = logicalLevelId;
	setParameter("LogicalLevelId", std::to_string(logicalLevelId));
}

std::string CreateTableRequest::getEndpoint()const
{
	return endpoint_;
}

void CreateTableRequest::setEndpoint(const std::string& endpoint)
{
	endpoint_ = endpoint;
	setBodyParameter("Endpoint", endpoint);
}

int CreateTableRequest::getIsView()const
{
	return isView_;
}

void CreateTableRequest::setIsView(int isView)
{
	isView_ = isView;
	setParameter("IsView", std::to_string(isView));
}

std::string CreateTableRequest::getExternalTableType()const
{
	return externalTableType_;
}

void CreateTableRequest::setExternalTableType(const std::string& externalTableType)
{
	externalTableType_ = externalTableType;
	setParameter("ExternalTableType", externalTableType);
}

int CreateTableRequest::getEnvType()const
{
	return envType_;
}

void CreateTableRequest::setEnvType(int envType)
{
	envType_ = envType;
	setBodyParameter("EnvType", std::to_string(envType));
}

int CreateTableRequest::getHasPart()const
{
	return hasPart_;
}

void CreateTableRequest::setHasPart(int hasPart)
{
	hasPart_ = hasPart;
	setParameter("HasPart", std::to_string(hasPart));
}

std::string CreateTableRequest::getLocation()const
{
	return location_;
}

void CreateTableRequest::setLocation(const std::string& location)
{
	location_ = location;
	setParameter("Location", location);
}

std::string CreateTableRequest::getTableName()const
{
	return tableName_;
}

void CreateTableRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

std::string CreateTableRequest::getAppGuid()const
{
	return appGuid_;
}

void CreateTableRequest::setAppGuid(const std::string& appGuid)
{
	appGuid_ = appGuid;
	setParameter("AppGuid", appGuid);
}

long CreateTableRequest::getProjectId()const
{
	return projectId_;
}

void CreateTableRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

long CreateTableRequest::getCategoryId()const
{
	return categoryId_;
}

void CreateTableRequest::setCategoryId(long categoryId)
{
	categoryId_ = categoryId;
	setParameter("CategoryId", std::to_string(categoryId));
}

