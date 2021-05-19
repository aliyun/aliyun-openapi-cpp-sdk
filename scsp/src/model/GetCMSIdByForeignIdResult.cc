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

#include <alibabacloud/scsp/model/GetCMSIdByForeignIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

GetCMSIdByForeignIdResult::GetCMSIdByForeignIdResult() :
	ServiceResult()
{}

GetCMSIdByForeignIdResult::GetCMSIdByForeignIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCMSIdByForeignIdResult::~GetCMSIdByForeignIdResult()
{}

void GetCMSIdByForeignIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = std::stoi(dataNode["Status"].asString());
	if(!dataNode["CustomerTypeId"].isNull())
		data_.customerTypeId = std::stoi(dataNode["CustomerTypeId"].asString());
	if(!dataNode["Avatar"].isNull())
		data_.avatar = dataNode["Avatar"].asString();
	if(!dataNode["Gender"].isNull())
		data_.gender = dataNode["Gender"].asString();
	if(!dataNode["ForeignId"].isNull())
		data_.foreignId = dataNode["ForeignId"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	if(!dataNode["Nick"].isNull())
		data_.nick = dataNode["Nick"].asString();
	if(!dataNode["Anonymity"].isNull())
		data_.anonymity = dataNode["Anonymity"].asString() == "true";
	if(!dataNode["Phone"].isNull())
		data_.phone = dataNode["Phone"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetCMSIdByForeignIdResult::getMessage()const
{
	return message_;
}

GetCMSIdByForeignIdResult::Data GetCMSIdByForeignIdResult::getData()const
{
	return data_;
}

std::string GetCMSIdByForeignIdResult::getCode()const
{
	return code_;
}

bool GetCMSIdByForeignIdResult::getSuccess()const
{
	return success_;
}

