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

#include <alibabacloud/cloudapi/model/DryRunSwaggerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DryRunSwaggerResult::DryRunSwaggerResult() :
	ServiceResult()
{}

DryRunSwaggerResult::DryRunSwaggerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DryRunSwaggerResult::~DryRunSwaggerResult()
{}

void DryRunSwaggerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuccessNode = value["Success"]["ApiDryRunSwaggerSuccess"];
	for (auto valueSuccessApiDryRunSwaggerSuccess : allSuccessNode)
	{
		ApiDryRunSwaggerSuccess successObject;
		if(!valueSuccessApiDryRunSwaggerSuccess["Path"].isNull())
			successObject.path = valueSuccessApiDryRunSwaggerSuccess["Path"].asString();
		if(!valueSuccessApiDryRunSwaggerSuccess["HttpMethod"].isNull())
			successObject.httpMethod = valueSuccessApiDryRunSwaggerSuccess["HttpMethod"].asString();
		if(!valueSuccessApiDryRunSwaggerSuccess["ApiSwagger"].isNull())
			successObject.apiSwagger = valueSuccessApiDryRunSwaggerSuccess["ApiSwagger"].asString();
		if(!valueSuccessApiDryRunSwaggerSuccess["ApiOperation"].isNull())
			successObject.apiOperation = valueSuccessApiDryRunSwaggerSuccess["ApiOperation"].asString();
		if(!valueSuccessApiDryRunSwaggerSuccess["ApiUid"].isNull())
			successObject.apiUid = valueSuccessApiDryRunSwaggerSuccess["ApiUid"].asString();
		success_.push_back(successObject);
	}
	auto allFailedNode = value["Failed"]["ApiImportSwaggerFailed"];
	for (auto valueFailedApiImportSwaggerFailed : allFailedNode)
	{
		ApiImportSwaggerFailed failedObject;
		if(!valueFailedApiImportSwaggerFailed["Path"].isNull())
			failedObject.path = valueFailedApiImportSwaggerFailed["Path"].asString();
		if(!valueFailedApiImportSwaggerFailed["HttpMethod"].isNull())
			failedObject.httpMethod = valueFailedApiImportSwaggerFailed["HttpMethod"].asString();
		if(!valueFailedApiImportSwaggerFailed["ErrorMsg"].isNull())
			failedObject.errorMsg = valueFailedApiImportSwaggerFailed["ErrorMsg"].asString();
		failed_.push_back(failedObject);
	}
	auto allModelFailedNode = value["ModelFailed"]["ApiImportModelFailed"];
	for (auto valueModelFailedApiImportModelFailed : allModelFailedNode)
	{
		ApiImportModelFailed modelFailedObject;
		if(!valueModelFailedApiImportModelFailed["ErrorMsg"].isNull())
			modelFailedObject.errorMsg = valueModelFailedApiImportModelFailed["ErrorMsg"].asString();
		if(!valueModelFailedApiImportModelFailed["ModelName"].isNull())
			modelFailedObject.modelName = valueModelFailedApiImportModelFailed["ModelName"].asString();
		if(!valueModelFailedApiImportModelFailed["GroupId"].isNull())
			modelFailedObject.groupId = valueModelFailedApiImportModelFailed["GroupId"].asString();
		modelFailed_.push_back(modelFailedObject);
	}
	auto allModelSuccessNode = value["ModelSuccess"]["ApiImportModelSuccess"];
	for (auto valueModelSuccessApiImportModelSuccess : allModelSuccessNode)
	{
		ApiImportModelSuccess modelSuccessObject;
		if(!valueModelSuccessApiImportModelSuccess["ModelUid"].isNull())
			modelSuccessObject.modelUid = valueModelSuccessApiImportModelSuccess["ModelUid"].asString();
		if(!valueModelSuccessApiImportModelSuccess["ModelName"].isNull())
			modelSuccessObject.modelName = valueModelSuccessApiImportModelSuccess["ModelName"].asString();
		if(!valueModelSuccessApiImportModelSuccess["GroupId"].isNull())
			modelSuccessObject.groupId = valueModelSuccessApiImportModelSuccess["GroupId"].asString();
		if(!valueModelSuccessApiImportModelSuccess["ModelOperation"].isNull())
			modelSuccessObject.modelOperation = valueModelSuccessApiImportModelSuccess["ModelOperation"].asString();
		modelSuccess_.push_back(modelSuccessObject);
	}
	if(!value["GlobalCondition"].isNull())
		globalCondition_ = value["GlobalCondition"].asString();

}

std::string DryRunSwaggerResult::getGlobalCondition()const
{
	return globalCondition_;
}

std::vector<DryRunSwaggerResult::ApiImportSwaggerFailed> DryRunSwaggerResult::getFailed()const
{
	return failed_;
}

std::vector<DryRunSwaggerResult::ApiImportModelFailed> DryRunSwaggerResult::getModelFailed()const
{
	return modelFailed_;
}

std::vector<DryRunSwaggerResult::ApiDryRunSwaggerSuccess> DryRunSwaggerResult::getSuccess()const
{
	return success_;
}

std::vector<DryRunSwaggerResult::ApiImportModelSuccess> DryRunSwaggerResult::getModelSuccess()const
{
	return modelSuccess_;
}

