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

#include <alibabacloud/iot/model/QueryEdgeInstanceGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryEdgeInstanceGatewayResult::QueryEdgeInstanceGatewayResult() :
	ServiceResult()
{}

QueryEdgeInstanceGatewayResult::QueryEdgeInstanceGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEdgeInstanceGatewayResult::~QueryEdgeInstanceGatewayResult()
{}

void QueryEdgeInstanceGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGatewayList = value["GatewayList"]["Gateway"];
	for (auto value : allGatewayList)
	{
		Gateway gatewayListObject;
		if(!value["ProductKey"].isNull())
			gatewayListObject.productKey = value["ProductKey"].asString();
		if(!value["DeviceName"].isNull())
			gatewayListObject.deviceName = value["DeviceName"].asString();
		if(!value["IotId"].isNull())
			gatewayListObject.iotId = value["IotId"].asString();
		if(!value["EdgeVersion"].isNull())
			gatewayListObject.edgeVersion = value["EdgeVersion"].asString();
		gatewayList_.push_back(gatewayListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<QueryEdgeInstanceGatewayResult::Gateway> QueryEdgeInstanceGatewayResult::getGatewayList()const
{
	return gatewayList_;
}

std::string QueryEdgeInstanceGatewayResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryEdgeInstanceGatewayResult::getCode()const
{
	return code_;
}

bool QueryEdgeInstanceGatewayResult::getSuccess()const
{
	return success_;
}

