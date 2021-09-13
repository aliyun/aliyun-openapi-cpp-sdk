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

#include <alibabacloud/linkwan/model/GetGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetGatewayResult::GetGatewayResult() :
	ServiceResult()
{}

GetGatewayResult::GetGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayResult::~GetGatewayResult()
{}

void GetGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GwEui"].isNull())
		data_.gwEui = dataNode["GwEui"].asString();
	if(!dataNode["OnlineState"].isNull())
		data_.onlineState = dataNode["OnlineState"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["City"].isNull())
		data_.city = dataNode["City"].asString();
	if(!dataNode["District"].isNull())
		data_.district = dataNode["District"].asString();
	if(!dataNode["Address"].isNull())
		data_.address = dataNode["Address"].asString();
	if(!dataNode["AddressCode"].isNull())
		data_.addressCode = std::stol(dataNode["AddressCode"].asString());
	if(!dataNode["GisCoordinateSystem"].isNull())
		data_.gisCoordinateSystem = dataNode["GisCoordinateSystem"].asString();
	if(!dataNode["Longitude"].isNull())
		data_.longitude = std::stof(dataNode["Longitude"].asString());
	if(!dataNode["Latitude"].isNull())
		data_.latitude = std::stof(dataNode["Latitude"].asString());
	if(!dataNode["FreqBandPlanGroupId"].isNull())
		data_.freqBandPlanGroupId = std::stol(dataNode["FreqBandPlanGroupId"].asString());
	if(!dataNode["CommunicationMode"].isNull())
		data_.communicationMode = dataNode["CommunicationMode"].asString();
	if(!dataNode["TimeCorrectable"].isNull())
		data_.timeCorrectable = dataNode["TimeCorrectable"].asString() == "true";
	if(!dataNode["ClassBSupported"].isNull())
		data_.classBSupported = dataNode["ClassBSupported"].asString() == "true";
	if(!dataNode["ClassBWorking"].isNull())
		data_.classBWorking = dataNode["ClassBWorking"].asString() == "true";
	if(!dataNode["Enabled"].isNull())
		data_.enabled = dataNode["Enabled"].asString() == "true";
	if(!dataNode["OnlineStateChangedMillis"].isNull())
		data_.onlineStateChangedMillis = std::stol(dataNode["OnlineStateChangedMillis"].asString());
	if(!dataNode["EmbeddedNsId"].isNull())
		data_.embeddedNsId = dataNode["EmbeddedNsId"].asString();
	if(!dataNode["ChargeStatus"].isNull())
		data_.chargeStatus = dataNode["ChargeStatus"].asString();
	if(!dataNode["AuthTypes"].isNull())
		data_.authTypes = dataNode["AuthTypes"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetGatewayResult::Data GetGatewayResult::getData()const
{
	return data_;
}

bool GetGatewayResult::getSuccess()const
{
	return success_;
}

