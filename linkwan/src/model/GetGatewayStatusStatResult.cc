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

#include <alibabacloud/linkwan/model/GetGatewayStatusStatResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetGatewayStatusStatResult::GetGatewayStatusStatResult() :
	ServiceResult()
{}

GetGatewayStatusStatResult::GetGatewayStatusStatResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayStatusStatResult::~GetGatewayStatusStatResult()
{}

void GetGatewayStatusStatResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GwEui"].isNull())
		data_.gwEui = dataNode["GwEui"].asString();
	if(!dataNode["CpuRadio"].isNull())
		data_.cpuRadio = std::stof(dataNode["CpuRadio"].asString());
	if(!dataNode["MemoryRadio"].isNull())
		data_.memoryRadio = std::stof(dataNode["MemoryRadio"].asString());
	if(!dataNode["RxCount"].isNull())
		data_.rxCount = std::stol(dataNode["RxCount"].asString());
	if(!dataNode["TxCount"].isNull())
		data_.txCount = std::stol(dataNode["TxCount"].asString());
	if(!dataNode["OnlineState"].isNull())
		data_.onlineState = dataNode["OnlineState"].asString();
	if(!dataNode["OnlineHour"].isNull())
		data_.onlineHour = std::stol(dataNode["OnlineHour"].asString());
	if(!dataNode["Enabled"].isNull())
		data_.enabled = dataNode["Enabled"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetGatewayStatusStatResult::Data GetGatewayStatusStatResult::getData()const
{
	return data_;
}

bool GetGatewayStatusStatResult::getSuccess()const
{
	return success_;
}

