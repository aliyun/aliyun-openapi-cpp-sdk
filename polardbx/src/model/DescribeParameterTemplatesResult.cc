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

#include <alibabacloud/polardbx/model/DescribeParameterTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

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
	auto dataNode = value["Data"];
	if(!dataNode["Engine"].isNull())
		data_.engine = dataNode["Engine"].asString();
	if(!dataNode["EngineVersion"].isNull())
		data_.engineVersion = dataNode["EngineVersion"].asString();
	if(!dataNode["ParameterCount"].isNull())
		data_.parameterCount = std::stoi(dataNode["ParameterCount"].asString());
	auto allParametersNode = dataNode["Parameters"]["TemplateRecord"];
	for (auto dataNodeParametersTemplateRecord : allParametersNode)
	{
		Data::TemplateRecord templateRecordObject;
		if(!dataNodeParametersTemplateRecord["CheckingCode"].isNull())
			templateRecordObject.checkingCode = dataNodeParametersTemplateRecord["CheckingCode"].asString();
		if(!dataNodeParametersTemplateRecord["ParameterName"].isNull())
			templateRecordObject.parameterName = dataNodeParametersTemplateRecord["ParameterName"].asString();
		if(!dataNodeParametersTemplateRecord["Dynamic"].isNull())
			templateRecordObject.dynamic = std::stoi(dataNodeParametersTemplateRecord["Dynamic"].asString());
		if(!dataNodeParametersTemplateRecord["ParameterValue"].isNull())
			templateRecordObject.parameterValue = dataNodeParametersTemplateRecord["ParameterValue"].asString();
		if(!dataNodeParametersTemplateRecord["ParameterDescription"].isNull())
			templateRecordObject.parameterDescription = dataNodeParametersTemplateRecord["ParameterDescription"].asString();
		if(!dataNodeParametersTemplateRecord["Revisable"].isNull())
			templateRecordObject.revisable = std::stoi(dataNodeParametersTemplateRecord["Revisable"].asString());
		data_.parameters.push_back(templateRecordObject);
	}

}

DescribeParameterTemplatesResult::Data DescribeParameterTemplatesResult::getData()const
{
	return data_;
}

