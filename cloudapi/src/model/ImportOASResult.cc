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

#include <alibabacloud/cloudapi/model/ImportOASResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

ImportOASResult::ImportOASResult() :
	ServiceResult()
{}

ImportOASResult::ImportOASResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ImportOASResult::~ImportOASResult()
{}

void ImportOASResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuccessApisNode = value["SuccessApis"]["SuccessApi"];
	for (auto valueSuccessApisSuccessApi : allSuccessApisNode)
	{
		SuccessApi successApisObject;
		if(!valueSuccessApisSuccessApi["Path"].isNull())
			successApisObject.path = valueSuccessApisSuccessApi["Path"].asString();
		if(!valueSuccessApisSuccessApi["HttpMethod"].isNull())
			successApisObject.httpMethod = valueSuccessApisSuccessApi["HttpMethod"].asString();
		if(!valueSuccessApisSuccessApi["ApiId"].isNull())
			successApisObject.apiId = valueSuccessApisSuccessApi["ApiId"].asString();
		if(!valueSuccessApisSuccessApi["ApiOperation"].isNull())
			successApisObject.apiOperation = valueSuccessApisSuccessApi["ApiOperation"].asString();
		successApis_.push_back(successApisObject);
	}
	auto allFailedApisNode = value["FailedApis"]["FailedApi"];
	for (auto valueFailedApisFailedApi : allFailedApisNode)
	{
		FailedApi failedApisObject;
		if(!valueFailedApisFailedApi["Path"].isNull())
			failedApisObject.path = valueFailedApisFailedApi["Path"].asString();
		if(!valueFailedApisFailedApi["HttpMethod"].isNull())
			failedApisObject.httpMethod = valueFailedApisFailedApi["HttpMethod"].asString();
		if(!valueFailedApisFailedApi["ErrorMsg"].isNull())
			failedApisObject.errorMsg = valueFailedApisFailedApi["ErrorMsg"].asString();
		failedApis_.push_back(failedApisObject);
	}
	auto allFailedModelsNode = value["FailedModels"]["FailedModel"];
	for (auto valueFailedModelsFailedModel : allFailedModelsNode)
	{
		FailedModel failedModelsObject;
		if(!valueFailedModelsFailedModel["ErrorMsg"].isNull())
			failedModelsObject.errorMsg = valueFailedModelsFailedModel["ErrorMsg"].asString();
		if(!valueFailedModelsFailedModel["ModelName"].isNull())
			failedModelsObject.modelName = valueFailedModelsFailedModel["ModelName"].asString();
		if(!valueFailedModelsFailedModel["GroupId"].isNull())
			failedModelsObject.groupId = valueFailedModelsFailedModel["GroupId"].asString();
		failedModels_.push_back(failedModelsObject);
	}
	auto allSuccessModelsNode = value["SuccessModels"]["SuccessModel"];
	for (auto valueSuccessModelsSuccessModel : allSuccessModelsNode)
	{
		SuccessModel successModelsObject;
		if(!valueSuccessModelsSuccessModel["ModelUid"].isNull())
			successModelsObject.modelUid = valueSuccessModelsSuccessModel["ModelUid"].asString();
		if(!valueSuccessModelsSuccessModel["ModelName"].isNull())
			successModelsObject.modelName = valueSuccessModelsSuccessModel["ModelName"].asString();
		if(!valueSuccessModelsSuccessModel["GroupId"].isNull())
			successModelsObject.groupId = valueSuccessModelsSuccessModel["GroupId"].asString();
		if(!valueSuccessModelsSuccessModel["ModelOperation"].isNull())
			successModelsObject.modelOperation = valueSuccessModelsSuccessModel["ModelOperation"].asString();
		successModels_.push_back(successModelsObject);
	}
	auto allErrorMessages = value["ErrorMessages"]["ErrorMessage"];
	for (const auto &item : allErrorMessages)
		errorMessages_.push_back(item.asString());
	auto allWarningMessages = value["WarningMessages"]["WarningMessage"];
	for (const auto &item : allWarningMessages)
		warningMessages_.push_back(item.asString());
	if(!value["OperationId"].isNull())
		operationId_ = value["OperationId"].asString();

}

std::vector<std::string> ImportOASResult::getErrorMessages()const
{
	return errorMessages_;
}

std::vector<ImportOASResult::SuccessApi> ImportOASResult::getSuccessApis()const
{
	return successApis_;
}

std::vector<std::string> ImportOASResult::getWarningMessages()const
{
	return warningMessages_;
}

std::string ImportOASResult::getOperationId()const
{
	return operationId_;
}

std::vector<ImportOASResult::FailedModel> ImportOASResult::getFailedModels()const
{
	return failedModels_;
}

std::vector<ImportOASResult::SuccessModel> ImportOASResult::getSuccessModels()const
{
	return successModels_;
}

std::vector<ImportOASResult::FailedApi> ImportOASResult::getFailedApis()const
{
	return failedApis_;
}

