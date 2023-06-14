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

#include <alibabacloud/ga/model/GetHealthStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

GetHealthStatusResult::GetHealthStatusResult() :
	ServiceResult()
{}

GetHealthStatusResult::GetHealthStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHealthStatusResult::~GetHealthStatusResult()
{}

void GetHealthStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEndpointGroupsNode = value["EndpointGroups"]["endpointGroupHealthStatuses"];
	for (auto valueEndpointGroupsendpointGroupHealthStatuses : allEndpointGroupsNode)
	{
		EndpointGroupHealthStatuses endpointGroupsObject;
		if(!valueEndpointGroupsendpointGroupHealthStatuses["EndpointGroupId"].isNull())
			endpointGroupsObject.endpointGroupId = valueEndpointGroupsendpointGroupHealthStatuses["EndpointGroupId"].asString();
		if(!valueEndpointGroupsendpointGroupHealthStatuses["EndpointGroupType"].isNull())
			endpointGroupsObject.endpointGroupType = valueEndpointGroupsendpointGroupHealthStatuses["EndpointGroupType"].asString();
		if(!valueEndpointGroupsendpointGroupHealthStatuses["HealthStatus"].isNull())
			endpointGroupsObject.healthStatus = valueEndpointGroupsendpointGroupHealthStatuses["HealthStatus"].asString();
		auto allEndpointsNode = valueEndpointGroupsendpointGroupHealthStatuses["Endpoints"]["endpointHealthStatuses"];
		for (auto valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses : allEndpointsNode)
		{
			EndpointGroupHealthStatuses::EndpointHealthStatuses endpointsObject;
			if(!valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["EndpointId"].isNull())
				endpointsObject.endpointId = valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["EndpointId"].asString();
			if(!valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["Address"].isNull())
				endpointsObject.address = valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["Address"].asString();
			if(!valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["HealthStatus"].isNull())
				endpointsObject.healthStatus = valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["HealthStatus"].asString();
			if(!valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["HealthDetail"].isNull())
				endpointsObject.healthDetail = valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["HealthDetail"].asString();
			if(!valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["Port"].isNull())
				endpointsObject.port = std::stol(valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["Port"].asString());
			if(!valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["Type"].isNull())
				endpointsObject.type = valueEndpointGroupsendpointGroupHealthStatusesEndpointsendpointHealthStatuses["Type"].asString();
			endpointGroupsObject.endpoints.push_back(endpointsObject);
		}
		auto allForwardingRuleIds = value["ForwardingRuleIds"]["forwardingRuleIds"];
		for (auto value : allForwardingRuleIds)
			endpointGroupsObject.forwardingRuleIds.push_back(value.asString());
		endpointGroups_.push_back(endpointGroupsObject);
	}
	if(!value["ListenerId"].isNull())
		listenerId_ = value["ListenerId"].asString();
	if(!value["HealthStatus"].isNull())
		healthStatus_ = value["HealthStatus"].asString();

}

std::string GetHealthStatusResult::getHealthStatus()const
{
	return healthStatus_;
}

std::vector<GetHealthStatusResult::EndpointGroupHealthStatuses> GetHealthStatusResult::getEndpointGroups()const
{
	return endpointGroups_;
}

std::string GetHealthStatusResult::getListenerId()const
{
	return listenerId_;
}

