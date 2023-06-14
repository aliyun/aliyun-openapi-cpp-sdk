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

#include <alibabacloud/ga/model/ListCustomRoutingEndpointTrafficPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListCustomRoutingEndpointTrafficPoliciesResult::ListCustomRoutingEndpointTrafficPoliciesResult() :
	ServiceResult()
{}

ListCustomRoutingEndpointTrafficPoliciesResult::ListCustomRoutingEndpointTrafficPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomRoutingEndpointTrafficPoliciesResult::~ListCustomRoutingEndpointTrafficPoliciesResult()
{}

void ListCustomRoutingEndpointTrafficPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["policiesItem"];
	for (auto valuePoliciespoliciesItem : allPoliciesNode)
	{
		PoliciesItem policiesObject;
		if(!valuePoliciespoliciesItem["AcceleratorId"].isNull())
			policiesObject.acceleratorId = valuePoliciespoliciesItem["AcceleratorId"].asString();
		if(!valuePoliciespoliciesItem["ListenerId"].isNull())
			policiesObject.listenerId = valuePoliciespoliciesItem["ListenerId"].asString();
		if(!valuePoliciespoliciesItem["EndpointGroupId"].isNull())
			policiesObject.endpointGroupId = valuePoliciespoliciesItem["EndpointGroupId"].asString();
		if(!valuePoliciespoliciesItem["EndpointId"].isNull())
			policiesObject.endpointId = valuePoliciespoliciesItem["EndpointId"].asString();
		if(!valuePoliciespoliciesItem["PolicyId"].isNull())
			policiesObject.policyId = valuePoliciespoliciesItem["PolicyId"].asString();
		if(!valuePoliciespoliciesItem["Address"].isNull())
			policiesObject.address = valuePoliciespoliciesItem["Address"].asString();
		auto allPortRangesNode = valuePoliciespoliciesItem["PortRanges"]["portRangesItem"];
		for (auto valuePoliciespoliciesItemPortRangesportRangesItem : allPortRangesNode)
		{
			PoliciesItem::PortRangesItem portRangesObject;
			if(!valuePoliciespoliciesItemPortRangesportRangesItem["FromPort"].isNull())
				portRangesObject.fromPort = std::stoi(valuePoliciespoliciesItemPortRangesportRangesItem["FromPort"].asString());
			if(!valuePoliciespoliciesItemPortRangesportRangesItem["ToPort"].isNull())
				portRangesObject.toPort = std::stoi(valuePoliciespoliciesItemPortRangesportRangesItem["ToPort"].asString());
			policiesObject.portRanges.push_back(portRangesObject);
		}
		policies_.push_back(policiesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListCustomRoutingEndpointTrafficPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListCustomRoutingEndpointTrafficPoliciesResult::PoliciesItem> ListCustomRoutingEndpointTrafficPoliciesResult::getPolicies()const
{
	return policies_;
}

int ListCustomRoutingEndpointTrafficPoliciesResult::getPageSize()const
{
	return pageSize_;
}

int ListCustomRoutingEndpointTrafficPoliciesResult::getPageNumber()const
{
	return pageNumber_;
}

