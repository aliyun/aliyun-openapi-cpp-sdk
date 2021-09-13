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

#include <alibabacloud/linkwan/model/GetNodeGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetNodeGroupResult::GetNodeGroupResult() :
	ServiceResult()
{}

GetNodeGroupResult::GetNodeGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNodeGroupResult::~GetNodeGroupResult()
{}

void GetNodeGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NodeGroupId"].isNull())
		data_.nodeGroupId = dataNode["NodeGroupId"].asString();
	if(!dataNode["NodeGroupName"].isNull())
		data_.nodeGroupName = dataNode["NodeGroupName"].asString();
	if(!dataNode["NodesCnt"].isNull())
		data_.nodesCnt = std::stol(dataNode["NodesCnt"].asString());
	if(!dataNode["DataDispatchEnabled"].isNull())
		data_.dataDispatchEnabled = dataNode["DataDispatchEnabled"].asString() == "true";
	if(!dataNode["JoinPermissionId"].isNull())
		data_.joinPermissionId = dataNode["JoinPermissionId"].asString();
	if(!dataNode["JoinPermissionOwnerAliyunId"].isNull())
		data_.joinPermissionOwnerAliyunId = dataNode["JoinPermissionOwnerAliyunId"].asString();
	if(!dataNode["JoinEui"].isNull())
		data_.joinEui = dataNode["JoinEui"].asString();
	if(!dataNode["FreqBandPlanGroupId"].isNull())
		data_.freqBandPlanGroupId = std::stol(dataNode["FreqBandPlanGroupId"].asString());
	if(!dataNode["ClassMode"].isNull())
		data_.classMode = dataNode["ClassMode"].asString();
	if(!dataNode["JoinPermissionType"].isNull())
		data_.joinPermissionType = dataNode["JoinPermissionType"].asString();
	if(!dataNode["JoinPermissionEnabled"].isNull())
		data_.joinPermissionEnabled = dataNode["JoinPermissionEnabled"].asString() == "true";
	if(!dataNode["RxDailySum"].isNull())
		data_.rxDailySum = dataNode["RxDailySum"].asString();
	if(!dataNode["RxMonthSum"].isNull())
		data_.rxMonthSum = std::stol(dataNode["RxMonthSum"].asString());
	if(!dataNode["TxDailySum"].isNull())
		data_.txDailySum = std::stol(dataNode["TxDailySum"].asString());
	if(!dataNode["TxMonthSum"].isNull())
		data_.txMonthSum = std::stol(dataNode["TxMonthSum"].asString());
	if(!dataNode["CreateMillis"].isNull())
		data_.createMillis = std::stol(dataNode["CreateMillis"].asString());
	if(!dataNode["JoinPermissionName"].isNull())
		data_.joinPermissionName = dataNode["JoinPermissionName"].asString();
	if(!dataNode["MulticastGroupId"].isNull())
		data_.multicastGroupId = dataNode["MulticastGroupId"].asString();
	if(!dataNode["MulticastEnabled"].isNull())
		data_.multicastEnabled = dataNode["MulticastEnabled"].asString() == "true";
	if(!dataNode["MulticastNodeCapacity"].isNull())
		data_.multicastNodeCapacity = std::stoi(dataNode["MulticastNodeCapacity"].asString());
	if(!dataNode["MulticastNodeCount"].isNull())
		data_.multicastNodeCount = std::stoi(dataNode["MulticastNodeCount"].asString());
	auto allLocksNode = dataNode["Locks"]["LocksItem"];
	for (auto dataNodeLocksLocksItem : allLocksNode)
	{
		Data::LocksItem locksItemObject;
		if(!dataNodeLocksLocksItem["LockId"].isNull())
			locksItemObject.lockId = dataNodeLocksLocksItem["LockId"].asString();
		if(!dataNodeLocksLocksItem["LockType"].isNull())
			locksItemObject.lockType = dataNodeLocksLocksItem["LockType"].asString();
		if(!dataNodeLocksLocksItem["Enabled"].isNull())
			locksItemObject.enabled = dataNodeLocksLocksItem["Enabled"].asString() == "true";
		if(!dataNodeLocksLocksItem["CreateMillis"].isNull())
			locksItemObject.createMillis = std::stol(dataNodeLocksLocksItem["CreateMillis"].asString());
		data_.locks.push_back(locksItemObject);
	}
	auto dataDispatchConfigNode = dataNode["DataDispatchConfig"];
	if(!dataDispatchConfigNode["Destination"].isNull())
		data_.dataDispatchConfig.destination = dataDispatchConfigNode["Destination"].asString();
	auto iotProductNode = dataDispatchConfigNode["IotProduct"];
	if(!iotProductNode["ProductName"].isNull())
		data_.dataDispatchConfig.iotProduct.productName = iotProductNode["ProductName"].asString();
	if(!iotProductNode["ProductKey"].isNull())
		data_.dataDispatchConfig.iotProduct.productKey = iotProductNode["ProductKey"].asString();
	if(!iotProductNode["ProductType"].isNull())
		data_.dataDispatchConfig.iotProduct.productType = iotProductNode["ProductType"].asString();
	if(!iotProductNode["DebugSwitch"].isNull())
		data_.dataDispatchConfig.iotProduct.debugSwitch = iotProductNode["DebugSwitch"].asString() == "true";
	auto onsTopicsNode = dataDispatchConfigNode["OnsTopics"];
	if(!onsTopicsNode["DownlinkRegionName"].isNull())
		data_.dataDispatchConfig.onsTopics.downlinkRegionName = onsTopicsNode["DownlinkRegionName"].asString();
	if(!onsTopicsNode["DownlinkTopic"].isNull())
		data_.dataDispatchConfig.onsTopics.downlinkTopic = onsTopicsNode["DownlinkTopic"].asString();
	if(!onsTopicsNode["UplinkRegionName"].isNull())
		data_.dataDispatchConfig.onsTopics.uplinkRegionName = onsTopicsNode["UplinkRegionName"].asString();
	if(!onsTopicsNode["UplinkTopic"].isNull())
		data_.dataDispatchConfig.onsTopics.uplinkTopic = onsTopicsNode["UplinkTopic"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetNodeGroupResult::Data GetNodeGroupResult::getData()const
{
	return data_;
}

bool GetNodeGroupResult::getSuccess()const
{
	return success_;
}

