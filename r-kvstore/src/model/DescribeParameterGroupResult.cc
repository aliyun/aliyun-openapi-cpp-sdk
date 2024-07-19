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

#include <alibabacloud/r-kvstore/model/DescribeParameterGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
	auto parameterGroupNode = value["ParameterGroup"];
	if(!parameterGroupNode["EngineVersion"].isNull())
		parameterGroup_.engineVersion = parameterGroupNode["EngineVersion"].asString();
	if(!parameterGroupNode["Modified"].isNull())
		parameterGroup_.modified = parameterGroupNode["Modified"].asString();
	if(!parameterGroupNode["ParameterGroupName"].isNull())
		parameterGroup_.parameterGroupName = parameterGroupNode["ParameterGroupName"].asString();
	if(!parameterGroupNode["ParameterGroupDesc"].isNull())
		parameterGroup_.parameterGroupDesc = parameterGroupNode["ParameterGroupDesc"].asString();
	if(!parameterGroupNode["Engine"].isNull())
		parameterGroup_.engine = parameterGroupNode["Engine"].asString();
	if(!parameterGroupNode["ParamGroupId"].isNull())
		parameterGroup_.paramGroupId = parameterGroupNode["ParamGroupId"].asString();
	if(!parameterGroupNode["Created"].isNull())
		parameterGroup_.created = parameterGroupNode["Created"].asString();
	if(!parameterGroupNode["Category"].isNull())
		parameterGroup_.category = std::stol(parameterGroupNode["Category"].asString());
	auto allParamGroupsDetailsNode = parameterGroupNode["ParamGroupsDetails"]["ParamGroupDetail"];
	for (auto parameterGroupNodeParamGroupsDetailsParamGroupDetail : allParamGroupsDetailsNode)
	{
		ParameterGroup::ParamGroupDetail paramGroupDetailObject;
		if(!parameterGroupNodeParamGroupsDetailsParamGroupDetail["ParamName"].isNull())
			paramGroupDetailObject.paramName = parameterGroupNodeParamGroupsDetailsParamGroupDetail["ParamName"].asString();
		if(!parameterGroupNodeParamGroupsDetailsParamGroupDetail["ParamValue"].isNull())
			paramGroupDetailObject.paramValue = parameterGroupNodeParamGroupsDetailsParamGroupDetail["ParamValue"].asString();
		parameterGroup_.paramGroupsDetails.push_back(paramGroupDetailObject);
	}

}

DescribeParameterGroupResult::ParameterGroup DescribeParameterGroupResult::getParameterGroup()const
{
	return parameterGroup_;
}

