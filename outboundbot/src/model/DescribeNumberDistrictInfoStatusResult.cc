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

#include <alibabacloud/outboundbot/model/DescribeNumberDistrictInfoStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeNumberDistrictInfoStatusResult::DescribeNumberDistrictInfoStatusResult() :
	ServiceResult()
{}

DescribeNumberDistrictInfoStatusResult::DescribeNumberDistrictInfoStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNumberDistrictInfoStatusResult::~DescribeNumberDistrictInfoStatusResult()
{}

void DescribeNumberDistrictInfoStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto appliedVersionNode = value["AppliedVersion"];
	if(!appliedVersionNode["VersionId"].isNull())
		appliedVersion_.versionId = appliedVersionNode["VersionId"].asString();
	if(!appliedVersionNode["FileName"].isNull())
		appliedVersion_.fileName = appliedVersionNode["FileName"].asString();
	if(!appliedVersionNode["FileSize"].isNull())
		appliedVersion_.fileSize = std::stol(appliedVersionNode["FileSize"].asString());
	auto parsingVersionNode = value["ParsingVersion"];
	if(!parsingVersionNode["VersionId"].isNull())
		parsingVersion_.versionId = parsingVersionNode["VersionId"].asString();
	if(!parsingVersionNode["FileName"].isNull())
		parsingVersion_.fileName = parsingVersionNode["FileName"].asString();
	if(!parsingVersionNode["FileSize"].isNull())
		parsingVersion_.fileSize = std::stol(parsingVersionNode["FileSize"].asString());
	if(!parsingVersionNode["ParseProgress"].isNull())
		parsingVersion_.parseProgress = std::stol(parsingVersionNode["ParseProgress"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string DescribeNumberDistrictInfoStatusResult::getStatus()const
{
	return status_;
}

DescribeNumberDistrictInfoStatusResult::AppliedVersion DescribeNumberDistrictInfoStatusResult::getAppliedVersion()const
{
	return appliedVersion_;
}

DescribeNumberDistrictInfoStatusResult::ParsingVersion DescribeNumberDistrictInfoStatusResult::getParsingVersion()const
{
	return parsingVersion_;
}

std::string DescribeNumberDistrictInfoStatusResult::getMessage()const
{
	return message_;
}

int DescribeNumberDistrictInfoStatusResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeNumberDistrictInfoStatusResult::getCode()const
{
	return code_;
}

bool DescribeNumberDistrictInfoStatusResult::getSuccess()const
{
	return success_;
}

