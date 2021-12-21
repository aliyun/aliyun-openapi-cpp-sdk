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

#include <alibabacloud/ccc/model/TakeBreakResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

TakeBreakResult::TakeBreakResult() :
	ServiceResult()
{}

TakeBreakResult::TakeBreakResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TakeBreakResult::~TakeBreakResult()
{}

void TakeBreakResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Extension"].isNull())
		data_.extension = dataNode["Extension"].asString();
	if(!dataNode["Heartbeat"].isNull())
		data_.heartbeat = std::stol(dataNode["Heartbeat"].asString());
	if(!dataNode["WorkMode"].isNull())
		data_.workMode = dataNode["WorkMode"].asString();
	if(!dataNode["DeviceId"].isNull())
		data_.deviceId = dataNode["DeviceId"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["Reserved"].isNull())
		data_.reserved = std::stol(dataNode["Reserved"].asString());
	if(!dataNode["BreakCode"].isNull())
		data_.breakCode = dataNode["BreakCode"].asString();
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["OutboundScenario"].isNull())
		data_.outboundScenario = dataNode["OutboundScenario"].asString() == "true";
	if(!dataNode["Mobile"].isNull())
		data_.mobile = dataNode["Mobile"].asString();
	if(!dataNode["JobId"].isNull())
		data_.jobId = dataNode["JobId"].asString();
	if(!dataNode["UserState"].isNull())
		data_.userState = dataNode["UserState"].asString();
		auto allSignedSkillGroupIdList = dataNode["SignedSkillGroupIdList"]["SkillGroupId"];
		for (auto value : allSignedSkillGroupIdList)
			data_.signedSkillGroupIdList.push_back(value.asString());
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

std::string TakeBreakResult::getMessage()const
{
	return message_;
}

int TakeBreakResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> TakeBreakResult::getParams()const
{
	return params_;
}

TakeBreakResult::Data TakeBreakResult::getData()const
{
	return data_;
}

std::string TakeBreakResult::getCode()const
{
	return code_;
}

