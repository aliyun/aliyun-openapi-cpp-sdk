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

#include <alibabacloud/cloudapi/model/DescribeImportOASTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeImportOASTaskResult::DescribeImportOASTaskResult() :
	ServiceResult()
{}

DescribeImportOASTaskResult::DescribeImportOASTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImportOASTaskResult::~DescribeImportOASTaskResult()
{}

void DescribeImportOASTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApiResultsNode = value["ApiResults"]["ApiResult"];
	for (auto valueApiResultsApiResult : allApiResultsNode)
	{
		ApiResult apiResultsObject;
		if(!valueApiResultsApiResult["ApiId"].isNull())
			apiResultsObject.apiId = valueApiResultsApiResult["ApiId"].asString();
		if(!valueApiResultsApiResult["Path"].isNull())
			apiResultsObject.path = valueApiResultsApiResult["Path"].asString();
		if(!valueApiResultsApiResult["Method"].isNull())
			apiResultsObject.method = valueApiResultsApiResult["Method"].asString();
		if(!valueApiResultsApiResult["Description"].isNull())
			apiResultsObject.description = valueApiResultsApiResult["Description"].asString();
		if(!valueApiResultsApiResult["GroupId"].isNull())
			apiResultsObject.groupId = valueApiResultsApiResult["GroupId"].asString();
		if(!valueApiResultsApiResult["ApiName"].isNull())
			apiResultsObject.apiName = valueApiResultsApiResult["ApiName"].asString();
		if(!valueApiResultsApiResult["ErrorMessage"].isNull())
			apiResultsObject.errorMessage = valueApiResultsApiResult["ErrorMessage"].asString();
		if(!valueApiResultsApiResult["UpdateStatus"].isNull())
			apiResultsObject.updateStatus = valueApiResultsApiResult["UpdateStatus"].asString();
		apiResults_.push_back(apiResultsObject);
	}
	auto allModelResultsNode = value["ModelResults"]["ModelResult"];
	for (auto valueModelResultsModelResult : allModelResultsNode)
	{
		ModelResult modelResultsObject;
		if(!valueModelResultsModelResult["ModelName"].isNull())
			modelResultsObject.modelName = valueModelResultsModelResult["ModelName"].asString();
		if(!valueModelResultsModelResult["ModelId"].isNull())
			modelResultsObject.modelId = valueModelResultsModelResult["ModelId"].asString();
		if(!valueModelResultsModelResult["GroupId"].isNull())
			modelResultsObject.groupId = valueModelResultsModelResult["GroupId"].asString();
		if(!valueModelResultsModelResult["ErrorMessage"].isNull())
			modelResultsObject.errorMessage = valueModelResultsModelResult["ErrorMessage"].asString();
		if(!valueModelResultsModelResult["UpdateStatus"].isNull())
			modelResultsObject.updateStatus = valueModelResultsModelResult["UpdateStatus"].asString();
		modelResults_.push_back(modelResultsObject);
	}
	if(!value["TaskStatus"].isNull())
		taskStatus_ = value["TaskStatus"].asString();

}

std::vector<DescribeImportOASTaskResult::ModelResult> DescribeImportOASTaskResult::getModelResults()const
{
	return modelResults_;
}

std::vector<DescribeImportOASTaskResult::ApiResult> DescribeImportOASTaskResult::getApiResults()const
{
	return apiResults_;
}

std::string DescribeImportOASTaskResult::getTaskStatus()const
{
	return taskStatus_;
}

