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

#include <alibabacloud/r-kvstore/model/DescribeParameterGroupTemplateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeParameterGroupTemplateListResult::DescribeParameterGroupTemplateListResult() :
	ServiceResult()
{}

DescribeParameterGroupTemplateListResult::DescribeParameterGroupTemplateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParameterGroupTemplateListResult::~DescribeParameterGroupTemplateListResult()
{}

void DescribeParameterGroupTemplateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParametersNode = value["Parameters"]["ParametersItem"];
	for (auto valueParametersParametersItem : allParametersNode)
	{
		ParametersItem parametersObject;
		if(!valueParametersParametersItem["SupportModifyForMinorVersion"].isNull())
			parametersObject.supportModifyForMinorVersion = valueParametersParametersItem["SupportModifyForMinorVersion"].asString() == "true";
		if(!valueParametersParametersItem["CheckingCode"].isNull())
			parametersObject.checkingCode = valueParametersParametersItem["CheckingCode"].asString();
		if(!valueParametersParametersItem["ParameterValue"].isNull())
			parametersObject.parameterValue = valueParametersParametersItem["ParameterValue"].asString();
		if(!valueParametersParametersItem["Revisable"].isNull())
			parametersObject.revisable = std::stol(valueParametersParametersItem["Revisable"].asString());
		if(!valueParametersParametersItem["Factor"].isNull())
			parametersObject.factor = std::stol(valueParametersParametersItem["Factor"].asString());
		if(!valueParametersParametersItem["ParameterName"].isNull())
			parametersObject.parameterName = valueParametersParametersItem["ParameterName"].asString();
		if(!valueParametersParametersItem["Unit"].isNull())
			parametersObject.unit = valueParametersParametersItem["Unit"].asString();
		if(!valueParametersParametersItem["ParameterDescription"].isNull())
			parametersObject.parameterDescription = valueParametersParametersItem["ParameterDescription"].asString();
		if(!valueParametersParametersItem["Effective"].isNull())
			parametersObject.effective = std::stol(valueParametersParametersItem["Effective"].asString());
		parameters_.push_back(parametersObject);
	}
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();

}

std::vector<DescribeParameterGroupTemplateListResult::ParametersItem> DescribeParameterGroupTemplateListResult::getParameters()const
{
	return parameters_;
}

std::string DescribeParameterGroupTemplateListResult::getEngineVersion()const
{
	return engineVersion_;
}

