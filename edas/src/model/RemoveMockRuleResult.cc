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

#include <alibabacloud/edas/model/RemoveMockRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

RemoveMockRuleResult::RemoveMockRuleResult() :
	ServiceResult()
{}

RemoveMockRuleResult::RemoveMockRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RemoveMockRuleResult::~RemoveMockRuleResult()
{}

void RemoveMockRuleResult::parse(const std::string &payload)
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
		code_ = value["Code"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string RemoveMockRuleResult::getHttpCode()const
{
	return httpCode_;
}

std::string RemoveMockRuleResult::getMessage()const
{
	return message_;
}

RemoveMockRuleResult::Data RemoveMockRuleResult::getData()const
{
	return data_;
}

std::string RemoveMockRuleResult::getCode()const
{
	return code_;
}

bool RemoveMockRuleResult::getSuccess()const
{
	return success_;
}

