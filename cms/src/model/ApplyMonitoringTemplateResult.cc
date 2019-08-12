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

#include <alibabacloud/cms/model/ApplyMonitoringTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ApplyMonitoringTemplateResult::ApplyMonitoringTemplateResult() :
	ServiceResult()
{}

ApplyMonitoringTemplateResult::ApplyMonitoringTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ApplyMonitoringTemplateResult::~ApplyMonitoringTemplateResult()
{}

void ApplyMonitoringTemplateResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto resourceNode = value["Resource"];
	if(!resourceNode["GroupId"].isNull())
		resource_.groupId = std::stol(resourceNode["GroupId"].asString());
	auto allEventResults = value["EventResults"]["Result"];
	for (auto value : allEventResults)
	{
		Resource::Result resultObject;
		if(!value["GroupId"].isNull())
			resultObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["Name"].isNull())
			resultObject.name = value["Name"].asString();
		if(!value["Message"].isNull())
			resultObject.message = value["Message"].asString();
		if(!value["DisplayName"].isNull())
			resultObject.displayName = value["DisplayName"].asString();
		if(!value["Code"].isNull())
			resultObject.code = std::stoi(value["Code"].asString());
		if(!value["Success"].isNull())
			resultObject.success = value["Success"].asString() == "true";
		resource_.eventResults.push_back(resultObject);
	}
	auto allAlertResults = value["AlertResults"]["Result"];
	for (auto value : allAlertResults)
	{
		Resource::Result resultObject;
		if(!value["GroupId"].isNull())
			resultObject.groupId = std::stol(value["GroupId"].asString());
		if(!value["Name"].isNull())
			resultObject.name = value["Name"].asString();
		if(!value["Message"].isNull())
			resultObject.message = value["Message"].asString();
		if(!value["DisplayName"].isNull())
			resultObject.displayName = value["DisplayName"].asString();
		if(!value["Code"].isNull())
			resultObject.code = std::stoi(value["Code"].asString());
		if(!value["Success"].isNull())
			resultObject.success = value["Success"].asString() == "true";
		resource_.alertResults.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ApplyMonitoringTemplateResult::Resource ApplyMonitoringTemplateResult::getResource()const
{
	return resource_;
}

int ApplyMonitoringTemplateResult::getErrorCode()const
{
	return errorCode_;
}

std::string ApplyMonitoringTemplateResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ApplyMonitoringTemplateResult::getSuccess()const
{
	return success_;
}

