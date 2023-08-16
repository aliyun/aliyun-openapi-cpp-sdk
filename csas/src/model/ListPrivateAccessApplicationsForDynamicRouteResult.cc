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

#include <alibabacloud/csas/model/ListPrivateAccessApplicationsForDynamicRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListPrivateAccessApplicationsForDynamicRouteResult::ListPrivateAccessApplicationsForDynamicRouteResult() :
	ServiceResult()
{}

ListPrivateAccessApplicationsForDynamicRouteResult::ListPrivateAccessApplicationsForDynamicRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivateAccessApplicationsForDynamicRouteResult::~ListPrivateAccessApplicationsForDynamicRouteResult()
{}

void ListPrivateAccessApplicationsForDynamicRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDynamicRoutesNode = value["DynamicRoutes"]["dynamicRoute"];
	for (auto valueDynamicRoutesdynamicRoute : allDynamicRoutesNode)
	{
		DynamicRoute dynamicRoutesObject;
		if(!valueDynamicRoutesdynamicRoute["DynamicRouteId"].isNull())
			dynamicRoutesObject.dynamicRouteId = valueDynamicRoutesdynamicRoute["DynamicRouteId"].asString();
		auto allApplicationsNode = valueDynamicRoutesdynamicRoute["Applications"]["application"];
		for (auto valueDynamicRoutesdynamicRouteApplicationsapplication : allApplicationsNode)
		{
			DynamicRoute::Application applicationsObject;
			if(!valueDynamicRoutesdynamicRouteApplicationsapplication["ApplicationId"].isNull())
				applicationsObject.applicationId = valueDynamicRoutesdynamicRouteApplicationsapplication["ApplicationId"].asString();
			if(!valueDynamicRoutesdynamicRouteApplicationsapplication["Name"].isNull())
				applicationsObject.name = valueDynamicRoutesdynamicRouteApplicationsapplication["Name"].asString();
			if(!valueDynamicRoutesdynamicRouteApplicationsapplication["Description"].isNull())
				applicationsObject.description = valueDynamicRoutesdynamicRouteApplicationsapplication["Description"].asString();
			if(!valueDynamicRoutesdynamicRouteApplicationsapplication["Protocol"].isNull())
				applicationsObject.protocol = valueDynamicRoutesdynamicRouteApplicationsapplication["Protocol"].asString();
			if(!valueDynamicRoutesdynamicRouteApplicationsapplication["Status"].isNull())
				applicationsObject.status = valueDynamicRoutesdynamicRouteApplicationsapplication["Status"].asString();
			if(!valueDynamicRoutesdynamicRouteApplicationsapplication["CreateTime"].isNull())
				applicationsObject.createTime = valueDynamicRoutesdynamicRouteApplicationsapplication["CreateTime"].asString();
			auto allPortRangesNode = valueDynamicRoutesdynamicRouteApplicationsapplication["PortRanges"]["portRange"];
			for (auto valueDynamicRoutesdynamicRouteApplicationsapplicationPortRangesportRange : allPortRangesNode)
			{
				DynamicRoute::Application::PortRange portRangesObject;
				if(!valueDynamicRoutesdynamicRouteApplicationsapplicationPortRangesportRange["Begin"].isNull())
					portRangesObject.begin = std::stoi(valueDynamicRoutesdynamicRouteApplicationsapplicationPortRangesportRange["Begin"].asString());
				if(!valueDynamicRoutesdynamicRouteApplicationsapplicationPortRangesportRange["End"].isNull())
					portRangesObject.end = std::stoi(valueDynamicRoutesdynamicRouteApplicationsapplicationPortRangesportRange["End"].asString());
				applicationsObject.portRanges.push_back(portRangesObject);
			}
			auto allAddresses = value["Addresses"]["address"];
			for (auto value : allAddresses)
				applicationsObject.addresses.push_back(value.asString());
			dynamicRoutesObject.applications.push_back(applicationsObject);
		}
		dynamicRoutes_.push_back(dynamicRoutesObject);
	}

}

std::vector<ListPrivateAccessApplicationsForDynamicRouteResult::DynamicRoute> ListPrivateAccessApplicationsForDynamicRouteResult::getDynamicRoutes()const
{
	return dynamicRoutes_;
}

