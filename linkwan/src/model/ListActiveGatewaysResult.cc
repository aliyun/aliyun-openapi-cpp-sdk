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

#include <alibabacloud/linkwan/model/ListActiveGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListActiveGatewaysResult::ListActiveGatewaysResult() :
	ServiceResult()
{}

ListActiveGatewaysResult::ListActiveGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListActiveGatewaysResult::~ListActiveGatewaysResult()
{}

void ListActiveGatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Gateway"];
	for (auto valueDataGateway : allDataNode)
	{
		Gateway dataObject;
		if(!valueDataGateway["GwEui"].isNull())
			dataObject.gwEui = valueDataGateway["GwEui"].asString();
		if(!valueDataGateway["Name"].isNull())
			dataObject.name = valueDataGateway["Name"].asString();
		if(!valueDataGateway["Description"].isNull())
			dataObject.description = valueDataGateway["Description"].asString();
		if(!valueDataGateway["City"].isNull())
			dataObject.city = valueDataGateway["City"].asString();
		if(!valueDataGateway["District"].isNull())
			dataObject.district = valueDataGateway["District"].asString();
		if(!valueDataGateway["Address"].isNull())
			dataObject.address = valueDataGateway["Address"].asString();
		if(!valueDataGateway["AddressCode"].isNull())
			dataObject.addressCode = std::stol(valueDataGateway["AddressCode"].asString());
		if(!valueDataGateway["GisCoordinateSystem"].isNull())
			dataObject.gisCoordinateSystem = valueDataGateway["GisCoordinateSystem"].asString();
		if(!valueDataGateway["Longitude"].isNull())
			dataObject.longitude = std::stof(valueDataGateway["Longitude"].asString());
		if(!valueDataGateway["Latitude"].isNull())
			dataObject.latitude = std::stof(valueDataGateway["Latitude"].asString());
		if(!valueDataGateway["FreqBandPlanGroupId"].isNull())
			dataObject.freqBandPlanGroupId = std::stol(valueDataGateway["FreqBandPlanGroupId"].asString());
		if(!valueDataGateway["CommunicationMode"].isNull())
			dataObject.communicationMode = valueDataGateway["CommunicationMode"].asString();
		if(!valueDataGateway["OnlineState"].isNull())
			dataObject.onlineState = valueDataGateway["OnlineState"].asString();
		if(!valueDataGateway["ChargeStatus"].isNull())
			dataObject.chargeStatus = valueDataGateway["ChargeStatus"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListActiveGatewaysResult::Gateway> ListActiveGatewaysResult::getData()const
{
	return data_;
}

bool ListActiveGatewaysResult::getSuccess()const
{
	return success_;
}

