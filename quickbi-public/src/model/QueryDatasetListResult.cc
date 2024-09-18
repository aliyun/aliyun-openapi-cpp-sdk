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

#include <alibabacloud/quickbi-public/model/QueryDatasetListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryDatasetListResult::QueryDatasetListResult() :
	ServiceResult()
{}

QueryDatasetListResult::QueryDatasetListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDatasetListResult::~QueryDatasetListResult()
{}

void QueryDatasetListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["PageNum"].isNull())
		result_.pageNum = std::stoi(resultNode["PageNum"].asString());
	if(!resultNode["PageSize"].isNull())
		result_.pageSize = std::stoi(resultNode["PageSize"].asString());
	if(!resultNode["TotalNum"].isNull())
		result_.totalNum = std::stoi(resultNode["TotalNum"].asString());
	if(!resultNode["TotalPages"].isNull())
		result_.totalPages = std::stoi(resultNode["TotalPages"].asString());
	auto allDataNode = resultNode["Data"]["DataItem"];
	for (auto resultNodeDataDataItem : allDataNode)
	{
		Result::DataItem dataItemObject;
		if(!resultNodeDataDataItem["CreateTime"].isNull())
			dataItemObject.createTime = resultNodeDataDataItem["CreateTime"].asString();
		if(!resultNodeDataDataItem["DatasetId"].isNull())
			dataItemObject.datasetId = resultNodeDataDataItem["DatasetId"].asString();
		if(!resultNodeDataDataItem["DatasetName"].isNull())
			dataItemObject.datasetName = resultNodeDataDataItem["DatasetName"].asString();
		if(!resultNodeDataDataItem["Description"].isNull())
			dataItemObject.description = resultNodeDataDataItem["Description"].asString();
		if(!resultNodeDataDataItem["ModifyTime"].isNull())
			dataItemObject.modifyTime = resultNodeDataDataItem["ModifyTime"].asString();
		if(!resultNodeDataDataItem["OpenOfflineAcceleration"].isNull())
			dataItemObject.openOfflineAcceleration = resultNodeDataDataItem["OpenOfflineAcceleration"].asString() == "true";
		if(!resultNodeDataDataItem["OwnerId"].isNull())
			dataItemObject.ownerId = resultNodeDataDataItem["OwnerId"].asString();
		if(!resultNodeDataDataItem["OwnerName"].isNull())
			dataItemObject.ownerName = resultNodeDataDataItem["OwnerName"].asString();
		if(!resultNodeDataDataItem["RowLevel"].isNull())
			dataItemObject.rowLevel = resultNodeDataDataItem["RowLevel"].asString() == "true";
		if(!resultNodeDataDataItem["WorkspaceId"].isNull())
			dataItemObject.workspaceId = resultNodeDataDataItem["WorkspaceId"].asString();
		if(!resultNodeDataDataItem["WorkspaceName"].isNull())
			dataItemObject.workspaceName = resultNodeDataDataItem["WorkspaceName"].asString();
		auto dataSourceNode = value["DataSource"];
		if(!dataSourceNode["DsId"].isNull())
			dataItemObject.dataSource.dsId = dataSourceNode["DsId"].asString();
		if(!dataSourceNode["DsName"].isNull())
			dataItemObject.dataSource.dsName = dataSourceNode["DsName"].asString();
		if(!dataSourceNode["DsType"].isNull())
			dataItemObject.dataSource.dsType = dataSourceNode["DsType"].asString();
		auto directoryNode = value["Directory"];
		if(!directoryNode["Id"].isNull())
			dataItemObject.directory.id = directoryNode["Id"].asString();
		if(!directoryNode["Name"].isNull())
			dataItemObject.directory.name = directoryNode["Name"].asString();
		if(!directoryNode["PathId"].isNull())
			dataItemObject.directory.pathId = directoryNode["PathId"].asString();
		if(!directoryNode["PathName"].isNull())
			dataItemObject.directory.pathName = directoryNode["PathName"].asString();
		result_.data.push_back(dataItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryDatasetListResult::getSuccess()const
{
	return success_;
}

QueryDatasetListResult::Result QueryDatasetListResult::getResult()const
{
	return result_;
}

