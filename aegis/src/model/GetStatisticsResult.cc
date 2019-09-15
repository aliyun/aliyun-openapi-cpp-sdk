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

#include <alibabacloud/aegis/model/GetStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

GetStatisticsResult::GetStatisticsResult() :
	ServiceResult()
{}

GetStatisticsResult::GetStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStatisticsResult::~GetStatisticsResult()
{}

void GetStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Account"].isNull())
		data_.account = std::stoi(dataNode["Account"].asString());
	if(!dataNode["Health"].isNull())
		data_.health = std::stoi(dataNode["Health"].asString());
	if(!dataNode["Patch"].isNull())
		data_.patch = std::stoi(dataNode["Patch"].asString());
	if(!dataNode["Trojan"].isNull())
		data_.trojan = std::stoi(dataNode["Trojan"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetStatisticsResult::getRequestId()const
{
	return requestId_;
}

std::string GetStatisticsResult::getMessage()const
{
	return message_;
}

GetStatisticsResult::Data GetStatisticsResult::getData()const
{
	return data_;
}

std::string GetStatisticsResult::getCode()const
{
	return code_;
}

bool GetStatisticsResult::getSuccess()const
{
	return success_;
}

