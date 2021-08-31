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

#include <alibabacloud/edas/model/GetMockRuleByConsumerAppIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetMockRuleByConsumerAppIdResult::GetMockRuleByConsumerAppIdResult() :
	ServiceResult()
{}

GetMockRuleByConsumerAppIdResult::GetMockRuleByConsumerAppIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMockRuleByConsumerAppIdResult::~GetMockRuleByConsumerAppIdResult()
{}

void GetMockRuleByConsumerAppIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["RuleItemList"];
	for (auto valueDataRuleItemList : allDataNode)
	{
		RuleItemList dataObject;
		if(!valueDataRuleItemList["AccountId"].isNull())
			dataObject.accountId = valueDataRuleItemList["AccountId"].asString();
		if(!valueDataRuleItemList["Name"].isNull())
			dataObject.name = valueDataRuleItemList["Name"].asString();
		if(!valueDataRuleItemList["ConsumerAppId"].isNull())
			dataObject.consumerAppId = valueDataRuleItemList["ConsumerAppId"].asString();
		if(!valueDataRuleItemList["ConsumerAppName"].isNull())
			dataObject.consumerAppName = valueDataRuleItemList["ConsumerAppName"].asString();
		if(!valueDataRuleItemList["Enable"].isNull())
			dataObject.enable = valueDataRuleItemList["Enable"].asString() == "true";
		if(!valueDataRuleItemList["ExtraJson"].isNull())
			dataObject.extraJson = valueDataRuleItemList["ExtraJson"].asString();
		if(!valueDataRuleItemList["Id"].isNull())
			dataObject.id = std::stol(valueDataRuleItemList["Id"].asString());
		if(!valueDataRuleItemList["NamespaceId"].isNull())
			dataObject.namespaceId = valueDataRuleItemList["NamespaceId"].asString();
		if(!valueDataRuleItemList["ProviderAppId"].isNull())
			dataObject.providerAppId = valueDataRuleItemList["ProviderAppId"].asString();
		if(!valueDataRuleItemList["ProviderAppName"].isNull())
			dataObject.providerAppName = valueDataRuleItemList["ProviderAppName"].asString();
		if(!valueDataRuleItemList["Region"].isNull())
			dataObject.region = valueDataRuleItemList["Region"].asString();
		if(!valueDataRuleItemList["ScMockItemJson"].isNull())
			dataObject.scMockItemJson = valueDataRuleItemList["ScMockItemJson"].asString();
		if(!valueDataRuleItemList["Source"].isNull())
			dataObject.source = valueDataRuleItemList["Source"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetMockRuleByConsumerAppIdResult::getHttpCode()const
{
	return httpCode_;
}

std::string GetMockRuleByConsumerAppIdResult::getMessage()const
{
	return message_;
}

std::vector<GetMockRuleByConsumerAppIdResult::RuleItemList> GetMockRuleByConsumerAppIdResult::getData()const
{
	return data_;
}

std::string GetMockRuleByConsumerAppIdResult::getCode()const
{
	return code_;
}

bool GetMockRuleByConsumerAppIdResult::getSuccess()const
{
	return success_;
}

