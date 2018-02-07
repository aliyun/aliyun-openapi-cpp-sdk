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

#include <alibabacloud/aegis/model/GetAccountStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

GetAccountStatisticsResult::GetAccountStatisticsResult() :
	ServiceResult()
{}

GetAccountStatisticsResult::GetAccountStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountStatisticsResult::~GetAccountStatisticsResult()
{}

void GetAccountStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"];
	for (auto value : allData)
	{
		Data dataObject;
		if(!value["RemoteLogin"].isNull())
			dataObject.remoteLogin = std::stoi(value["RemoteLogin"].asString());
		if(!value["CrackSuccess"].isNull())
			dataObject.crackSuccess = std::stoi(value["CrackSuccess"].asString());
		data_.push_back(dataObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetAccountStatisticsResult::getRequestId()const
{
	return requestId_;
}

std::string GetAccountStatisticsResult::getMessage()const
{
	return message_;
}

std::vector<GetAccountStatisticsResult::Data> GetAccountStatisticsResult::getData()const
{
	return data_;
}

std::string GetAccountStatisticsResult::getCode()const
{
	return code_;
}

bool GetAccountStatisticsResult::getSuccess()const
{
	return success_;
}

