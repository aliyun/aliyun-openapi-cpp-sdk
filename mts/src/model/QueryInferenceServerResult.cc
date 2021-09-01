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

#include <alibabacloud/mts/model/QueryInferenceServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

QueryInferenceServerResult::QueryInferenceServerResult() :
	ServiceResult()
{}

QueryInferenceServerResult::QueryInferenceServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryInferenceServerResult::~QueryInferenceServerResult()
{}

void QueryInferenceServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFunctionsNode = value["Functions"]["FunctionsItem"];
	for (auto valueFunctionsFunctionsItem : allFunctionsNode)
	{
		FunctionsItem functionsObject;
		if(!valueFunctionsFunctionsItem["FunctionName"].isNull())
			functionsObject.functionName = valueFunctionsFunctionsItem["FunctionName"].asString();
		if(!valueFunctionsFunctionsItem["CreateTime"].isNull())
			functionsObject.createTime = std::stol(valueFunctionsFunctionsItem["CreateTime"].asString());
		if(!valueFunctionsFunctionsItem["UserId"].isNull())
			functionsObject.userId = std::stol(valueFunctionsFunctionsItem["UserId"].asString());
		if(!valueFunctionsFunctionsItem["ModelType"].isNull())
			functionsObject.modelType = valueFunctionsFunctionsItem["ModelType"].asString();
		if(!valueFunctionsFunctionsItem["ModelPath"].isNull())
			functionsObject.modelPath = valueFunctionsFunctionsItem["ModelPath"].asString();
		if(!valueFunctionsFunctionsItem["PipelineId"].isNull())
			functionsObject.pipelineId = valueFunctionsFunctionsItem["PipelineId"].asString();
		if(!valueFunctionsFunctionsItem["TestId"].isNull())
			functionsObject.testId = valueFunctionsFunctionsItem["TestId"].asString();
		functions_.push_back(functionsObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stol(value["TotalSize"].asString());

}

std::string QueryInferenceServerResult::getMessage()const
{
	return message_;
}

std::vector<QueryInferenceServerResult::FunctionsItem> QueryInferenceServerResult::getFunctions()const
{
	return functions_;
}

long QueryInferenceServerResult::getTotalSize()const
{
	return totalSize_;
}

std::string QueryInferenceServerResult::getCode()const
{
	return code_;
}

