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

#include <alibabacloud/cloudauth/model/VehicleQueryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

VehicleQueryResult::VehicleQueryResult() :
	ServiceResult()
{}

VehicleQueryResult::VehicleQueryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

VehicleQueryResult::~VehicleQueryResult()
{}

void VehicleQueryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultObjectNode = value["ResultObject"];
	if(!resultObjectNode["BizCode"].isNull())
		resultObject_.bizCode = resultObjectNode["BizCode"].asString();
	if(!resultObjectNode["VehicleInfo"].isNull())
		resultObject_.vehicleInfo = resultObjectNode["VehicleInfo"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

VehicleQueryResult::ResultObject VehicleQueryResult::getResultObject()const
{
	return resultObject_;
}

std::string VehicleQueryResult::getMessage()const
{
	return message_;
}

std::string VehicleQueryResult::getCode()const
{
	return code_;
}

