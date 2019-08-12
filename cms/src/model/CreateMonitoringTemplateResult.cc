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

#include <alibabacloud/cms/model/CreateMonitoringTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

CreateMonitoringTemplateResult::CreateMonitoringTemplateResult() :
	ServiceResult()
{}

CreateMonitoringTemplateResult::CreateMonitoringTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMonitoringTemplateResult::~CreateMonitoringTemplateResult()
{}

void CreateMonitoringTemplateResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());

}

int CreateMonitoringTemplateResult::getErrorCode()const
{
	return errorCode_;
}

long CreateMonitoringTemplateResult::getId()const
{
	return id_;
}

std::string CreateMonitoringTemplateResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateMonitoringTemplateResult::getSuccess()const
{
	return success_;
}

