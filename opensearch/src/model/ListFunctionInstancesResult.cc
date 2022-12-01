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

#include <alibabacloud/opensearch/model/ListFunctionInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListFunctionInstancesResult::ListFunctionInstancesResult() :
	ServiceResult()
{}

ListFunctionInstancesResult::ListFunctionInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFunctionInstancesResult::~ListFunctionInstancesResult()
{}

void ListFunctionInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["CreateTime"].isNull())
			resultObject.createTime = std::stol(valueResultResultItem["CreateTime"].asString());
		if(!valueResultResultItem["Cron"].isNull())
			resultObject.cron = valueResultResultItem["Cron"].asString();
		if(!valueResultResultItem["Description"].isNull())
			resultObject.description = valueResultResultItem["Description"].asString();
		if(!valueResultResultItem["ExtendInfo"].isNull())
			resultObject.extendInfo = valueResultResultItem["ExtendInfo"].asString();
		if(!valueResultResultItem["FunctionName"].isNull())
			resultObject.functionName = valueResultResultItem["FunctionName"].asString();
		if(!valueResultResultItem["FunctionType"].isNull())
			resultObject.functionType = valueResultResultItem["FunctionType"].asString();
		if(!valueResultResultItem["InstanceName"].isNull())
			resultObject.instanceName = valueResultResultItem["InstanceName"].asString();
		if(!valueResultResultItem["ModelType"].isNull())
			resultObject.modelType = valueResultResultItem["ModelType"].asString();
		if(!valueResultResultItem["Source"].isNull())
			resultObject.source = valueResultResultItem["Source"].asString();
		if(!valueResultResultItem["Status"].isNull())
			resultObject.status = valueResultResultItem["Status"].asString();
		if(!valueResultResultItem["VersionId"].isNull())
			resultObject.versionId = std::stol(valueResultResultItem["VersionId"].asString());
		auto allCreateParametersNode = valueResultResultItem["CreateParameters"]["CreateParametersItem"];
		for (auto valueResultResultItemCreateParametersCreateParametersItem : allCreateParametersNode)
		{
			ResultItem::CreateParametersItem createParametersObject;
			if(!valueResultResultItemCreateParametersCreateParametersItem["Name"].isNull())
				createParametersObject.name = valueResultResultItemCreateParametersCreateParametersItem["Name"].asString();
			if(!valueResultResultItemCreateParametersCreateParametersItem["Value"].isNull())
				createParametersObject.value = valueResultResultItemCreateParametersCreateParametersItem["Value"].asString();
			resultObject.createParameters.push_back(createParametersObject);
		}
		auto allUsageParametersNode = valueResultResultItem["UsageParameters"]["UsageParametersItem"];
		for (auto valueResultResultItemUsageParametersUsageParametersItem : allUsageParametersNode)
		{
			ResultItem::UsageParametersItem usageParametersObject;
			if(!valueResultResultItemUsageParametersUsageParametersItem["Name"].isNull())
				usageParametersObject.name = valueResultResultItemUsageParametersUsageParametersItem["Name"].asString();
			if(!valueResultResultItemUsageParametersUsageParametersItem["Value"].isNull())
				usageParametersObject.value = valueResultResultItemUsageParametersUsageParametersItem["Value"].asString();
			resultObject.usageParameters.push_back(usageParametersObject);
		}
		auto belongsNode = value["Belongs"];
		if(!belongsNode["Category"].isNull())
			resultObject.belongs.category = belongsNode["Category"].asString();
		if(!belongsNode["Domain"].isNull())
			resultObject.belongs.domain = belongsNode["Domain"].asString();
		if(!belongsNode["Language"].isNull())
			resultObject.belongs.language = belongsNode["Language"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = std::stol(value["HttpCode"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Latency"].isNull())
		latency_ = std::stol(value["Latency"].asString());

}

std::string ListFunctionInstancesResult::getStatus()const
{
	return status_;
}

long ListFunctionInstancesResult::getHttpCode()const
{
	return httpCode_;
}

long ListFunctionInstancesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListFunctionInstancesResult::getMessage()const
{
	return message_;
}

std::string ListFunctionInstancesResult::getCode()const
{
	return code_;
}

std::vector<ListFunctionInstancesResult::ResultItem> ListFunctionInstancesResult::getResult()const
{
	return result_;
}

long ListFunctionInstancesResult::getLatency()const
{
	return latency_;
}

