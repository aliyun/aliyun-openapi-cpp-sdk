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

#include <alibabacloud/csas/model/ListPrivateAccessApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListPrivateAccessApplicationsResult::ListPrivateAccessApplicationsResult() :
	ServiceResult()
{}

ListPrivateAccessApplicationsResult::ListPrivateAccessApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivateAccessApplicationsResult::~ListPrivateAccessApplicationsResult()
{}

void ListPrivateAccessApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["application"];
	for (auto valueApplicationsapplication : allApplicationsNode)
	{
		Application applicationsObject;
		if(!valueApplicationsapplication["ApplicationId"].isNull())
			applicationsObject.applicationId = valueApplicationsapplication["ApplicationId"].asString();
		if(!valueApplicationsapplication["Name"].isNull())
			applicationsObject.name = valueApplicationsapplication["Name"].asString();
		if(!valueApplicationsapplication["Description"].isNull())
			applicationsObject.description = valueApplicationsapplication["Description"].asString();
		if(!valueApplicationsapplication["Protocol"].isNull())
			applicationsObject.protocol = valueApplicationsapplication["Protocol"].asString();
		if(!valueApplicationsapplication["Status"].isNull())
			applicationsObject.status = valueApplicationsapplication["Status"].asString();
		if(!valueApplicationsapplication["CreateTime"].isNull())
			applicationsObject.createTime = valueApplicationsapplication["CreateTime"].asString();
		if(!valueApplicationsapplication["BrowserAccessStatus"].isNull())
			applicationsObject.browserAccessStatus = valueApplicationsapplication["BrowserAccessStatus"].asString();
		if(!valueApplicationsapplication["L7ProxyDomainAutomatic"].isNull())
			applicationsObject.l7ProxyDomainAutomatic = valueApplicationsapplication["L7ProxyDomainAutomatic"].asString();
		if(!valueApplicationsapplication["L7ProxyDomainCustom"].isNull())
			applicationsObject.l7ProxyDomainCustom = valueApplicationsapplication["L7ProxyDomainCustom"].asString();
		auto allPortRangesNode = valueApplicationsapplication["PortRanges"]["portRange"];
		for (auto valueApplicationsapplicationPortRangesportRange : allPortRangesNode)
		{
			Application::PortRange portRangesObject;
			if(!valueApplicationsapplicationPortRangesportRange["Begin"].isNull())
				portRangesObject.begin = std::stoi(valueApplicationsapplicationPortRangesportRange["Begin"].asString());
			if(!valueApplicationsapplicationPortRangesportRange["End"].isNull())
				portRangesObject.end = std::stoi(valueApplicationsapplicationPortRangesportRange["End"].asString());
			applicationsObject.portRanges.push_back(portRangesObject);
		}
		auto allAddresses = value["Addresses"]["address"];
		for (auto value : allAddresses)
			applicationsObject.addresses.push_back(value.asString());
		auto allTagIds = value["TagIds"]["tagId"];
		for (auto value : allTagIds)
			applicationsObject.tagIds.push_back(value.asString());
		auto allPolicyIds = value["PolicyIds"]["policyId"];
		for (auto value : allPolicyIds)
			applicationsObject.policyIds.push_back(value.asString());
		auto allConnectorIds = value["ConnectorIds"]["connectorId"];
		for (auto value : allConnectorIds)
			applicationsObject.connectorIds.push_back(value.asString());
		applications_.push_back(applicationsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());

}

int ListPrivateAccessApplicationsResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<ListPrivateAccessApplicationsResult::Application> ListPrivateAccessApplicationsResult::getApplications()const
{
	return applications_;
}

