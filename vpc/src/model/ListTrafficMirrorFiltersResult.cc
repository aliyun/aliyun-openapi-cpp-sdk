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

#include <alibabacloud/vpc/model/ListTrafficMirrorFiltersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListTrafficMirrorFiltersResult::ListTrafficMirrorFiltersResult() :
	ServiceResult()
{}

ListTrafficMirrorFiltersResult::ListTrafficMirrorFiltersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTrafficMirrorFiltersResult::~ListTrafficMirrorFiltersResult()
{}

void ListTrafficMirrorFiltersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficMirrorFiltersNode = value["TrafficMirrorFilters"]["TrafficMirrorFilter"];
	for (auto valueTrafficMirrorFiltersTrafficMirrorFilter : allTrafficMirrorFiltersNode)
	{
		TrafficMirrorFilter trafficMirrorFiltersObject;
		if(!valueTrafficMirrorFiltersTrafficMirrorFilter["TrafficMirrorFilterStatus"].isNull())
			trafficMirrorFiltersObject.trafficMirrorFilterStatus = valueTrafficMirrorFiltersTrafficMirrorFilter["TrafficMirrorFilterStatus"].asString();
		if(!valueTrafficMirrorFiltersTrafficMirrorFilter["TrafficMirrorFilterDescription"].isNull())
			trafficMirrorFiltersObject.trafficMirrorFilterDescription = valueTrafficMirrorFiltersTrafficMirrorFilter["TrafficMirrorFilterDescription"].asString();
		if(!valueTrafficMirrorFiltersTrafficMirrorFilter["TrafficMirrorFilterId"].isNull())
			trafficMirrorFiltersObject.trafficMirrorFilterId = valueTrafficMirrorFiltersTrafficMirrorFilter["TrafficMirrorFilterId"].asString();
		if(!valueTrafficMirrorFiltersTrafficMirrorFilter["TrafficMirrorFilterName"].isNull())
			trafficMirrorFiltersObject.trafficMirrorFilterName = valueTrafficMirrorFiltersTrafficMirrorFilter["TrafficMirrorFilterName"].asString();
		if(!valueTrafficMirrorFiltersTrafficMirrorFilter["ResourceGroupId"].isNull())
			trafficMirrorFiltersObject.resourceGroupId = valueTrafficMirrorFiltersTrafficMirrorFilter["ResourceGroupId"].asString();
		if(!valueTrafficMirrorFiltersTrafficMirrorFilter["CreationTime"].isNull())
			trafficMirrorFiltersObject.creationTime = valueTrafficMirrorFiltersTrafficMirrorFilter["CreationTime"].asString();
		auto allIngressRulesNode = valueTrafficMirrorFiltersTrafficMirrorFilter["IngressRules"]["TrafficMirrorRule"];
		for (auto valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule : allIngressRulesNode)
		{
			TrafficMirrorFilter::TrafficMirrorRule ingressRulesObject;
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["TrafficMirrorFilterRuleStatus"].isNull())
				ingressRulesObject.trafficMirrorFilterRuleStatus = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["TrafficMirrorFilterRuleStatus"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["Action"].isNull())
				ingressRulesObject.action = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["Action"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["SourceCidrBlock"].isNull())
				ingressRulesObject.sourceCidrBlock = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["SourceCidrBlock"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["TrafficDirection"].isNull())
				ingressRulesObject.trafficDirection = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["TrafficDirection"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["Protocol"].isNull())
				ingressRulesObject.protocol = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["Protocol"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["IpVersion"].isNull())
				ingressRulesObject.ipVersion = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["IpVersion"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["DestinationPortRange"].isNull())
				ingressRulesObject.destinationPortRange = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["DestinationPortRange"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["TrafficMirrorFilterRuleId"].isNull())
				ingressRulesObject.trafficMirrorFilterRuleId = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["TrafficMirrorFilterRuleId"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["DestinationCidrBlock"].isNull())
				ingressRulesObject.destinationCidrBlock = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["DestinationCidrBlock"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["Priority"].isNull())
				ingressRulesObject.priority = std::stoi(valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["Priority"].asString());
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["TrafficMirrorFilterId"].isNull())
				ingressRulesObject.trafficMirrorFilterId = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["TrafficMirrorFilterId"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["SourcePortRange"].isNull())
				ingressRulesObject.sourcePortRange = valueTrafficMirrorFiltersTrafficMirrorFilterIngressRulesTrafficMirrorRule["SourcePortRange"].asString();
			trafficMirrorFiltersObject.ingressRules.push_back(ingressRulesObject);
		}
		auto allEgressRulesNode = valueTrafficMirrorFiltersTrafficMirrorFilter["EgressRules"]["TrafficMirrorRule"];
		for (auto valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule : allEgressRulesNode)
		{
			TrafficMirrorFilter::TrafficMirrorRule egressRulesObject;
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["TrafficMirrorFilterRuleStatus"].isNull())
				egressRulesObject.trafficMirrorFilterRuleStatus = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["TrafficMirrorFilterRuleStatus"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["Action"].isNull())
				egressRulesObject.action = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["Action"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["SourceCidrBlock"].isNull())
				egressRulesObject.sourceCidrBlock = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["SourceCidrBlock"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["TrafficDirection"].isNull())
				egressRulesObject.trafficDirection = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["TrafficDirection"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["Protocol"].isNull())
				egressRulesObject.protocol = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["Protocol"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["IpVersion"].isNull())
				egressRulesObject.ipVersion = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["IpVersion"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["DestinationPortRange"].isNull())
				egressRulesObject.destinationPortRange = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["DestinationPortRange"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["TrafficMirrorFilterRuleId"].isNull())
				egressRulesObject.trafficMirrorFilterRuleId = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["TrafficMirrorFilterRuleId"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["DestinationCidrBlock"].isNull())
				egressRulesObject.destinationCidrBlock = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["DestinationCidrBlock"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["Priority"].isNull())
				egressRulesObject.priority = std::stoi(valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["Priority"].asString());
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["TrafficMirrorFilterId"].isNull())
				egressRulesObject.trafficMirrorFilterId = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["TrafficMirrorFilterId"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["SourcePortRange"].isNull())
				egressRulesObject.sourcePortRange = valueTrafficMirrorFiltersTrafficMirrorFilterEgressRulesTrafficMirrorRule["SourcePortRange"].asString();
			trafficMirrorFiltersObject.egressRules.push_back(egressRulesObject);
		}
		auto allTagsNode = valueTrafficMirrorFiltersTrafficMirrorFilter["Tags"]["Tag"];
		for (auto valueTrafficMirrorFiltersTrafficMirrorFilterTagsTag : allTagsNode)
		{
			TrafficMirrorFilter::Tag tagsObject;
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterTagsTag["Key"].isNull())
				tagsObject.key = valueTrafficMirrorFiltersTrafficMirrorFilterTagsTag["Key"].asString();
			if(!valueTrafficMirrorFiltersTrafficMirrorFilterTagsTag["Value"].isNull())
				tagsObject.value = valueTrafficMirrorFiltersTrafficMirrorFilterTagsTag["Value"].asString();
			trafficMirrorFiltersObject.tags.push_back(tagsObject);
		}
		trafficMirrorFilters_.push_back(trafficMirrorFiltersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<ListTrafficMirrorFiltersResult::TrafficMirrorFilter> ListTrafficMirrorFiltersResult::getTrafficMirrorFilters()const
{
	return trafficMirrorFilters_;
}

std::string ListTrafficMirrorFiltersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTrafficMirrorFiltersResult::getNextToken()const
{
	return nextToken_;
}

int ListTrafficMirrorFiltersResult::getMaxResults()const
{
	return maxResults_;
}

int ListTrafficMirrorFiltersResult::getCount()const
{
	return count_;
}

