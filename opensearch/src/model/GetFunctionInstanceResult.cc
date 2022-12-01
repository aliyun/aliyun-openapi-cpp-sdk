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

#include <alibabacloud/opensearch/model/GetFunctionInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

GetFunctionInstanceResult::GetFunctionInstanceResult() :
	ServiceResult()
{}

GetFunctionInstanceResult::GetFunctionInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFunctionInstanceResult::~GetFunctionInstanceResult()
{}

void GetFunctionInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["CreateTime"].isNull())
		result_.createTime = std::stol(resultNode["CreateTime"].asString());
	if(!resultNode["Cron"].isNull())
		result_.cron = resultNode["Cron"].asString();
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["ExtendInfo"].isNull())
		result_.extendInfo = resultNode["ExtendInfo"].asString();
	if(!resultNode["FunctionName"].isNull())
		result_.functionName = resultNode["FunctionName"].asString();
	if(!resultNode["FunctionType"].isNull())
		result_.functionType = resultNode["FunctionType"].asString();
	if(!resultNode["InstanceName"].isNull())
		result_.instanceName = resultNode["InstanceName"].asString();
	if(!resultNode["ModelType"].isNull())
		result_.modelType = resultNode["ModelType"].asString();
	if(!resultNode["Source"].isNull())
		result_.source = resultNode["Source"].asString();
	if(!resultNode["Status"].isNull())
		result_.status = resultNode["Status"].asString();
	if(!resultNode["VersionId"].isNull())
		result_.versionId = std::stol(resultNode["VersionId"].asString());
	auto allCreateParametersNode = resultNode["CreateParameters"]["CreateParametersItem"];
	for (auto resultNodeCreateParametersCreateParametersItem : allCreateParametersNode)
	{
		Result::CreateParametersItem createParametersItemObject;
		if(!resultNodeCreateParametersCreateParametersItem["Name"].isNull())
			createParametersItemObject.name = resultNodeCreateParametersCreateParametersItem["Name"].asString();
		if(!resultNodeCreateParametersCreateParametersItem["Value"].isNull())
			createParametersItemObject.value = resultNodeCreateParametersCreateParametersItem["Value"].asString();
		result_.createParameters.push_back(createParametersItemObject);
	}
	auto allUsageParametersNode = resultNode["UsageParameters"]["UsageParametersItem"];
	for (auto resultNodeUsageParametersUsageParametersItem : allUsageParametersNode)
	{
		Result::UsageParametersItem usageParametersItemObject;
		if(!resultNodeUsageParametersUsageParametersItem["Name"].isNull())
			usageParametersItemObject.name = resultNodeUsageParametersUsageParametersItem["Name"].asString();
		if(!resultNodeUsageParametersUsageParametersItem["Value"].isNull())
			usageParametersItemObject.value = resultNodeUsageParametersUsageParametersItem["Value"].asString();
		result_.usageParameters.push_back(usageParametersItemObject);
	}
	auto belongsNode = resultNode["Belongs"];
	if(!belongsNode["Category"].isNull())
		result_.belongs.category = belongsNode["Category"].asString();
	if(!belongsNode["Domain"].isNull())
		result_.belongs.domain = belongsNode["Domain"].asString();
	if(!belongsNode["Language"].isNull())
		result_.belongs.language = belongsNode["Language"].asString();
	auto taskNode = resultNode["Task"];
	if(!taskNode["DagStatus"].isNull())
		result_.task.dagStatus = taskNode["DagStatus"].asString();
	if(!taskNode["LastRunTime"].isNull())
		result_.task.lastRunTime = std::stol(taskNode["LastRunTime"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = std::stol(value["HttpCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Latency"].isNull())
		latency_ = std::stol(value["Latency"].asString());

}

std::string GetFunctionInstanceResult::getStatus()const
{
	return status_;
}

long GetFunctionInstanceResult::getHttpCode()const
{
	return httpCode_;
}

std::string GetFunctionInstanceResult::getMessage()const
{
	return message_;
}

std::string GetFunctionInstanceResult::getCode()const
{
	return code_;
}

GetFunctionInstanceResult::Result GetFunctionInstanceResult::getResult()const
{
	return result_;
}

long GetFunctionInstanceResult::getLatency()const
{
	return latency_;
}

