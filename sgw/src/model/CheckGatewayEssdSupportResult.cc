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

#include <alibabacloud/sgw/model/CheckGatewayEssdSupportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

CheckGatewayEssdSupportResult::CheckGatewayEssdSupportResult() :
	ServiceResult()
{}

CheckGatewayEssdSupportResult::CheckGatewayEssdSupportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckGatewayEssdSupportResult::~CheckGatewayEssdSupportResult()
{}

void CheckGatewayEssdSupportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["IsSupportEssd"].isNull())
		isSupportEssd_ = value["IsSupportEssd"].asString() == "true";
	if(!value["IsServiceAffect"].isNull())
		isServiceAffect_ = value["IsServiceAffect"].asString() == "true";

}

bool CheckGatewayEssdSupportResult::getIsSupportEssd()const
{
	return isSupportEssd_;
}

std::string CheckGatewayEssdSupportResult::getMessage()const
{
	return message_;
}

bool CheckGatewayEssdSupportResult::getIsServiceAffect()const
{
	return isServiceAffect_;
}

std::string CheckGatewayEssdSupportResult::getCode()const
{
	return code_;
}

bool CheckGatewayEssdSupportResult::getSuccess()const
{
	return success_;
}

