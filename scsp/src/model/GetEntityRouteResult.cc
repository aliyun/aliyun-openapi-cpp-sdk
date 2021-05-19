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

#include <alibabacloud/scsp/model/GetEntityRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetEntityRouteResult::GetEntityRouteResult() :
	ServiceResult()
{}

GetEntityRouteResult::GetEntityRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEntityRouteResult::~GetEntityRouteResult()
{}

void GetEntityRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EntityBizCodeType"].isNull())
		data_.entityBizCodeType = dataNode["EntityBizCodeType"].asString();
	if(!dataNode["GroupId"].isNull())
		data_.groupId = std::stol(dataNode["GroupId"].asString());
	if(!dataNode["EntityId"].isNull())
		data_.entityId = dataNode["EntityId"].asString();
	if(!dataNode["ServiceId"].isNull())
		data_.serviceId = std::stol(dataNode["ServiceId"].asString());
	if(!dataNode["EntityBizCode"].isNull())
		data_.entityBizCode = dataNode["EntityBizCode"].asString();
	if(!dataNode["DepartmentId"].isNull())
		data_.departmentId = dataNode["DepartmentId"].asString();
	if(!dataNode["UniqueId"].isNull())
		data_.uniqueId = std::stol(dataNode["UniqueId"].asString());
	if(!dataNode["EntityName"].isNull())
		data_.entityName = dataNode["EntityName"].asString();
	if(!dataNode["ExtInfo"].isNull())
		data_.extInfo = dataNode["ExtInfo"].asString();
	if(!dataNode["EntityRelationNumber"].isNull())
		data_.entityRelationNumber = dataNode["EntityRelationNumber"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetEntityRouteResult::getMessage()const
{
	return message_;
}

GetEntityRouteResult::Data GetEntityRouteResult::getData()const
{
	return data_;
}

std::string GetEntityRouteResult::getCode()const
{
	return code_;
}

bool GetEntityRouteResult::getSuccess()const
{
	return success_;
}

