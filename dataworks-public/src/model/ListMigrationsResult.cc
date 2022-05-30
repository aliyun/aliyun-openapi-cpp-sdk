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

#include <alibabacloud/dataworks-public/model/ListMigrationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListMigrationsResult::ListMigrationsResult() :
	ServiceResult()
{}

ListMigrationsResult::ListMigrationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMigrationsResult::~ListMigrationsResult()
{}

void ListMigrationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allMigrationsNode = dataNode["Migrations"]["Migration"];
	for (auto dataNodeMigrationsMigration : allMigrationsNode)
	{
		Data::Migration migrationObject;
		if(!dataNodeMigrationsMigration["Id"].isNull())
			migrationObject.id = std::stol(dataNodeMigrationsMigration["Id"].asString());
		if(!dataNodeMigrationsMigration["Name"].isNull())
			migrationObject.name = dataNodeMigrationsMigration["Name"].asString();
		if(!dataNodeMigrationsMigration["PackageType"].isNull())
			migrationObject.packageType = dataNodeMigrationsMigration["PackageType"].asString();
		if(!dataNodeMigrationsMigration["MigrationType"].isNull())
			migrationObject.migrationType = dataNodeMigrationsMigration["MigrationType"].asString();
		if(!dataNodeMigrationsMigration["CreateTime"].isNull())
			migrationObject.createTime = std::stol(dataNodeMigrationsMigration["CreateTime"].asString());
		if(!dataNodeMigrationsMigration["UpdateTime"].isNull())
			migrationObject.updateTime = std::stol(dataNodeMigrationsMigration["UpdateTime"].asString());
		if(!dataNodeMigrationsMigration["CreateUser"].isNull())
			migrationObject.createUser = dataNodeMigrationsMigration["CreateUser"].asString();
		if(!dataNodeMigrationsMigration["CreateUserName"].isNull())
			migrationObject.createUserName = dataNodeMigrationsMigration["CreateUserName"].asString();
		if(!dataNodeMigrationsMigration["UpdateUser"].isNull())
			migrationObject.updateUser = dataNodeMigrationsMigration["UpdateUser"].asString();
		if(!dataNodeMigrationsMigration["UpdateUserName"].isNull())
			migrationObject.updateUserName = dataNodeMigrationsMigration["UpdateUserName"].asString();
		if(!dataNodeMigrationsMigration["ProjectId"].isNull())
			migrationObject.projectId = std::stol(dataNodeMigrationsMigration["ProjectId"].asString());
		if(!dataNodeMigrationsMigration["TenantId"].isNull())
			migrationObject.tenantId = std::stol(dataNodeMigrationsMigration["TenantId"].asString());
		if(!dataNodeMigrationsMigration["Status"].isNull())
			migrationObject.status = dataNodeMigrationsMigration["Status"].asString();
		if(!dataNodeMigrationsMigration["Message"].isNull())
			migrationObject.message = dataNodeMigrationsMigration["Message"].asString();
		if(!dataNodeMigrationsMigration["DownloadUrl"].isNull())
			migrationObject.downloadUrl = dataNodeMigrationsMigration["DownloadUrl"].asString();
		if(!dataNodeMigrationsMigration["Description"].isNull())
			migrationObject.description = dataNodeMigrationsMigration["Description"].asString();
		data_.migrations.push_back(migrationObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListMigrationsResult::Data ListMigrationsResult::getData()const
{
	return data_;
}

bool ListMigrationsResult::getSuccess()const
{
	return success_;
}

