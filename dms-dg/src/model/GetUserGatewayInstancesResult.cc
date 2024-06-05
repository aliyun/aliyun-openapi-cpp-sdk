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

#include <alibabacloud/dms-dg/model/GetUserGatewayInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_dg;
using namespace AlibabaCloud::Dms_dg::Model;

GetUserGatewayInstancesResult::GetUserGatewayInstancesResult() :
	ServiceResult()
{}

GetUserGatewayInstancesResult::GetUserGatewayInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserGatewayInstancesResult::~GetUserGatewayInstancesResult()
{}

void GetUserGatewayInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGatewayInstanceListNode = value["GatewayInstanceList"]["GatewayInstance"];
	for (auto valueGatewayInstanceListGatewayInstance : allGatewayInstanceListNode)
	{
		GatewayInstance gatewayInstanceListObject;
		if(!valueGatewayInstanceListGatewayInstance["GatewayInstanceId"].isNull())
			gatewayInstanceListObject.gatewayInstanceId = valueGatewayInstanceListGatewayInstance["GatewayInstanceId"].asString();
		if(!valueGatewayInstanceListGatewayInstance["GatewayId"].isNull())
			gatewayInstanceListObject.gatewayId = valueGatewayInstanceListGatewayInstance["GatewayId"].asString();
		if(!valueGatewayInstanceListGatewayInstance["LastUpdateTime"].isNull())
			gatewayInstanceListObject.lastUpdateTime = std::stol(valueGatewayInstanceListGatewayInstance["LastUpdateTime"].asString());
		if(!valueGatewayInstanceListGatewayInstance["LocalIP"].isNull())
			gatewayInstanceListObject.localIP = valueGatewayInstanceListGatewayInstance["LocalIP"].asString();
		if(!valueGatewayInstanceListGatewayInstance["OutputIP"].isNull())
			gatewayInstanceListObject.outputIP = valueGatewayInstanceListGatewayInstance["OutputIP"].asString();
		if(!valueGatewayInstanceListGatewayInstance["Message"].isNull())
			gatewayInstanceListObject.message = valueGatewayInstanceListGatewayInstance["Message"].asString();
		if(!valueGatewayInstanceListGatewayInstance["EndPoint"].isNull())
			gatewayInstanceListObject.endPoint = valueGatewayInstanceListGatewayInstance["EndPoint"].asString();
		if(!valueGatewayInstanceListGatewayInstance["CurrentDaemonVersion"].isNull())
			gatewayInstanceListObject.currentDaemonVersion = valueGatewayInstanceListGatewayInstance["CurrentDaemonVersion"].asString();
		if(!valueGatewayInstanceListGatewayInstance["CurrentVersion"].isNull())
			gatewayInstanceListObject.currentVersion = valueGatewayInstanceListGatewayInstance["CurrentVersion"].asString();
		if(!valueGatewayInstanceListGatewayInstance["RegionId"].isNull())
			gatewayInstanceListObject.regionId = valueGatewayInstanceListGatewayInstance["RegionId"].asString();
		if(!valueGatewayInstanceListGatewayInstance["ConnectEndpointType"].isNull())
			gatewayInstanceListObject.connectEndpointType = valueGatewayInstanceListGatewayInstance["ConnectEndpointType"].asString();
		if(!valueGatewayInstanceListGatewayInstance["GatewayInstanceStatus"].isNull())
			gatewayInstanceListObject.gatewayInstanceStatus = valueGatewayInstanceListGatewayInstance["GatewayInstanceStatus"].asString();
		gatewayInstanceList_.push_back(gatewayInstanceListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetUserGatewayInstancesResult::GatewayInstance> GetUserGatewayInstancesResult::getGatewayInstanceList()const
{
	return gatewayInstanceList_;
}

std::string GetUserGatewayInstancesResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetUserGatewayInstancesResult::getCode()const
{
	return code_;
}

bool GetUserGatewayInstancesResult::getSuccess()const
{
	return success_;
}

