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

#include <alibabacloud/dms-dg/model/FindUserGatewayByIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_dg;
using namespace AlibabaCloud::Dms_dg::Model;

FindUserGatewayByIdResult::FindUserGatewayByIdResult() :
	ServiceResult()
{}

FindUserGatewayByIdResult::FindUserGatewayByIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindUserGatewayByIdResult::~FindUserGatewayByIdResult()
{}

void FindUserGatewayByIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto gatewayNode = value["Gateway"];
	if(!gatewayNode["GatewayDesc"].isNull())
		gateway_.gatewayDesc = gatewayNode["GatewayDesc"].asString();
	if(!gatewayNode["GatewayName"].isNull())
		gateway_.gatewayName = gatewayNode["GatewayName"].asString();
	if(!gatewayNode["RegionId"].isNull())
		gateway_.regionId = gatewayNode["RegionId"].asString();
	if(!gatewayNode["GatewayId"].isNull())
		gateway_.gatewayId = gatewayNode["GatewayId"].asString();
	if(!gatewayNode["Status"].isNull())
		gateway_.status = gatewayNode["Status"].asString();
	if(!gatewayNode["UserId"].isNull())
		gateway_.userId = gatewayNode["UserId"].asString();
	if(!gatewayNode["CreatorId"].isNull())
		gateway_.creatorId = gatewayNode["CreatorId"].asString();
	if(!gatewayNode["DgVersion"].isNull())
		gateway_.dgVersion = gatewayNode["DgVersion"].asString();
	if(!gatewayNode["ExceptionMsg"].isNull())
		gateway_.exceptionMsg = gatewayNode["ExceptionMsg"].asString();
	if(!gatewayNode["NumOfExceptionInstance"].isNull())
		gateway_.numOfExceptionInstance = std::stoi(gatewayNode["NumOfExceptionInstance"].asString());
	if(!gatewayNode["NumOfRunningInstance"].isNull())
		gateway_.numOfRunningInstance = std::stoi(gatewayNode["NumOfRunningInstance"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

FindUserGatewayByIdResult::Gateway FindUserGatewayByIdResult::getGateway()const
{
	return gateway_;
}

std::string FindUserGatewayByIdResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string FindUserGatewayByIdResult::getCode()const
{
	return code_;
}

bool FindUserGatewayByIdResult::getSuccess()const
{
	return success_;
}

