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

#include <alibabacloud/cloud-siem/model/ListDisposeStrategyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListDisposeStrategyResult::ListDisposeStrategyResult() :
	ServiceResult()
{}

ListDisposeStrategyResult::ListDisposeStrategyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDisposeStrategyResult::~ListDisposeStrategyResult()
{}

void ListDisposeStrategyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allResponseDataNode = dataNode["ResponseData"]["ResponseDataItem"];
	for (auto dataNodeResponseDataResponseDataItem : allResponseDataNode)
	{
		Data::ResponseDataItem responseDataItemObject;
		if(!dataNodeResponseDataResponseDataItem["Id"].isNull())
			responseDataItemObject.id = std::stol(dataNodeResponseDataResponseDataItem["Id"].asString());
		if(!dataNodeResponseDataResponseDataItem["GmtCreate"].isNull())
			responseDataItemObject.gmtCreate = dataNodeResponseDataResponseDataItem["GmtCreate"].asString();
		if(!dataNodeResponseDataResponseDataItem["GmtModified"].isNull())
			responseDataItemObject.gmtModified = dataNodeResponseDataResponseDataItem["GmtModified"].asString();
		if(!dataNodeResponseDataResponseDataItem["Aliuid"].isNull())
			responseDataItemObject.aliuid = std::stol(dataNodeResponseDataResponseDataItem["Aliuid"].asString());
		if(!dataNodeResponseDataResponseDataItem["SubAliuid"].isNull())
			responseDataItemObject.subAliuid = std::stol(dataNodeResponseDataResponseDataItem["SubAliuid"].asString());
		if(!dataNodeResponseDataResponseDataItem["IncidentName"].isNull())
			responseDataItemObject.incidentName = dataNodeResponseDataResponseDataItem["IncidentName"].asString();
		if(!dataNodeResponseDataResponseDataItem["IncidentUuid"].isNull())
			responseDataItemObject.incidentUuid = dataNodeResponseDataResponseDataItem["IncidentUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertUuid"].isNull())
			responseDataItemObject.alertUuid = dataNodeResponseDataResponseDataItem["AlertUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["SophonTaskId"].isNull())
			responseDataItemObject.sophonTaskId = dataNodeResponseDataResponseDataItem["SophonTaskId"].asString();
		if(!dataNodeResponseDataResponseDataItem["PlaybookName"].isNull())
			responseDataItemObject.playbookName = dataNodeResponseDataResponseDataItem["PlaybookName"].asString();
		if(!dataNodeResponseDataResponseDataItem["PlaybookUuid"].isNull())
			responseDataItemObject.playbookUuid = dataNodeResponseDataResponseDataItem["PlaybookUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["PlaybookType"].isNull())
			responseDataItemObject.playbookType = dataNodeResponseDataResponseDataItem["PlaybookType"].asString();
		if(!dataNodeResponseDataResponseDataItem["TaskUrl"].isNull())
			responseDataItemObject.taskUrl = dataNodeResponseDataResponseDataItem["TaskUrl"].asString();
		if(!dataNodeResponseDataResponseDataItem["EntityId"].isNull())
			responseDataItemObject.entityId = std::stol(dataNodeResponseDataResponseDataItem["EntityId"].asString());
		if(!dataNodeResponseDataResponseDataItem["EntityType"].isNull())
			responseDataItemObject.entityType = dataNodeResponseDataResponseDataItem["EntityType"].asString();
		if(!dataNodeResponseDataResponseDataItem["TaskParam"].isNull())
			responseDataItemObject.taskParam = dataNodeResponseDataResponseDataItem["TaskParam"].asString();
		if(!dataNodeResponseDataResponseDataItem["ErrorMessage"].isNull())
			responseDataItemObject.errorMessage = dataNodeResponseDataResponseDataItem["ErrorMessage"].asString();
		if(!dataNodeResponseDataResponseDataItem["FinishTime"].isNull())
			responseDataItemObject.finishTime = dataNodeResponseDataResponseDataItem["FinishTime"].asString();
		if(!dataNodeResponseDataResponseDataItem["EffectiveStatus"].isNull())
			responseDataItemObject.effectiveStatus = std::stoi(dataNodeResponseDataResponseDataItem["EffectiveStatus"].asString());
		if(!dataNodeResponseDataResponseDataItem["Status"].isNull())
			responseDataItemObject.status = std::stoi(dataNodeResponseDataResponseDataItem["Status"].asString());
		auto allScope = value["Scope"]["Scope"];
		for (auto value : allScope)
			responseDataItemObject.scope.push_back(value.asString());
		auto allEntity = value["Entity"]["Entity"];
		for (auto value : allEntity)
			responseDataItemObject.entity.push_back(value.asString());
		data_.responseData.push_back(responseDataItemObject);
	}
	auto pageInfoNode = dataNode["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		data_.pageInfo.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		data_.pageInfo.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		data_.pageInfo.totalCount = std::stol(pageInfoNode["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListDisposeStrategyResult::getMessage()const
{
	return message_;
}

ListDisposeStrategyResult::Data ListDisposeStrategyResult::getData()const
{
	return data_;
}

int ListDisposeStrategyResult::getCode()const
{
	return code_;
}

bool ListDisposeStrategyResult::getSuccess()const
{
	return success_;
}

