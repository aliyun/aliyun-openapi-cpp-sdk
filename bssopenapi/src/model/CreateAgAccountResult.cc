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

#include <alibabacloud/bssopenapi/model/CreateAgAccountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

CreateAgAccountResult::CreateAgAccountResult() :
	ServiceResult()
{}

CreateAgAccountResult::CreateAgAccountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAgAccountResult::~CreateAgAccountResult()
{}

void CreateAgAccountResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto agRelationDtoNode = value["AgRelationDto"];
	if(!agRelationDtoNode["Pk"].isNull())
		agRelationDto_.pk = agRelationDtoNode["Pk"].asString();
	if(!agRelationDtoNode["Type"].isNull())
		agRelationDto_.type = agRelationDtoNode["Type"].asString();
	if(!agRelationDtoNode["Mpk"].isNull())
		agRelationDto_.mpk = agRelationDtoNode["Mpk"].asString();
	if(!agRelationDtoNode["RamAdminRoleName"].isNull())
		agRelationDto_.ramAdminRoleName = agRelationDtoNode["RamAdminRoleName"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateAgAccountResult::getMessage()const
{
	return message_;
}

CreateAgAccountResult::AgRelationDto CreateAgAccountResult::getAgRelationDto()const
{
	return agRelationDto_;
}

std::string CreateAgAccountResult::getCode()const
{
	return code_;
}

bool CreateAgAccountResult::getSuccess()const
{
	return success_;
}

