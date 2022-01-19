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

#include <alibabacloud/mse/model/DeleteGatewayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

DeleteGatewayResult::DeleteGatewayResult() :
	ServiceResult()
{}

DeleteGatewayResult::DeleteGatewayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteGatewayResult::~DeleteGatewayResult()
{}

void DeleteGatewayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["GatewayUniqueId"].isNull())
		data_.gatewayUniqueId = dataNode["GatewayUniqueId"].asString();
	if(!dataNode["Region"].isNull())
		data_.region = dataNode["Region"].asString();
	if(!dataNode["PrimaryUser"].isNull())
		data_.primaryUser = dataNode["PrimaryUser"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["Vpc"].isNull())
		data_.vpc = dataNode["Vpc"].asString();
	if(!dataNode["Vswitch"].isNull())
		data_.vswitch = dataNode["Vswitch"].asString();
	if(!dataNode["SecurityGroup"].isNull())
		data_.securityGroup = dataNode["SecurityGroup"].asString();
	if(!dataNode["Spec"].isNull())
		data_.spec = dataNode["Spec"].asString();
	if(!dataNode["Replica"].isNull())
		data_.replica = std::stoi(dataNode["Replica"].asString());
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

std::string DeleteGatewayResult::getMessage()const
{
	return message_;
}

int DeleteGatewayResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DeleteGatewayResult::Data DeleteGatewayResult::getData()const
{
	return data_;
}

int DeleteGatewayResult::getCode()const
{
	return code_;
}

bool DeleteGatewayResult::getSuccess()const
{
	return success_;
}

