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

#include <alibabacloud/cms/model/ListEventTargetsByRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListEventTargetsByRuleResult::ListEventTargetsByRuleResult() :
	ServiceResult()
{}

ListEventTargetsByRuleResult::ListEventTargetsByRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEventTargetsByRuleResult::~ListEventTargetsByRuleResult()
{}

void ListEventTargetsByRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allContactParametersNode = value["ContactParameters"]["ContactParameter"];
	for (auto valueContactParametersContactParameter : allContactParametersNode)
	{
		ContactParameter contactParametersObject;
		if(!valueContactParametersContactParameter["ContactGroupName"].isNull())
			contactParametersObject.contactGroupName = valueContactParametersContactParameter["ContactGroupName"].asString();
		if(!valueContactParametersContactParameter["Level"].isNull())
			contactParametersObject.level = valueContactParametersContactParameter["Level"].asString();
		if(!valueContactParametersContactParameter["Id"].isNull())
			contactParametersObject.id = valueContactParametersContactParameter["Id"].asString();
		contactParameters_.push_back(contactParametersObject);
	}
	auto allFcParametersNode = value["FcParameters"]["FCParameter"];
	for (auto valueFcParametersFCParameter : allFcParametersNode)
	{
		FCParameter fcParametersObject;
		if(!valueFcParametersFCParameter["Region"].isNull())
			fcParametersObject.region = valueFcParametersFCParameter["Region"].asString();
		if(!valueFcParametersFCParameter["ServiceName"].isNull())
			fcParametersObject.serviceName = valueFcParametersFCParameter["ServiceName"].asString();
		if(!valueFcParametersFCParameter["FunctionName"].isNull())
			fcParametersObject.functionName = valueFcParametersFCParameter["FunctionName"].asString();
		if(!valueFcParametersFCParameter["Id"].isNull())
			fcParametersObject.id = valueFcParametersFCParameter["Id"].asString();
		fcParameters_.push_back(fcParametersObject);
	}
	auto allMnsParametersNode = value["MnsParameters"]["MnsParameter"];
	for (auto valueMnsParametersMnsParameter : allMnsParametersNode)
	{
		MnsParameter mnsParametersObject;
		if(!valueMnsParametersMnsParameter["Region"].isNull())
			mnsParametersObject.region = valueMnsParametersMnsParameter["Region"].asString();
		if(!valueMnsParametersMnsParameter["Queue"].isNull())
			mnsParametersObject.queue = valueMnsParametersMnsParameter["Queue"].asString();
		if(!valueMnsParametersMnsParameter["Id"].isNull())
			mnsParametersObject.id = valueMnsParametersMnsParameter["Id"].asString();
		mnsParameters_.push_back(mnsParametersObject);
	}
	auto allWebhookParametersNode = value["WebhookParameters"]["WebhookParameter"];
	for (auto valueWebhookParametersWebhookParameter : allWebhookParametersNode)
	{
		WebhookParameter webhookParametersObject;
		if(!valueWebhookParametersWebhookParameter["Id"].isNull())
			webhookParametersObject.id = valueWebhookParametersWebhookParameter["Id"].asString();
		if(!valueWebhookParametersWebhookParameter["Protocol"].isNull())
			webhookParametersObject.protocol = valueWebhookParametersWebhookParameter["Protocol"].asString();
		if(!valueWebhookParametersWebhookParameter["Method"].isNull())
			webhookParametersObject.method = valueWebhookParametersWebhookParameter["Method"].asString();
		if(!valueWebhookParametersWebhookParameter["Url"].isNull())
			webhookParametersObject.url = valueWebhookParametersWebhookParameter["Url"].asString();
		webhookParameters_.push_back(webhookParametersObject);
	}
	auto allSlsParametersNode = value["SlsParameters"]["SlsParameter"];
	for (auto valueSlsParametersSlsParameter : allSlsParametersNode)
	{
		SlsParameter slsParametersObject;
		if(!valueSlsParametersSlsParameter["Id"].isNull())
			slsParametersObject.id = valueSlsParametersSlsParameter["Id"].asString();
		if(!valueSlsParametersSlsParameter["Region"].isNull())
			slsParametersObject.region = valueSlsParametersSlsParameter["Region"].asString();
		if(!valueSlsParametersSlsParameter["Project"].isNull())
			slsParametersObject.project = valueSlsParametersSlsParameter["Project"].asString();
		if(!valueSlsParametersSlsParameter["LogStore"].isNull())
			slsParametersObject.logStore = valueSlsParametersSlsParameter["LogStore"].asString();
		slsParameters_.push_back(slsParametersObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ParameterCount"].isNull())
		parameterCount_ = std::stoi(value["ParameterCount"].asString());

}

int ListEventTargetsByRuleResult::getParameterCount()const
{
	return parameterCount_;
}

std::vector<ListEventTargetsByRuleResult::ContactParameter> ListEventTargetsByRuleResult::getContactParameters()const
{
	return contactParameters_;
}

std::string ListEventTargetsByRuleResult::getMessage()const
{
	return message_;
}

std::vector<ListEventTargetsByRuleResult::SlsParameter> ListEventTargetsByRuleResult::getSlsParameters()const
{
	return slsParameters_;
}

std::vector<ListEventTargetsByRuleResult::WebhookParameter> ListEventTargetsByRuleResult::getWebhookParameters()const
{
	return webhookParameters_;
}

std::vector<ListEventTargetsByRuleResult::FCParameter> ListEventTargetsByRuleResult::getFcParameters()const
{
	return fcParameters_;
}

std::string ListEventTargetsByRuleResult::getCode()const
{
	return code_;
}

std::vector<ListEventTargetsByRuleResult::MnsParameter> ListEventTargetsByRuleResult::getMnsParameters()const
{
	return mnsParameters_;
}

