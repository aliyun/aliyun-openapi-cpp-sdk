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

#include <alibabacloud/oceanbasepro/model/DescribeParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

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
	auto allParametersNode = value["Parameters"]["Data"];
	for (auto valueParametersData : allParametersNode)
	{
		Data parametersObject;
		if(!valueParametersData["Description"].isNull())
			parametersObject.description = valueParametersData["Description"].asString();
		if(!valueParametersData["ValueType"].isNull())
			parametersObject.valueType = valueParametersData["ValueType"].asString();
		if(!valueParametersData["CurrentValue"].isNull())
			parametersObject.currentValue = valueParametersData["CurrentValue"].asString();
		if(!valueParametersData["NeedReboot"].isNull())
			parametersObject.needReboot = valueParametersData["NeedReboot"].asString() == "true";
		if(!valueParametersData["Name"].isNull())
			parametersObject.name = valueParametersData["Name"].asString();
		if(!valueParametersData["DefaultValue"].isNull())
			parametersObject.defaultValue = valueParametersData["DefaultValue"].asString();
		if(!valueParametersData["Readonly"].isNull())
			parametersObject.readonly = valueParametersData["Readonly"].asString() == "true";
		if(!valueParametersData["Unit"].isNull())
			parametersObject.unit = valueParametersData["Unit"].asString();
		auto allRejectedValue = value["RejectedValue"]["RejectedValueElement"];
		for (auto value : allRejectedValue)
			parametersObject.rejectedValue.push_back(value.asString());
		auto allAcceptableValue = value["AcceptableValue"]["AcceptableValueElement"];
		for (auto value : allAcceptableValue)
			parametersObject.acceptableValue.push_back(value.asString());
		parameters_.push_back(parametersObject);
	}

}

std::vector<DescribeParametersResult::Data> DescribeParametersResult::getParameters()const
{
	return parameters_;
}

