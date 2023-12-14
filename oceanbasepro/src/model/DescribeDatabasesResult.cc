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

#include <alibabacloud/oceanbasepro/model/DescribeDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeDatabasesResult::DescribeDatabasesResult() :
	ServiceResult()
{}

DescribeDatabasesResult::DescribeDatabasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDatabasesResult::~DescribeDatabasesResult()
{}

void DescribeDatabasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatabasesNode = value["Databases"]["Data"];
	for (auto valueDatabasesData : allDatabasesNode)
	{
		Data databasesObject;
		if(!valueDatabasesData["Status"].isNull())
			databasesObject.status = valueDatabasesData["Status"].asString();
		if(!valueDatabasesData["Description"].isNull())
			databasesObject.description = valueDatabasesData["Description"].asString();
		if(!valueDatabasesData["Encoding"].isNull())
			databasesObject.encoding = valueDatabasesData["Encoding"].asString();
		if(!valueDatabasesData["DbType"].isNull())
			databasesObject.dbType = valueDatabasesData["DbType"].asString();
		if(!valueDatabasesData["DatabaseName"].isNull())
			databasesObject.databaseName = valueDatabasesData["DatabaseName"].asString();
		if(!valueDatabasesData["CreateTime"].isNull())
			databasesObject.createTime = valueDatabasesData["CreateTime"].asString();
		if(!valueDatabasesData["TenantId"].isNull())
			databasesObject.tenantId = valueDatabasesData["TenantId"].asString();
		if(!valueDatabasesData["RequiredSize"].isNull())
			databasesObject.requiredSize = valueDatabasesData["RequiredSize"].asString();
		if(!valueDatabasesData["DataSize"].isNull())
			databasesObject.dataSize = valueDatabasesData["DataSize"].asString();
		if(!valueDatabasesData["Collation"].isNull())
			databasesObject.collation = valueDatabasesData["Collation"].asString();
		if(!valueDatabasesData["InstanceId"].isNull())
			databasesObject.instanceId = valueDatabasesData["InstanceId"].asString();
		if(!valueDatabasesData["TenantName"].isNull())
			databasesObject.tenantName = valueDatabasesData["TenantName"].asString();
		auto allUsersNode = valueDatabasesData["Users"]["UsersItem"];
		for (auto valueDatabasesDataUsersUsersItem : allUsersNode)
		{
			Data::UsersItem usersObject;
			if(!valueDatabasesDataUsersUsersItem["UserType"].isNull())
				usersObject.userType = valueDatabasesDataUsersUsersItem["UserType"].asString();
			if(!valueDatabasesDataUsersUsersItem["Role"].isNull())
				usersObject.role = valueDatabasesDataUsersUsersItem["Role"].asString();
			if(!valueDatabasesDataUsersUsersItem["UserName"].isNull())
				usersObject.userName = valueDatabasesDataUsersUsersItem["UserName"].asString();
			if(!valueDatabasesDataUsersUsersItem["Privileges"].isNull())
				usersObject.privileges = valueDatabasesDataUsersUsersItem["Privileges"].asString();
			databasesObject.users.push_back(usersObject);
		}
		auto allTablesNode = valueDatabasesData["Tables"]["TablesItem"];
		for (auto valueDatabasesDataTablesTablesItem : allTablesNode)
		{
			Data::TablesItem tablesObject;
			if(!valueDatabasesDataTablesTablesItem["TableName"].isNull())
				tablesObject.tableName = valueDatabasesDataTablesTablesItem["TableName"].asString();
			databasesObject.tables.push_back(tablesObject);
		}
		databases_.push_back(databasesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDatabasesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDatabasesResult::Data> DescribeDatabasesResult::getDatabases()const
{
	return databases_;
}

