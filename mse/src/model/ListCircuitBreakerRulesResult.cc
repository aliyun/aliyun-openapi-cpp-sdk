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

#include <alibabacloud/mse/model/ListCircuitBreakerRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListCircuitBreakerRulesResult::ListCircuitBreakerRulesResult() :
	ServiceResult()
{}

ListCircuitBreakerRulesResult::ListCircuitBreakerRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCircuitBreakerRulesResult::~ListCircuitBreakerRulesResult()
{}

void ListCircuitBreakerRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	auto allResultNode = dataNode["Result"]["ResultItem"];
	for (auto dataNodeResultResultItem : allResultNode)
	{
		Data::ResultItem resultItemObject;
		if(!dataNodeResultResultItem["Namespace"].isNull())
			resultItemObject._namespace = dataNodeResultResultItem["Namespace"].asString();
		if(!dataNodeResultResultItem["RuleId"].isNull())
			resultItemObject.ruleId = std::stol(dataNodeResultResultItem["RuleId"].asString());
		if(!dataNodeResultResultItem["AppName"].isNull())
			resultItemObject.appName = dataNodeResultResultItem["AppName"].asString();
		if(!dataNodeResultResultItem["Resource"].isNull())
			resultItemObject.resource = dataNodeResultResultItem["Resource"].asString();
		if(!dataNodeResultResultItem["Strategy"].isNull())
			resultItemObject.strategy = std::stoi(dataNodeResultResultItem["Strategy"].asString());
		if(!dataNodeResultResultItem["Threshold"].isNull())
			resultItemObject.threshold = std::stof(dataNodeResultResultItem["Threshold"].asString());
		if(!dataNodeResultResultItem["Enable"].isNull())
			resultItemObject.enable = dataNodeResultResultItem["Enable"].asString() == "true";
		if(!dataNodeResultResultItem["RetryTimeoutMs"].isNull())
			resultItemObject.retryTimeoutMs = std::stoi(dataNodeResultResultItem["RetryTimeoutMs"].asString());
		if(!dataNodeResultResultItem["StatIntervalMs"].isNull())
			resultItemObject.statIntervalMs = std::stoi(dataNodeResultResultItem["StatIntervalMs"].asString());
		if(!dataNodeResultResultItem["AppId"].isNull())
			resultItemObject.appId = dataNodeResultResultItem["AppId"].asString();
		if(!dataNodeResultResultItem["RegionId"].isNull())
			resultItemObject.regionId = dataNodeResultResultItem["RegionId"].asString();
		if(!dataNodeResultResultItem["FallbackObject"].isNull())
			resultItemObject.fallbackObject = dataNodeResultResultItem["FallbackObject"].asString();
		if(!dataNodeResultResultItem["MaxAllowedRtMs"].isNull())
			resultItemObject.maxAllowedRtMs = std::stoi(dataNodeResultResultItem["MaxAllowedRtMs"].asString());
		if(!dataNodeResultResultItem["MinRequestAmount"].isNull())
			resultItemObject.minRequestAmount = std::stoi(dataNodeResultResultItem["MinRequestAmount"].asString());
		if(!dataNodeResultResultItem["HalfOpenBaseAmountPerStep"].isNull())
			resultItemObject.halfOpenBaseAmountPerStep = std::stoi(dataNodeResultResultItem["HalfOpenBaseAmountPerStep"].asString());
		if(!dataNodeResultResultItem["HalfOpenRecoveryStepNum"].isNull())
			resultItemObject.halfOpenRecoveryStepNum = std::stoi(dataNodeResultResultItem["HalfOpenRecoveryStepNum"].asString());
		data_.result.push_back(resultItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListCircuitBreakerRulesResult::getMessage()const
{
	return message_;
}

int ListCircuitBreakerRulesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListCircuitBreakerRulesResult::Data ListCircuitBreakerRulesResult::getData()const
{
	return data_;
}

int ListCircuitBreakerRulesResult::getCode()const
{
	return code_;
}

bool ListCircuitBreakerRulesResult::getSuccess()const
{
	return success_;
}

