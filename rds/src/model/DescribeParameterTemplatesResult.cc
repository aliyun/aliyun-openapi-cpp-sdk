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
	auto allParameters = value["Parameters"]["TemplateRecord"];
	for (auto value : allParameters)
	{
		TemplateRecord templateRecordObject;
		templateRecordObject.parameterName = value["ParameterName"].asString();
		templateRecordObject.parameterValue = value["ParameterValue"].asString();
		templateRecordObject.forceModify = value["ForceModify"].asString();
		templateRecordObject.forceRestart = value["ForceRestart"].asString();
		templateRecordObject.checkingCode = value["CheckingCode"].asString();
		templateRecordObject.parameterDescription = value["ParameterDescription"].asString();
		parameters_.push_back(templateRecordObject);
	}
	engine_ = value["Engine"].asString();
	engineVersion_ = value["EngineVersion"].asString();
	parameterCount_ = value["ParameterCount"].asString();

}

std::string DescribeParameterTemplatesResult::getParameterCount()const
{
	return parameterCount_;
}

void DescribeParameterTemplatesResult::setParameterCount(const std::string& parameterCount)
{
	parameterCount_ = parameterCount;
}

std::string DescribeParameterTemplatesResult::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeParameterTemplatesResult::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
}

std::string DescribeParameterTemplatesResult::getEngine()const
{
	return engine_;
}

void DescribeParameterTemplatesResult::setEngine(const std::string& engine)
{
	engine_ = engine;
}

