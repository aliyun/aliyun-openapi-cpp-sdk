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

#include <alibabacloud/cloudapi/model/ImportSwaggerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

ImportSwaggerResult::ImportSwaggerResult() :
	ServiceResult()
{}

ImportSwaggerResult::ImportSwaggerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ImportSwaggerResult::~ImportSwaggerResult()
{}

void ImportSwaggerResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSuccess = value["Success"]["ApiImportSwaggerSuccess"];
	for (auto value : allSuccess)
	{
		ApiImportSwaggerSuccess successObject;
		if(!value["Path"].isNull())
			successObject.path = value["Path"].asString();
		if(!value["HttpMethod"].isNull())
			successObject.httpMethod = value["HttpMethod"].asString();
		if(!value["ApiUid"].isNull())
			successObject.apiUid = value["ApiUid"].asString();
		if(!value["ApiOperation"].isNull())
			successObject.apiOperation = value["ApiOperation"].asString();
		success_.push_back(successObject);
	}
	auto allFailed = value["Failed"]["ApiImportSwaggerFailed"];
	for (auto value : allFailed)
	{
		ApiImportSwaggerFailed failedObject;
		if(!value["Path"].isNull())
			failedObject.path = value["Path"].asString();
		if(!value["HttpMethod"].isNull())
			failedObject.httpMethod = value["HttpMethod"].asString();
		if(!value["ErrorMsg"].isNull())
			failedObject.errorMsg = value["ErrorMsg"].asString();
		failed_.push_back(failedObject);
	}

}

std::vector<ImportSwaggerResult::ApiImportSwaggerFailed> ImportSwaggerResult::getFailed()const
{
	return failed_;
}

std::vector<ImportSwaggerResult::ApiImportSwaggerSuccess> ImportSwaggerResult::getSuccess()const
{
	return success_;
}

