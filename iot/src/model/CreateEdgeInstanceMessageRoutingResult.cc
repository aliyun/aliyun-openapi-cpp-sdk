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

#include <alibabacloud/iot/model/CreateEdgeInstanceMessageRoutingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

CreateEdgeInstanceMessageRoutingResult::CreateEdgeInstanceMessageRoutingResult() :
	ServiceResult()
{}

CreateEdgeInstanceMessageRoutingResult::CreateEdgeInstanceMessageRoutingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateEdgeInstanceMessageRoutingResult::~CreateEdgeInstanceMessageRoutingResult()
{}

void CreateEdgeInstanceMessageRoutingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["RouteId"].isNull())
		routeId_ = std::stol(value["RouteId"].asString());

}

long CreateEdgeInstanceMessageRoutingResult::getRouteId()const
{
	return routeId_;
}

std::string CreateEdgeInstanceMessageRoutingResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string CreateEdgeInstanceMessageRoutingResult::getCode()const
{
	return code_;
}

bool CreateEdgeInstanceMessageRoutingResult::getSuccess()const
{
	return success_;
}

