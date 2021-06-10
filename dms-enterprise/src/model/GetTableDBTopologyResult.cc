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

#include <alibabacloud/dms-enterprise/model/GetTableDBTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetTableDBTopologyResult::GetTableDBTopologyResult() :
	ServiceResult()
{}

GetTableDBTopologyResult::GetTableDBTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableDBTopologyResult::~GetTableDBTopologyResult()
{}

void GetTableDBTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dBTopologyNode = value["DBTopology"];
	if(!dBTopologyNode["TableName"].isNull())
		dBTopology_.tableName = dBTopologyNode["TableName"].asString();
	if(!dBTopologyNode["TableGuid"].isNull())
		dBTopology_.tableGuid = dBTopologyNode["TableGuid"].asString();
	auto allDataSourceListNode = dBTopologyNode["DataSourceList"]["DataSource"];
	for (auto dBTopologyNodeDataSourceListDataSource : allDataSourceListNode)
	{
		DBTopology::DataSource dataSourceObject;
		if(!dBTopologyNodeDataSourceListDataSource["Sid"].isNull())
			dataSourceObject.sid = dBTopologyNodeDataSourceListDataSource["Sid"].asString();
		if(!dBTopologyNodeDataSourceListDataSource["Host"].isNull())
			dataSourceObject.host = dBTopologyNodeDataSourceListDataSource["Host"].asString();
		if(!dBTopologyNodeDataSourceListDataSource["DbType"].isNull())
			dataSourceObject.dbType = dBTopologyNodeDataSourceListDataSource["DbType"].asString();
		if(!dBTopologyNodeDataSourceListDataSource["Port"].isNull())
			dataSourceObject.port = std::stoi(dBTopologyNodeDataSourceListDataSource["Port"].asString());
		auto allDatabaseListNode = dBTopologyNodeDataSourceListDataSource["DatabaseList"]["Database"];
		for (auto dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase : allDatabaseListNode)
		{
			DBTopology::DataSource::Database databaseListObject;
			if(!dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase["DbId"].isNull())
				databaseListObject.dbId = dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase["DbId"].asString();
			if(!dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase["DbName"].isNull())
				databaseListObject.dbName = dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase["DbName"].asString();
			if(!dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase["DbType"].isNull())
				databaseListObject.dbType = dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase["DbType"].asString();
			if(!dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase["EnvType"].isNull())
				databaseListObject.envType = dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase["EnvType"].asString();
			auto allTableListNode = dBTopologyNodeDataSourceListDataSourceDatabaseListDatabase["TableList"]["Table"];
			for (auto dBTopologyNodeDataSourceListDataSourceDatabaseListDatabaseTableListTable : allTableListNode)
			{
				DBTopology::DataSource::Database::Table tableListObject;
				if(!dBTopologyNodeDataSourceListDataSourceDatabaseListDatabaseTableListTable["TableName"].isNull())
					tableListObject.tableName = dBTopologyNodeDataSourceListDataSourceDatabaseListDatabaseTableListTable["TableName"].asString();
				if(!dBTopologyNodeDataSourceListDataSourceDatabaseListDatabaseTableListTable["TableType"].isNull())
					tableListObject.tableType = dBTopologyNodeDataSourceListDataSourceDatabaseListDatabaseTableListTable["TableType"].asString();
				if(!dBTopologyNodeDataSourceListDataSourceDatabaseListDatabaseTableListTable["TableId"].isNull())
					tableListObject.tableId = dBTopologyNodeDataSourceListDataSourceDatabaseListDatabaseTableListTable["TableId"].asString();
				databaseListObject.tableList.push_back(tableListObject);
			}
			dataSourceObject.databaseList.push_back(databaseListObject);
		}
		dBTopology_.dataSourceList.push_back(dataSourceObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetTableDBTopologyResult::DBTopology GetTableDBTopologyResult::getDBTopology()const
{
	return dBTopology_;
}

std::string GetTableDBTopologyResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTableDBTopologyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetTableDBTopologyResult::getSuccess()const
{
	return success_;
}

