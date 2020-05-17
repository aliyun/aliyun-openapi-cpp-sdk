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

#include <alibabacloud/vcs/model/GetInventoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetInventoryResult::GetInventoryResult() :
	ServiceResult()
{}

GetInventoryResult::GetInventoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInventoryResult::~GetInventoryResult()
{}

void GetInventoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allResultObjectNode = dataNode["ResultObject"]["ResultObjectItem"];
	for (auto dataNodeResultObjectResultObjectItem : allResultObjectNode)
	{
		Data::ResultObjectItem resultObjectItemObject;
		if(!dataNodeResultObjectResultObjectItem["BuyerId"].isNull())
			resultObjectItemObject.buyerId = dataNodeResultObjectResultObjectItem["BuyerId"].asString();
		if(!dataNodeResultObjectResultObjectItem["CommodityCode"].isNull())
			resultObjectItemObject.commodityCode = dataNodeResultObjectResultObjectItem["CommodityCode"].asString();
		if(!dataNodeResultObjectResultObjectItem["CurrentInventory"].isNull())
			resultObjectItemObject.currentInventory = dataNodeResultObjectResultObjectItem["CurrentInventory"].asString();
		if(!dataNodeResultObjectResultObjectItem["ValidEndTime"].isNull())
			resultObjectItemObject.validEndTime = dataNodeResultObjectResultObjectItem["ValidEndTime"].asString();
		if(!dataNodeResultObjectResultObjectItem["ValidStartTime"].isNull())
			resultObjectItemObject.validStartTime = dataNodeResultObjectResultObjectItem["ValidStartTime"].asString();
		if(!dataNodeResultObjectResultObjectItem["InstanceId"].isNull())
			resultObjectItemObject.instanceId = dataNodeResultObjectResultObjectItem["InstanceId"].asString();
		if(!dataNodeResultObjectResultObjectItem["InventoryId"].isNull())
			resultObjectItemObject.inventoryId = dataNodeResultObjectResultObjectItem["InventoryId"].asString();
		data_.resultObject.push_back(resultObjectItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetInventoryResult::Data GetInventoryResult::getData()const
{
	return data_;
}

bool GetInventoryResult::getSuccess()const
{
	return success_;
}

