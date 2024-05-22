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

#include <alibabacloud/polardbx/model/DescribeParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeParametersResult::DescribeParametersResult() :
	ServiceResult()
{}

DescribeParametersResult::DescribeParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParametersResult::~DescribeParametersResult()
{}

void DescribeParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EngineVersion"].isNull())
		data_.engineVersion = dataNode["EngineVersion"].asString();
	if(!dataNode["Engine"].isNull())
		data_.engine = dataNode["Engine"].asString();
	auto allConfigParametersNode = dataNode["ConfigParameters"]["DBInstanceParameter"];
	for (auto dataNodeConfigParametersDBInstanceParameter : allConfigParametersNode)
	{
		Data::DBInstanceParameter dBInstanceParameterObject;
		if(!dataNodeConfigParametersDBInstanceParameter["ParameterDescription"].isNull())
			dBInstanceParameterObject.parameterDescription = dataNodeConfigParametersDBInstanceParameter["ParameterDescription"].asString();
		if(!dataNodeConfigParametersDBInstanceParameter["ParameterName"].isNull())
			dBInstanceParameterObject.parameterName = dataNodeConfigParametersDBInstanceParameter["ParameterName"].asString();
		if(!dataNodeConfigParametersDBInstanceParameter["ParameterValue"].isNull())
			dBInstanceParameterObject.parameterValue = dataNodeConfigParametersDBInstanceParameter["ParameterValue"].asString();
		data_.configParameters.push_back(dBInstanceParameterObject);
	}
	auto allRunningParametersNode = dataNode["RunningParameters"]["DBInstanceParameter"];
	for (auto dataNodeRunningParametersDBInstanceParameter : allRunningParametersNode)
	{
		Data::DBInstanceParameter dBInstanceParameterObject;
		if(!dataNodeRunningParametersDBInstanceParameter["ParameterDescription"].isNull())
			dBInstanceParameterObject.parameterDescription = dataNodeRunningParametersDBInstanceParameter["ParameterDescription"].asString();
		if(!dataNodeRunningParametersDBInstanceParameter["ParameterName"].isNull())
			dBInstanceParameterObject.parameterName = dataNodeRunningParametersDBInstanceParameter["ParameterName"].asString();
		if(!dataNodeRunningParametersDBInstanceParameter["ParameterValue"].isNull())
			dBInstanceParameterObject.parameterValue = dataNodeRunningParametersDBInstanceParameter["ParameterValue"].asString();
		data_.runningParameters.push_back(dBInstanceParameterObject);
	}

}

DescribeParametersResult::Data DescribeParametersResult::getData()const
{
	return data_;
}

