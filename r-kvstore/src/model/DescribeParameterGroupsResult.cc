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

#include <alibabacloud/r-kvstore/model/DescribeParameterGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
	auto allParameterGroupsNode = value["ParameterGroups"]["ParameterGroup"];
	for (auto valueParameterGroupsParameterGroup : allParameterGroupsNode)
	{
		ParameterGroup parameterGroupsObject;
		if(!valueParameterGroupsParameterGroup["EngineVersion"].isNull())
			parameterGroupsObject.engineVersion = valueParameterGroupsParameterGroup["EngineVersion"].asString();
		if(!valueParameterGroupsParameterGroup["Modified"].isNull())
			parameterGroupsObject.modified = valueParameterGroupsParameterGroup["Modified"].asString();
		if(!valueParameterGroupsParameterGroup["ParameterGroupName"].isNull())
			parameterGroupsObject.parameterGroupName = valueParameterGroupsParameterGroup["ParameterGroupName"].asString();
		if(!valueParameterGroupsParameterGroup["ParameterGroupDesc"].isNull())
			parameterGroupsObject.parameterGroupDesc = valueParameterGroupsParameterGroup["ParameterGroupDesc"].asString();
		if(!valueParameterGroupsParameterGroup["Engine"].isNull())
			parameterGroupsObject.engine = valueParameterGroupsParameterGroup["Engine"].asString();
		if(!valueParameterGroupsParameterGroup["ParamGroupId"].isNull())
			parameterGroupsObject.paramGroupId = valueParameterGroupsParameterGroup["ParamGroupId"].asString();
		if(!valueParameterGroupsParameterGroup["Created"].isNull())
			parameterGroupsObject.created = valueParameterGroupsParameterGroup["Created"].asString();
		if(!valueParameterGroupsParameterGroup["Category"].isNull())
			parameterGroupsObject.category = std::stol(valueParameterGroupsParameterGroup["Category"].asString());
		parameterGroups_.push_back(parameterGroupsObject);
	}

}

std::vector<DescribeParameterGroupsResult::ParameterGroup> DescribeParameterGroupsResult::getParameterGroups()const
{
	return parameterGroups_;
}

