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

#include <alibabacloud/ccc/model/GetLoginDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetLoginDetailsResult::GetLoginDetailsResult() :
	ServiceResult()
{}

GetLoginDetailsResult::GetLoginDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLoginDetailsResult::~GetLoginDetailsResult()
{}

void GetLoginDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DisplayName"].isNull())
		data_.displayName = dataNode["DisplayName"].asString();
	if(!dataNode["Extension"].isNull())
		data_.extension = dataNode["Extension"].asString();
	if(!dataNode["Signature"].isNull())
		data_.signature = dataNode["Signature"].asString();
	if(!dataNode["SipServerUrl"].isNull())
		data_.sipServerUrl = dataNode["SipServerUrl"].asString();
	if(!dataNode["DeviceId"].isNull())
		data_.deviceId = dataNode["DeviceId"].asString();
	if(!dataNode["AgentServerUrl"].isNull())
		data_.agentServerUrl = dataNode["AgentServerUrl"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["UserKey"].isNull())
		data_.userKey = dataNode["UserKey"].asString();
	if(!dataNode["WorkMode"].isNull())
		data_.workMode = dataNode["WorkMode"].asString();
	if(!dataNode["UserKey2"].isNull())
		data_.userKey2 = dataNode["UserKey2"].asString();
	if(!dataNode["Signature2"].isNull())
		data_.signature2 = dataNode["Signature2"].asString();
	if(!dataNode["DeviceExt"].isNull())
		data_.deviceExt = dataNode["DeviceExt"].asString();
	if(!dataNode["DeviceState"].isNull())
		data_.deviceState = dataNode["DeviceState"].asString();
	auto allParams = value["Params"]["Param"];
	for (const auto &item : allParams)
		params_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetLoginDetailsResult::getMessage()const
{
	return message_;
}

int GetLoginDetailsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> GetLoginDetailsResult::getParams()const
{
	return params_;
}

GetLoginDetailsResult::Data GetLoginDetailsResult::getData()const
{
	return data_;
}

std::string GetLoginDetailsResult::getCode()const
{
	return code_;
}

