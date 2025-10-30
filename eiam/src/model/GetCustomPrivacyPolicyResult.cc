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

#include <alibabacloud/eiam/model/GetCustomPrivacyPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetCustomPrivacyPolicyResult::GetCustomPrivacyPolicyResult() :
	ServiceResult()
{}

GetCustomPrivacyPolicyResult::GetCustomPrivacyPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCustomPrivacyPolicyResult::~GetCustomPrivacyPolicyResult()
{}

void GetCustomPrivacyPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto customPrivacyPolicyNode = value["CustomPrivacyPolicy"];
	if(!customPrivacyPolicyNode["CustomPrivacyPolicyId"].isNull())
		customPrivacyPolicy_.customPrivacyPolicyId = customPrivacyPolicyNode["CustomPrivacyPolicyId"].asString();
	if(!customPrivacyPolicyNode["CustomPrivacyPolicyName"].isNull())
		customPrivacyPolicy_.customPrivacyPolicyName = customPrivacyPolicyNode["CustomPrivacyPolicyName"].asString();
	if(!customPrivacyPolicyNode["Status"].isNull())
		customPrivacyPolicy_.status = customPrivacyPolicyNode["Status"].asString();
	if(!customPrivacyPolicyNode["DefaultLanguageCode"].isNull())
		customPrivacyPolicy_.defaultLanguageCode = customPrivacyPolicyNode["DefaultLanguageCode"].asString();
	if(!customPrivacyPolicyNode["UserConsentType"].isNull())
		customPrivacyPolicy_.userConsentType = customPrivacyPolicyNode["UserConsentType"].asString();
	if(!customPrivacyPolicyNode["InstanceId"].isNull())
		customPrivacyPolicy_.instanceId = customPrivacyPolicyNode["InstanceId"].asString();
	auto allCustomPrivacyPolicyContentsNode = customPrivacyPolicyNode["CustomPrivacyPolicyContents"]["customPrivacyPolicyContentsItem"];
	for (auto customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItem : allCustomPrivacyPolicyContentsNode)
	{
		CustomPrivacyPolicy::CustomPrivacyPolicyContentsItem customPrivacyPolicyContentsItemObject;
		if(!customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItem["CustomPrivacyPolicyTip"].isNull())
			customPrivacyPolicyContentsItemObject.customPrivacyPolicyTip = customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItem["CustomPrivacyPolicyTip"].asString();
		if(!customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItem["LanguageCode"].isNull())
			customPrivacyPolicyContentsItemObject.languageCode = customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItem["LanguageCode"].asString();
		auto allCustomPrivacyPolicyItemsNode = customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItem["CustomPrivacyPolicyItems"]["customPrivacyPolicyItemsItem"];
		for (auto customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItemCustomPrivacyPolicyItemscustomPrivacyPolicyItemsItem : allCustomPrivacyPolicyItemsNode)
		{
			CustomPrivacyPolicy::CustomPrivacyPolicyContentsItem::CustomPrivacyPolicyItemsItem customPrivacyPolicyItemsObject;
			if(!customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItemCustomPrivacyPolicyItemscustomPrivacyPolicyItemsItem["CustomPrivacyPolicyItemName"].isNull())
				customPrivacyPolicyItemsObject.customPrivacyPolicyItemName = customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItemCustomPrivacyPolicyItemscustomPrivacyPolicyItemsItem["CustomPrivacyPolicyItemName"].asString();
			if(!customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItemCustomPrivacyPolicyItemscustomPrivacyPolicyItemsItem["CustomPrivacyPolicyItemUrl"].isNull())
				customPrivacyPolicyItemsObject.customPrivacyPolicyItemUrl = customPrivacyPolicyNodeCustomPrivacyPolicyContentscustomPrivacyPolicyContentsItemCustomPrivacyPolicyItemscustomPrivacyPolicyItemsItem["CustomPrivacyPolicyItemUrl"].asString();
			customPrivacyPolicyContentsItemObject.customPrivacyPolicyItems.push_back(customPrivacyPolicyItemsObject);
		}
		customPrivacyPolicy_.customPrivacyPolicyContents.push_back(customPrivacyPolicyContentsItemObject);
	}

}

GetCustomPrivacyPolicyResult::CustomPrivacyPolicy GetCustomPrivacyPolicyResult::getCustomPrivacyPolicy()const
{
	return customPrivacyPolicy_;
}

