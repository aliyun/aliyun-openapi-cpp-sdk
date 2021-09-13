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

#include <alibabacloud/linkwan/model/ListNodeGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListNodeGroupsResult::ListNodeGroupsResult() :
	ServiceResult()
{}

ListNodeGroupsResult::ListNodeGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeGroupsResult::~ListNodeGroupsResult()
{}

void ListNodeGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["NodeGroup"];
	for (auto dataNodeListNodeGroup : allListNode)
	{
		Data::NodeGroup nodeGroupObject;
		if(!dataNodeListNodeGroup["NodeGroupId"].isNull())
			nodeGroupObject.nodeGroupId = dataNodeListNodeGroup["NodeGroupId"].asString();
		if(!dataNodeListNodeGroup["NodeGroupName"].isNull())
			nodeGroupObject.nodeGroupName = dataNodeListNodeGroup["NodeGroupName"].asString();
		if(!dataNodeListNodeGroup["NodesCnt"].isNull())
			nodeGroupObject.nodesCnt = std::stol(dataNodeListNodeGroup["NodesCnt"].asString());
		if(!dataNodeListNodeGroup["DataDispatchEnabled"].isNull())
			nodeGroupObject.dataDispatchEnabled = dataNodeListNodeGroup["DataDispatchEnabled"].asString() == "true";
		if(!dataNodeListNodeGroup["JoinPermissionId"].isNull())
			nodeGroupObject.joinPermissionId = dataNodeListNodeGroup["JoinPermissionId"].asString();
		if(!dataNodeListNodeGroup["JoinPermissionOwnerAliyunId"].isNull())
			nodeGroupObject.joinPermissionOwnerAliyunId = dataNodeListNodeGroup["JoinPermissionOwnerAliyunId"].asString();
		if(!dataNodeListNodeGroup["JoinEui"].isNull())
			nodeGroupObject.joinEui = dataNodeListNodeGroup["JoinEui"].asString();
		if(!dataNodeListNodeGroup["FreqBandPlanGroupId"].isNull())
			nodeGroupObject.freqBandPlanGroupId = std::stol(dataNodeListNodeGroup["FreqBandPlanGroupId"].asString());
		if(!dataNodeListNodeGroup["ClassMode"].isNull())
			nodeGroupObject.classMode = dataNodeListNodeGroup["ClassMode"].asString();
		if(!dataNodeListNodeGroup["JoinPermissionType"].isNull())
			nodeGroupObject.joinPermissionType = dataNodeListNodeGroup["JoinPermissionType"].asString();
		if(!dataNodeListNodeGroup["JoinPermissionEnabled"].isNull())
			nodeGroupObject.joinPermissionEnabled = dataNodeListNodeGroup["JoinPermissionEnabled"].asString() == "true";
		if(!dataNodeListNodeGroup["RxDailySum"].isNull())
			nodeGroupObject.rxDailySum = std::stol(dataNodeListNodeGroup["RxDailySum"].asString());
		if(!dataNodeListNodeGroup["RxMonthSum"].isNull())
			nodeGroupObject.rxMonthSum = std::stol(dataNodeListNodeGroup["RxMonthSum"].asString());
		if(!dataNodeListNodeGroup["TxDailySum"].isNull())
			nodeGroupObject.txDailySum = std::stol(dataNodeListNodeGroup["TxDailySum"].asString());
		if(!dataNodeListNodeGroup["TxMonthSum"].isNull())
			nodeGroupObject.txMonthSum = std::stol(dataNodeListNodeGroup["TxMonthSum"].asString());
		if(!dataNodeListNodeGroup["CreateMillis"].isNull())
			nodeGroupObject.createMillis = std::stol(dataNodeListNodeGroup["CreateMillis"].asString());
		if(!dataNodeListNodeGroup["JoinPermissionName"].isNull())
			nodeGroupObject.joinPermissionName = dataNodeListNodeGroup["JoinPermissionName"].asString();
		auto allLocksNode = dataNodeListNodeGroup["Locks"]["Lock"];
		for (auto dataNodeListNodeGroupLocksLock : allLocksNode)
		{
			Data::NodeGroup::Lock locksObject;
			if(!dataNodeListNodeGroupLocksLock["LockId"].isNull())
				locksObject.lockId = dataNodeListNodeGroupLocksLock["LockId"].asString();
			if(!dataNodeListNodeGroupLocksLock["LockType"].isNull())
				locksObject.lockType = dataNodeListNodeGroupLocksLock["LockType"].asString();
			if(!dataNodeListNodeGroupLocksLock["Enabled"].isNull())
				locksObject.enabled = dataNodeListNodeGroupLocksLock["Enabled"].asString() == "true";
			if(!dataNodeListNodeGroupLocksLock["CreateMillis"].isNull())
				locksObject.createMillis = std::stol(dataNodeListNodeGroupLocksLock["CreateMillis"].asString());
			nodeGroupObject.locks.push_back(locksObject);
		}
		auto dataDispatchConfigNode = value["DataDispatchConfig"];
		if(!dataDispatchConfigNode["Destination"].isNull())
			nodeGroupObject.dataDispatchConfig.destination = dataDispatchConfigNode["Destination"].asString();
		auto iotProductNode = dataDispatchConfigNode["IotProduct"];
		if(!iotProductNode["ProductName"].isNull())
			nodeGroupObject.dataDispatchConfig.iotProduct.productName = iotProductNode["ProductName"].asString();
		if(!iotProductNode["ProductKey"].isNull())
			nodeGroupObject.dataDispatchConfig.iotProduct.productKey = iotProductNode["ProductKey"].asString();
		if(!iotProductNode["ProductType"].isNull())
			nodeGroupObject.dataDispatchConfig.iotProduct.productType = iotProductNode["ProductType"].asString();
		if(!iotProductNode["DebugSwitch"].isNull())
			nodeGroupObject.dataDispatchConfig.iotProduct.debugSwitch = iotProductNode["DebugSwitch"].asString() == "true";
		auto onsTopicsNode = dataDispatchConfigNode["OnsTopics"];
		if(!onsTopicsNode["DownlinkRegionName"].isNull())
			nodeGroupObject.dataDispatchConfig.onsTopics.downlinkRegionName = onsTopicsNode["DownlinkRegionName"].asString();
		if(!onsTopicsNode["DownlinkTopic"].isNull())
			nodeGroupObject.dataDispatchConfig.onsTopics.downlinkTopic = onsTopicsNode["DownlinkTopic"].asString();
		if(!onsTopicsNode["UplinkRegionName"].isNull())
			nodeGroupObject.dataDispatchConfig.onsTopics.uplinkRegionName = onsTopicsNode["UplinkRegionName"].asString();
		if(!onsTopicsNode["UplinkTopic"].isNull())
			nodeGroupObject.dataDispatchConfig.onsTopics.uplinkTopic = onsTopicsNode["UplinkTopic"].asString();
		data_.list.push_back(nodeGroupObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListNodeGroupsResult::Data ListNodeGroupsResult::getData()const
{
	return data_;
}

bool ListNodeGroupsResult::getSuccess()const
{
	return success_;
}

