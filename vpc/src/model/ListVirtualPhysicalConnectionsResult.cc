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

#include <alibabacloud/vpc/model/ListVirtualPhysicalConnectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListVirtualPhysicalConnectionsResult::ListVirtualPhysicalConnectionsResult() :
	ServiceResult()
{}

ListVirtualPhysicalConnectionsResult::ListVirtualPhysicalConnectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVirtualPhysicalConnectionsResult::~ListVirtualPhysicalConnectionsResult()
{}

void ListVirtualPhysicalConnectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVirtualPhysicalConnectionsNode = value["VirtualPhysicalConnections"]["VirtualPhysicalConnection"];
	for (auto valueVirtualPhysicalConnectionsVirtualPhysicalConnection : allVirtualPhysicalConnectionsNode)
	{
		VirtualPhysicalConnection virtualPhysicalConnectionsObject;
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Type"].isNull())
			virtualPhysicalConnectionsObject.type = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Type"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Status"].isNull())
			virtualPhysicalConnectionsObject.status = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Status"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["CreationTime"].isNull())
			virtualPhysicalConnectionsObject.creationTime = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["CreationTime"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["AdLocation"].isNull())
			virtualPhysicalConnectionsObject.adLocation = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["AdLocation"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["PortNumber"].isNull())
			virtualPhysicalConnectionsObject.portNumber = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["PortNumber"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Spec"].isNull())
			virtualPhysicalConnectionsObject.spec = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Spec"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ChargeType"].isNull())
			virtualPhysicalConnectionsObject.chargeType = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ChargeType"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Description"].isNull())
			virtualPhysicalConnectionsObject.description = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Description"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Bandwidth"].isNull())
			virtualPhysicalConnectionsObject.bandwidth = std::stol(valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Bandwidth"].asString());
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["EnabledTime"].isNull())
			virtualPhysicalConnectionsObject.enabledTime = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["EnabledTime"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["LineOperator"].isNull())
			virtualPhysicalConnectionsObject.lineOperator = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["LineOperator"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["PeerLocation"].isNull())
			virtualPhysicalConnectionsObject.peerLocation = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["PeerLocation"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["RedundantPhysicalConnectionId"].isNull())
			virtualPhysicalConnectionsObject.redundantPhysicalConnectionId = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["RedundantPhysicalConnectionId"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Name"].isNull())
			virtualPhysicalConnectionsObject.name = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Name"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["CircuitCode"].isNull())
			virtualPhysicalConnectionsObject.circuitCode = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["CircuitCode"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["EndTime"].isNull())
			virtualPhysicalConnectionsObject.endTime = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["EndTime"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["PortType"].isNull())
			virtualPhysicalConnectionsObject.portType = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["PortType"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["BusinessStatus"].isNull())
			virtualPhysicalConnectionsObject.businessStatus = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["BusinessStatus"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["LoaStatus"].isNull())
			virtualPhysicalConnectionsObject.loaStatus = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["LoaStatus"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["AccessPointId"].isNull())
			virtualPhysicalConnectionsObject.accessPointId = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["AccessPointId"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["PhysicalConnectionId"].isNull())
			virtualPhysicalConnectionsObject.physicalConnectionId = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["PhysicalConnectionId"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ProductType"].isNull())
			virtualPhysicalConnectionsObject.productType = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ProductType"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ParentPhysicalConnectionId"].isNull())
			virtualPhysicalConnectionsObject.parentPhysicalConnectionId = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ParentPhysicalConnectionId"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["VirtualPhysicalConnectionStatus"].isNull())
			virtualPhysicalConnectionsObject.virtualPhysicalConnectionStatus = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["VirtualPhysicalConnectionStatus"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ParentPhysicalConnectionAliUid"].isNull())
			virtualPhysicalConnectionsObject.parentPhysicalConnectionAliUid = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ParentPhysicalConnectionAliUid"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["OrderMode"].isNull())
			virtualPhysicalConnectionsObject.orderMode = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["OrderMode"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["AliUid"].isNull())
			virtualPhysicalConnectionsObject.aliUid = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["AliUid"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["VlanId"].isNull())
			virtualPhysicalConnectionsObject.vlanId = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["VlanId"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ExpectSpec"].isNull())
			virtualPhysicalConnectionsObject.expectSpec = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ExpectSpec"].asString();
		if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ResourceGroupId"].isNull())
			virtualPhysicalConnectionsObject.resourceGroupId = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["ResourceGroupId"].asString();
		auto allTagsNode = valueVirtualPhysicalConnectionsVirtualPhysicalConnection["Tags"]["tagsItem"];
		for (auto valueVirtualPhysicalConnectionsVirtualPhysicalConnectionTagstagsItem : allTagsNode)
		{
			VirtualPhysicalConnection::TagsItem tagsObject;
			if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnectionTagstagsItem["Key"].isNull())
				tagsObject.key = valueVirtualPhysicalConnectionsVirtualPhysicalConnectionTagstagsItem["Key"].asString();
			if(!valueVirtualPhysicalConnectionsVirtualPhysicalConnectionTagstagsItem["Value"].isNull())
				tagsObject.value = valueVirtualPhysicalConnectionsVirtualPhysicalConnectionTagstagsItem["Value"].asString();
			virtualPhysicalConnectionsObject.tags.push_back(tagsObject);
		}
		virtualPhysicalConnections_.push_back(virtualPhysicalConnectionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int ListVirtualPhysicalConnectionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListVirtualPhysicalConnectionsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListVirtualPhysicalConnectionsResult::VirtualPhysicalConnection> ListVirtualPhysicalConnectionsResult::getVirtualPhysicalConnections()const
{
	return virtualPhysicalConnections_;
}

int ListVirtualPhysicalConnectionsResult::getCount()const
{
	return count_;
}

