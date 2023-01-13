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

#include <alibabacloud/cbn/model/ListCenInterRegionTrafficQosQueuesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListCenInterRegionTrafficQosQueuesResult::ListCenInterRegionTrafficQosQueuesResult() :
	ServiceResult()
{}

ListCenInterRegionTrafficQosQueuesResult::ListCenInterRegionTrafficQosQueuesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCenInterRegionTrafficQosQueuesResult::~ListCenInterRegionTrafficQosQueuesResult()
{}

void ListCenInterRegionTrafficQosQueuesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficQosQueuesNode = value["TrafficQosQueues"]["TrafficQosQueue"];
	for (auto valueTrafficQosQueuesTrafficQosQueue : allTrafficQosQueuesNode)
	{
		TrafficQosQueue trafficQosQueuesObject;
		if(!valueTrafficQosQueuesTrafficQosQueue["TransitRouterAttachmentId"].isNull())
			trafficQosQueuesObject.transitRouterAttachmentId = valueTrafficQosQueuesTrafficQosQueue["TransitRouterAttachmentId"].asString();
		if(!valueTrafficQosQueuesTrafficQosQueue["TransitRouterId"].isNull())
			trafficQosQueuesObject.transitRouterId = valueTrafficQosQueuesTrafficQosQueue["TransitRouterId"].asString();
		if(!valueTrafficQosQueuesTrafficQosQueue["TrafficQosQueueName"].isNull())
			trafficQosQueuesObject.trafficQosQueueName = valueTrafficQosQueuesTrafficQosQueue["TrafficQosQueueName"].asString();
		if(!valueTrafficQosQueuesTrafficQosQueue["RemainBandwidthPercent"].isNull())
			trafficQosQueuesObject.remainBandwidthPercent = std::stoi(valueTrafficQosQueuesTrafficQosQueue["RemainBandwidthPercent"].asString());
		if(!valueTrafficQosQueuesTrafficQosQueue["TrafficQosPolicyId"].isNull())
			trafficQosQueuesObject.trafficQosPolicyId = valueTrafficQosQueuesTrafficQosQueue["TrafficQosPolicyId"].asString();
		if(!valueTrafficQosQueuesTrafficQosQueue["TrafficQosQueueId"].isNull())
			trafficQosQueuesObject.trafficQosQueueId = valueTrafficQosQueuesTrafficQosQueue["TrafficQosQueueId"].asString();
		if(!valueTrafficQosQueuesTrafficQosQueue["TrafficQosQueueDescription"].isNull())
			trafficQosQueuesObject.trafficQosQueueDescription = valueTrafficQosQueuesTrafficQosQueue["TrafficQosQueueDescription"].asString();
		if(!valueTrafficQosQueuesTrafficQosQueue["Status"].isNull())
			trafficQosQueuesObject.status = valueTrafficQosQueuesTrafficQosQueue["Status"].asString();
		auto allDscps = value["Dscps"]["Dscp"];
		for (auto value : allDscps)
			trafficQosQueuesObject.dscps.push_back(value.asString());
		trafficQosQueues_.push_back(trafficQosQueuesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<ListCenInterRegionTrafficQosQueuesResult::TrafficQosQueue> ListCenInterRegionTrafficQosQueuesResult::getTrafficQosQueues()const
{
	return trafficQosQueues_;
}

std::string ListCenInterRegionTrafficQosQueuesResult::getNextToken()const
{
	return nextToken_;
}

