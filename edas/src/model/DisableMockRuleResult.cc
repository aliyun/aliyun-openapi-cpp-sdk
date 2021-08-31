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

#include <alibabacloud/edas/model/DisableMockRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

DisableMockRuleResult::DisableMockRuleResult() :
	ServiceResult()
{}

DisableMockRuleResult::DisableMockRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DisableMockRuleResult::~DisableMockRuleResult()
{}

void DisableMockRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AccountId"].isNull())
		data_.accountId = dataNode["AccountId"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["ConsumerAppId"].isNull())
		data_.consumerAppId = dataNode["ConsumerAppId"].asString();
	if(!dataNode["ConsumerAppName"].isNull())
		data_.consumerAppName = dataNode["ConsumerAppName"].asString();
	if(!dataNode["Enable"].isNull())
		data_.enable = dataNode["Enable"].asString() == "true";
	if(!dataNode["ExtraJson"].isNull())
		data_.extraJson = dataNode["ExtraJson"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	if(!dataNode["ProviderAppId"].isNull())
		data_.providerAppId = dataNode["ProviderAppId"].asString();
	if(!dataNode["ProviderAppName"].isNull())
		data_.providerAppName = dataNode["ProviderAppName"].asString();
	if(!dataNode["Region"].isNull())
		data_.region = dataNode["Region"].asString();
	if(!dataNode["ScMockItemJson"].isNull())
		data_.scMockItemJson = dataNode["ScMockItemJson"].asString();
	if(!dataNode["Source"].isNull())
		data_.source = dataNode["Source"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DisableMockRuleResult::getMessage()const
{
	return message_;
}

DisableMockRuleResult::Data DisableMockRuleResult::getData()const
{
	return data_;
}

int DisableMockRuleResult::getCode()const
{
	return code_;
}

bool DisableMockRuleResult::getSuccess()const
{
	return success_;
}

