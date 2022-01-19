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

#include <alibabacloud/mse/model/GetBlackWhiteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetBlackWhiteListResult::GetBlackWhiteListResult() :
	ServiceResult()
{}

GetBlackWhiteListResult::GetBlackWhiteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBlackWhiteListResult::~GetBlackWhiteListResult()
{}

void GetBlackWhiteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["ResourceId"].isNull())
		data_.resourceId = std::stol(dataNode["ResourceId"].asString());
	if(!dataNode["ResourceType"].isNull())
		data_.resourceType = dataNode["ResourceType"].asString();
	if(!dataNode["Content"].isNull())
		data_.content = dataNode["Content"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["IsWhite"].isNull())
		data_.isWhite = dataNode["IsWhite"].asString() == "true";
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["GatewayId"].isNull())
		data_.gatewayId = std::stol(dataNode["GatewayId"].asString());
	if(!dataNode["GatewayUniqueId"].isNull())
		data_.gatewayUniqueId = dataNode["GatewayUniqueId"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetBlackWhiteListResult::getMessage()const
{
	return message_;
}

int GetBlackWhiteListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetBlackWhiteListResult::Data GetBlackWhiteListResult::getData()const
{
	return data_;
}

int GetBlackWhiteListResult::getCode()const
{
	return code_;
}

bool GetBlackWhiteListResult::getSuccess()const
{
	return success_;
}

