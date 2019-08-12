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

#include <alibabacloud/r-kvstore/model/DescribeParameterTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allParameters = value["Parameters"]["TemplateRecord"];
	for (auto value : allParameters)
	{
		TemplateRecord parametersObject;
		if(!value["ParameterName"].isNull())
			parametersObject.parameterName = value["ParameterName"].asString();
		if(!value["ParameterValue"].isNull())
			parametersObject.parameterValue = value["ParameterValue"].asString();
		if(!value["ForceModify"].isNull())
			parametersObject.forceModify = value["ForceModify"].asString() == "true";
		if(!value["ForceRestart"].isNull())
			parametersObject.forceRestart = value["ForceRestart"].asString() == "true";
		if(!value["CheckingCode"].isNull())
			parametersObject.checkingCode = value["CheckingCode"].asString();
		if(!value["ParameterDescription"].isNull())
			parametersObject.parameterDescription = value["ParameterDescription"].asString();
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

