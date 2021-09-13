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

#include <alibabacloud/linkwan/model/ListRentedJoinPermissionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListRentedJoinPermissionsResult::ListRentedJoinPermissionsResult() :
	ServiceResult()
{}

ListRentedJoinPermissionsResult::ListRentedJoinPermissionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRentedJoinPermissionsResult::~ListRentedJoinPermissionsResult()
{}

void ListRentedJoinPermissionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["JoinPermission"];
	for (auto dataNodeListJoinPermission : allListNode)
	{
		Data::JoinPermission joinPermissionObject;
		if(!dataNodeListJoinPermission["JoinPermissionId"].isNull())
			joinPermissionObject.joinPermissionId = dataNodeListJoinPermission["JoinPermissionId"].asString();
		if(!dataNodeListJoinPermission["OwnerAliyunId"].isNull())
			joinPermissionObject.ownerAliyunId = dataNodeListJoinPermission["OwnerAliyunId"].asString();
		if(!dataNodeListJoinPermission["JoinEui"].isNull())
			joinPermissionObject.joinEui = dataNodeListJoinPermission["JoinEui"].asString();
		if(!dataNodeListJoinPermission["FreqBandPlanGroupId"].isNull())
			joinPermissionObject.freqBandPlanGroupId = dataNodeListJoinPermission["FreqBandPlanGroupId"].asString();
		if(!dataNodeListJoinPermission["ClassMode"].isNull())
			joinPermissionObject.classMode = dataNodeListJoinPermission["ClassMode"].asString();
		if(!dataNodeListJoinPermission["Enabled"].isNull())
			joinPermissionObject.enabled = dataNodeListJoinPermission["Enabled"].asString() == "true";
		if(!dataNodeListJoinPermission["BoundNodeGroup"].isNull())
			joinPermissionObject.boundNodeGroup = dataNodeListJoinPermission["BoundNodeGroup"].asString() == "true";
		if(!dataNodeListJoinPermission["Type"].isNull())
			joinPermissionObject.type = dataNodeListJoinPermission["Type"].asString();
		if(!dataNodeListJoinPermission["BoundNodeGroupName"].isNull())
			joinPermissionObject.boundNodeGroupName = dataNodeListJoinPermission["BoundNodeGroupName"].asString();
		if(!dataNodeListJoinPermission["BoundNodeGroupId"].isNull())
			joinPermissionObject.boundNodeGroupId = dataNodeListJoinPermission["BoundNodeGroupId"].asString();
		if(!dataNodeListJoinPermission["RxDelay"].isNull())
			joinPermissionObject.rxDelay = dataNodeListJoinPermission["RxDelay"].asString();
		if(!dataNodeListJoinPermission["DataRate"].isNull())
			joinPermissionObject.dataRate = dataNodeListJoinPermission["DataRate"].asString();
		if(!dataNodeListJoinPermission["JoinPermissionName"].isNull())
			joinPermissionObject.joinPermissionName = dataNodeListJoinPermission["JoinPermissionName"].asString();
		auto dataDispatchConfigNode = value["DataDispatchConfig"];
		if(!dataDispatchConfigNode["Destination"].isNull())
			joinPermissionObject.dataDispatchConfig.destination = dataDispatchConfigNode["Destination"].asString();
		auto iotProductNode = dataDispatchConfigNode["IotProduct"];
		if(!iotProductNode["ProductName"].isNull())
			joinPermissionObject.dataDispatchConfig.iotProduct.productName = iotProductNode["ProductName"].asString();
		if(!iotProductNode["ProductKey"].isNull())
			joinPermissionObject.dataDispatchConfig.iotProduct.productKey = iotProductNode["ProductKey"].asString();
		if(!iotProductNode["ProductType"].isNull())
			joinPermissionObject.dataDispatchConfig.iotProduct.productType = iotProductNode["ProductType"].asString();
		if(!iotProductNode["DebugSwitch"].isNull())
			joinPermissionObject.dataDispatchConfig.iotProduct.debugSwitch = iotProductNode["DebugSwitch"].asString() == "true";
		auto onsTopicsNode = dataDispatchConfigNode["OnsTopics"];
		if(!onsTopicsNode["DownlinkRegionName"].isNull())
			joinPermissionObject.dataDispatchConfig.onsTopics.downlinkRegionName = onsTopicsNode["DownlinkRegionName"].asString();
		if(!onsTopicsNode["DownlinkTopic"].isNull())
			joinPermissionObject.dataDispatchConfig.onsTopics.downlinkTopic = onsTopicsNode["DownlinkTopic"].asString();
		if(!onsTopicsNode["UplinkRegionName"].isNull())
			joinPermissionObject.dataDispatchConfig.onsTopics.uplinkRegionName = onsTopicsNode["UplinkRegionName"].asString();
		if(!onsTopicsNode["UplinkTopic"].isNull())
			joinPermissionObject.dataDispatchConfig.onsTopics.uplinkTopic = onsTopicsNode["UplinkTopic"].asString();
		data_.list.push_back(joinPermissionObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListRentedJoinPermissionsResult::Data ListRentedJoinPermissionsResult::getData()const
{
	return data_;
}

bool ListRentedJoinPermissionsResult::getSuccess()const
{
	return success_;
}

