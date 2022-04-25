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

#include <alibabacloud/dataworks-public/model/ExportDataSourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ExportDataSourcesResult::ExportDataSourcesResult() :
	ServiceResult()
{}

ExportDataSourcesResult::ExportDataSourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExportDataSourcesResult::~ExportDataSourcesResult()
{}

void ExportDataSourcesResult::parse(const std::string &payload)
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
	auto allDataSourcesNode = dataNode["DataSources"]["DataSourcesItem"];
	for (auto dataNodeDataSourcesDataSourcesItem : allDataSourcesNode)
	{
		Data::DataSourcesItem dataSourcesItemObject;
		if(!dataNodeDataSourcesDataSourcesItem["Status"].isNull())
			dataSourcesItemObject.status = std::stoi(dataNodeDataSourcesDataSourcesItem["Status"].asString());
		if(!dataNodeDataSourcesDataSourcesItem["ProjectId"].isNull())
			dataSourcesItemObject.projectId = std::stoi(dataNodeDataSourcesDataSourcesItem["ProjectId"].asString());
		if(!dataNodeDataSourcesDataSourcesItem["SubType"].isNull())
			dataSourcesItemObject.subType = dataNodeDataSourcesDataSourcesItem["SubType"].asString();
		if(!dataNodeDataSourcesDataSourcesItem["GmtModified"].isNull())
			dataSourcesItemObject.gmtModified = dataNodeDataSourcesDataSourcesItem["GmtModified"].asString();
		if(!dataNodeDataSourcesDataSourcesItem["EnvType"].isNull())
			dataSourcesItemObject.envType = std::stoi(dataNodeDataSourcesDataSourcesItem["EnvType"].asString());
		if(!dataNodeDataSourcesDataSourcesItem["ConnectStatus"].isNull())
			dataSourcesItemObject.connectStatus = std::stoi(dataNodeDataSourcesDataSourcesItem["ConnectStatus"].asString());
		if(!dataNodeDataSourcesDataSourcesItem["Sequence"].isNull())
			dataSourcesItemObject.sequence = std::stoi(dataNodeDataSourcesDataSourcesItem["Sequence"].asString());
		if(!dataNodeDataSourcesDataSourcesItem["Description"].isNull())
			dataSourcesItemObject.description = dataNodeDataSourcesDataSourcesItem["Description"].asString();
		if(!dataNodeDataSourcesDataSourcesItem["DataSourceType"].isNull())
			dataSourcesItemObject.dataSourceType = dataNodeDataSourcesDataSourcesItem["DataSourceType"].asString();
		if(!dataNodeDataSourcesDataSourcesItem["GmtCreate"].isNull())
			dataSourcesItemObject.gmtCreate = dataNodeDataSourcesDataSourcesItem["GmtCreate"].asString();
		if(!dataNodeDataSourcesDataSourcesItem["DefaultEngine"].isNull())
			dataSourcesItemObject.defaultEngine = dataNodeDataSourcesDataSourcesItem["DefaultEngine"].asString() == "true";
		if(!dataNodeDataSourcesDataSourcesItem["Shared"].isNull())
			dataSourcesItemObject.shared = dataNodeDataSourcesDataSourcesItem["Shared"].asString() == "true";
		if(!dataNodeDataSourcesDataSourcesItem["Operator"].isNull())
			dataSourcesItemObject._operator = dataNodeDataSourcesDataSourcesItem["Operator"].asString();
		if(!dataNodeDataSourcesDataSourcesItem["Name"].isNull())
			dataSourcesItemObject.name = dataNodeDataSourcesDataSourcesItem["Name"].asString();
		if(!dataNodeDataSourcesDataSourcesItem["Content"].isNull())
			dataSourcesItemObject.content = dataNodeDataSourcesDataSourcesItem["Content"].asString();
		if(!dataNodeDataSourcesDataSourcesItem["Id"].isNull())
			dataSourcesItemObject.id = std::stoi(dataNodeDataSourcesDataSourcesItem["Id"].asString());
		if(!dataNodeDataSourcesDataSourcesItem["BindingCalcEngineId"].isNull())
			dataSourcesItemObject.bindingCalcEngineId = std::stoi(dataNodeDataSourcesDataSourcesItem["BindingCalcEngineId"].asString());
		if(!dataNodeDataSourcesDataSourcesItem["TenantId"].isNull())
			dataSourcesItemObject.tenantId = std::stol(dataNodeDataSourcesDataSourcesItem["TenantId"].asString());
		data_.dataSources.push_back(dataSourcesItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ExportDataSourcesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ExportDataSourcesResult::Data ExportDataSourcesResult::getData()const
{
	return data_;
}

bool ExportDataSourcesResult::getSuccess()const
{
	return success_;
}

