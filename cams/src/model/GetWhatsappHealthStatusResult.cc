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

#include <alibabacloud/cams/model/GetWhatsappHealthStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

GetWhatsappHealthStatusResult::GetWhatsappHealthStatusResult() :
	ServiceResult()
{}

GetWhatsappHealthStatusResult::GetWhatsappHealthStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWhatsappHealthStatusResult::~GetWhatsappHealthStatusResult()
{}

void GetWhatsappHealthStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CanSendMessage"].isNull())
		data_.canSendMessage = dataNode["CanSendMessage"].asString();
	auto allEntitiesNode = dataNode["Entities"]["entitiesItem"];
	for (auto dataNodeEntitiesentitiesItem : allEntitiesNode)
	{
		Data::EntitiesItem entitiesItemObject;
		if(!dataNodeEntitiesentitiesItem["EntityType"].isNull())
			entitiesItemObject.entityType = dataNodeEntitiesentitiesItem["EntityType"].asString();
		if(!dataNodeEntitiesentitiesItem["TemplateCode"].isNull())
			entitiesItemObject.templateCode = dataNodeEntitiesentitiesItem["TemplateCode"].asString();
		if(!dataNodeEntitiesentitiesItem["Language"].isNull())
			entitiesItemObject.language = dataNodeEntitiesentitiesItem["Language"].asString();
		if(!dataNodeEntitiesentitiesItem["CanSendMessage"].isNull())
			entitiesItemObject.canSendMessage = dataNodeEntitiesentitiesItem["CanSendMessage"].asString();
		if(!dataNodeEntitiesentitiesItem["PhoneNumber"].isNull())
			entitiesItemObject.phoneNumber = dataNodeEntitiesentitiesItem["PhoneNumber"].asString();
		if(!dataNodeEntitiesentitiesItem["WabaId"].isNull())
			entitiesItemObject.wabaId = dataNodeEntitiesentitiesItem["WabaId"].asString();
		if(!dataNodeEntitiesentitiesItem["BusinessId"].isNull())
			entitiesItemObject.businessId = dataNodeEntitiesentitiesItem["BusinessId"].asString();
		auto allErrorsNode = dataNodeEntitiesentitiesItem["Errors"]["errorsItem"];
		for (auto dataNodeEntitiesentitiesItemErrorserrorsItem : allErrorsNode)
		{
			Data::EntitiesItem::ErrorsItem errorsObject;
			if(!dataNodeEntitiesentitiesItemErrorserrorsItem["ErrorDescription"].isNull())
				errorsObject.errorDescription = dataNodeEntitiesentitiesItemErrorserrorsItem["ErrorDescription"].asString();
			if(!dataNodeEntitiesentitiesItemErrorserrorsItem["PossibleSolution"].isNull())
				errorsObject.possibleSolution = dataNodeEntitiesentitiesItemErrorserrorsItem["PossibleSolution"].asString();
			if(!dataNodeEntitiesentitiesItemErrorserrorsItem["ErrorCode"].isNull())
				errorsObject.errorCode = dataNodeEntitiesentitiesItemErrorserrorsItem["ErrorCode"].asString();
			entitiesItemObject.errors.push_back(errorsObject);
		}
		data_.entities.push_back(entitiesItemObject);
	}
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetWhatsappHealthStatusResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string GetWhatsappHealthStatusResult::getMessage()const
{
	return message_;
}

GetWhatsappHealthStatusResult::Data GetWhatsappHealthStatusResult::getData()const
{
	return data_;
}

std::string GetWhatsappHealthStatusResult::getCode()const
{
	return code_;
}

bool GetWhatsappHealthStatusResult::getSuccess()const
{
	return success_;
}

