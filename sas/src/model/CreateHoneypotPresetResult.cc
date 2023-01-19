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

#include <alibabacloud/sas/model/CreateHoneypotPresetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

CreateHoneypotPresetResult::CreateHoneypotPresetResult() :
	ServiceResult()
{}

CreateHoneypotPresetResult::CreateHoneypotPresetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateHoneypotPresetResult::~CreateHoneypotPresetResult()
{}

void CreateHoneypotPresetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto honeypotPresetNode = value["HoneypotPreset"];
	if(!honeypotPresetNode["HoneypotPresetId"].isNull())
		honeypotPreset_.honeypotPresetId = honeypotPresetNode["HoneypotPresetId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string CreateHoneypotPresetResult::getMessage()const
{
	return message_;
}

int CreateHoneypotPresetResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateHoneypotPresetResult::getCode()const
{
	return code_;
}

bool CreateHoneypotPresetResult::getSuccess()const
{
	return success_;
}

CreateHoneypotPresetResult::HoneypotPreset CreateHoneypotPresetResult::getHoneypotPreset()const
{
	return honeypotPreset_;
}

