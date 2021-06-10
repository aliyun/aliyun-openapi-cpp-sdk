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

#include <alibabacloud/dms-enterprise/model/GetDBTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDBTopologyResult::GetDBTopologyResult() :
	ServiceResult()
{}

GetDBTopologyResult::GetDBTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDBTopologyResult::~GetDBTopologyResult()
{}

void GetDBTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dBTopologyNode = value["DBTopology"];
	if(!dBTopologyNode["LogicDbId"].isNull())
		dBTopology_.logicDbId = std::stol(dBTopologyNode["LogicDbId"].asString());
	if(!dBTopologyNode["LogicDbName"].isNull())
		dBTopology_.logicDbName = dBTopologyNode["LogicDbName"].asString();
	if(!dBTopologyNode["SearchName"].isNull())
		dBTopology_.searchName = dBTopologyNode["SearchName"].asString();
	if(!dBTopologyNode["Alias"].isNull())
		dBTopology_.alias = dBTopologyNode["Alias"].asString();
	if(!dBTopologyNode["DbType"].isNull())
		dBTopology_.dbType = dBTopologyNode["DbType"].asString();
	if(!dBTopologyNode["EnvType"].isNull())
		dBTopology_.envType = dBTopologyNode["EnvType"].asString();
	auto allDBTopologyInfoListNode = dBTopologyNode["DBTopologyInfoList"]["DBTopologyInfo"];
	for (auto dBTopologyNodeDBTopologyInfoListDBTopologyInfo : allDBTopologyInfoListNode)
	{
		DBTopology::DBTopologyInfo dBTopologyInfoObject;
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["DbId"].isNull())
			dBTopologyInfoObject.dbId = std::stol(dBTopologyNodeDBTopologyInfoListDBTopologyInfo["DbId"].asString());
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["SchemaName"].isNull())
			dBTopologyInfoObject.schemaName = dBTopologyNodeDBTopologyInfoListDBTopologyInfo["SchemaName"].asString();
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["CatalogName"].isNull())
			dBTopologyInfoObject.catalogName = dBTopologyNodeDBTopologyInfoListDBTopologyInfo["CatalogName"].asString();
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["SearchName"].isNull())
			dBTopologyInfoObject.searchName = dBTopologyNodeDBTopologyInfoListDBTopologyInfo["SearchName"].asString();
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["DbType"].isNull())
			dBTopologyInfoObject.dbType = dBTopologyNodeDBTopologyInfoListDBTopologyInfo["DbType"].asString();
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["EnvType"].isNull())
			dBTopologyInfoObject.envType = dBTopologyNodeDBTopologyInfoListDBTopologyInfo["EnvType"].asString();
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["InstanceId"].isNull())
			dBTopologyInfoObject.instanceId = std::stol(dBTopologyNodeDBTopologyInfoListDBTopologyInfo["InstanceId"].asString());
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["RegionId"].isNull())
			dBTopologyInfoObject.regionId = dBTopologyNodeDBTopologyInfoListDBTopologyInfo["RegionId"].asString();
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["InstanceResourceId"].isNull())
			dBTopologyInfoObject.instanceResourceId = dBTopologyNodeDBTopologyInfoListDBTopologyInfo["InstanceResourceId"].asString();
		if(!dBTopologyNodeDBTopologyInfoListDBTopologyInfo["InstanceSource"].isNull())
			dBTopologyInfoObject.instanceSource = dBTopologyNodeDBTopologyInfoListDBTopologyInfo["InstanceSource"].asString();
		dBTopology_.dBTopologyInfoList.push_back(dBTopologyInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetDBTopologyResult::DBTopology GetDBTopologyResult::getDBTopology()const
{
	return dBTopology_;
}

std::string GetDBTopologyResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDBTopologyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDBTopologyResult::getSuccess()const
{
	return success_;
}

