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

#include <alibabacloud/cloud-siem/model/ListEntitiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

ListEntitiesResult::ListEntitiesResult() :
	ServiceResult()
{}

ListEntitiesResult::ListEntitiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEntitiesResult::~ListEntitiesResult()
{}

void ListEntitiesResult::parse(const std::string &payload)
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
		if(!dataNodeResponseDataResponseDataItem["IncidentUuid"].isNull())
			responseDataItemObject.incidentUuid = dataNodeResponseDataResponseDataItem["IncidentUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertUuid"].isNull())
			responseDataItemObject.alertUuid = dataNodeResponseDataResponseDataItem["AlertUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["AlertNum"].isNull())
			responseDataItemObject.alertNum = std::stoi(dataNodeResponseDataResponseDataItem["AlertNum"].asString());
		if(!dataNodeResponseDataResponseDataItem["EventNum"].isNull())
			responseDataItemObject.eventNum = std::stoi(dataNodeResponseDataResponseDataItem["EventNum"].asString());
		if(!dataNodeResponseDataResponseDataItem["CloudCode"].isNull())
			responseDataItemObject.cloudCode = dataNodeResponseDataResponseDataItem["CloudCode"].asString();
		if(!dataNodeResponseDataResponseDataItem["EntityType"].isNull())
			responseDataItemObject.entityType = dataNodeResponseDataResponseDataItem["EntityType"].asString();
		if(!dataNodeResponseDataResponseDataItem["EntityName"].isNull())
			responseDataItemObject.entityName = dataNodeResponseDataResponseDataItem["EntityName"].asString();
		if(!dataNodeResponseDataResponseDataItem["EntityInfo"].isNull())
			responseDataItemObject.entityInfo = dataNodeResponseDataResponseDataItem["EntityInfo"].asString();
		if(!dataNodeResponseDataResponseDataItem["SubUserId"].isNull())
			responseDataItemObject.subUserId = std::stol(dataNodeResponseDataResponseDataItem["SubUserId"].asString());
		if(!dataNodeResponseDataResponseDataItem["EntityId"].isNull())
			responseDataItemObject.entityId = dataNodeResponseDataResponseDataItem["EntityId"].asString();
		if(!dataNodeResponseDataResponseDataItem["EntityUuid"].isNull())
			responseDataItemObject.entityUuid = dataNodeResponseDataResponseDataItem["EntityUuid"].asString();
		if(!dataNodeResponseDataResponseDataItem["MalwareType"].isNull())
			responseDataItemObject.malwareType = dataNodeResponseDataResponseDataItem["MalwareType"].asString();
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

std::string ListEntitiesResult::getMessage()const
{
	return message_;
}

ListEntitiesResult::Data ListEntitiesResult::getData()const
{
	return data_;
}

int ListEntitiesResult::getCode()const
{
	return code_;
}

bool ListEntitiesResult::getSuccess()const
{
	return success_;
}

