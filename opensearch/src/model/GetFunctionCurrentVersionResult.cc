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

#include <alibabacloud/opensearch/model/GetFunctionCurrentVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

GetFunctionCurrentVersionResult::GetFunctionCurrentVersionResult() :
	ServiceResult()
{}

GetFunctionCurrentVersionResult::GetFunctionCurrentVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFunctionCurrentVersionResult::~GetFunctionCurrentVersionResult()
{}

void GetFunctionCurrentVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["FunctionName"].isNull())
		result_.functionName = resultNode["FunctionName"].asString();
	if(!resultNode["FunctionType"].isNull())
		result_.functionType = resultNode["FunctionType"].asString();
	if(!resultNode["ModelType"].isNull())
		result_.modelType = resultNode["ModelType"].asString();
	if(!resultNode["VersionId"].isNull())
		result_.versionId = std::stol(resultNode["VersionId"].asString());
	if(!resultNode["VersionName"].isNull())
		result_.versionName = resultNode["VersionName"].asString();
	auto versionConfigNode = resultNode["VersionConfig"];
	auto allCreateParametersNode = versionConfigNode["CreateParameters"]["CreateParametersItem"];
	for (auto versionConfigNodeCreateParametersCreateParametersItem : allCreateParametersNode)
	{
		Result::VersionConfig::CreateParametersItem createParametersItemObject;
		if(!versionConfigNodeCreateParametersCreateParametersItem["Name"].isNull())
			createParametersItemObject.name = versionConfigNodeCreateParametersCreateParametersItem["Name"].asString();
		if(!versionConfigNodeCreateParametersCreateParametersItem["Required"].isNull())
			createParametersItemObject.required = versionConfigNodeCreateParametersCreateParametersItem["Required"].asString();
		result_.versionConfig.createParameters.push_back(createParametersItemObject);
	}
	auto allDependsNode = versionConfigNode["Depends"]["DependsItem"];
	for (auto versionConfigNodeDependsDependsItem : allDependsNode)
	{
		Result::VersionConfig::DependsItem dependsItemObject;
		if(!versionConfigNodeDependsDependsItem["Condition"].isNull())
			dependsItemObject.condition = versionConfigNodeDependsDependsItem["Condition"].asString();
		if(!versionConfigNodeDependsDependsItem["Dependency"].isNull())
			dependsItemObject.dependency = versionConfigNodeDependsDependsItem["Dependency"].asString();
		if(!versionConfigNodeDependsDependsItem["Description"].isNull())
			dependsItemObject.description = versionConfigNodeDependsDependsItem["Description"].asString();
		result_.versionConfig.depends.push_back(dependsItemObject);
	}
	auto allUsageParametersNode = versionConfigNode["UsageParameters"]["UsageParametersItem"];
	for (auto versionConfigNodeUsageParametersUsageParametersItem : allUsageParametersNode)
	{
		Result::VersionConfig::UsageParametersItem usageParametersItemObject;
		if(!versionConfigNodeUsageParametersUsageParametersItem["Name"].isNull())
			usageParametersItemObject.name = versionConfigNodeUsageParametersUsageParametersItem["Name"].asString();
		if(!versionConfigNodeUsageParametersUsageParametersItem["Required"].isNull())
			usageParametersItemObject.required = versionConfigNodeUsageParametersUsageParametersItem["Required"].asString();
		result_.versionConfig.usageParameters.push_back(usageParametersItemObject);
	}
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

std::string GetFunctionCurrentVersionResult::getStatus()const
{
	return status_;
}

long GetFunctionCurrentVersionResult::getHttpCode()const
{
	return httpCode_;
}

std::string GetFunctionCurrentVersionResult::getMessage()const
{
	return message_;
}

std::string GetFunctionCurrentVersionResult::getCode()const
{
	return code_;
}

GetFunctionCurrentVersionResult::Result GetFunctionCurrentVersionResult::getResult()const
{
	return result_;
}

long GetFunctionCurrentVersionResult::getLatency()const
{
	return latency_;
}

