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

#include <alibabacloud/dataworks-public/model/ListCalcEnginesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListCalcEnginesResult::ListCalcEnginesResult() :
	ServiceResult()
{}

ListCalcEnginesResult::ListCalcEnginesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCalcEnginesResult::~ListCalcEnginesResult()
{}

void ListCalcEnginesResult::parse(const std::string &payload)
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
	auto allCalcEnginesNode = dataNode["CalcEngines"]["CalcEnginesItem"];
	for (auto dataNodeCalcEnginesCalcEnginesItem : allCalcEnginesNode)
	{
		Data::CalcEnginesItem calcEnginesItemObject;
		if(!dataNodeCalcEnginesCalcEnginesItem["BindingProjectName"].isNull())
			calcEnginesItemObject.bindingProjectName = dataNodeCalcEnginesCalcEnginesItem["BindingProjectName"].asString();
		if(!dataNodeCalcEnginesCalcEnginesItem["IsDefault"].isNull())
			calcEnginesItemObject.isDefault = dataNodeCalcEnginesCalcEnginesItem["IsDefault"].asString() == "true";
		if(!dataNodeCalcEnginesCalcEnginesItem["EngineId"].isNull())
			calcEnginesItemObject.engineId = std::stoi(dataNodeCalcEnginesCalcEnginesItem["EngineId"].asString());
		if(!dataNodeCalcEnginesCalcEnginesItem["DwRegion"].isNull())
			calcEnginesItemObject.dwRegion = dataNodeCalcEnginesCalcEnginesItem["DwRegion"].asString();
		if(!dataNodeCalcEnginesCalcEnginesItem["TaskAuthType"].isNull())
			calcEnginesItemObject.taskAuthType = dataNodeCalcEnginesCalcEnginesItem["TaskAuthType"].asString();
		if(!dataNodeCalcEnginesCalcEnginesItem["CalcEngineType"].isNull())
			calcEnginesItemObject.calcEngineType = dataNodeCalcEnginesCalcEnginesItem["CalcEngineType"].asString();
		if(!dataNodeCalcEnginesCalcEnginesItem["EngineInfo"].isNull())
			calcEnginesItemObject.engineInfo = dataNodeCalcEnginesCalcEnginesItem["EngineInfo"].asString();
		if(!dataNodeCalcEnginesCalcEnginesItem["EnvType"].isNull())
			calcEnginesItemObject.envType = dataNodeCalcEnginesCalcEnginesItem["EnvType"].asString();
		if(!dataNodeCalcEnginesCalcEnginesItem["Region"].isNull())
			calcEnginesItemObject.region = dataNodeCalcEnginesCalcEnginesItem["Region"].asString();
		if(!dataNodeCalcEnginesCalcEnginesItem["GmtCreate"].isNull())
			calcEnginesItemObject.gmtCreate = dataNodeCalcEnginesCalcEnginesItem["GmtCreate"].asString();
		if(!dataNodeCalcEnginesCalcEnginesItem["BindingProjectId"].isNull())
			calcEnginesItemObject.bindingProjectId = std::stoi(dataNodeCalcEnginesCalcEnginesItem["BindingProjectId"].asString());
		if(!dataNodeCalcEnginesCalcEnginesItem["Name"].isNull())
			calcEnginesItemObject.name = dataNodeCalcEnginesCalcEnginesItem["Name"].asString();
		if(!dataNodeCalcEnginesCalcEnginesItem["TenantId"].isNull())
			calcEnginesItemObject.tenantId = std::stol(dataNodeCalcEnginesCalcEnginesItem["TenantId"].asString());
		data_.calcEngines.push_back(calcEnginesItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListCalcEnginesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListCalcEnginesResult::Data ListCalcEnginesResult::getData()const
{
	return data_;
}

bool ListCalcEnginesResult::getSuccess()const
{
	return success_;
}

