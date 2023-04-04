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

#include <alibabacloud/imm/model/GetTriggerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetTriggerResult::GetTriggerResult() :
	ServiceResult()
{}

GetTriggerResult::GetTriggerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTriggerResult::~GetTriggerResult()
{}

void GetTriggerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto triggerNode = value["Trigger"];
	if(!triggerNode["Id"].isNull())
		trigger_.id = triggerNode["Id"].asString();
	if(!triggerNode["State"].isNull())
		trigger_.state = triggerNode["State"].asString();
	if(!triggerNode["Marker"].isNull())
		trigger_.marker = triggerNode["Marker"].asString();
	if(!triggerNode["CreateTime"].isNull())
		trigger_.createTime = triggerNode["CreateTime"].asString();
	if(!triggerNode["UpdateTime"].isNull())
		trigger_.updateTime = triggerNode["UpdateTime"].asString();
	if(!triggerNode["Tags"].isNull())
		trigger_.tags = triggerNode["Tags"].asString();
	if(!triggerNode["Error"].isNull())
		trigger_.error = triggerNode["Error"].asString();
	auto allActionsNode = triggerNode["Actions"]["ActionsItem"];
	for (auto triggerNodeActionsActionsItem : allActionsNode)
	{
		Trigger::ActionsItem actionsItemObject;
		if(!triggerNodeActionsActionsItem["Name"].isNull())
			actionsItemObject.name = triggerNodeActionsActionsItem["Name"].asString();
		auto allParameters = value["Parameters"]["null"];
		for (auto value : allParameters)
			actionsItemObject.parameters.push_back(value.asString());
		trigger_.actions.push_back(actionsItemObject);
	}
	auto inputNode = triggerNode["Input"];
	auto oSSNode = inputNode["OSS"];
	if(!oSSNode["Bucket"].isNull())
		trigger_.input.oSS.bucket = oSSNode["Bucket"].asString();
	if(!oSSNode["Prefix"].isNull())
		trigger_.input.oSS.prefix = oSSNode["Prefix"].asString();
		auto allMatchExpressions = oSSNode["MatchExpressions"]["null"];
		for (auto value : allMatchExpressions)
			trigger_.input.oSS.matchExpressions.push_back(value.asString());
	auto notificationNode = triggerNode["Notification"];
	if(!notificationNode["Endpoint"].isNull())
		trigger_.notification.endpoint = notificationNode["Endpoint"].asString();
	if(!notificationNode["Topic"].isNull())
		trigger_.notification.topic = notificationNode["Topic"].asString();
	auto statisticNode = triggerNode["Statistic"];
	if(!statisticNode["SubmitSuccess"].isNull())
		trigger_.statistic.submitSuccess = std::stol(statisticNode["SubmitSuccess"].asString());
	if(!statisticNode["SubmitFailure"].isNull())
		trigger_.statistic.submitFailure = std::stol(statisticNode["SubmitFailure"].asString());

}

GetTriggerResult::Trigger GetTriggerResult::getTrigger()const
{
	return trigger_;
}

