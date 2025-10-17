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

#include <alibabacloud/polardb/model/DescribeApplicationParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeApplicationParametersResult::DescribeApplicationParametersResult() :
	ServiceResult()
{}

DescribeApplicationParametersResult::DescribeApplicationParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationParametersResult::~DescribeApplicationParametersResult()
{}

void DescribeApplicationParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto parametersNode = value["Parameters"];
	auto allComponentParametersNode = parametersNode["ComponentParameters"]["ComponentParameter"];
	for (auto parametersNodeComponentParametersComponentParameter : allComponentParametersNode)
	{
		Parameters::ComponentParameter componentParameterObject;
		if(!parametersNodeComponentParametersComponentParameter["ComponentType"].isNull())
			componentParameterObject.componentType = parametersNodeComponentParametersComponentParameter["ComponentType"].asString();
		if(!parametersNodeComponentParametersComponentParameter["ComponentId"].isNull())
			componentParameterObject.componentId = parametersNodeComponentParametersComponentParameter["ComponentId"].asString();
		auto allParameters1Node = parametersNodeComponentParametersComponentParameter["Parameters"]["Parameter"];
		for (auto parametersNodeComponentParametersComponentParameterParametersParameter : allParameters1Node)
		{
			Parameters::ComponentParameter::_Parameter parameters1Object;
			if(!parametersNodeComponentParametersComponentParameterParametersParameter["Status"].isNull())
				parameters1Object.status = parametersNodeComponentParametersComponentParameterParametersParameter["Status"].asString();
			if(!parametersNodeComponentParametersComponentParameterParametersParameter["ReadOnly"].isNull())
				parameters1Object.readOnly = parametersNodeComponentParametersComponentParameterParametersParameter["ReadOnly"].asString() == "true";
			if(!parametersNodeComponentParametersComponentParameterParametersParameter["Pattern"].isNull())
				parameters1Object.pattern = parametersNodeComponentParametersComponentParameterParametersParameter["Pattern"].asString();
			if(!parametersNodeComponentParametersComponentParameterParametersParameter["Type"].isNull())
				parameters1Object.type = parametersNodeComponentParametersComponentParameterParametersParameter["Type"].asString();
			if(!parametersNodeComponentParametersComponentParameterParametersParameter["Description"].isNull())
				parameters1Object.description = parametersNodeComponentParametersComponentParameterParametersParameter["Description"].asString();
			if(!parametersNodeComponentParametersComponentParameterParametersParameter["Value"].isNull())
				parameters1Object.value = parametersNodeComponentParametersComponentParameterParametersParameter["Value"].asString();
			if(!parametersNodeComponentParametersComponentParameterParametersParameter["NeedRestart"].isNull())
				parameters1Object.needRestart = parametersNodeComponentParametersComponentParameterParametersParameter["NeedRestart"].asString() == "true";
			if(!parametersNodeComponentParametersComponentParameterParametersParameter["Default"].isNull())
				parameters1Object._default = parametersNodeComponentParametersComponentParameterParametersParameter["Default"].asString();
			if(!parametersNodeComponentParametersComponentParameterParametersParameter["Name"].isNull())
				parameters1Object.name = parametersNodeComponentParametersComponentParameterParametersParameter["Name"].asString();
			componentParameterObject.parameters1.push_back(parameters1Object);
		}
		parameters_.componentParameters.push_back(componentParameterObject);
	}
	auto parameterTemplatesNode = value["ParameterTemplates"];
	auto allComponentParameterTemplatesNode = parameterTemplatesNode["ComponentParameterTemplates"]["ComponentParameterTemplate"];
	for (auto parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate : allComponentParameterTemplatesNode)
	{
		ParameterTemplates::ComponentParameterTemplate componentParameterTemplateObject;
		if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate["ComponentType"].isNull())
			componentParameterTemplateObject.componentType = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate["ComponentType"].asString();
		if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate["ParameterTemplateId"].isNull())
			componentParameterTemplateObject.parameterTemplateId = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate["ParameterTemplateId"].asString();
		if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate["ComponentId"].isNull())
			componentParameterTemplateObject.componentId = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate["ComponentId"].asString();
		if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate["ParentParameterTemplateId"].isNull())
			componentParameterTemplateObject.parentParameterTemplateId = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate["ParentParameterTemplateId"].asString();
		auto allParameters2Node = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplate["Parameters"]["Parameter"];
		for (auto parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter : allParameters2Node)
		{
			ParameterTemplates::ComponentParameterTemplate::_Parameter3 parameters2Object;
			if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Pattern"].isNull())
				parameters2Object.pattern = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Pattern"].asString();
			if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Type"].isNull())
				parameters2Object.type = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Type"].asString();
			if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Description"].isNull())
				parameters2Object.description = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Description"].asString();
			if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["ReadOnly"].isNull())
				parameters2Object.readOnly = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["ReadOnly"].asString() == "true";
			if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Default"].isNull())
				parameters2Object._default = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Default"].asString();
			if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Name"].isNull())
				parameters2Object.name = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["Name"].asString();
			if(!parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["NeedRestart"].isNull())
				parameters2Object.needRestart = parameterTemplatesNodeComponentParameterTemplatesComponentParameterTemplateParametersParameter["NeedRestart"].asString() == "true";
			componentParameterTemplateObject.parameters2.push_back(parameters2Object);
		}
		parameterTemplates_.componentParameterTemplates.push_back(componentParameterTemplateObject);
	}

}

DescribeApplicationParametersResult::Parameters DescribeApplicationParametersResult::getParameters()const
{
	return parameters_;
}

DescribeApplicationParametersResult::ParameterTemplates DescribeApplicationParametersResult::getParameterTemplates()const
{
	return parameterTemplates_;
}

