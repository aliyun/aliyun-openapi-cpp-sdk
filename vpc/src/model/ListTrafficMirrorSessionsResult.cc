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

#include <alibabacloud/vpc/model/ListTrafficMirrorSessionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListTrafficMirrorSessionsResult::ListTrafficMirrorSessionsResult() :
	ServiceResult()
{}

ListTrafficMirrorSessionsResult::ListTrafficMirrorSessionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTrafficMirrorSessionsResult::~ListTrafficMirrorSessionsResult()
{}

void ListTrafficMirrorSessionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTrafficMirrorSessionsNode = value["TrafficMirrorSessions"]["TrafficMirrorSession"];
	for (auto valueTrafficMirrorSessionsTrafficMirrorSession : allTrafficMirrorSessionsNode)
	{
		TrafficMirrorSession trafficMirrorSessionsObject;
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorTargetId"].isNull())
			trafficMirrorSessionsObject.trafficMirrorTargetId = valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorTargetId"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionId"].isNull())
			trafficMirrorSessionsObject.trafficMirrorSessionId = valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionId"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["Priority"].isNull())
			trafficMirrorSessionsObject.priority = std::stoi(valueTrafficMirrorSessionsTrafficMirrorSession["Priority"].asString());
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorTargetType"].isNull())
			trafficMirrorSessionsObject.trafficMirrorTargetType = valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorTargetType"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["PacketLength"].isNull())
			trafficMirrorSessionsObject.packetLength = std::stoi(valueTrafficMirrorSessionsTrafficMirrorSession["PacketLength"].asString());
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionDescription"].isNull())
			trafficMirrorSessionsObject.trafficMirrorSessionDescription = valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionDescription"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionStatus"].isNull())
			trafficMirrorSessionsObject.trafficMirrorSessionStatus = valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionStatus"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["Enabled"].isNull())
			trafficMirrorSessionsObject.enabled = valueTrafficMirrorSessionsTrafficMirrorSession["Enabled"].asString() == "true";
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionBusinessStatus"].isNull())
			trafficMirrorSessionsObject.trafficMirrorSessionBusinessStatus = valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionBusinessStatus"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["VirtualNetworkId"].isNull())
			trafficMirrorSessionsObject.virtualNetworkId = std::stoi(valueTrafficMirrorSessionsTrafficMirrorSession["VirtualNetworkId"].asString());
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorFilterId"].isNull())
			trafficMirrorSessionsObject.trafficMirrorFilterId = valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorFilterId"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionName"].isNull())
			trafficMirrorSessionsObject.trafficMirrorSessionName = valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSessionName"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["ResourceGroupId"].isNull())
			trafficMirrorSessionsObject.resourceGroupId = valueTrafficMirrorSessionsTrafficMirrorSession["ResourceGroupId"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["CreationTime"].isNull())
			trafficMirrorSessionsObject.creationTime = valueTrafficMirrorSessionsTrafficMirrorSession["CreationTime"].asString();
		if(!valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSourceTruncateMode"].isNull())
			trafficMirrorSessionsObject.trafficMirrorSourceTruncateMode = std::stoi(valueTrafficMirrorSessionsTrafficMirrorSession["TrafficMirrorSourceTruncateMode"].asString());
		auto allTagsNode = valueTrafficMirrorSessionsTrafficMirrorSession["Tags"]["Tag"];
		for (auto valueTrafficMirrorSessionsTrafficMirrorSessionTagsTag : allTagsNode)
		{
			TrafficMirrorSession::Tag tagsObject;
			if(!valueTrafficMirrorSessionsTrafficMirrorSessionTagsTag["Key"].isNull())
				tagsObject.key = valueTrafficMirrorSessionsTrafficMirrorSessionTagsTag["Key"].asString();
			if(!valueTrafficMirrorSessionsTrafficMirrorSessionTagsTag["Value"].isNull())
				tagsObject.value = valueTrafficMirrorSessionsTrafficMirrorSessionTagsTag["Value"].asString();
			trafficMirrorSessionsObject.tags.push_back(tagsObject);
		}
		auto allTrafficMirrorSourceIds = value["TrafficMirrorSourceIds"]["TrafficMirrorSourceId"];
		for (auto value : allTrafficMirrorSourceIds)
			trafficMirrorSessionsObject.trafficMirrorSourceIds.push_back(value.asString());
		trafficMirrorSessions_.push_back(trafficMirrorSessionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListTrafficMirrorSessionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTrafficMirrorSessionsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListTrafficMirrorSessionsResult::TrafficMirrorSession> ListTrafficMirrorSessionsResult::getTrafficMirrorSessions()const
{
	return trafficMirrorSessions_;
}

