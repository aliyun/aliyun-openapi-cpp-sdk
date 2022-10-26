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

#include <alibabacloud/polardb/model/DescribeDBNodesParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBNodesParametersResult::DescribeDBNodesParametersResult() :
	ServiceResult()
{}

DescribeDBNodesParametersResult::DescribeDBNodesParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBNodesParametersResult::~DescribeDBNodesParametersResult()
{}

void DescribeDBNodesParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBNodeIdsNode = value["DBNodeIds"]["DBNodeParameter"];
	for (auto valueDBNodeIdsDBNodeParameter : allDBNodeIdsNode)
	{
		DBNodeParameter dBNodeIdsObject;
		if(!valueDBNodeIdsDBNodeParameter["DBNodeId"].isNull())
			dBNodeIdsObject.dBNodeId = valueDBNodeIdsDBNodeParameter["DBNodeId"].asString();
		auto allRunningParametersNode = valueDBNodeIdsDBNodeParameter["RunningParameters"]["Parameter"];
		for (auto valueDBNodeIdsDBNodeParameterRunningParametersParameter : allRunningParametersNode)
		{
			DBNodeParameter::_Parameter runningParametersObject;
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["CheckingCode"].isNull())
				runningParametersObject.checkingCode = valueDBNodeIdsDBNodeParameterRunningParametersParameter["CheckingCode"].asString();
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["DataType"].isNull())
				runningParametersObject.dataType = valueDBNodeIdsDBNodeParameterRunningParametersParameter["DataType"].asString();
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["DefaultParameterValue"].isNull())
				runningParametersObject.defaultParameterValue = valueDBNodeIdsDBNodeParameterRunningParametersParameter["DefaultParameterValue"].asString();
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["ForceRestart"].isNull())
				runningParametersObject.forceRestart = valueDBNodeIdsDBNodeParameterRunningParametersParameter["ForceRestart"].asString() == "true";
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["IsModifiable"].isNull())
				runningParametersObject.isModifiable = valueDBNodeIdsDBNodeParameterRunningParametersParameter["IsModifiable"].asString() == "true";
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParameterDescription"].isNull())
				runningParametersObject.parameterDescription = valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParameterDescription"].asString();
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParameterName"].isNull())
				runningParametersObject.parameterName = valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParameterName"].asString();
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParameterStatus"].isNull())
				runningParametersObject.parameterStatus = valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParameterStatus"].asString();
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParameterValue"].isNull())
				runningParametersObject.parameterValue = valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParameterValue"].asString();
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["IsNodeAvailable"].isNull())
				runningParametersObject.isNodeAvailable = valueDBNodeIdsDBNodeParameterRunningParametersParameter["IsNodeAvailable"].asString();
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParamRelyRule"].isNull())
				runningParametersObject.paramRelyRule = valueDBNodeIdsDBNodeParameterRunningParametersParameter["ParamRelyRule"].asString();
			if(!valueDBNodeIdsDBNodeParameterRunningParametersParameter["Factor"].isNull())
				runningParametersObject.factor = valueDBNodeIdsDBNodeParameterRunningParametersParameter["Factor"].asString();
			dBNodeIdsObject.runningParameters.push_back(runningParametersObject);
		}
		dBNodeIds_.push_back(dBNodeIdsObject);
	}
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

std::string DescribeDBNodesParametersResult::getDBVersion()const
{
	return dBVersion_;
}

std::vector<DescribeDBNodesParametersResult::DBNodeParameter> DescribeDBNodesParametersResult::getDBNodeIds()const
{
	return dBNodeIds_;
}

std::string DescribeDBNodesParametersResult::getDBType()const
{
	return dBType_;
}

std::string DescribeDBNodesParametersResult::getEngine()const
{
	return engine_;
}

