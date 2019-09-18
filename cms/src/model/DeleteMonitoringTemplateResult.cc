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

#include <alibabacloud/cms/model/DeleteMonitoringTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DeleteMonitoringTemplateResult::DeleteMonitoringTemplateResult() :
	ServiceResult()
{}

DeleteMonitoringTemplateResult::DeleteMonitoringTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteMonitoringTemplateResult::~DeleteMonitoringTemplateResult()
{}

void DeleteMonitoringTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceNode = value["Resource"];
	if(!resourceNode["Name"].isNull())
		resource_.name = resourceNode["Name"].asString();
	if(!resourceNode["Id"].isNull())
		resource_.id = resourceNode["Id"].asString();
	if(!resourceNode["RestVersion"].isNull())
		resource_.restVersion = resourceNode["RestVersion"].asString();
	if(!resourceNode["Namespace"].isNull())
		resource_._namespace = resourceNode["Namespace"].asString();
	if(!resourceNode["Description"].isNull())
		resource_.description = resourceNode["Description"].asString();
	if(!resourceNode["AlertTemplatesJson"].isNull())
		resource_.alertTemplatesJson = resourceNode["AlertTemplatesJson"].asString();
	if(!resourceNode["EventRuleTemplatesJson"].isNull())
		resource_.eventRuleTemplatesJson = resourceNode["EventRuleTemplatesJson"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

DeleteMonitoringTemplateResult::Resource DeleteMonitoringTemplateResult::getResource()const
{
	return resource_;
}

int DeleteMonitoringTemplateResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteMonitoringTemplateResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DeleteMonitoringTemplateResult::getSuccess()const
{
	return success_;
}

