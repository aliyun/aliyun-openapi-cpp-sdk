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

#include <alibabacloud/csas/model/ListApplicationsForPrivateAccessPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListApplicationsForPrivateAccessPolicyResult::ListApplicationsForPrivateAccessPolicyResult() :
	ServiceResult()
{}

ListApplicationsForPrivateAccessPolicyResult::ListApplicationsForPrivateAccessPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationsForPrivateAccessPolicyResult::~ListApplicationsForPrivateAccessPolicyResult()
{}

void ListApplicationsForPrivateAccessPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicesNode = value["Polices"]["policy"];
	for (auto valuePolicespolicy : allPolicesNode)
	{
		Policy policesObject;
		if(!valuePolicespolicy["PolicyId"].isNull())
			policesObject.policyId = valuePolicespolicy["PolicyId"].asString();
		auto allApplicationsNode = valuePolicespolicy["Applications"]["application"];
		for (auto valuePolicespolicyApplicationsapplication : allApplicationsNode)
		{
			Policy::Application applicationsObject;
			if(!valuePolicespolicyApplicationsapplication["ApplicationId"].isNull())
				applicationsObject.applicationId = valuePolicespolicyApplicationsapplication["ApplicationId"].asString();
			if(!valuePolicespolicyApplicationsapplication["Name"].isNull())
				applicationsObject.name = valuePolicespolicyApplicationsapplication["Name"].asString();
			if(!valuePolicespolicyApplicationsapplication["Description"].isNull())
				applicationsObject.description = valuePolicespolicyApplicationsapplication["Description"].asString();
			if(!valuePolicespolicyApplicationsapplication["Protocol"].isNull())
				applicationsObject.protocol = valuePolicespolicyApplicationsapplication["Protocol"].asString();
			if(!valuePolicespolicyApplicationsapplication["Status"].isNull())
				applicationsObject.status = valuePolicespolicyApplicationsapplication["Status"].asString();
			if(!valuePolicespolicyApplicationsapplication["CreateTime"].isNull())
				applicationsObject.createTime = valuePolicespolicyApplicationsapplication["CreateTime"].asString();
			auto allPortRangesNode = valuePolicespolicyApplicationsapplication["PortRanges"]["portRange"];
			for (auto valuePolicespolicyApplicationsapplicationPortRangesportRange : allPortRangesNode)
			{
				Policy::Application::PortRange portRangesObject;
				if(!valuePolicespolicyApplicationsapplicationPortRangesportRange["Begin"].isNull())
					portRangesObject.begin = std::stoi(valuePolicespolicyApplicationsapplicationPortRangesportRange["Begin"].asString());
				if(!valuePolicespolicyApplicationsapplicationPortRangesportRange["End"].isNull())
					portRangesObject.end = std::stoi(valuePolicespolicyApplicationsapplicationPortRangesportRange["End"].asString());
				applicationsObject.portRanges.push_back(portRangesObject);
			}
			auto allAddresses = value["Addresses"]["address"];
			for (auto value : allAddresses)
				applicationsObject.addresses.push_back(value.asString());
			policesObject.applications.push_back(applicationsObject);
		}
		polices_.push_back(policesObject);
	}

}

std::vector<ListApplicationsForPrivateAccessPolicyResult::Policy> ListApplicationsForPrivateAccessPolicyResult::getPolices()const
{
	return polices_;
}

