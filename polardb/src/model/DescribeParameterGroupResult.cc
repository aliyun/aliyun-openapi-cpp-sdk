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

#include <alibabacloud/polardb/model/DescribeParameterGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

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
	auto allParameterGroupNode = value["ParameterGroup"]["ParameterGroupItem"];
	for (auto valueParameterGroupParameterGroupItem : allParameterGroupNode)
	{
		ParameterGroupItem parameterGroupObject;
		if(!valueParameterGroupParameterGroupItem["DBType"].isNull())
			parameterGroupObject.dBType = valueParameterGroupParameterGroupItem["DBType"].asString();
		if(!valueParameterGroupParameterGroupItem["DBVersion"].isNull())
			parameterGroupObject.dBVersion = valueParameterGroupParameterGroupItem["DBVersion"].asString();
		if(!valueParameterGroupParameterGroupItem["ParameterGroupName"].isNull())
			parameterGroupObject.parameterGroupName = valueParameterGroupParameterGroupItem["ParameterGroupName"].asString();
		if(!valueParameterGroupParameterGroupItem["ForceRestart"].isNull())
			parameterGroupObject.forceRestart = valueParameterGroupParameterGroupItem["ForceRestart"].asString();
		if(!valueParameterGroupParameterGroupItem["ParameterGroupType"].isNull())
			parameterGroupObject.parameterGroupType = valueParameterGroupParameterGroupItem["ParameterGroupType"].asString();
		if(!valueParameterGroupParameterGroupItem["ParameterCounts"].isNull())
			parameterGroupObject.parameterCounts = std::stoi(valueParameterGroupParameterGroupItem["ParameterCounts"].asString());
		if(!valueParameterGroupParameterGroupItem["ParameterGroupDesc"].isNull())
			parameterGroupObject.parameterGroupDesc = valueParameterGroupParameterGroupItem["ParameterGroupDesc"].asString();
		if(!valueParameterGroupParameterGroupItem["CreateTime"].isNull())
			parameterGroupObject.createTime = valueParameterGroupParameterGroupItem["CreateTime"].asString();
		if(!valueParameterGroupParameterGroupItem["ParameterGroupId"].isNull())
			parameterGroupObject.parameterGroupId = valueParameterGroupParameterGroupItem["ParameterGroupId"].asString();
		auto allParameterDetailNode = valueParameterGroupParameterGroupItem["ParameterDetail"]["ParameterDetailItem"];
		for (auto valueParameterGroupParameterGroupItemParameterDetailParameterDetailItem : allParameterDetailNode)
		{
			ParameterGroupItem::ParameterDetailItem parameterDetailObject;
			if(!valueParameterGroupParameterGroupItemParameterDetailParameterDetailItem["ParamValue"].isNull())
				parameterDetailObject.paramValue = valueParameterGroupParameterGroupItemParameterDetailParameterDetailItem["ParamValue"].asString();
			if(!valueParameterGroupParameterGroupItemParameterDetailParameterDetailItem["ParamName"].isNull())
				parameterDetailObject.paramName = valueParameterGroupParameterGroupItemParameterDetailParameterDetailItem["ParamName"].asString();
			parameterGroupObject.parameterDetail.push_back(parameterDetailObject);
		}
		parameterGroup_.push_back(parameterGroupObject);
	}

}

std::vector<DescribeParameterGroupResult::ParameterGroupItem> DescribeParameterGroupResult::getParameterGroup()const
{
	return parameterGroup_;
}

