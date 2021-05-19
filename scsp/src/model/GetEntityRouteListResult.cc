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

#include <alibabacloud/scsp/model/GetEntityRouteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetEntityRouteListResult::GetEntityRouteListResult() :
	ServiceResult()
{}

GetEntityRouteListResult::GetEntityRouteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEntityRouteListResult::~GetEntityRouteListResult()
{}

void GetEntityRouteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allEntityRouteListNode = dataNode["EntityRouteList"]["EntityRouteListItem"];
	for (auto dataNodeEntityRouteListEntityRouteListItem : allEntityRouteListNode)
	{
		Data::EntityRouteListItem entityRouteListItemObject;
		if(!dataNodeEntityRouteListEntityRouteListItem["EntityBizCodeType"].isNull())
			entityRouteListItemObject.entityBizCodeType = dataNodeEntityRouteListEntityRouteListItem["EntityBizCodeType"].asString();
		if(!dataNodeEntityRouteListEntityRouteListItem["GroupId"].isNull())
			entityRouteListItemObject.groupId = dataNodeEntityRouteListEntityRouteListItem["GroupId"].asString();
		if(!dataNodeEntityRouteListEntityRouteListItem["EntityId"].isNull())
			entityRouteListItemObject.entityId = dataNodeEntityRouteListEntityRouteListItem["EntityId"].asString();
		if(!dataNodeEntityRouteListEntityRouteListItem["ServiceId"].isNull())
			entityRouteListItemObject.serviceId = dataNodeEntityRouteListEntityRouteListItem["ServiceId"].asString();
		if(!dataNodeEntityRouteListEntityRouteListItem["DepartmentId"].isNull())
			entityRouteListItemObject.departmentId = dataNodeEntityRouteListEntityRouteListItem["DepartmentId"].asString();
		if(!dataNodeEntityRouteListEntityRouteListItem["EntityBizCode"].isNull())
			entityRouteListItemObject.entityBizCode = dataNodeEntityRouteListEntityRouteListItem["EntityBizCode"].asString();
		if(!dataNodeEntityRouteListEntityRouteListItem["UniqueId"].isNull())
			entityRouteListItemObject.uniqueId = std::stol(dataNodeEntityRouteListEntityRouteListItem["UniqueId"].asString());
		if(!dataNodeEntityRouteListEntityRouteListItem["EntityName"].isNull())
			entityRouteListItemObject.entityName = dataNodeEntityRouteListEntityRouteListItem["EntityName"].asString();
		if(!dataNodeEntityRouteListEntityRouteListItem["ExtInfo"].isNull())
			entityRouteListItemObject.extInfo = dataNodeEntityRouteListEntityRouteListItem["ExtInfo"].asString();
		if(!dataNodeEntityRouteListEntityRouteListItem["EntityRelationNumber"].isNull())
			entityRouteListItemObject.entityRelationNumber = dataNodeEntityRouteListEntityRouteListItem["EntityRelationNumber"].asString();
		data_.entityRouteList.push_back(entityRouteListItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetEntityRouteListResult::getMessage()const
{
	return message_;
}

GetEntityRouteListResult::Data GetEntityRouteListResult::getData()const
{
	return data_;
}

std::string GetEntityRouteListResult::getCode()const
{
	return code_;
}

bool GetEntityRouteListResult::getSuccess()const
{
	return success_;
}

