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

#include <alibabacloud/cms/model/GetMyGroupAlertResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

GetMyGroupAlertResult::GetMyGroupAlertResult() :
	ServiceResult()
{}

GetMyGroupAlertResult::GetMyGroupAlertResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMyGroupAlertResult::~GetMyGroupAlertResult()
{}

void GetMyGroupAlertResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto groupAlertNode = value["GroupAlert"];
	if(!groupAlertNode["GroupId"].isNull())
		groupAlert_.groupId = groupAlertNode["GroupId"].asString();
	if(!groupAlertNode["AlertName"].isNull())
		groupAlert_.alertName = groupAlertNode["AlertName"].asString();
	if(!groupAlertNode["DisplayName"].isNull())
		groupAlert_.displayName = groupAlertNode["DisplayName"].asString();
	if(!groupAlertNode["Subject"].isNull())
		groupAlert_.subject = groupAlertNode["Subject"].asString();
	if(!groupAlertNode["Webhook"].isNull())
		groupAlert_.webhook = groupAlertNode["Webhook"].asString();
	if(!groupAlertNode["Category"].isNull())
		groupAlert_.category = groupAlertNode["Category"].asString();
	if(!groupAlertNode["Namespace"].isNull())
		groupAlert_._namespace = groupAlertNode["Namespace"].asString();
	if(!groupAlertNode["MetricName"].isNull())
		groupAlert_.metricName = groupAlertNode["MetricName"].asString();
	if(!groupAlertNode["Period"].isNull())
		groupAlert_.period = std::stoi(groupAlertNode["Period"].asString());
	if(!groupAlertNode["State"].isNull())
		groupAlert_.state = groupAlertNode["State"].asString();
	if(!groupAlertNode["Description"].isNull())
		groupAlert_.description = groupAlertNode["Description"].asString();
	if(!groupAlertNode["Enable"].isNull())
		groupAlert_.enable = groupAlertNode["Enable"].asString() == "true";
	if(!groupAlertNode["SilenceTime"].isNull())
		groupAlert_.silenceTime = std::stoi(groupAlertNode["SilenceTime"].asString());
	if(!groupAlertNode["EnableEndTime"].isNull())
		groupAlert_.enableEndTime = groupAlertNode["EnableEndTime"].asString();
	if(!groupAlertNode["EnableStartTime"].isNull())
		groupAlert_.enableStartTime = groupAlertNode["EnableStartTime"].asString();
	if(!groupAlertNode["Selector"].isNull())
		groupAlert_.selector = groupAlertNode["Selector"].asString();
	auto escalationsNode = groupAlertNode["Escalations"];
	auto infoNode = escalationsNode["Info"];
	if(!infoNode["Statistics"].isNull())
		groupAlert_.escalations.info.statistics = infoNode["Statistics"].asString();
	if(!infoNode["ComparisonOperator"].isNull())
		groupAlert_.escalations.info.comparisonOperator = infoNode["ComparisonOperator"].asString();
	if(!infoNode["Threshold"].isNull())
		groupAlert_.escalations.info.threshold = infoNode["Threshold"].asString();
	if(!infoNode["Times"].isNull())
		groupAlert_.escalations.info.times = std::stoi(infoNode["Times"].asString());
	auto warnNode = escalationsNode["Warn"];
	if(!warnNode["Statistics"].isNull())
		groupAlert_.escalations.warn.statistics = warnNode["Statistics"].asString();
	if(!warnNode["ComparisonOperator"].isNull())
		groupAlert_.escalations.warn.comparisonOperator = warnNode["ComparisonOperator"].asString();
	if(!warnNode["Threshold"].isNull())
		groupAlert_.escalations.warn.threshold = warnNode["Threshold"].asString();
	if(!warnNode["Times"].isNull())
		groupAlert_.escalations.warn.times = std::stoi(warnNode["Times"].asString());
	auto criticalNode = escalationsNode["Critical"];
	if(!criticalNode["Statistics"].isNull())
		groupAlert_.escalations.critical.statistics = criticalNode["Statistics"].asString();
	if(!criticalNode["ComparisonOperator"].isNull())
		groupAlert_.escalations.critical.comparisonOperator = criticalNode["ComparisonOperator"].asString();
	if(!criticalNode["Threshold"].isNull())
		groupAlert_.escalations.critical.threshold = criticalNode["Threshold"].asString();
	if(!criticalNode["Times"].isNull())
		groupAlert_.escalations.critical.times = std::stoi(criticalNode["Times"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GetMyGroupAlertResult::GroupAlert GetMyGroupAlertResult::getGroupAlert()const
{
	return groupAlert_;
}

int GetMyGroupAlertResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMyGroupAlertResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMyGroupAlertResult::getSuccess()const
{
	return success_;
}

