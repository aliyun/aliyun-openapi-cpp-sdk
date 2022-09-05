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

#include <alibabacloud/arms/model/ListActivatedAlertsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListActivatedAlertsResult::ListActivatedAlertsResult() :
	ServiceResult()
{}

ListActivatedAlertsResult::ListActivatedAlertsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListActivatedAlertsResult::~ListActivatedAlertsResult()
{}

void ListActivatedAlertsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageNode = value["Page"];
	if(!pageNode["PageSize"].isNull())
		page_.pageSize = std::stoi(pageNode["PageSize"].asString());
	if(!pageNode["Total"].isNull())
		page_.total = std::stoi(pageNode["Total"].asString());
	if(!pageNode["Page"].isNull())
		page_.page = std::stoi(pageNode["Page"].asString());
	auto allAlertsNode = pageNode["Alerts"]["Alert"];
	for (auto pageNodeAlertsAlert : allAlertsNode)
	{
		Page::Alert alertObject;
		if(!pageNodeAlertsAlert["Status"].isNull())
			alertObject.status = pageNodeAlertsAlert["Status"].asString();
		if(!pageNodeAlertsAlert["Severity"].isNull())
			alertObject.severity = pageNodeAlertsAlert["Severity"].asString();
		if(!pageNodeAlertsAlert["IntegrationName"].isNull())
			alertObject.integrationName = pageNodeAlertsAlert["IntegrationName"].asString();
		if(!pageNodeAlertsAlert["CreateTime"].isNull())
			alertObject.createTime = std::stol(pageNodeAlertsAlert["CreateTime"].asString());
		if(!pageNodeAlertsAlert["Message"].isNull())
			alertObject.message = pageNodeAlertsAlert["Message"].asString();
		if(!pageNodeAlertsAlert["AlertType"].isNull())
			alertObject.alertType = pageNodeAlertsAlert["AlertType"].asString();
		if(!pageNodeAlertsAlert["InvolvedObjectName"].isNull())
			alertObject.involvedObjectName = pageNodeAlertsAlert["InvolvedObjectName"].asString();
		if(!pageNodeAlertsAlert["AlertName"].isNull())
			alertObject.alertName = pageNodeAlertsAlert["AlertName"].asString();
		if(!pageNodeAlertsAlert["Count"].isNull())
			alertObject.count = std::stoi(pageNodeAlertsAlert["Count"].asString());
		if(!pageNodeAlertsAlert["ExpandFields"].isNull())
			alertObject.expandFields = pageNodeAlertsAlert["ExpandFields"].asString();
		if(!pageNodeAlertsAlert["EndsAt"].isNull())
			alertObject.endsAt = std::stol(pageNodeAlertsAlert["EndsAt"].asString());
		if(!pageNodeAlertsAlert["InvolvedObjectKind"].isNull())
			alertObject.involvedObjectKind = pageNodeAlertsAlert["InvolvedObjectKind"].asString();
		if(!pageNodeAlertsAlert["IntegrationType"].isNull())
			alertObject.integrationType = pageNodeAlertsAlert["IntegrationType"].asString();
		if(!pageNodeAlertsAlert["StartsAt"].isNull())
			alertObject.startsAt = std::stol(pageNodeAlertsAlert["StartsAt"].asString());
		if(!pageNodeAlertsAlert["AlertId"].isNull())
			alertObject.alertId = pageNodeAlertsAlert["AlertId"].asString();
		auto allDispatchRulesNode = pageNodeAlertsAlert["DispatchRules"]["DispatchRule"];
		for (auto pageNodeAlertsAlertDispatchRulesDispatchRule : allDispatchRulesNode)
		{
			Page::Alert::DispatchRule dispatchRulesObject;
			if(!pageNodeAlertsAlertDispatchRulesDispatchRule["RuleId"].isNull())
				dispatchRulesObject.ruleId = std::stoi(pageNodeAlertsAlertDispatchRulesDispatchRule["RuleId"].asString());
			if(!pageNodeAlertsAlertDispatchRulesDispatchRule["RuleName"].isNull())
				dispatchRulesObject.ruleName = pageNodeAlertsAlertDispatchRulesDispatchRule["RuleName"].asString();
			alertObject.dispatchRules.push_back(dispatchRulesObject);
		}
		page_.alerts.push_back(alertObject);
	}

}

ListActivatedAlertsResult::Page ListActivatedAlertsResult::getPage()const
{
	return page_;
}

