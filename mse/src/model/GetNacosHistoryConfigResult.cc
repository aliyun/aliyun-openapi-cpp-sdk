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

#include <alibabacloud/mse/model/GetNacosHistoryConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetNacosHistoryConfigResult::GetNacosHistoryConfigResult() :
	ServiceResult()
{}

GetNacosHistoryConfigResult::GetNacosHistoryConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNacosHistoryConfigResult::~GetNacosHistoryConfigResult()
{}

void GetNacosHistoryConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configurationNode = value["Configuration"];
	if(!configurationNode["AppName"].isNull())
		configuration_.appName = configurationNode["AppName"].asString();
	if(!configurationNode["Md5"].isNull())
		configuration_.md5 = configurationNode["Md5"].asString();
	if(!configurationNode["DataId"].isNull())
		configuration_.dataId = configurationNode["DataId"].asString();
	if(!configurationNode["Content"].isNull())
		configuration_.content = configurationNode["Content"].asString();
	if(!configurationNode["Group"].isNull())
		configuration_.group = configurationNode["Group"].asString();
	if(!configurationNode["OpType"].isNull())
		configuration_.opType = configurationNode["OpType"].asString();
	if(!configurationNode["EncryptedDataKey"].isNull())
		configuration_.encryptedDataKey = configurationNode["EncryptedDataKey"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetNacosHistoryConfigResult::Configuration GetNacosHistoryConfigResult::getConfiguration()const
{
	return configuration_;
}

std::string GetNacosHistoryConfigResult::getMessage()const
{
	return message_;
}

std::string GetNacosHistoryConfigResult::getErrorCode()const
{
	return errorCode_;
}

bool GetNacosHistoryConfigResult::getSuccess()const
{
	return success_;
}

