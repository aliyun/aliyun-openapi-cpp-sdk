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

#include <alibabacloud/mse/model/ListFlowRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListFlowRulesResult::ListFlowRulesResult() :
	ServiceResult()
{}

ListFlowRulesResult::ListFlowRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowRulesResult::~ListFlowRulesResult()
{}

void ListFlowRulesResult::parse(const std::string &payload)
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
		if(!dataNodeResultResultItem["ControlBehavior"].isNull())
			resultItemObject.controlBehavior = std::stoi(dataNodeResultResultItem["ControlBehavior"].asString());
		if(!dataNodeResultResultItem["MaxQueueingTimeMs"].isNull())
			resultItemObject.maxQueueingTimeMs = std::stoi(dataNodeResultResultItem["MaxQueueingTimeMs"].asString());
		if(!dataNodeResultResultItem["Threshold"].isNull())
			resultItemObject.threshold = std::stof(dataNodeResultResultItem["Threshold"].asString());
		if(!dataNodeResultResultItem["Enable"].isNull())
			resultItemObject.enable = dataNodeResultResultItem["Enable"].asString() == "true";
		if(!dataNodeResultResultItem["AppId"].isNull())
			resultItemObject.appId = dataNodeResultResultItem["AppId"].asString();
		if(!dataNodeResultResultItem["RegionId"].isNull())
			resultItemObject.regionId = dataNodeResultResultItem["RegionId"].asString();
		if(!dataNodeResultResultItem["FallbackObject"].isNull())
			resultItemObject.fallbackObject = dataNodeResultResultItem["FallbackObject"].asString();
		if(!dataNodeResultResultItem["MetricType"].isNull())
			resultItemObject.metricType = std::stoi(dataNodeResultResultItem["MetricType"].asString());
		if(!dataNodeResultResultItem["TrafficTags"].isNull())
			resultItemObject.trafficTags = dataNodeResultResultItem["TrafficTags"].asString();
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

std::string ListFlowRulesResult::getMessage()const
{
	return message_;
}

int ListFlowRulesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListFlowRulesResult::Data ListFlowRulesResult::getData()const
{
	return data_;
}

int ListFlowRulesResult::getCode()const
{
	return code_;
}

bool ListFlowRulesResult::getSuccess()const
{
	return success_;
}

