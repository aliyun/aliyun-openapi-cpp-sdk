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

#include <alibabacloud/dms-dg/model/GetUserGatewaysResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_dg;
using namespace AlibabaCloud::Dms_dg::Model;

GetUserGatewaysResult::GetUserGatewaysResult() :
	ServiceResult()
{}

GetUserGatewaysResult::GetUserGatewaysResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserGatewaysResult::~GetUserGatewaysResult()
{}

void GetUserGatewaysResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGatewayListNode = value["GatewayList"]["Gateway"];
	for (auto valueGatewayListGateway : allGatewayListNode)
	{
		Gateway gatewayListObject;
		if(!valueGatewayListGateway["GatewayDesc"].isNull())
			gatewayListObject.gatewayDesc = valueGatewayListGateway["GatewayDesc"].asString();
		if(!valueGatewayListGateway["GatewayName"].isNull())
			gatewayListObject.gatewayName = valueGatewayListGateway["GatewayName"].asString();
		if(!valueGatewayListGateway["RegionId"].isNull())
			gatewayListObject.regionId = valueGatewayListGateway["RegionId"].asString();
		if(!valueGatewayListGateway["GatewayId"].isNull())
			gatewayListObject.gatewayId = valueGatewayListGateway["GatewayId"].asString();
		if(!valueGatewayListGateway["Status"].isNull())
			gatewayListObject.status = valueGatewayListGateway["Status"].asString();
		if(!valueGatewayListGateway["UserId"].isNull())
			gatewayListObject.userId = valueGatewayListGateway["UserId"].asString();
		if(!valueGatewayListGateway["CreatorId"].isNull())
			gatewayListObject.creatorId = valueGatewayListGateway["CreatorId"].asString();
		if(!valueGatewayListGateway["DgVersion"].isNull())
			gatewayListObject.dgVersion = valueGatewayListGateway["DgVersion"].asString();
		if(!valueGatewayListGateway["ExceptionMsg"].isNull())
			gatewayListObject.exceptionMsg = valueGatewayListGateway["ExceptionMsg"].asString();
		if(!valueGatewayListGateway["NumOfExceptionInstance"].isNull())
			gatewayListObject.numOfExceptionInstance = std::stoi(valueGatewayListGateway["NumOfExceptionInstance"].asString());
		if(!valueGatewayListGateway["NumOfRunningInstance"].isNull())
			gatewayListObject.numOfRunningInstance = std::stoi(valueGatewayListGateway["NumOfRunningInstance"].asString());
		gatewayList_.push_back(gatewayListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::vector<GetUserGatewaysResult::Gateway> GetUserGatewaysResult::getGatewayList()const
{
	return gatewayList_;
}

std::string GetUserGatewaysResult::getErrorMsg()const
{
	return errorMsg_;
}

int GetUserGatewaysResult::getCount()const
{
	return count_;
}

std::string GetUserGatewaysResult::getCode()const
{
	return code_;
}

bool GetUserGatewaysResult::getSuccess()const
{
	return success_;
}

