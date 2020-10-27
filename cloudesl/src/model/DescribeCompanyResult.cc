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

#include <alibabacloud/cloudesl/model/DescribeCompanyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeCompanyResult::DescribeCompanyResult() :
	ServiceResult()
{}

DescribeCompanyResult::DescribeCompanyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCompanyResult::~DescribeCompanyResult()
{}

void DescribeCompanyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["CompanyId"].isNull())
		companyId_ = value["CompanyId"].asString();
	if(!value["Platform"].isNull())
		platform_ = value["Platform"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string DescribeCompanyResult::getStatus()const
{
	return status_;
}

std::string DescribeCompanyResult::getMessage()const
{
	return message_;
}

std::string DescribeCompanyResult::getCompanyId()const
{
	return companyId_;
}

std::string DescribeCompanyResult::getPlatform()const
{
	return platform_;
}

std::string DescribeCompanyResult::getErrorCode()const
{
	return errorCode_;
}

bool DescribeCompanyResult::getSuccess()const
{
	return success_;
}

