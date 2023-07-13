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

#include <alibabacloud/mse/model/GetLosslessRuleByAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetLosslessRuleByAppResult::GetLosslessRuleByAppResult() :
	ServiceResult()
{}

GetLosslessRuleByAppResult::GetLosslessRuleByAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLosslessRuleByAppResult::~GetLosslessRuleByAppResult()
{}

void GetLosslessRuleByAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["Count"].isNull())
		data_.count = std::stoi(dataNode["Count"].asString());
	if(!dataNode["Enable"].isNull())
		data_.enable = dataNode["Enable"].asString() == "true";
	if(!dataNode["WarmupTime"].isNull())
		data_.warmupTime = std::stoi(dataNode["WarmupTime"].asString());
	if(!dataNode["DelayTime"].isNull())
		data_.delayTime = std::stoi(dataNode["DelayTime"].asString());
	if(!dataNode["FuncType"].isNull())
		data_.funcType = std::stoi(dataNode["FuncType"].asString());
	if(!dataNode["Aligned"].isNull())
		data_.aligned = dataNode["Aligned"].asString() == "true";
	if(!dataNode["Related"].isNull())
		data_.related = dataNode["Related"].asString() == "true";
	if(!dataNode["LossLessDetail"].isNull())
		data_.lossLessDetail = dataNode["LossLessDetail"].asString() == "true";
	if(!dataNode["Notice"].isNull())
		data_.notice = dataNode["Notice"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetLosslessRuleByAppResult::getMessage()const
{
	return message_;
}

int GetLosslessRuleByAppResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetLosslessRuleByAppResult::Data GetLosslessRuleByAppResult::getData()const
{
	return data_;
}

std::string GetLosslessRuleByAppResult::getErrorCode()const
{
	return errorCode_;
}

int GetLosslessRuleByAppResult::getCode()const
{
	return code_;
}

bool GetLosslessRuleByAppResult::getSuccess()const
{
	return success_;
}

