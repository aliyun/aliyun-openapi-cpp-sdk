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

#include <alibabacloud/csas/model/ListPolicesForPrivateAccessApplicationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListPolicesForPrivateAccessApplicationResult::ListPolicesForPrivateAccessApplicationResult() :
	ServiceResult()
{}

ListPolicesForPrivateAccessApplicationResult::ListPolicesForPrivateAccessApplicationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPolicesForPrivateAccessApplicationResult::~ListPolicesForPrivateAccessApplicationResult()
{}

void ListPolicesForPrivateAccessApplicationResult::parse(const std::string &payload)
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
		auto allPoliciesNode = valueApplicationsapplication["Policies"]["policy"];
		for (auto valueApplicationsapplicationPoliciespolicy : allPoliciesNode)
		{
			Application::Policy policiesObject;
			if(!valueApplicationsapplicationPoliciespolicy["PolicyId"].isNull())
				policiesObject.policyId = valueApplicationsapplicationPoliciespolicy["PolicyId"].asString();
			if(!valueApplicationsapplicationPoliciespolicy["Name"].isNull())
				policiesObject.name = valueApplicationsapplicationPoliciespolicy["Name"].asString();
			if(!valueApplicationsapplicationPoliciespolicy["Description"].isNull())
				policiesObject.description = valueApplicationsapplicationPoliciespolicy["Description"].asString();
			if(!valueApplicationsapplicationPoliciespolicy["PolicyAction"].isNull())
				policiesObject.policyAction = valueApplicationsapplicationPoliciespolicy["PolicyAction"].asString();
			if(!valueApplicationsapplicationPoliciespolicy["Priority"].isNull())
				policiesObject.priority = std::stoi(valueApplicationsapplicationPoliciespolicy["Priority"].asString());
			if(!valueApplicationsapplicationPoliciespolicy["Status"].isNull())
				policiesObject.status = valueApplicationsapplicationPoliciespolicy["Status"].asString();
			if(!valueApplicationsapplicationPoliciespolicy["ApplicationType"].isNull())
				policiesObject.applicationType = valueApplicationsapplicationPoliciespolicy["ApplicationType"].asString();
			if(!valueApplicationsapplicationPoliciespolicy["UserGroupType"].isNull())
				policiesObject.userGroupType = valueApplicationsapplicationPoliciespolicy["UserGroupType"].asString();
			if(!valueApplicationsapplicationPoliciespolicy["CreateTime"].isNull())
				policiesObject.createTime = valueApplicationsapplicationPoliciespolicy["CreateTime"].asString();
			auto allCustomUserAttributesNode = valueApplicationsapplicationPoliciespolicy["CustomUserAttributes"]["customUserAttribute"];
			for (auto valueApplicationsapplicationPoliciespolicyCustomUserAttributescustomUserAttribute : allCustomUserAttributesNode)
			{
				Application::Policy::CustomUserAttribute customUserAttributesObject;
				if(!valueApplicationsapplicationPoliciespolicyCustomUserAttributescustomUserAttribute["UserGroupType"].isNull())
					customUserAttributesObject.userGroupType = valueApplicationsapplicationPoliciespolicyCustomUserAttributescustomUserAttribute["UserGroupType"].asString();
				if(!valueApplicationsapplicationPoliciespolicyCustomUserAttributescustomUserAttribute["Relation"].isNull())
					customUserAttributesObject.relation = valueApplicationsapplicationPoliciespolicyCustomUserAttributescustomUserAttribute["Relation"].asString();
				if(!valueApplicationsapplicationPoliciespolicyCustomUserAttributescustomUserAttribute["Value"].isNull())
					customUserAttributesObject.value = valueApplicationsapplicationPoliciespolicyCustomUserAttributescustomUserAttribute["Value"].asString();
				if(!valueApplicationsapplicationPoliciespolicyCustomUserAttributescustomUserAttribute["IdpId"].isNull())
					customUserAttributesObject.idpId = std::stoi(valueApplicationsapplicationPoliciespolicyCustomUserAttributescustomUserAttribute["IdpId"].asString());
				policiesObject.customUserAttributes.push_back(customUserAttributesObject);
			}
			applicationsObject.policies.push_back(policiesObject);
		}
		applications_.push_back(applicationsObject);
	}

}

std::vector<ListPolicesForPrivateAccessApplicationResult::Application> ListPolicesForPrivateAccessApplicationResult::getApplications()const
{
	return applications_;
}

