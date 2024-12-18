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

#include <alibabacloud/selectdb/model/DescribeDBClusterConfigChangeLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

DescribeDBClusterConfigChangeLogsResult::DescribeDBClusterConfigChangeLogsResult() :
	ServiceResult()
{}

DescribeDBClusterConfigChangeLogsResult::DescribeDBClusterConfigChangeLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterConfigChangeLogsResult::~DescribeDBClusterConfigChangeLogsResult()
{}

void DescribeDBClusterConfigChangeLogsResult::parse(const std::string &payload)
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
	auto allParamChangeLogsNode = dataNode["ParamChangeLogs"]["ParamChangeLog"];
	for (auto dataNodeParamChangeLogsParamChangeLog : allParamChangeLogsNode)
	{
		Data::ParamChangeLog paramChangeLogObject;
		if(!dataNodeParamChangeLogsParamChangeLog["Id"].isNull())
			paramChangeLogObject.id = std::stol(dataNodeParamChangeLogsParamChangeLog["Id"].asString());
		if(!dataNodeParamChangeLogsParamChangeLog["Name"].isNull())
			paramChangeLogObject.name = dataNodeParamChangeLogsParamChangeLog["Name"].asString();
		if(!dataNodeParamChangeLogsParamChangeLog["OldValue"].isNull())
			paramChangeLogObject.oldValue = dataNodeParamChangeLogsParamChangeLog["OldValue"].asString();
		if(!dataNodeParamChangeLogsParamChangeLog["NewValue"].isNull())
			paramChangeLogObject.newValue = dataNodeParamChangeLogsParamChangeLog["NewValue"].asString();
		if(!dataNodeParamChangeLogsParamChangeLog["IsApplied"].isNull())
			paramChangeLogObject.isApplied = dataNodeParamChangeLogsParamChangeLog["IsApplied"].asString() == "true";
		if(!dataNodeParamChangeLogsParamChangeLog["GmtCreated"].isNull())
			paramChangeLogObject.gmtCreated = dataNodeParamChangeLogsParamChangeLog["GmtCreated"].asString();
		if(!dataNodeParamChangeLogsParamChangeLog["GmtModified"].isNull())
			paramChangeLogObject.gmtModified = dataNodeParamChangeLogsParamChangeLog["GmtModified"].asString();
		data_.paramChangeLogs.push_back(paramChangeLogObject);
	}
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string DescribeDBClusterConfigChangeLogsResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

DescribeDBClusterConfigChangeLogsResult::Data DescribeDBClusterConfigChangeLogsResult::getData()const
{
	return data_;
}

std::string DescribeDBClusterConfigChangeLogsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeDBClusterConfigChangeLogsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

