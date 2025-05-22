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

#include <alibabacloud/rds/model/DescribeParameterTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeParameterTemplatesResult::DescribeParameterTemplatesResult() :
	ServiceResult()
{}

DescribeParameterTemplatesResult::DescribeParameterTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParameterTemplatesResult::~DescribeParameterTemplatesResult()
{}

void DescribeParameterTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allParametersNode = value["Parameters"]["TemplateRecord"];
	for (auto valueParametersTemplateRecord : allParametersNode)
	{
		TemplateRecord parametersObject;
		if(!valueParametersTemplateRecord["CheckingCode"].isNull())
			parametersObject.checkingCode = valueParametersTemplateRecord["CheckingCode"].asString();
		if(!valueParametersTemplateRecord["ForceModify"].isNull())
			parametersObject.forceModify = valueParametersTemplateRecord["ForceModify"].asString();
		if(!valueParametersTemplateRecord["ForceRestart"].isNull())
			parametersObject.forceRestart = valueParametersTemplateRecord["ForceRestart"].asString();
		if(!valueParametersTemplateRecord["ParameterDescription"].isNull())
			parametersObject.parameterDescription = valueParametersTemplateRecord["ParameterDescription"].asString();
		if(!valueParametersTemplateRecord["ParameterName"].isNull())
			parametersObject.parameterName = valueParametersTemplateRecord["ParameterName"].asString();
		if(!valueParametersTemplateRecord["ParameterValue"].isNull())
			parametersObject.parameterValue = valueParametersTemplateRecord["ParameterValue"].asString();
		parameters_.push_back(parametersObject);
	}
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();
	if(!value["ParameterCount"].isNull())
		parameterCount_ = value["ParameterCount"].asString();

}

std::string DescribeParameterTemplatesResult::getParameterCount()const
{
	return parameterCount_;
}

std::vector<DescribeParameterTemplatesResult::TemplateRecord> DescribeParameterTemplatesResult::getParameters()const
{
	return parameters_;
}

std::string DescribeParameterTemplatesResult::getEngineVersion()const
{
	return engineVersion_;
}

std::string DescribeParameterTemplatesResult::getEngine()const
{
	return engine_;
}

