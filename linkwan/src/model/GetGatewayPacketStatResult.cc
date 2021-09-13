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

#include <alibabacloud/linkwan/model/GetGatewayPacketStatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetGatewayPacketStatResult::GetGatewayPacketStatResult() :
	ServiceResult()
{}

GetGatewayPacketStatResult::GetGatewayPacketStatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayPacketStatResult::~GetGatewayPacketStatResult()
{}

void GetGatewayPacketStatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["UplinkValid"].isNull())
		data_.uplinkValid = std::stoi(dataNode["UplinkValid"].asString());
	if(!dataNode["UplinkInvalid"].isNull())
		data_.uplinkInvalid = std::stoi(dataNode["UplinkInvalid"].asString());
	if(!dataNode["DownlinkValid"].isNull())
		data_.downlinkValid = std::stoi(dataNode["DownlinkValid"].asString());
	if(!dataNode["DownlinkInvalid"].isNull())
		data_.downlinkInvalid = std::stoi(dataNode["DownlinkInvalid"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetGatewayPacketStatResult::Data GetGatewayPacketStatResult::getData()const
{
	return data_;
}

bool GetGatewayPacketStatResult::getSuccess()const
{
	return success_;
}

