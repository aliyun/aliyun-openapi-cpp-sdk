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
		if(!dBTopologyNodeDataSourceListDataSource["Host"].isNull())
			dataSourceObject.host = dBTopologyNodeDataSourceListDataSource["Host"].asString();
		if(!dBTopologyNodeDataSourceListDataSource["Port"].isNull())
			dataSourceObject.port = std::stoi(dBTopologyNodeDataSourceListDataSource["Port"].asString());
		if(!dBTopologyNodeDataSourceListDataSource["DbType"].isNull())
			dataSourceObject.dbType = dBTopologyNodeDataSourceListDataSource["DbType"].asString();
		if(!dBTopologyNodeDataSourceListDataSource["Sid"].isNull())
			dataSourceObject.sid = dBTopologyNodeDataSourceListDataSource["Sid"].asString();
		auto allDatabaseListNode = allDataSourceListNode["DatabaseList"]["Database"];
		for (auto allDataSourceListNodeDatabaseListDatabase : allDatabaseListNode)
		{
			DBTopology::DataSource::Database databaseListObject;
			if(!allDataSourceListNodeDatabaseListDatabase["DbName"].isNull())
				databaseListObject.dbName = allDataSourceListNodeDatabaseListDatabase["DbName"].asString();
			if(!allDataSourceListNodeDatabaseListDatabase["DbId"].isNull())
				databaseListObject.dbId = allDataSourceListNodeDatabaseListDatabase["DbId"].asString();
			if(!allDataSourceListNodeDatabaseListDatabase["EnvType"].isNull())
				databaseListObject.envType = allDataSourceListNodeDatabaseListDatabase["EnvType"].asString();
			if(!allDataSourceListNodeDatabaseListDatabase["DbType"].isNull())
				databaseListObject.dbType = allDataSourceListNodeDatabaseListDatabase["DbType"].asString();
			auto allTableListNode = allDatabaseListNode["TableList"]["Table"];
			for (auto allDatabaseListNodeTableListTable : allTableListNode)
			{
				DBTopology::DataSource::Database::Table tableListObject;
				if(!allDatabaseListNodeTableListTable["TableName"].isNull())
					tableListObject.tableName = allDatabaseListNodeTableListTable["TableName"].asString();
				if(!allDatabaseListNodeTableListTable["TableId"].isNull())
					tableListObject.tableId = allDatabaseListNodeTableListTable["TableId"].asString();
				if(!allDatabaseListNodeTableListTable["TableType"].isNull())
					tableListObject.tableType = allDatabaseListNodeTableListTable["TableType"].asString();
				databaseListObject.tableList.push_back(tableListObject);
			}
			dataSourceObject.databaseList.push_back(databaseListObject);
		}
		dBTopology_.dataSourceList.push_back(dataSourceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

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

