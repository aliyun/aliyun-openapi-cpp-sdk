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

#include <alibabacloud/market/model/CrossAccountVerifyTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

CrossAccountVerifyTokenResult::CrossAccountVerifyTokenResult() :
	ServiceResult()
{}

CrossAccountVerifyTokenResult::CrossAccountVerifyTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CrossAccountVerifyTokenResult::~CrossAccountVerifyTokenResult()
{}

void CrossAccountVerifyTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["Uid"].isNull())
		result_.uid = resultNode["Uid"].asString();
	if(!resultNode["AuthTime"].isNull())
		result_.authTime = std::stol(resultNode["AuthTime"].asString());
		auto allAuthRoles = resultNode["AuthRoles"]["AuthRole"];
		for (auto value : allAuthRoles)
			result_.authRoles.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CrossAccountVerifyTokenResult::getMessage()const
{
	return message_;
}

std::string CrossAccountVerifyTokenResult::getCode()const
{
	return code_;
}

bool CrossAccountVerifyTokenResult::getSuccess()const
{
	return success_;
}

CrossAccountVerifyTokenResult::Result CrossAccountVerifyTokenResult::getResult()const
{
	return result_;
}

