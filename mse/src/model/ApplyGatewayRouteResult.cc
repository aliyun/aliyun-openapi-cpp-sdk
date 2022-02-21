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

#include <alibabacloud/mse/model/ApplyGatewayRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ApplyGatewayRouteResult::ApplyGatewayRouteResult() :
	ServiceResult()
{}

ApplyGatewayRouteResult::ApplyGatewayRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ApplyGatewayRouteResult::~ApplyGatewayRouteResult()
{}

void ApplyGatewayRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";

}

std::string ApplyGatewayRouteResult::getMessage()const
{
	return message_;
}

int ApplyGatewayRouteResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

bool ApplyGatewayRouteResult::getData()const
{
	return data_;
}

int ApplyGatewayRouteResult::getCode()const
{
	return code_;
}

bool ApplyGatewayRouteResult::getSuccess()const
{
	return success_;
}

