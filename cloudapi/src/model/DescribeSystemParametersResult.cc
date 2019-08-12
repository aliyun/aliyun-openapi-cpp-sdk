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

#include <alibabacloud/cloudapi/model/DescribeSystemParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeSystemParametersResult::DescribeSystemParametersResult() :
	ServiceResult()
{}

DescribeSystemParametersResult::DescribeSystemParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSystemParametersResult::~DescribeSystemParametersResult()
{}

void DescribeSystemParametersResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSystemParams = value["SystemParams"]["SystemParamItem"];
	for (auto value : allSystemParams)
	{
		SystemParamItem systemParamsObject;
		if(!value["ParamName"].isNull())
			systemParamsObject.paramName = value["ParamName"].asString();
		if(!value["ParamType"].isNull())
			systemParamsObject.paramType = value["ParamType"].asString();
		if(!value["DemoValue"].isNull())
			systemParamsObject.demoValue = value["DemoValue"].asString();
		if(!value["Description"].isNull())
			systemParamsObject.description = value["Description"].asString();
		systemParams_.push_back(systemParamsObject);
	}

}

std::vector<DescribeSystemParametersResult::SystemParamItem> DescribeSystemParametersResult::getSystemParams()const
{
	return systemParams_;
}

