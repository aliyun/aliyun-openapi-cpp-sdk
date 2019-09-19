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

#include <alibabacloud/rds/model/DescribeParameterGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeParameterGroupResult::DescribeParameterGroupResult() :
	ServiceResult()
{}

DescribeParameterGroupResult::DescribeParameterGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParameterGroupResult::~DescribeParameterGroupResult()
{}

void DescribeParameterGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParamGroupNode = value["ParamGroup"]["ParameterGroup"];
	for (auto valueParamGroupParameterGroup : allParamGroupNode)
	{
		ParameterGroup paramGroupObject;
		if(!valueParamGroupParameterGroup["ParameterGroupType"].isNull())
			paramGroupObject.parameterGroupType = std::stoi(valueParamGroupParameterGroup["ParameterGroupType"].asString());
		if(!valueParamGroupParameterGroup["ParameterGroupName"].isNull())
			paramGroupObject.parameterGroupName = valueParamGroupParameterGroup["ParameterGroupName"].asString();
		if(!valueParamGroupParameterGroup["ParamCounts"].isNull())
			paramGroupObject.paramCounts = std::stoi(valueParamGroupParameterGroup["ParamCounts"].asString());
		if(!valueParamGroupParameterGroup["ParameterGroupDesc"].isNull())
			paramGroupObject.parameterGroupDesc = valueParamGroupParameterGroup["ParameterGroupDesc"].asString();
		if(!valueParamGroupParameterGroup["ForceRestart"].isNull())
			paramGroupObject.forceRestart = std::stoi(valueParamGroupParameterGroup["ForceRestart"].asString());
		if(!valueParamGroupParameterGroup["Engine"].isNull())
			paramGroupObject.engine = valueParamGroupParameterGroup["Engine"].asString();
		if(!valueParamGroupParameterGroup["EngineVersion"].isNull())
			paramGroupObject.engineVersion = valueParamGroupParameterGroup["EngineVersion"].asString();
		if(!valueParamGroupParameterGroup["ParameterGroupId"].isNull())
			paramGroupObject.parameterGroupId = std::stoi(valueParamGroupParameterGroup["ParameterGroupId"].asString());
		if(!valueParamGroupParameterGroup["CreateTime"].isNull())
			paramGroupObject.createTime = valueParamGroupParameterGroup["CreateTime"].asString();
		if(!valueParamGroupParameterGroup["UpdateTime"].isNull())
			paramGroupObject.updateTime = valueParamGroupParameterGroup["UpdateTime"].asString();
		auto allParamDetailNode = allParamGroupNode["ParamDetail"]["ParameterDetail"];
		for (auto allParamGroupNodeParamDetailParameterDetail : allParamDetailNode)
		{
			ParameterGroup::ParameterDetail paramDetailObject;
			if(!allParamGroupNodeParamDetailParameterDetail["ParamName"].isNull())
				paramDetailObject.paramName = allParamGroupNodeParamDetailParameterDetail["ParamName"].asString();
			if(!allParamGroupNodeParamDetailParameterDetail["ParamValue"].isNull())
				paramDetailObject.paramValue = allParamGroupNodeParamDetailParameterDetail["ParamValue"].asString();
			paramGroupObject.paramDetail.push_back(paramDetailObject);
		}
		paramGroup_.push_back(paramGroupObject);
	}

}

std::vector<DescribeParameterGroupResult::ParameterGroup> DescribeParameterGroupResult::getParamGroup()const
{
	return paramGroup_;
}

