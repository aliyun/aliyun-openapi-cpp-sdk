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

#include <alibabacloud/polardb/model/DescribeParameterGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeParameterGroupsResult::DescribeParameterGroupsResult() :
	ServiceResult()
{}

DescribeParameterGroupsResult::DescribeParameterGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParameterGroupsResult::~DescribeParameterGroupsResult()
{}

void DescribeParameterGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParameterGroupsNode = value["ParameterGroups"]["ParameterGroupsItem"];
	for (auto valueParameterGroupsParameterGroupsItem : allParameterGroupsNode)
	{
		ParameterGroupsItem parameterGroupsObject;
		if(!valueParameterGroupsParameterGroupsItem["DBType"].isNull())
			parameterGroupsObject.dBType = valueParameterGroupsParameterGroupsItem["DBType"].asString();
		if(!valueParameterGroupsParameterGroupsItem["DBVersion"].isNull())
			parameterGroupsObject.dBVersion = valueParameterGroupsParameterGroupsItem["DBVersion"].asString();
		if(!valueParameterGroupsParameterGroupsItem["ParameterGroupName"].isNull())
			parameterGroupsObject.parameterGroupName = valueParameterGroupsParameterGroupsItem["ParameterGroupName"].asString();
		if(!valueParameterGroupsParameterGroupsItem["ForceRestart"].isNull())
			parameterGroupsObject.forceRestart = valueParameterGroupsParameterGroupsItem["ForceRestart"].asString();
		if(!valueParameterGroupsParameterGroupsItem["ParameterGroupType"].isNull())
			parameterGroupsObject.parameterGroupType = valueParameterGroupsParameterGroupsItem["ParameterGroupType"].asString();
		if(!valueParameterGroupsParameterGroupsItem["ParameterCounts"].isNull())
			parameterGroupsObject.parameterCounts = std::stol(valueParameterGroupsParameterGroupsItem["ParameterCounts"].asString());
		if(!valueParameterGroupsParameterGroupsItem["ParameterGroupDesc"].isNull())
			parameterGroupsObject.parameterGroupDesc = valueParameterGroupsParameterGroupsItem["ParameterGroupDesc"].asString();
		if(!valueParameterGroupsParameterGroupsItem["CreateTime"].isNull())
			parameterGroupsObject.createTime = valueParameterGroupsParameterGroupsItem["CreateTime"].asString();
		if(!valueParameterGroupsParameterGroupsItem["ParameterGroupId"].isNull())
			parameterGroupsObject.parameterGroupId = valueParameterGroupsParameterGroupsItem["ParameterGroupId"].asString();
		parameterGroups_.push_back(parameterGroupsObject);
	}

}

std::vector<DescribeParameterGroupsResult::ParameterGroupsItem> DescribeParameterGroupsResult::getParameterGroups()const
{
	return parameterGroups_;
}

