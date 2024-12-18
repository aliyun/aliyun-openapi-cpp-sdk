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

#include <alibabacloud/selectdb/model/DescribeDBClusterConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

DescribeDBClusterConfigResult::DescribeDBClusterConfigResult() :
	ServiceResult()
{}

DescribeDBClusterConfigResult::DescribeDBClusterConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterConfigResult::~DescribeDBClusterConfigResult()
{}

void DescribeDBClusterConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["DbInstanceName"].isNull())
		data_.dbInstanceName = dataNode["DbInstanceName"].asString();
	if(!dataNode["DbInstanceId"].isNull())
		data_.dbInstanceId = dataNode["DbInstanceId"].asString();
	if(!dataNode["DbClusterId"].isNull())
		data_.dbClusterId = dataNode["DbClusterId"].asString();
	if(!dataNode["TaskId"].isNull())
		data_.taskId = std::stoi(dataNode["TaskId"].asString());
	auto allParamsNode = dataNode["Params"]["Param"];
	for (auto dataNodeParamsParam : allParamsNode)
	{
		Data::Param paramObject;
		if(!dataNodeParamsParam["Name"].isNull())
			paramObject.name = dataNodeParamsParam["Name"].asString();
		if(!dataNodeParamsParam["Optional"].isNull())
			paramObject.optional = dataNodeParamsParam["Optional"].asString();
		if(!dataNodeParamsParam["Comment"].isNull())
			paramObject.comment = dataNodeParamsParam["Comment"].asString();
		if(!dataNodeParamsParam["Value"].isNull())
			paramObject.value = dataNodeParamsParam["Value"].asString();
		if(!dataNodeParamsParam["ParamCategory"].isNull())
			paramObject.paramCategory = dataNodeParamsParam["ParamCategory"].asString();
		if(!dataNodeParamsParam["DefaultValue"].isNull())
			paramObject.defaultValue = dataNodeParamsParam["DefaultValue"].asString();
		if(!dataNodeParamsParam["IsDynamic"].isNull())
			paramObject.isDynamic = std::stoi(dataNodeParamsParam["IsDynamic"].asString());
		if(!dataNodeParamsParam["IsUserModifiable"].isNull())
			paramObject.isUserModifiable = std::stoi(dataNodeParamsParam["IsUserModifiable"].asString());
		data_.params.push_back(paramObject);
	}
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string DescribeDBClusterConfigResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

DescribeDBClusterConfigResult::Data DescribeDBClusterConfigResult::getData()const
{
	return data_;
}

std::string DescribeDBClusterConfigResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeDBClusterConfigResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

