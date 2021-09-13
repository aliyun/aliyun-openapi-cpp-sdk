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

#include <alibabacloud/linkwan/model/ListGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListGatewaysResult::ListGatewaysResult() :
	ServiceResult()
{}

ListGatewaysResult::ListGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewaysResult::~ListGatewaysResult()
{}

void ListGatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["Gateway"];
	for (auto dataNodeListGateway : allListNode)
	{
		Data::Gateway gatewayObject;
		if(!dataNodeListGateway["GwEui"].isNull())
			gatewayObject.gwEui = dataNodeListGateway["GwEui"].asString();
		if(!dataNodeListGateway["Name"].isNull())
			gatewayObject.name = dataNodeListGateway["Name"].asString();
		if(!dataNodeListGateway["Description"].isNull())
			gatewayObject.description = dataNodeListGateway["Description"].asString();
		if(!dataNodeListGateway["City"].isNull())
			gatewayObject.city = dataNodeListGateway["City"].asString();
		if(!dataNodeListGateway["District"].isNull())
			gatewayObject.district = dataNodeListGateway["District"].asString();
		if(!dataNodeListGateway["Address"].isNull())
			gatewayObject.address = dataNodeListGateway["Address"].asString();
		if(!dataNodeListGateway["AddressCode"].isNull())
			gatewayObject.addressCode = std::stol(dataNodeListGateway["AddressCode"].asString());
		if(!dataNodeListGateway["GisCoordinateSystem"].isNull())
			gatewayObject.gisCoordinateSystem = dataNodeListGateway["GisCoordinateSystem"].asString();
		if(!dataNodeListGateway["Longitude"].isNull())
			gatewayObject.longitude = std::stof(dataNodeListGateway["Longitude"].asString());
		if(!dataNodeListGateway["Latitude"].isNull())
			gatewayObject.latitude = std::stof(dataNodeListGateway["Latitude"].asString());
		if(!dataNodeListGateway["FreqBandPlanGroupId"].isNull())
			gatewayObject.freqBandPlanGroupId = std::stol(dataNodeListGateway["FreqBandPlanGroupId"].asString());
		if(!dataNodeListGateway["CommunicationMode"].isNull())
			gatewayObject.communicationMode = dataNodeListGateway["CommunicationMode"].asString();
		if(!dataNodeListGateway["OnlineState"].isNull())
			gatewayObject.onlineState = dataNodeListGateway["OnlineState"].asString();
		if(!dataNodeListGateway["Enabled"].isNull())
			gatewayObject.enabled = dataNodeListGateway["Enabled"].asString() == "true";
		if(!dataNodeListGateway["ClassBSupported"].isNull())
			gatewayObject.classBSupported = dataNodeListGateway["ClassBSupported"].asString() == "true";
		if(!dataNodeListGateway["ClassBWorking"].isNull())
			gatewayObject.classBWorking = dataNodeListGateway["ClassBWorking"].asString() == "true";
		if(!dataNodeListGateway["TimeCorrectable"].isNull())
			gatewayObject.timeCorrectable = dataNodeListGateway["TimeCorrectable"].asString() == "true";
		if(!dataNodeListGateway["OnlineStateChangedMillis"].isNull())
			gatewayObject.onlineStateChangedMillis = std::stol(dataNodeListGateway["OnlineStateChangedMillis"].asString());
		if(!dataNodeListGateway["EmbeddedNsId"].isNull())
			gatewayObject.embeddedNsId = dataNodeListGateway["EmbeddedNsId"].asString();
		if(!dataNodeListGateway["ChargeStatus"].isNull())
			gatewayObject.chargeStatus = dataNodeListGateway["ChargeStatus"].asString();
		if(!dataNodeListGateway["AuthTypes"].isNull())
			gatewayObject.authTypes = dataNodeListGateway["AuthTypes"].asString();
		data_.list.push_back(gatewayObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListGatewaysResult::Data ListGatewaysResult::getData()const
{
	return data_;
}

bool ListGatewaysResult::getSuccess()const
{
	return success_;
}

