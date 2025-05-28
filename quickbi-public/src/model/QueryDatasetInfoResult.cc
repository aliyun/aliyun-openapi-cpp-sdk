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

#include <alibabacloud/quickbi-public/model/QueryDatasetInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryDatasetInfoResult::QueryDatasetInfoResult() :
	ServiceResult()
{}

QueryDatasetInfoResult::QueryDatasetInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDatasetInfoResult::~QueryDatasetInfoResult()
{}

void QueryDatasetInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["CustimzeSql"].isNull())
		result_.custimzeSql = resultNode["CustimzeSql"].asString() == "true";
	if(!resultNode["DatasetId"].isNull())
		result_.datasetId = resultNode["DatasetId"].asString();
	if(!resultNode["DatasetName"].isNull())
		result_.datasetName = resultNode["DatasetName"].asString();
	if(!resultNode["DsId"].isNull())
		result_.dsId = resultNode["DsId"].asString();
	if(!resultNode["DsName"].isNull())
		result_.dsName = resultNode["DsName"].asString();
	if(!resultNode["DsType"].isNull())
		result_.dsType = resultNode["DsType"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModify"].isNull())
		result_.gmtModify = resultNode["GmtModify"].asString();
	if(!resultNode["OpenOfflineAcceleration"].isNull())
		result_.openOfflineAcceleration = resultNode["OpenOfflineAcceleration"].asString() == "true";
	if(!resultNode["OwnerId"].isNull())
		result_.ownerId = resultNode["OwnerId"].asString();
	if(!resultNode["OwnerName"].isNull())
		result_.ownerName = resultNode["OwnerName"].asString();
	if(!resultNode["RowLevel"].isNull())
		result_.rowLevel = resultNode["RowLevel"].asString() == "true";
	if(!resultNode["WorkspaceId"].isNull())
		result_.workspaceId = resultNode["WorkspaceId"].asString();
	if(!resultNode["WorkspaceName"].isNull())
		result_.workspaceName = resultNode["WorkspaceName"].asString();
	auto allCubeTableListNode = resultNode["CubeTableList"]["CubeTableListItem"];
	for (auto resultNodeCubeTableListCubeTableListItem : allCubeTableListNode)
	{
		Result::CubeTableListItem cubeTableListItemObject;
		if(!resultNodeCubeTableListCubeTableListItem["Caption"].isNull())
			cubeTableListItemObject.caption = resultNodeCubeTableListCubeTableListItem["Caption"].asString();
		if(!resultNodeCubeTableListCubeTableListItem["Customsql"].isNull())
			cubeTableListItemObject.customsql = resultNodeCubeTableListCubeTableListItem["Customsql"].asString() == "true";
		if(!resultNodeCubeTableListCubeTableListItem["DatasourceId"].isNull())
			cubeTableListItemObject.datasourceId = resultNodeCubeTableListCubeTableListItem["DatasourceId"].asString();
		if(!resultNodeCubeTableListCubeTableListItem["DsType"].isNull())
			cubeTableListItemObject.dsType = resultNodeCubeTableListCubeTableListItem["DsType"].asString();
		if(!resultNodeCubeTableListCubeTableListItem["FactTable"].isNull())
			cubeTableListItemObject.factTable = resultNodeCubeTableListCubeTableListItem["FactTable"].asString() == "true";
		if(!resultNodeCubeTableListCubeTableListItem["Sql"].isNull())
			cubeTableListItemObject.sql = resultNodeCubeTableListCubeTableListItem["Sql"].asString();
		if(!resultNodeCubeTableListCubeTableListItem["TableName"].isNull())
			cubeTableListItemObject.tableName = resultNodeCubeTableListCubeTableListItem["TableName"].asString();
		if(!resultNodeCubeTableListCubeTableListItem["UniqueId"].isNull())
			cubeTableListItemObject.uniqueId = resultNodeCubeTableListCubeTableListItem["UniqueId"].asString();
		result_.cubeTableList.push_back(cubeTableListItemObject);
	}
	auto allDimensionListNode = resultNode["DimensionList"]["DimensionListItem"];
	for (auto resultNodeDimensionListDimensionListItem : allDimensionListNode)
	{
		Result::DimensionListItem dimensionListItemObject;
		if(!resultNodeDimensionListDimensionListItem["Caption"].isNull())
			dimensionListItemObject.caption = resultNodeDimensionListDimensionListItem["Caption"].asString();
		if(!resultNodeDimensionListDimensionListItem["DataType"].isNull())
			dimensionListItemObject.dataType = resultNodeDimensionListDimensionListItem["DataType"].asString();
		if(!resultNodeDimensionListDimensionListItem["DimensionType"].isNull())
			dimensionListItemObject.dimensionType = resultNodeDimensionListDimensionListItem["DimensionType"].asString();
		if(!resultNodeDimensionListDimensionListItem["Expression"].isNull())
			dimensionListItemObject.expression = resultNodeDimensionListDimensionListItem["Expression"].asString();
		if(!resultNodeDimensionListDimensionListItem["FactColumn"].isNull())
			dimensionListItemObject.factColumn = resultNodeDimensionListDimensionListItem["FactColumn"].asString();
		if(!resultNodeDimensionListDimensionListItem["FieldDescription"].isNull())
			dimensionListItemObject.fieldDescription = resultNodeDimensionListDimensionListItem["FieldDescription"].asString();
		if(!resultNodeDimensionListDimensionListItem["Granularity"].isNull())
			dimensionListItemObject.granularity = resultNodeDimensionListDimensionListItem["Granularity"].asString();
		if(!resultNodeDimensionListDimensionListItem["RefUid"].isNull())
			dimensionListItemObject.refUid = resultNodeDimensionListDimensionListItem["RefUid"].asString();
		if(!resultNodeDimensionListDimensionListItem["TableUniqueId"].isNull())
			dimensionListItemObject.tableUniqueId = resultNodeDimensionListDimensionListItem["TableUniqueId"].asString();
		if(!resultNodeDimensionListDimensionListItem["Uid"].isNull())
			dimensionListItemObject.uid = resultNodeDimensionListDimensionListItem["Uid"].asString();
		if(!resultNodeDimensionListDimensionListItem["ExpressionV2"].isNull())
			dimensionListItemObject.expressionV2 = resultNodeDimensionListDimensionListItem["ExpressionV2"].asString();
		result_.dimensionList.push_back(dimensionListItemObject);
	}
	auto allMeasureListNode = resultNode["MeasureList"]["MeasureListItem"];
	for (auto resultNodeMeasureListMeasureListItem : allMeasureListNode)
	{
		Result::MeasureListItem measureListItemObject;
		if(!resultNodeMeasureListMeasureListItem["Caption"].isNull())
			measureListItemObject.caption = resultNodeMeasureListMeasureListItem["Caption"].asString();
		if(!resultNodeMeasureListMeasureListItem["DataType"].isNull())
			measureListItemObject.dataType = resultNodeMeasureListMeasureListItem["DataType"].asString();
		if(!resultNodeMeasureListMeasureListItem["Expression"].isNull())
			measureListItemObject.expression = resultNodeMeasureListMeasureListItem["Expression"].asString();
		if(!resultNodeMeasureListMeasureListItem["FactColumn"].isNull())
			measureListItemObject.factColumn = resultNodeMeasureListMeasureListItem["FactColumn"].asString();
		if(!resultNodeMeasureListMeasureListItem["FieldDescription"].isNull())
			measureListItemObject.fieldDescription = resultNodeMeasureListMeasureListItem["FieldDescription"].asString();
		if(!resultNodeMeasureListMeasureListItem["MeasureType"].isNull())
			measureListItemObject.measureType = resultNodeMeasureListMeasureListItem["MeasureType"].asString();
		if(!resultNodeMeasureListMeasureListItem["TableUniqueId"].isNull())
			measureListItemObject.tableUniqueId = resultNodeMeasureListMeasureListItem["TableUniqueId"].asString();
		if(!resultNodeMeasureListMeasureListItem["Uid"].isNull())
			measureListItemObject.uid = resultNodeMeasureListMeasureListItem["Uid"].asString();
		if(!resultNodeMeasureListMeasureListItem["ExpressionV2"].isNull())
			measureListItemObject.expressionV2 = resultNodeMeasureListMeasureListItem["ExpressionV2"].asString();
		result_.measureList.push_back(measureListItemObject);
	}
	auto directoryNode = resultNode["Directory"];
	if(!directoryNode["Id"].isNull())
		result_.directory.id = directoryNode["Id"].asString();
	if(!directoryNode["Name"].isNull())
		result_.directory.name = directoryNode["Name"].asString();
	if(!directoryNode["PathId"].isNull())
		result_.directory.pathId = directoryNode["PathId"].asString();
	if(!directoryNode["PathName"].isNull())
		result_.directory.pathName = directoryNode["PathName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryDatasetInfoResult::getSuccess()const
{
	return success_;
}

QueryDatasetInfoResult::Result QueryDatasetInfoResult::getResult()const
{
	return result_;
}

