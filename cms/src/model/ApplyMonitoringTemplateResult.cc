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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceNode = value["Resource"];
	if(!resourceNode["GroupId"].isNull())
		resource_.groupId = std::stol(resourceNode["GroupId"].asString());
	auto allEventResultsNode = resourceNode["EventResults"]["Result"];
	for (auto resourceNodeEventResultsResult : allEventResultsNode)
	{
		Resource::Result resultObject;
		if(!resourceNodeEventResultsResult["GroupId"].isNull())
			resultObject.groupId = std::stol(resourceNodeEventResultsResult["GroupId"].asString());
		if(!resourceNodeEventResultsResult["Name"].isNull())
			resultObject.name = resourceNodeEventResultsResult["Name"].asString();
		if(!resourceNodeEventResultsResult["Message"].isNull())
			resultObject.message = resourceNodeEventResultsResult["Message"].asString();
		if(!resourceNodeEventResultsResult["DisplayName"].isNull())
			resultObject.displayName = resourceNodeEventResultsResult["DisplayName"].asString();
		if(!resourceNodeEventResultsResult["Code"].isNull())
			resultObject.code = std::stoi(resourceNodeEventResultsResult["Code"].asString());
		if(!resourceNodeEventResultsResult["Success"].isNull())
			resultObject.success = resourceNodeEventResultsResult["Success"].asString() == "true";
		resource_.eventResults.push_back(resultObject);
	}
	auto allAlertResultsNode = resourceNode["AlertResults"]["Result"];
	for (auto resourceNodeAlertResultsResult : allAlertResultsNode)
	{
		Resource::Result resultObject;
		if(!resourceNodeAlertResultsResult["GroupId"].isNull())
			resultObject.groupId = std::stol(resourceNodeAlertResultsResult["GroupId"].asString());
		if(!resourceNodeAlertResultsResult["Name"].isNull())
			resultObject.name = resourceNodeAlertResultsResult["Name"].asString();
		if(!resourceNodeAlertResultsResult["Message"].isNull())
			resultObject.message = resourceNodeAlertResultsResult["Message"].asString();
		if(!resourceNodeAlertResultsResult["DisplayName"].isNull())
			resultObject.displayName = resourceNodeAlertResultsResult["DisplayName"].asString();
		if(!resourceNodeAlertResultsResult["Code"].isNull())
			resultObject.code = std::stoi(resourceNodeAlertResultsResult["Code"].asString());
		if(!resourceNodeAlertResultsResult["Success"].isNull())
			resultObject.success = resourceNodeAlertResultsResult["Success"].asString() == "true";
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

