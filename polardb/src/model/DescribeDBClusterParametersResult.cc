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

#include <alibabacloud/polardb/model/DescribeDBClusterParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterParametersResult::DescribeDBClusterParametersResult() :
	ServiceResult()
{}

DescribeDBClusterParametersResult::DescribeDBClusterParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterParametersResult::~DescribeDBClusterParametersResult()
{}

void DescribeDBClusterParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRunningParametersNode = value["RunningParameters"]["Parameter"];
	for (auto valueRunningParametersParameter : allRunningParametersNode)
	{
		_Parameter runningParametersObject;
		if(!valueRunningParametersParameter["CheckingCode"].isNull())
			runningParametersObject.checkingCode = valueRunningParametersParameter["CheckingCode"].asString();
		if(!valueRunningParametersParameter["DataType"].isNull())
			runningParametersObject.dataType = valueRunningParametersParameter["DataType"].asString();
		if(!valueRunningParametersParameter["ParameterName"].isNull())
			runningParametersObject.parameterName = valueRunningParametersParameter["ParameterName"].asString();
		if(!valueRunningParametersParameter["ParameterValue"].isNull())
			runningParametersObject.parameterValue = valueRunningParametersParameter["ParameterValue"].asString();
		if(!valueRunningParametersParameter["ForceRestart"].isNull())
			runningParametersObject.forceRestart = valueRunningParametersParameter["ForceRestart"].asString() == "true";
		if(!valueRunningParametersParameter["ParameterDescription"].isNull())
			runningParametersObject.parameterDescription = valueRunningParametersParameter["ParameterDescription"].asString();
		if(!valueRunningParametersParameter["ParameterStatus"].isNull())
			runningParametersObject.parameterStatus = valueRunningParametersParameter["ParameterStatus"].asString();
		if(!valueRunningParametersParameter["DefaultParameterValue"].isNull())
			runningParametersObject.defaultParameterValue = valueRunningParametersParameter["DefaultParameterValue"].asString();
		if(!valueRunningParametersParameter["IsModifiable"].isNull())
			runningParametersObject.isModifiable = valueRunningParametersParameter["IsModifiable"].asString() == "true";
		if(!valueRunningParametersParameter["IsNodeAvailable"].isNull())
			runningParametersObject.isNodeAvailable = valueRunningParametersParameter["IsNodeAvailable"].asString();
		if(!valueRunningParametersParameter["ParamRelyRule"].isNull())
			runningParametersObject.paramRelyRule = valueRunningParametersParameter["ParamRelyRule"].asString();
		if(!valueRunningParametersParameter["Factor"].isNull())
			runningParametersObject.factor = valueRunningParametersParameter["Factor"].asString();
		runningParameters_.push_back(runningParametersObject);
	}
	auto allParametersNode = value["Parameters"]["ParametersItem"];
	for (auto valueParametersParametersItem : allParametersNode)
	{
		ParametersItem parametersObject;
		if(!valueParametersParametersItem["rdsParameterName"].isNull())
			parametersObject.rdsParameterName = valueParametersParametersItem["rdsParameterName"].asString();
		if(!valueParametersParametersItem["rdsParameterValue"].isNull())
			parametersObject.rdsParameterValue = valueParametersParametersItem["rdsParameterValue"].asString();
		if(!valueParametersParametersItem["rdsParameterOptional"].isNull())
			parametersObject.rdsParameterOptional = valueParametersParametersItem["rdsParameterOptional"].asString();
		if(!valueParametersParametersItem["distParameterName"].isNull())
			parametersObject.distParameterName = valueParametersParametersItem["distParameterName"].asString();
		if(!valueParametersParametersItem["distParameterValue"].isNull())
			parametersObject.distParameterValue = valueParametersParametersItem["distParameterValue"].asString();
		if(!valueParametersParametersItem["distParameterOptional"].isNull())
			parametersObject.distParameterOptional = valueParametersParametersItem["distParameterOptional"].asString();
		if(!valueParametersParametersItem["IsEqual"].isNull())
			parametersObject.isEqual = valueParametersParametersItem["IsEqual"].asString();
		if(!valueParametersParametersItem["distParameterDescription"].isNull())
			parametersObject.distParameterDescription = valueParametersParametersItem["distParameterDescription"].asString();
		if(!valueParametersParametersItem["rdsParameterDescription"].isNull())
			parametersObject.rdsParameterDescription = valueParametersParametersItem["rdsParameterDescription"].asString();
		if(!valueParametersParametersItem["IsRdsKey"].isNull())
			parametersObject.isRdsKey = valueParametersParametersItem["IsRdsKey"].asString();
		if(!valueParametersParametersItem["IsPolarDBKey"].isNull())
			parametersObject.isPolarDBKey = valueParametersParametersItem["IsPolarDBKey"].asString();
		if(!valueParametersParametersItem["IsInstancePolarDBKey"].isNull())
			parametersObject.isInstancePolarDBKey = valueParametersParametersItem["IsInstancePolarDBKey"].asString();
		if(!valueParametersParametersItem["IsInstanceRdsKey"].isNull())
			parametersObject.isInstanceRdsKey = valueParametersParametersItem["IsInstanceRdsKey"].asString();
		parameters_.push_back(parametersObject);
	}
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["ParameterNumbers"].isNull())
		parameterNumbers_ = value["ParameterNumbers"].asString();

}

std::vector<DescribeDBClusterParametersResult::_Parameter> DescribeDBClusterParametersResult::getRunningParameters()const
{
	return runningParameters_;
}

std::string DescribeDBClusterParametersResult::getDBVersion()const
{
	return dBVersion_;
}

std::vector<DescribeDBClusterParametersResult::ParametersItem> DescribeDBClusterParametersResult::getParameters()const
{
	return parameters_;
}

std::string DescribeDBClusterParametersResult::getParameterNumbers()const
{
	return parameterNumbers_;
}

std::string DescribeDBClusterParametersResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterParametersResult::getDBType()const
{
	return dBType_;
}

std::string DescribeDBClusterParametersResult::getEngine()const
{
	return engine_;
}

