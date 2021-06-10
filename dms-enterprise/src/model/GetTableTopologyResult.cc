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

#include <alibabacloud/dms-enterprise/model/GetTableTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetTableTopologyResult::GetTableTopologyResult() :
	ServiceResult()
{}

GetTableTopologyResult::GetTableTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableTopologyResult::~GetTableTopologyResult()
{}

void GetTableTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tableTopologyNode = value["TableTopology"];
	if(!tableTopologyNode["TableGuid"].isNull())
		tableTopology_.tableGuid = tableTopologyNode["TableGuid"].asString();
	if(!tableTopologyNode["TableName"].isNull())
		tableTopology_.tableName = tableTopologyNode["TableName"].asString();
	if(!tableTopologyNode["Logic"].isNull())
		tableTopology_.logic = tableTopologyNode["Logic"].asString() == "true";
	auto allTableTopologyInfoListNode = tableTopologyNode["TableTopologyInfoList"]["TableTopologyInfo"];
	for (auto tableTopologyNodeTableTopologyInfoListTableTopologyInfo : allTableTopologyInfoListNode)
	{
		TableTopology::TableTopologyInfo tableTopologyInfoObject;
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["TableNameList"].isNull())
			tableTopologyInfoObject.tableNameList = tableTopologyNodeTableTopologyInfoListTableTopologyInfo["TableNameList"].asString();
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["TableNameExpr"].isNull())
			tableTopologyInfoObject.tableNameExpr = tableTopologyNodeTableTopologyInfoListTableTopologyInfo["TableNameExpr"].asString();
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["TableCount"].isNull())
			tableTopologyInfoObject.tableCount = std::stol(tableTopologyNodeTableTopologyInfoListTableTopologyInfo["TableCount"].asString());
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["DbId"].isNull())
			tableTopologyInfoObject.dbId = std::stol(tableTopologyNodeTableTopologyInfoListTableTopologyInfo["DbId"].asString());
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["DbSearchName"].isNull())
			tableTopologyInfoObject.dbSearchName = tableTopologyNodeTableTopologyInfoListTableTopologyInfo["DbSearchName"].asString();
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["InstanceId"].isNull())
			tableTopologyInfoObject.instanceId = std::stol(tableTopologyNodeTableTopologyInfoListTableTopologyInfo["InstanceId"].asString());
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["RegionId"].isNull())
			tableTopologyInfoObject.regionId = tableTopologyNodeTableTopologyInfoListTableTopologyInfo["RegionId"].asString();
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["InstanceResourceId"].isNull())
			tableTopologyInfoObject.instanceResourceId = tableTopologyNodeTableTopologyInfoListTableTopologyInfo["InstanceResourceId"].asString();
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["InstanceSource"].isNull())
			tableTopologyInfoObject.instanceSource = tableTopologyNodeTableTopologyInfoListTableTopologyInfo["InstanceSource"].asString();
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["DbName"].isNull())
			tableTopologyInfoObject.dbName = tableTopologyNodeTableTopologyInfoListTableTopologyInfo["DbName"].asString();
		if(!tableTopologyNodeTableTopologyInfoListTableTopologyInfo["DbType"].isNull())
			tableTopologyInfoObject.dbType = tableTopologyNodeTableTopologyInfoListTableTopologyInfo["DbType"].asString();
		tableTopology_.tableTopologyInfoList.push_back(tableTopologyInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetTableTopologyResult::TableTopology GetTableTopologyResult::getTableTopology()const
{
	return tableTopology_;
}

std::string GetTableTopologyResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTableTopologyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetTableTopologyResult::getSuccess()const
{
	return success_;
}

