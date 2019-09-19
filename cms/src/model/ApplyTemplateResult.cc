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

#include <alibabacloud/cms/model/ApplyTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ApplyTemplateResult::ApplyTemplateResult() :
	ServiceResult()
{}

ApplyTemplateResult::ApplyTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ApplyTemplateResult::~ApplyTemplateResult()
{}

void ApplyTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceNode = value["Resource"];
	auto allCreateAlertResultsNode = resourceNode["CreateAlertResults"]["AlertResult"];
	for (auto resourceNodeCreateAlertResultsAlertResult : allCreateAlertResultsNode)
	{
		Resource::AlertResult alertResultObject;
		if(!resourceNodeCreateAlertResultsAlertResult["Name"].isNull())
			alertResultObject.name = resourceNodeCreateAlertResultsAlertResult["Name"].asString();
		if(!resourceNodeCreateAlertResultsAlertResult["DisplayName"].isNull())
			alertResultObject.displayName = resourceNodeCreateAlertResultsAlertResult["DisplayName"].asString();
		if(!resourceNodeCreateAlertResultsAlertResult["MetricNamespace"].isNull())
			alertResultObject.metricNamespace = resourceNodeCreateAlertResultsAlertResult["MetricNamespace"].asString();
		if(!resourceNodeCreateAlertResultsAlertResult["MetricName"].isNull())
			alertResultObject.metricName = resourceNodeCreateAlertResultsAlertResult["MetricName"].asString();
		if(!resourceNodeCreateAlertResultsAlertResult["Message"].isNull())
			alertResultObject.message = resourceNodeCreateAlertResultsAlertResult["Message"].asString();
		if(!resourceNodeCreateAlertResultsAlertResult["Success"].isNull())
			alertResultObject.success = resourceNodeCreateAlertResultsAlertResult["Success"].asString();
		resource_.createAlertResults.push_back(alertResultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ApplyTemplateResult::Resource ApplyTemplateResult::getResource()const
{
	return resource_;
}

int ApplyTemplateResult::getErrorCode()const
{
	return errorCode_;
}

std::string ApplyTemplateResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ApplyTemplateResult::getSuccess()const
{
	return success_;
}

