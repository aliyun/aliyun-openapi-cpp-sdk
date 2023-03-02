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

#include <alibabacloud/lto/model/DescribeAdminInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

DescribeAdminInfoResult::DescribeAdminInfoResult() :
	ServiceResult()
{}

DescribeAdminInfoResult::DescribeAdminInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAdminInfoResult::~DescribeAdminInfoResult()
{}

void DescribeAdminInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["MemberId"].isNull())
		data_.memberId = dataNode["MemberId"].asString();
	if(!dataNode["Uid"].isNull())
		data_.uid = dataNode["Uid"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["AuthorizedCount"].isNull())
		data_.authorizedCount = std::stol(dataNode["AuthorizedCount"].asString());
	if(!dataNode["AuthorizedDeviceCount"].isNull())
		data_.authorizedDeviceCount = std::stol(dataNode["AuthorizedDeviceCount"].asString());
	if(!dataNode["Contactor"].isNull())
		data_.contactor = dataNode["Contactor"].asString();
	if(!dataNode["Telephony"].isNull())
		data_.telephony = dataNode["Telephony"].asString();
	if(!dataNode["Remark"].isNull())
		data_.remark = dataNode["Remark"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["AccessStatus"].isNull())
		data_.accessStatus = dataNode["AccessStatus"].asString();
	if(!dataNode["AccessDate"].isNull())
		data_.accessDate = std::stol(dataNode["AccessDate"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeAdminInfoResult::getMessage()const
{
	return message_;
}

int DescribeAdminInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeAdminInfoResult::Data DescribeAdminInfoResult::getData()const
{
	return data_;
}

std::string DescribeAdminInfoResult::getCode()const
{
	return code_;
}

bool DescribeAdminInfoResult::getSuccess()const
{
	return success_;
}

