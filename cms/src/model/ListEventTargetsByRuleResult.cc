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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allContactParameters = value["ContactParameters"]["ContactParameter"];
	for (auto value : allContactParameters)
	{
		ContactParameter contactParametersObject;
		if(!value["ContactGroupName"].isNull())
			contactParametersObject.contactGroupName = value["ContactGroupName"].asString();
		if(!value["Level"].isNull())
			contactParametersObject.level = value["Level"].asString();
		if(!value["Id"].isNull())
			contactParametersObject.id = value["Id"].asString();
		contactParameters_.push_back(contactParametersObject);
	}
	auto allFcParameters = value["FcParameters"]["FCParameter"];
	for (auto value : allFcParameters)
	{
		FCParameter fcParametersObject;
		if(!value["Region"].isNull())
			fcParametersObject.region = value["Region"].asString();
		if(!value["ServiceName"].isNull())
			fcParametersObject.serviceName = value["ServiceName"].asString();
		if(!value["FunctionName"].isNull())
			fcParametersObject.functionName = value["FunctionName"].asString();
		if(!value["Id"].isNull())
			fcParametersObject.id = value["Id"].asString();
		fcParameters_.push_back(fcParametersObject);
	}
	auto allMnsParameters = value["MnsParameters"]["MnsParameter"];
	for (auto value : allMnsParameters)
	{
		MnsParameter mnsParametersObject;
		if(!value["Region"].isNull())
			mnsParametersObject.region = value["Region"].asString();
		if(!value["Queue"].isNull())
			mnsParametersObject.queue = value["Queue"].asString();
		if(!value["Id"].isNull())
			mnsParametersObject.id = value["Id"].asString();
		mnsParameters_.push_back(mnsParametersObject);
	}
	auto allWebhookParameters = value["WebhookParameters"]["WebhookParameter"];
	for (auto value : allWebhookParameters)
	{
		WebhookParameter webhookParametersObject;
		if(!value["Id"].isNull())
			webhookParametersObject.id = value["Id"].asString();
		if(!value["Protocol"].isNull())
			webhookParametersObject.protocol = value["Protocol"].asString();
		if(!value["Method"].isNull())
			webhookParametersObject.method = value["Method"].asString();
		if(!value["Url"].isNull())
			webhookParametersObject.url = value["Url"].asString();
		webhookParameters_.push_back(webhookParametersObject);
	}
	auto allSlsParameters = value["SlsParameters"]["SlsParameter"];
	for (auto value : allSlsParameters)
	{
		SlsParameter slsParametersObject;
		if(!value["Id"].isNull())
			slsParametersObject.id = value["Id"].asString();
		if(!value["Region"].isNull())
			slsParametersObject.region = value["Region"].asString();
		if(!value["Project"].isNull())
			slsParametersObject.project = value["Project"].asString();
		if(!value["LogStore"].isNull())
			slsParametersObject.logStore = value["LogStore"].asString();
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

