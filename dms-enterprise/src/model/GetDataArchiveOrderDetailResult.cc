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

#include <alibabacloud/dms-enterprise/model/GetDataArchiveOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataArchiveOrderDetailResult::GetDataArchiveOrderDetailResult() :
	ServiceResult()
{}

GetDataArchiveOrderDetailResult::GetDataArchiveOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataArchiveOrderDetailResult::~GetDataArchiveOrderDetailResult()
{}

void GetDataArchiveOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataArchiveOrderDetailNode = value["DataArchiveOrderDetail"];
	if(!dataArchiveOrderDetailNode["Comment"].isNull())
		dataArchiveOrderDetail_.comment = dataArchiveOrderDetailNode["Comment"].asString();
	if(!dataArchiveOrderDetailNode["Committer"].isNull())
		dataArchiveOrderDetail_.committer = dataArchiveOrderDetailNode["Committer"].asString();
	if(!dataArchiveOrderDetailNode["CommitterId"].isNull())
		dataArchiveOrderDetail_.committerId = std::stol(dataArchiveOrderDetailNode["CommitterId"].asString());
	if(!dataArchiveOrderDetailNode["GmtCreate"].isNull())
		dataArchiveOrderDetail_.gmtCreate = dataArchiveOrderDetailNode["GmtCreate"].asString();
	if(!dataArchiveOrderDetailNode["GmtModified"].isNull())
		dataArchiveOrderDetail_.gmtModified = dataArchiveOrderDetailNode["GmtModified"].asString();
	if(!dataArchiveOrderDetailNode["Id"].isNull())
		dataArchiveOrderDetail_.id = std::stol(dataArchiveOrderDetailNode["Id"].asString());
	if(!dataArchiveOrderDetailNode["PluginType"].isNull())
		dataArchiveOrderDetail_.pluginType = dataArchiveOrderDetailNode["PluginType"].asString();
	if(!dataArchiveOrderDetailNode["StatusCode"].isNull())
		dataArchiveOrderDetail_.statusCode = dataArchiveOrderDetailNode["StatusCode"].asString();
	if(!dataArchiveOrderDetailNode["StatusDesc"].isNull())
		dataArchiveOrderDetail_.statusDesc = dataArchiveOrderDetailNode["StatusDesc"].asString();
	if(!dataArchiveOrderDetailNode["WorkflowInstanceId"].isNull())
		dataArchiveOrderDetail_.workflowInstanceId = std::stol(dataArchiveOrderDetailNode["WorkflowInstanceId"].asString());
	if(!dataArchiveOrderDetailNode["WorkflowStatusDesc"].isNull())
		dataArchiveOrderDetail_.workflowStatusDesc = dataArchiveOrderDetailNode["WorkflowStatusDesc"].asString();
	auto pluginExtraDataNode = dataArchiveOrderDetailNode["PluginExtraData"];
	if(!pluginExtraDataNode["InstanceTotal"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.instanceTotal = std::stol(pluginExtraDataNode["InstanceTotal"].asString());
	if(!pluginExtraDataNode["PageIndex"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.pageIndex = std::stol(pluginExtraDataNode["PageIndex"].asString());
	if(!pluginExtraDataNode["PageSize"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.pageSize = std::stol(pluginExtraDataNode["PageSize"].asString());
	if(!pluginExtraDataNode["TempTableNameMap"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.tempTableNameMap = pluginExtraDataNode["TempTableNameMap"].asString();
	auto allInstancesNode = pluginExtraDataNode["Instances"]["InstancesItem"];
	for (auto pluginExtraDataNodeInstancesInstancesItem : allInstancesNode)
	{
		DataArchiveOrderDetail::PluginExtraData::InstancesItem instancesItemObject;
		if(!pluginExtraDataNodeInstancesInstancesItem["BusinessTime"].isNull())
			instancesItemObject.businessTime = pluginExtraDataNodeInstancesInstancesItem["BusinessTime"].asString();
		if(!pluginExtraDataNodeInstancesInstancesItem["DagId"].isNull())
			instancesItemObject.dagId = std::stol(pluginExtraDataNodeInstancesInstancesItem["DagId"].asString());
		if(!pluginExtraDataNodeInstancesInstancesItem["EndTime"].isNull())
			instancesItemObject.endTime = pluginExtraDataNodeInstancesInstancesItem["EndTime"].asString();
		if(!pluginExtraDataNodeInstancesInstancesItem["GmtCreate"].isNull())
			instancesItemObject.gmtCreate = pluginExtraDataNodeInstancesInstancesItem["GmtCreate"].asString();
		if(!pluginExtraDataNodeInstancesInstancesItem["GmtModified"].isNull())
			instancesItemObject.gmtModified = pluginExtraDataNodeInstancesInstancesItem["GmtModified"].asString();
		if(!pluginExtraDataNodeInstancesInstancesItem["HistoryDagId"].isNull())
			instancesItemObject.historyDagId = std::stol(pluginExtraDataNodeInstancesInstancesItem["HistoryDagId"].asString());
		if(!pluginExtraDataNodeInstancesInstancesItem["Id"].isNull())
			instancesItemObject.id = std::stol(pluginExtraDataNodeInstancesInstancesItem["Id"].asString());
		if(!pluginExtraDataNodeInstancesInstancesItem["LastRunningContext"].isNull())
			instancesItemObject.lastRunningContext = pluginExtraDataNodeInstancesInstancesItem["LastRunningContext"].asString();
		if(!pluginExtraDataNodeInstancesInstancesItem["Msg"].isNull())
			instancesItemObject.msg = pluginExtraDataNodeInstancesInstancesItem["Msg"].asString();
		if(!pluginExtraDataNodeInstancesInstancesItem["Status"].isNull())
			instancesItemObject.status = std::stol(pluginExtraDataNodeInstancesInstancesItem["Status"].asString());
		if(!pluginExtraDataNodeInstancesInstancesItem["TenantId"].isNull())
			instancesItemObject.tenantId = pluginExtraDataNodeInstancesInstancesItem["TenantId"].asString();
		if(!pluginExtraDataNodeInstancesInstancesItem["TriggerType"].isNull())
			instancesItemObject.triggerType = std::stol(pluginExtraDataNodeInstancesInstancesItem["TriggerType"].asString());
		if(!pluginExtraDataNodeInstancesInstancesItem["Version"].isNull())
			instancesItemObject.version = pluginExtraDataNodeInstancesInstancesItem["Version"].asString();
		dataArchiveOrderDetail_.pluginExtraData.instances.push_back(instancesItemObject);
	}
	auto dagInfoNode = pluginExtraDataNode["DagInfo"];
	if(!dagInfoNode["CreatorId"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.creatorId = dagInfoNode["CreatorId"].asString();
	if(!dagInfoNode["CronBeginDate"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.cronBeginDate = dagInfoNode["CronBeginDate"].asString();
	if(!dagInfoNode["CronEndDate"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.cronEndDate = dagInfoNode["CronEndDate"].asString();
	if(!dagInfoNode["CronTrigger"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.cronTrigger = dagInfoNode["CronTrigger"].asString() == "true";
	if(!dagInfoNode["DWDevelop"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.dWDevelop = dagInfoNode["DWDevelop"].asString() == "true";
	if(!dagInfoNode["DagName"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.dagName = dagInfoNode["DagName"].asString();
	if(!dagInfoNode["DagOwnerId"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.dagOwnerId = dagInfoNode["DagOwnerId"].asString();
	if(!dagInfoNode["DeployId"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.deployId = std::stol(dagInfoNode["DeployId"].asString());
	if(!dagInfoNode["Description"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.description = dagInfoNode["Description"].asString();
	if(!dagInfoNode["EditDagId"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.editDagId = std::stol(dagInfoNode["EditDagId"].asString());
	if(!dagInfoNode["GmtCreate"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.gmtCreate = dagInfoNode["GmtCreate"].asString();
	if(!dagInfoNode["GmtModified"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.gmtModified = dagInfoNode["GmtModified"].asString();
	if(!dagInfoNode["Id"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.id = std::stol(dagInfoNode["Id"].asString());
	if(!dagInfoNode["IsPublic"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.isPublic = std::stol(dagInfoNode["IsPublic"].asString());
	if(!dagInfoNode["Legacy"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.legacy = dagInfoNode["Legacy"].asString() == "true";
	if(!dagInfoNode["System"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.system = dagInfoNode["System"].asString() == "true";
	if(!dagInfoNode["TenantId"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.tenantId = dagInfoNode["TenantId"].asString();
	if(!dagInfoNode["TriggerOnce"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dagInfo.triggerOnce = dagInfoNode["TriggerOnce"].asString() == "true";
	auto dbBaseInfoNode = pluginExtraDataNode["DbBaseInfo"];
	if(!dbBaseInfoNode["Alias"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.alias = dbBaseInfoNode["Alias"].asString();
	if(!dbBaseInfoNode["AlterTimeout"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.alterTimeout = std::stol(dbBaseInfoNode["AlterTimeout"].asString());
	if(!dbBaseInfoNode["AssetControl"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.assetControl = dbBaseInfoNode["AssetControl"].asString() == "true";
	if(!dbBaseInfoNode["CatalogName"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.catalogName = dbBaseInfoNode["CatalogName"].asString();
	if(!dbBaseInfoNode["ClusterNode"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.clusterNode = dbBaseInfoNode["ClusterNode"].asString();
	if(!dbBaseInfoNode["DbId"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.dbId = std::stol(dbBaseInfoNode["DbId"].asString());
	if(!dbBaseInfoNode["DbType"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.dbType = dbBaseInfoNode["DbType"].asString();
	if(!dbBaseInfoNode["DbaId"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.dbaId = std::stol(dbBaseInfoNode["DbaId"].asString());
	if(!dbBaseInfoNode["DbaName"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.dbaName = dbBaseInfoNode["DbaName"].asString();
	if(!dbBaseInfoNode["Description"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.description = dbBaseInfoNode["Description"].asString();
	if(!dbBaseInfoNode["Encoding"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.encoding = dbBaseInfoNode["Encoding"].asString();
	if(!dbBaseInfoNode["EnvType"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.envType = dbBaseInfoNode["EnvType"].asString();
	if(!dbBaseInfoNode["Follow"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.follow = dbBaseInfoNode["Follow"].asString() == "true";
	if(!dbBaseInfoNode["Host"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.host = dbBaseInfoNode["Host"].asString();
	if(!dbBaseInfoNode["Idc"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.idc = dbBaseInfoNode["Idc"].asString();
	if(!dbBaseInfoNode["IdcTitle"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.idcTitle = dbBaseInfoNode["IdcTitle"].asString();
	if(!dbBaseInfoNode["InstanceId"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.instanceId = std::stol(dbBaseInfoNode["InstanceId"].asString());
	if(!dbBaseInfoNode["InstanceSource"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.instanceSource = dbBaseInfoNode["InstanceSource"].asString();
	if(!dbBaseInfoNode["LastSyncTime"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.lastSyncTime = dbBaseInfoNode["LastSyncTime"].asString();
	if(!dbBaseInfoNode["Level"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.level = dbBaseInfoNode["Level"].asString();
	if(!dbBaseInfoNode["Logic"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.logic = dbBaseInfoNode["Logic"].asString() == "true";
	if(!dbBaseInfoNode["Port"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.port = std::stol(dbBaseInfoNode["Port"].asString());
	if(!dbBaseInfoNode["SchemaName"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.schemaName = dbBaseInfoNode["SchemaName"].asString();
	if(!dbBaseInfoNode["SearchName"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.searchName = dbBaseInfoNode["SearchName"].asString();
	if(!dbBaseInfoNode["State"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.state = dbBaseInfoNode["State"].asString();
	if(!dbBaseInfoNode["TableCount"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.tableCount = std::stol(dbBaseInfoNode["TableCount"].asString());
	if(!dbBaseInfoNode["TnsName"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.tnsName = dbBaseInfoNode["TnsName"].asString();
	if(!dbBaseInfoNode["UnitType"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.unitType = dbBaseInfoNode["UnitType"].asString();
	auto standardGroupNode = dbBaseInfoNode["StandardGroup"];
	if(!standardGroupNode["DbType"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.standardGroup.dbType = standardGroupNode["DbType"].asString();
	if(!standardGroupNode["Description"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.standardGroup.description = standardGroupNode["Description"].asString();
	if(!standardGroupNode["FreeOrStable"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.standardGroup.freeOrStable = standardGroupNode["FreeOrStable"].asString() == "true";
	if(!standardGroupNode["GmtCreate"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.standardGroup.gmtCreate = standardGroupNode["GmtCreate"].asString();
	if(!standardGroupNode["GmtModified"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.standardGroup.gmtModified = standardGroupNode["GmtModified"].asString();
	if(!standardGroupNode["GroupMode"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.standardGroup.groupMode = standardGroupNode["GroupMode"].asString();
	if(!standardGroupNode["GroupName"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.standardGroup.groupName = standardGroupNode["GroupName"].asString();
	if(!standardGroupNode["Id"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.standardGroup.id = std::stol(standardGroupNode["Id"].asString());
	if(!standardGroupNode["LastMenderId"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.standardGroup.lastMenderId = std::stol(standardGroupNode["LastMenderId"].asString());
		auto allOwnerIds = dbBaseInfoNode["OwnerIds"]["OwnerIds"];
		for (auto value : allOwnerIds)
			dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.ownerIds.push_back(value.asString());
		auto allOwnerNames = dbBaseInfoNode["OwnerNames"]["OwnerNames"];
		for (auto value : allOwnerNames)
			dataArchiveOrderDetail_.pluginExtraData.dbBaseInfo.ownerNames.push_back(value.asString());
	auto nextFireTimeResultNode = pluginExtraDataNode["NextFireTimeResult"];
	if(!nextFireTimeResultNode["CronFireType"].isNull())
		dataArchiveOrderDetail_.pluginExtraData.nextFireTimeResult.cronFireType = nextFireTimeResultNode["CronFireType"].asString();
	auto pluginParamNode = dataArchiveOrderDetailNode["PluginParam"];
	if(!pluginParamNode["ArchiveMethod"].isNull())
		dataArchiveOrderDetail_.pluginParam.archiveMethod = pluginParamNode["ArchiveMethod"].asString();
	if(!pluginParamNode["DbSchema"].isNull())
		dataArchiveOrderDetail_.pluginParam.dbSchema = pluginParamNode["DbSchema"].asString();
	if(!pluginParamNode["Logic"].isNull())
		dataArchiveOrderDetail_.pluginParam.logic = pluginParamNode["Logic"].asString() == "true";
	if(!pluginParamNode["RunMethod"].isNull())
		dataArchiveOrderDetail_.pluginParam.runMethod = pluginParamNode["RunMethod"].asString();
	if(!pluginParamNode["SourceDatabaseId"].isNull())
		dataArchiveOrderDetail_.pluginParam.sourceDatabaseId = std::stol(pluginParamNode["SourceDatabaseId"].asString());
	if(!pluginParamNode["TargetInstanceId"].isNull())
		dataArchiveOrderDetail_.pluginParam.targetInstanceId = pluginParamNode["TargetInstanceId"].asString();
	auto allTableIncludesNode = pluginParamNode["TableIncludes"]["IncludeTables"];
	for (auto pluginParamNodeTableIncludesIncludeTables : allTableIncludesNode)
	{
		DataArchiveOrderDetail::PluginParam::IncludeTables includeTablesObject;
		if(!pluginParamNodeTableIncludesIncludeTables["TableName"].isNull())
			includeTablesObject.tableName = pluginParamNodeTableIncludesIncludeTables["TableName"].asString();
		if(!pluginParamNodeTableIncludesIncludeTables["TableWhere"].isNull())
			includeTablesObject.tableWhere = pluginParamNodeTableIncludesIncludeTables["TableWhere"].asString();
		dataArchiveOrderDetail_.pluginParam.tableIncludes.push_back(includeTablesObject);
	}
		auto allOrderAfter = pluginParamNode["OrderAfter"]["AfterOrder"];
		for (auto value : allOrderAfter)
			dataArchiveOrderDetail_.pluginParam.orderAfter.push_back(value.asString());
		auto allTableMapping = pluginParamNode["TableMapping"]["MappingTable"];
		for (auto value : allTableMapping)
			dataArchiveOrderDetail_.pluginParam.tableMapping.push_back(value.asString());
		auto allVariables = pluginParamNode["Variables"]["Variables"];
		for (auto value : allVariables)
			dataArchiveOrderDetail_.pluginParam.variables.push_back(value.asString());
		auto allRelatedUserList = dataArchiveOrderDetailNode["RelatedUserList"]["RelatedUserList"];
		for (auto value : allRelatedUserList)
			dataArchiveOrderDetail_.relatedUserList.push_back(value.asString());
		auto allRelatedUserNickList = dataArchiveOrderDetailNode["RelatedUserNickList"]["RelatedUserNickList"];
		for (auto value : allRelatedUserNickList)
			dataArchiveOrderDetail_.relatedUserNickList.push_back(value.asString());
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetDataArchiveOrderDetailResult::getTraceId()const
{
	return traceId_;
}

std::string GetDataArchiveOrderDetailResult::getErrorCode()const
{
	return errorCode_;
}

GetDataArchiveOrderDetailResult::DataArchiveOrderDetail GetDataArchiveOrderDetailResult::getDataArchiveOrderDetail()const
{
	return dataArchiveOrderDetail_;
}

std::string GetDataArchiveOrderDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataArchiveOrderDetailResult::getSuccess()const
{
	return success_;
}

