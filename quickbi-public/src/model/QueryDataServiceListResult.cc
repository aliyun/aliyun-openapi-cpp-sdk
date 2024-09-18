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

#include <alibabacloud/quickbi-public/model/QueryDataServiceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryDataServiceListResult::QueryDataServiceListResult() :
	ServiceResult()
{}

QueryDataServiceListResult::QueryDataServiceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDataServiceListResult::~QueryDataServiceListResult()
{}

void QueryDataServiceListResult::parse(const std::string &payload)
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
	auto allDataNode = resultNode["Data"]["QueryDataServiceModel"];
	for (auto resultNodeDataQueryDataServiceModel : allDataNode)
	{
		Result::QueryDataServiceModel queryDataServiceModelObject;
		if(!resultNodeDataQueryDataServiceModel["CreatorId"].isNull())
			queryDataServiceModelObject.creatorId = resultNodeDataQueryDataServiceModel["CreatorId"].asString();
		if(!resultNodeDataQueryDataServiceModel["CreatorName"].isNull())
			queryDataServiceModelObject.creatorName = resultNodeDataQueryDataServiceModel["CreatorName"].asString();
		if(!resultNodeDataQueryDataServiceModel["CubeId"].isNull())
			queryDataServiceModelObject.cubeId = resultNodeDataQueryDataServiceModel["CubeId"].asString();
		if(!resultNodeDataQueryDataServiceModel["CubeName"].isNull())
			queryDataServiceModelObject.cubeName = resultNodeDataQueryDataServiceModel["CubeName"].asString();
		if(!resultNodeDataQueryDataServiceModel["Desc"].isNull())
			queryDataServiceModelObject.desc = resultNodeDataQueryDataServiceModel["Desc"].asString();
		if(!resultNodeDataQueryDataServiceModel["GmtCreate"].isNull())
			queryDataServiceModelObject.gmtCreate = resultNodeDataQueryDataServiceModel["GmtCreate"].asString();
		if(!resultNodeDataQueryDataServiceModel["GmtModified"].isNull())
			queryDataServiceModelObject.gmtModified = resultNodeDataQueryDataServiceModel["GmtModified"].asString();
		if(!resultNodeDataQueryDataServiceModel["ModifierId"].isNull())
			queryDataServiceModelObject.modifierId = resultNodeDataQueryDataServiceModel["ModifierId"].asString();
		if(!resultNodeDataQueryDataServiceModel["ModifierName"].isNull())
			queryDataServiceModelObject.modifierName = resultNodeDataQueryDataServiceModel["ModifierName"].asString();
		if(!resultNodeDataQueryDataServiceModel["Name"].isNull())
			queryDataServiceModelObject.name = resultNodeDataQueryDataServiceModel["Name"].asString();
		if(!resultNodeDataQueryDataServiceModel["OwnerId"].isNull())
			queryDataServiceModelObject.ownerId = resultNodeDataQueryDataServiceModel["OwnerId"].asString();
		if(!resultNodeDataQueryDataServiceModel["OwnerName"].isNull())
			queryDataServiceModelObject.ownerName = resultNodeDataQueryDataServiceModel["OwnerName"].asString();
		if(!resultNodeDataQueryDataServiceModel["Sid"].isNull())
			queryDataServiceModelObject.sid = resultNodeDataQueryDataServiceModel["Sid"].asString();
		if(!resultNodeDataQueryDataServiceModel["WorkspaceId"].isNull())
			queryDataServiceModelObject.workspaceId = resultNodeDataQueryDataServiceModel["WorkspaceId"].asString();
		if(!resultNodeDataQueryDataServiceModel["WorkspaceName"].isNull())
			queryDataServiceModelObject.workspaceName = resultNodeDataQueryDataServiceModel["WorkspaceName"].asString();
		auto contentNode = value["Content"];
		if(!contentNode["CubeId"].isNull())
			queryDataServiceModelObject.content.cubeId = contentNode["CubeId"].asString();
		if(!contentNode["CubeName"].isNull())
			queryDataServiceModelObject.content.cubeName = contentNode["CubeName"].asString();
		if(!contentNode["Detail"].isNull())
			queryDataServiceModelObject.content.detail = contentNode["Detail"].asString() == "true";
		auto allReturnFieldsNode = contentNode["ReturnFields"]["SelectFieldModel"];
		for (auto contentNodeReturnFieldsSelectFieldModel : allReturnFieldsNode)
		{
			Result::QueryDataServiceModel::Content::SelectFieldModel selectFieldModelObject;
			if(!contentNodeReturnFieldsSelectFieldModel["Aggregator"].isNull())
				selectFieldModelObject.aggregator = contentNodeReturnFieldsSelectFieldModel["Aggregator"].asString();
			if(!contentNodeReturnFieldsSelectFieldModel["Alias"].isNull())
				selectFieldModelObject.alias = contentNodeReturnFieldsSelectFieldModel["Alias"].asString();
			if(!contentNodeReturnFieldsSelectFieldModel["Desc"].isNull())
				selectFieldModelObject.desc = contentNodeReturnFieldsSelectFieldModel["Desc"].asString();
			if(!contentNodeReturnFieldsSelectFieldModel["Orderby"].isNull())
				selectFieldModelObject.orderby = contentNodeReturnFieldsSelectFieldModel["Orderby"].asString();
			auto fieldNode = value["Field"];
			if(!fieldNode["Caption"].isNull())
				selectFieldModelObject.field.caption = fieldNode["Caption"].asString();
			if(!fieldNode["Column"].isNull())
				selectFieldModelObject.field.column = fieldNode["Column"].asString();
			if(!fieldNode["DataType"].isNull())
				selectFieldModelObject.field.dataType = fieldNode["DataType"].asString();
			if(!fieldNode["Fid"].isNull())
				selectFieldModelObject.field.fid = fieldNode["Fid"].asString();
			if(!fieldNode["Granularity"].isNull())
				selectFieldModelObject.field.granularity = fieldNode["Granularity"].asString();
			if(!fieldNode["Name"].isNull())
				selectFieldModelObject.field.name = fieldNode["Name"].asString();
			if(!fieldNode["Type"].isNull())
				selectFieldModelObject.field.type = fieldNode["Type"].asString();
			queryDataServiceModelObject.content.returnFields.push_back(selectFieldModelObject);
		}
		auto filterNode = contentNode["Filter"];
		if(!filterNode["LogicalOperator"].isNull())
			queryDataServiceModelObject.content.filter.logicalOperator = filterNode["LogicalOperator"].asString();
		if(!filterNode["Type"].isNull())
			queryDataServiceModelObject.content.filter.type = filterNode["Type"].asString();
			auto allFilters = filterNode["Filters"]["AbstractFilter"];
			for (auto value : allFilters)
				queryDataServiceModelObject.content.filter.filters.push_back(value.asString());
		result_.data.push_back(queryDataServiceModelObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryDataServiceListResult::getSuccess()const
{
	return success_;
}

QueryDataServiceListResult::Result QueryDataServiceListResult::getResult()const
{
	return result_;
}

