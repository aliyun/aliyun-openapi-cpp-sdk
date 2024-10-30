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

#include <alibabacloud/csas/model/GetPrivateAccessApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

GetPrivateAccessApplicationResult::GetPrivateAccessApplicationResult() :
	ServiceResult()
{}

GetPrivateAccessApplicationResult::GetPrivateAccessApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPrivateAccessApplicationResult::~GetPrivateAccessApplicationResult()
{}

void GetPrivateAccessApplicationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationNode = value["Application"];
	if(!applicationNode["ApplicationId"].isNull())
		application_.applicationId = applicationNode["ApplicationId"].asString();
	if(!applicationNode["Name"].isNull())
		application_.name = applicationNode["Name"].asString();
	if(!applicationNode["Description"].isNull())
		application_.description = applicationNode["Description"].asString();
	if(!applicationNode["Protocol"].isNull())
		application_.protocol = applicationNode["Protocol"].asString();
	if(!applicationNode["Status"].isNull())
		application_.status = applicationNode["Status"].asString();
	if(!applicationNode["CreateTime"].isNull())
		application_.createTime = applicationNode["CreateTime"].asString();
	if(!applicationNode["BrowserAccessStatus"].isNull())
		application_.browserAccessStatus = applicationNode["BrowserAccessStatus"].asString();
	if(!applicationNode["L7ProxyDomainAutomatic"].isNull())
		application_.l7ProxyDomainAutomatic = applicationNode["L7ProxyDomainAutomatic"].asString();
	if(!applicationNode["L7ProxyDomainCustom"].isNull())
		application_.l7ProxyDomainCustom = applicationNode["L7ProxyDomainCustom"].asString();
	auto allPortRangesNode = applicationNode["PortRanges"]["portRange"];
	for (auto applicationNodePortRangesportRange : allPortRangesNode)
	{
		Application::PortRange portRangeObject;
		if(!applicationNodePortRangesportRange["Begin"].isNull())
			portRangeObject.begin = std::stoi(applicationNodePortRangesportRange["Begin"].asString());
		if(!applicationNodePortRangesportRange["End"].isNull())
			portRangeObject.end = std::stoi(applicationNodePortRangesportRange["End"].asString());
		application_.portRanges.push_back(portRangeObject);
	}
		auto allAddresses = applicationNode["Addresses"]["address"];
		for (auto value : allAddresses)
			application_.addresses.push_back(value.asString());
		auto allTagIds = applicationNode["TagIds"]["tagId"];
		for (auto value : allTagIds)
			application_.tagIds.push_back(value.asString());
		auto allPolicyIds = applicationNode["PolicyIds"]["policyId"];
		for (auto value : allPolicyIds)
			application_.policyIds.push_back(value.asString());
		auto allConnectorIds = applicationNode["ConnectorIds"]["connectorId"];
		for (auto value : allConnectorIds)
			application_.connectorIds.push_back(value.asString());

}

GetPrivateAccessApplicationResult::Application GetPrivateAccessApplicationResult::getApplication()const
{
	return application_;
}

