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

#include <alibabacloud/gpdb/model/DescribeDBInstanceDiagnosisSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBInstanceDiagnosisSummaryResult::DescribeDBInstanceDiagnosisSummaryResult() :
	ServiceResult()
{}

DescribeDBInstanceDiagnosisSummaryResult::DescribeDBInstanceDiagnosisSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceDiagnosisSummaryResult::~DescribeDBInstanceDiagnosisSummaryResult()
{}

void DescribeDBInstanceDiagnosisSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["Hostname"].isNull())
			itemsObject.hostname = valueItemsItemsItem["Hostname"].asString();
		if(!valueItemsItemsItem["NodeAddress"].isNull())
			itemsObject.nodeAddress = valueItemsItemsItem["NodeAddress"].asString();
		if(!valueItemsItemsItem["NodeType"].isNull())
			itemsObject.nodeType = valueItemsItemsItem["NodeType"].asString();
		if(!valueItemsItemsItem["NodeName"].isNull())
			itemsObject.nodeName = valueItemsItemsItem["NodeName"].asString();
		if(!valueItemsItemsItem["NodePort"].isNull())
			itemsObject.nodePort = valueItemsItemsItem["NodePort"].asString();
		if(!valueItemsItemsItem["NodeID"].isNull())
			itemsObject.nodeID = valueItemsItemsItem["NodeID"].asString();
		if(!valueItemsItemsItem["NodeStatus"].isNull())
			itemsObject.nodeStatus = valueItemsItemsItem["NodeStatus"].asString();
		if(!valueItemsItemsItem["NodeRole"].isNull())
			itemsObject.nodeRole = valueItemsItemsItem["NodeRole"].asString();
		if(!valueItemsItemsItem["NodePreferredRole"].isNull())
			itemsObject.nodePreferredRole = valueItemsItemsItem["NodePreferredRole"].asString();
		if(!valueItemsItemsItem["NodeReplicationMode"].isNull())
			itemsObject.nodeReplicationMode = valueItemsItemsItem["NodeReplicationMode"].asString();
		if(!valueItemsItemsItem["NodeCID"].isNull())
			itemsObject.nodeCID = valueItemsItemsItem["NodeCID"].asString();
		items_.push_back(itemsObject);
	}
	auto masterStatusInfoNode = value["MasterStatusInfo"];
	if(!masterStatusInfoNode["NormalNodeNum"].isNull())
		masterStatusInfo_.normalNodeNum = std::stoi(masterStatusInfoNode["NormalNodeNum"].asString());
	if(!masterStatusInfoNode["ExceptionNodeNum"].isNull())
		masterStatusInfo_.exceptionNodeNum = std::stoi(masterStatusInfoNode["ExceptionNodeNum"].asString());
	if(!masterStatusInfoNode["NotSyncingNodeNum"].isNull())
		masterStatusInfo_.notSyncingNodeNum = std::stoi(masterStatusInfoNode["NotSyncingNodeNum"].asString());
	if(!masterStatusInfoNode["SyncedNodeNum"].isNull())
		masterStatusInfo_.syncedNodeNum = std::stoi(masterStatusInfoNode["SyncedNodeNum"].asString());
	if(!masterStatusInfoNode["PreferredNodeNum"].isNull())
		masterStatusInfo_.preferredNodeNum = std::stoi(masterStatusInfoNode["PreferredNodeNum"].asString());
	if(!masterStatusInfoNode["NotPreferredNodeNum"].isNull())
		masterStatusInfo_.notPreferredNodeNum = std::stoi(masterStatusInfoNode["NotPreferredNodeNum"].asString());
	auto segmentStatusInfoNode = value["SegmentStatusInfo"];
	if(!segmentStatusInfoNode["NormalNodeNum"].isNull())
		segmentStatusInfo_.normalNodeNum = std::stoi(segmentStatusInfoNode["NormalNodeNum"].asString());
	if(!segmentStatusInfoNode["ExceptionNodeNum"].isNull())
		segmentStatusInfo_.exceptionNodeNum = std::stoi(segmentStatusInfoNode["ExceptionNodeNum"].asString());
	if(!segmentStatusInfoNode["NotSyncingNodeNum"].isNull())
		segmentStatusInfo_.notSyncingNodeNum = std::stoi(segmentStatusInfoNode["NotSyncingNodeNum"].asString());
	if(!segmentStatusInfoNode["SyncedNodeNum"].isNull())
		segmentStatusInfo_.syncedNodeNum = std::stoi(segmentStatusInfoNode["SyncedNodeNum"].asString());
	if(!segmentStatusInfoNode["PreferredNodeNum"].isNull())
		segmentStatusInfo_.preferredNodeNum = std::stoi(segmentStatusInfoNode["PreferredNodeNum"].asString());
	if(!segmentStatusInfoNode["NotPreferredNodeNum"].isNull())
		segmentStatusInfo_.notPreferredNodeNum = std::stoi(segmentStatusInfoNode["NotPreferredNodeNum"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

DescribeDBInstanceDiagnosisSummaryResult::SegmentStatusInfo DescribeDBInstanceDiagnosisSummaryResult::getSegmentStatusInfo()const
{
	return segmentStatusInfo_;
}

std::string DescribeDBInstanceDiagnosisSummaryResult::getTotalCount()const
{
	return totalCount_;
}

DescribeDBInstanceDiagnosisSummaryResult::MasterStatusInfo DescribeDBInstanceDiagnosisSummaryResult::getMasterStatusInfo()const
{
	return masterStatusInfo_;
}

std::string DescribeDBInstanceDiagnosisSummaryResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstanceDiagnosisSummaryResult::ItemsItem> DescribeDBInstanceDiagnosisSummaryResult::getItems()const
{
	return items_;
}

