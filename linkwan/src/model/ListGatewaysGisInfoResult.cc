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

#include <alibabacloud/linkwan/model/ListGatewaysGisInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListGatewaysGisInfoResult::ListGatewaysGisInfoResult() :
	ServiceResult()
{}

ListGatewaysGisInfoResult::ListGatewaysGisInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewaysGisInfoResult::~ListGatewaysGisInfoResult()
{}

void ListGatewaysGisInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["GatewayGisInfo"];
	for (auto valueDataGatewayGisInfo : allDataNode)
	{
		GatewayGisInfo dataObject;
		if(!valueDataGatewayGisInfo["GwEui"].isNull())
			dataObject.gwEui = valueDataGatewayGisInfo["GwEui"].asString();
		if(!valueDataGatewayGisInfo["GisCoordinateSystem"].isNull())
			dataObject.gisCoordinateSystem = valueDataGatewayGisInfo["GisCoordinateSystem"].asString();
		if(!valueDataGatewayGisInfo["Longitude"].isNull())
			dataObject.longitude = std::stof(valueDataGatewayGisInfo["Longitude"].asString());
		if(!valueDataGatewayGisInfo["Latitude"].isNull())
			dataObject.latitude = std::stof(valueDataGatewayGisInfo["Latitude"].asString());
		if(!valueDataGatewayGisInfo["FreqBandPlanGroupId"].isNull())
			dataObject.freqBandPlanGroupId = std::stol(valueDataGatewayGisInfo["FreqBandPlanGroupId"].asString());
		if(!valueDataGatewayGisInfo["Name"].isNull())
			dataObject.name = valueDataGatewayGisInfo["Name"].asString();
		if(!valueDataGatewayGisInfo["OnlineState"].isNull())
			dataObject.onlineState = valueDataGatewayGisInfo["OnlineState"].asString();
		if(!valueDataGatewayGisInfo["GisSourceType"].isNull())
			dataObject.gisSourceType = valueDataGatewayGisInfo["GisSourceType"].asString();
		if(!valueDataGatewayGisInfo["Enabled"].isNull())
			dataObject.enabled = valueDataGatewayGisInfo["Enabled"].asString() == "true";
		if(!valueDataGatewayGisInfo["ChargeStatus"].isNull())
			dataObject.chargeStatus = valueDataGatewayGisInfo["ChargeStatus"].asString();
		if(!valueDataGatewayGisInfo["AuthTypes"].isNull())
			dataObject.authTypes = valueDataGatewayGisInfo["AuthTypes"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListGatewaysGisInfoResult::GatewayGisInfo> ListGatewaysGisInfoResult::getData()const
{
	return data_;
}

bool ListGatewaysGisInfoResult::getSuccess()const
{
	return success_;
}

