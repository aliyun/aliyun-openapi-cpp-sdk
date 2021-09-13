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

#include <alibabacloud/linkwan/model/ListGatewaysPacketStatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListGatewaysPacketStatResult::ListGatewaysPacketStatResult() :
	ServiceResult()
{}

ListGatewaysPacketStatResult::ListGatewaysPacketStatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewaysPacketStatResult::~ListGatewaysPacketStatResult()
{}

void ListGatewaysPacketStatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["GatewayPacketStat"];
	for (auto valueDataGatewayPacketStat : allDataNode)
	{
		GatewayPacketStat dataObject;
		if(!valueDataGatewayPacketStat["GwEui"].isNull())
			dataObject.gwEui = valueDataGatewayPacketStat["GwEui"].asString();
		if(!valueDataGatewayPacketStat["UplinkCount"].isNull())
			dataObject.uplinkCount = std::stoi(valueDataGatewayPacketStat["UplinkCount"].asString());
		if(!valueDataGatewayPacketStat["DownlinkCount"].isNull())
			dataObject.downlinkCount = std::stoi(valueDataGatewayPacketStat["DownlinkCount"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListGatewaysPacketStatResult::GatewayPacketStat> ListGatewaysPacketStatResult::getData()const
{
	return data_;
}

bool ListGatewaysPacketStatResult::getSuccess()const
{
	return success_;
}

