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

#include <alibabacloud/mse/model/GetNacosConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetNacosConfigResult::GetNacosConfigResult() :
	ServiceResult()
{}

GetNacosConfigResult::GetNacosConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNacosConfigResult::~GetNacosConfigResult()
{}

void GetNacosConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configurationNode = value["Configuration"];
	if(!configurationNode["Type"].isNull())
		configuration_.type = configurationNode["Type"].asString();
	if(!configurationNode["AppName"].isNull())
		configuration_.appName = configurationNode["AppName"].asString();
	if(!configurationNode["Tags"].isNull())
		configuration_.tags = configurationNode["Tags"].asString();
	if(!configurationNode["Md5"].isNull())
		configuration_.md5 = configurationNode["Md5"].asString();
	if(!configurationNode["DataId"].isNull())
		configuration_.dataId = configurationNode["DataId"].asString();
	if(!configurationNode["Content"].isNull())
		configuration_.content = configurationNode["Content"].asString();
	if(!configurationNode["Group"].isNull())
		configuration_.group = configurationNode["Group"].asString();
	if(!configurationNode["Desc"].isNull())
		configuration_.desc = configurationNode["Desc"].asString();
	if(!configurationNode["EncryptedDataKey"].isNull())
		configuration_.encryptedDataKey = configurationNode["EncryptedDataKey"].asString();
	if(!configurationNode["BetaIps"].isNull())
		configuration_.betaIps = configurationNode["BetaIps"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetNacosConfigResult::Configuration GetNacosConfigResult::getConfiguration()const
{
	return configuration_;
}

std::string GetNacosConfigResult::getMessage()const
{
	return message_;
}

std::string GetNacosConfigResult::getErrorCode()const
{
	return errorCode_;
}

bool GetNacosConfigResult::getSuccess()const
{
	return success_;
}

