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

#include <alibabacloud/linkwan/model/GetUserLicenseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetUserLicenseResult::GetUserLicenseResult() :
	ServiceResult()
{}

GetUserLicenseResult::GetUserLicenseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserLicenseResult::~GetUserLicenseResult()
{}

void GetUserLicenseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Oui"].isNull())
		data_.oui = dataNode["Oui"].asString();
	if(!dataNode["GatewayTupleLimit"].isNull())
		data_.gatewayTupleLimit = std::stol(dataNode["GatewayTupleLimit"].asString());
	if(!dataNode["GatewayTupleCount"].isNull())
		data_.gatewayTupleCount = std::stol(dataNode["GatewayTupleCount"].asString());
	if(!dataNode["NodeTupleLimit"].isNull())
		data_.nodeTupleLimit = std::stol(dataNode["NodeTupleLimit"].asString());
	if(!dataNode["NodeTupleCount"].isNull())
		data_.nodeTupleCount = std::stol(dataNode["NodeTupleCount"].asString());
	if(!dataNode["GatewayLimit"].isNull())
		data_.gatewayLimit = std::stol(dataNode["GatewayLimit"].asString());
	if(!dataNode["GatewayCount"].isNull())
		data_.gatewayCount = std::stol(dataNode["GatewayCount"].asString());
	if(!dataNode["LocalJoinPermissionLimit"].isNull())
		data_.localJoinPermissionLimit = std::stol(dataNode["LocalJoinPermissionLimit"].asString());
	if(!dataNode["LocalJoinPermissionCount"].isNull())
		data_.localJoinPermissionCount = std::stol(dataNode["LocalJoinPermissionCount"].asString());
	if(!dataNode["NodeLimit"].isNull())
		data_.nodeLimit = std::stol(dataNode["NodeLimit"].asString());
	if(!dataNode["NodeCount"].isNull())
		data_.nodeCount = std::stol(dataNode["NodeCount"].asString());
	if(!dataNode["RoamingJoinPermissionLimit"].isNull())
		data_.roamingJoinPermissionLimit = std::stol(dataNode["RoamingJoinPermissionLimit"].asString());
	if(!dataNode["RoamingJoinPermissionCount"].isNull())
		data_.roamingJoinPermissionCount = std::stol(dataNode["RoamingJoinPermissionCount"].asString());
	if(!dataNode["GatewayTupleFreeLimit"].isNull())
		data_.gatewayTupleFreeLimit = std::stol(dataNode["GatewayTupleFreeLimit"].asString());
	if(!dataNode["NodeTupleFreeLimit"].isNull())
		data_.nodeTupleFreeLimit = std::stol(dataNode["NodeTupleFreeLimit"].asString());
	if(!dataNode["GatewayFreeLimit"].isNull())
		data_.gatewayFreeLimit = std::stol(dataNode["GatewayFreeLimit"].asString());
	if(!dataNode["LocalJoinPermissionFreeLimit"].isNull())
		data_.localJoinPermissionFreeLimit = std::stol(dataNode["LocalJoinPermissionFreeLimit"].asString());
	if(!dataNode["RoamingJoinPermissionFreeLimit"].isNull())
		data_.roamingJoinPermissionFreeLimit = std::stol(dataNode["RoamingJoinPermissionFreeLimit"].asString());
	if(!dataNode["NodeFreeLimit"].isNull())
		data_.nodeFreeLimit = std::stol(dataNode["NodeFreeLimit"].asString());
	if(!dataNode["RelayLimit"].isNull())
		data_.relayLimit = std::stol(dataNode["RelayLimit"].asString());
	if(!dataNode["RelayCount"].isNull())
		data_.relayCount = std::stol(dataNode["RelayCount"].asString());
	if(!dataNode["GatewayPrePayCount"].isNull())
		data_.gatewayPrePayCount = std::stol(dataNode["GatewayPrePayCount"].asString());
	if(!dataNode["NodeTupleRelayLimit"].isNull())
		data_.nodeTupleRelayLimit = std::stol(dataNode["NodeTupleRelayLimit"].asString());
	if(!dataNode["NodeTupleRelayCount"].isNull())
		data_.nodeTupleRelayCount = std::stol(dataNode["NodeTupleRelayCount"].asString());
	if(!dataNode["NodeTupleStandardLimit"].isNull())
		data_.nodeTupleStandardLimit = std::stol(dataNode["NodeTupleStandardLimit"].asString());
	if(!dataNode["NodeTupleStandardCount"].isNull())
		data_.nodeTupleStandardCount = std::stol(dataNode["NodeTupleStandardCount"].asString());
	if(!dataNode["GatewayTupleHybridLimit"].isNull())
		data_.gatewayTupleHybridLimit = std::stol(dataNode["GatewayTupleHybridLimit"].asString());
	if(!dataNode["GatewayTupleHybridCount"].isNull())
		data_.gatewayTupleHybridCount = std::stol(dataNode["GatewayTupleHybridCount"].asString());
	if(!dataNode["GatewayTupleSingleChannelLimit"].isNull())
		data_.gatewayTupleSingleChannelLimit = std::stol(dataNode["GatewayTupleSingleChannelLimit"].asString());
	if(!dataNode["GatewayTupleSingleChannelCount"].isNull())
		data_.gatewayTupleSingleChannelCount = std::stol(dataNode["GatewayTupleSingleChannelCount"].asString());
	if(!dataNode["GatewayTupleStandardLimit"].isNull())
		data_.gatewayTupleStandardLimit = std::stol(dataNode["GatewayTupleStandardLimit"].asString());
	if(!dataNode["GatewayTupleStandardCount"].isNull())
		data_.gatewayTupleStandardCount = std::stol(dataNode["GatewayTupleStandardCount"].asString());
	if(!dataNode["GatewayDingTalkCount"].isNull())
		data_.gatewayDingTalkCount = std::stol(dataNode["GatewayDingTalkCount"].asString());
	if(!dataNode["GatewayDingTalkLimit"].isNull())
		data_.gatewayDingTalkLimit = std::stol(dataNode["GatewayDingTalkLimit"].asString());
	if(!dataNode["GatewayProfessionalCount"].isNull())
		data_.gatewayProfessionalCount = std::stol(dataNode["GatewayProfessionalCount"].asString());
	if(!dataNode["GatewayProfessionalLimit"].isNull())
		data_.gatewayProfessionalLimit = std::stol(dataNode["GatewayProfessionalLimit"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetUserLicenseResult::Data GetUserLicenseResult::getData()const
{
	return data_;
}

bool GetUserLicenseResult::getSuccess()const
{
	return success_;
}

