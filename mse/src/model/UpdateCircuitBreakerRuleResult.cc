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

#include <alibabacloud/mse/model/UpdateCircuitBreakerRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

UpdateCircuitBreakerRuleResult::UpdateCircuitBreakerRuleResult() :
	ServiceResult()
{}

UpdateCircuitBreakerRuleResult::UpdateCircuitBreakerRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateCircuitBreakerRuleResult::~UpdateCircuitBreakerRuleResult()
{}

void UpdateCircuitBreakerRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["AppName"].isNull())
		data_.appName = dataNode["AppName"].asString();
	if(!dataNode["Resource"].isNull())
		data_.resource = dataNode["Resource"].asString();
	if(!dataNode["Strategy"].isNull())
		data_.strategy = std::stoi(dataNode["Strategy"].asString());
	if(!dataNode["Threshold"].isNull())
		data_.threshold = std::stof(dataNode["Threshold"].asString());
	if(!dataNode["Enable"].isNull())
		data_.enable = dataNode["Enable"].asString() == "true";
	if(!dataNode["RetryTimeoutMs"].isNull())
		data_.retryTimeoutMs = std::stoi(dataNode["RetryTimeoutMs"].asString());
	if(!dataNode["StatIntervalMs"].isNull())
		data_.statIntervalMs = std::stoi(dataNode["StatIntervalMs"].asString());
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["MaxAllowedRtMs"].isNull())
		data_.maxAllowedRtMs = std::stoi(dataNode["MaxAllowedRtMs"].asString());
	if(!dataNode["MinRequestAmount"].isNull())
		data_.minRequestAmount = std::stoi(dataNode["MinRequestAmount"].asString());
	if(!dataNode["HalfOpenBaseAmountPerStep"].isNull())
		data_.halfOpenBaseAmountPerStep = std::stoi(dataNode["HalfOpenBaseAmountPerStep"].asString());
	if(!dataNode["HalfOpenRecoveryStepNum"].isNull())
		data_.halfOpenRecoveryStepNum = std::stoi(dataNode["HalfOpenRecoveryStepNum"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateCircuitBreakerRuleResult::getMessage()const
{
	return message_;
}

UpdateCircuitBreakerRuleResult::Data UpdateCircuitBreakerRuleResult::getData()const
{
	return data_;
}

std::string UpdateCircuitBreakerRuleResult::getCode()const
{
	return code_;
}

bool UpdateCircuitBreakerRuleResult::getSuccess()const
{
	return success_;
}

