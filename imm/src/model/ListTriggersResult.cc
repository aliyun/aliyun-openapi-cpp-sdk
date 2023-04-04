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

#include <alibabacloud/imm/model/ListTriggersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListTriggersResult::ListTriggersResult() :
	ServiceResult()
{}

ListTriggersResult::ListTriggersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTriggersResult::~ListTriggersResult()
{}

void ListTriggersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTriggersNode = value["Triggers"]["TriggersItem"];
	for (auto valueTriggersTriggersItem : allTriggersNode)
	{
		TriggersItem triggersObject;
		if(!valueTriggersTriggersItem["Id"].isNull())
			triggersObject.id = valueTriggersTriggersItem["Id"].asString();
		if(!valueTriggersTriggersItem["State"].isNull())
			triggersObject.state = valueTriggersTriggersItem["State"].asString();
		if(!valueTriggersTriggersItem["Marker"].isNull())
			triggersObject.marker = valueTriggersTriggersItem["Marker"].asString();
		if(!valueTriggersTriggersItem["CreateTime"].isNull())
			triggersObject.createTime = valueTriggersTriggersItem["CreateTime"].asString();
		if(!valueTriggersTriggersItem["UpdateTime"].isNull())
			triggersObject.updateTime = valueTriggersTriggersItem["UpdateTime"].asString();
		if(!valueTriggersTriggersItem["Tags"].isNull())
			triggersObject.tags = valueTriggersTriggersItem["Tags"].asString();
		if(!valueTriggersTriggersItem["Error"].isNull())
			triggersObject.error = valueTriggersTriggersItem["Error"].asString();
		auto allActionsNode = valueTriggersTriggersItem["Actions"]["ActionsItem"];
		for (auto valueTriggersTriggersItemActionsActionsItem : allActionsNode)
		{
			TriggersItem::ActionsItem actionsObject;
			if(!valueTriggersTriggersItemActionsActionsItem["Name"].isNull())
				actionsObject.name = valueTriggersTriggersItemActionsActionsItem["Name"].asString();
			auto allParameters = value["Parameters"]["null"];
			for (auto value : allParameters)
				actionsObject.parameters.push_back(value.asString());
			triggersObject.actions.push_back(actionsObject);
		}
		auto inputNode = value["Input"];
		auto oSSNode = inputNode["OSS"];
		if(!oSSNode["Bucket"].isNull())
			triggersObject.input.oSS.bucket = oSSNode["Bucket"].asString();
		if(!oSSNode["Prefix"].isNull())
			triggersObject.input.oSS.prefix = oSSNode["Prefix"].asString();
			auto allMatchExpressions = oSSNode["MatchExpressions"]["null"];
			for (auto value : allMatchExpressions)
				triggersObject.input.oSS.matchExpressions.push_back(value.asString());
		auto notificationNode = value["Notification"];
		if(!notificationNode["Endpoint"].isNull())
			triggersObject.notification.endpoint = notificationNode["Endpoint"].asString();
		if(!notificationNode["Topic"].isNull())
			triggersObject.notification.topic = notificationNode["Topic"].asString();
		auto statisticNode = value["Statistic"];
		if(!statisticNode["SubmitSuccess"].isNull())
			triggersObject.statistic.submitSuccess = std::stol(statisticNode["SubmitSuccess"].asString());
		if(!statisticNode["SubmitFailure"].isNull())
			triggersObject.statistic.submitFailure = std::stol(statisticNode["SubmitFailure"].asString());
		triggers_.push_back(triggersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListTriggersResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListTriggersResult::TriggersItem> ListTriggersResult::getTriggers()const
{
	return triggers_;
}

