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

#include <alibabacloud/reid_cloud/model/ImportSpecialPersonnelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Reid_cloud;
using namespace AlibabaCloud::Reid_cloud::Model;

ImportSpecialPersonnelResult::ImportSpecialPersonnelResult() :
	ServiceResult()
{}

ImportSpecialPersonnelResult::ImportSpecialPersonnelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ImportSpecialPersonnelResult::~ImportSpecialPersonnelResult()
{}

void ImportSpecialPersonnelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSpecialPersonnelMapsNode = value["SpecialPersonnelMaps"]["SpecialPersonnelMap"];
	for (auto valueSpecialPersonnelMapsSpecialPersonnelMap : allSpecialPersonnelMapsNode)
	{
		SpecialPersonnelMap specialPersonnelMapsObject;
		if(!valueSpecialPersonnelMapsSpecialPersonnelMap["StoreId"].isNull())
			specialPersonnelMapsObject.storeId = std::stol(valueSpecialPersonnelMapsSpecialPersonnelMap["StoreId"].asString());
		if(!valueSpecialPersonnelMapsSpecialPersonnelMap["UkId"].isNull())
			specialPersonnelMapsObject.ukId = std::stol(valueSpecialPersonnelMapsSpecialPersonnelMap["UkId"].asString());
		specialPersonnelMaps_.push_back(specialPersonnelMapsObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ImportSpecialPersonnelResult::getMessage()const
{
	return message_;
}

std::string ImportSpecialPersonnelResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ImportSpecialPersonnelResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ImportSpecialPersonnelResult::getErrorCode()const
{
	return errorCode_;
}

std::string ImportSpecialPersonnelResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ImportSpecialPersonnelResult::SpecialPersonnelMap> ImportSpecialPersonnelResult::getSpecialPersonnelMaps()const
{
	return specialPersonnelMaps_;
}

std::string ImportSpecialPersonnelResult::getCode()const
{
	return code_;
}

bool ImportSpecialPersonnelResult::getSuccess()const
{
	return success_;
}

