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

#include <alibabacloud/lto/model/DescribeAccountRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

DescribeAccountRoleResult::DescribeAccountRoleResult() :
	ServiceResult()
{}

DescribeAccountRoleResult::DescribeAccountRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountRoleResult::~DescribeAccountRoleResult()
{}

void DescribeAccountRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AuthorizedBaaS"].isNull())
		data_.authorizedBaaS = dataNode["AuthorizedBaaS"].asString() == "true";
	if(!dataNode["RoleType"].isNull())
		data_.roleType = dataNode["RoleType"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeAccountRoleResult::getMessage()const
{
	return message_;
}

int DescribeAccountRoleResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DescribeAccountRoleResult::Data DescribeAccountRoleResult::getData()const
{
	return data_;
}

std::string DescribeAccountRoleResult::getCode()const
{
	return code_;
}

bool DescribeAccountRoleResult::getSuccess()const
{
	return success_;
}

