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

#include <alibabacloud/green/model/DescribeAuditSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeAuditSettingResult::DescribeAuditSettingResult() :
	ServiceResult()
{}

DescribeAuditSettingResult::DescribeAuditSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuditSettingResult::~DescribeAuditSettingResult()
{}

void DescribeAuditSettingResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto auditRangeNode = value["AuditRange"];
	if(!auditRangeNode["block"].isNull())
		auditRange_.block = auditRangeNode["block"].asString() == "true";
	if(!auditRangeNode["review"].isNull())
		auditRange_.review = auditRangeNode["review"].asString() == "true";
	if(!auditRangeNode["pass"].isNull())
		auditRange_.pass = auditRangeNode["pass"].asString() == "true";
	if(!value["Seed"].isNull())
		seed_ = value["Seed"].asString();
	if(!value["Callback"].isNull())
		callback_ = value["Callback"].asString();

}

DescribeAuditSettingResult::AuditRange DescribeAuditSettingResult::getAuditRange()const
{
	return auditRange_;
}

std::string DescribeAuditSettingResult::getCallback()const
{
	return callback_;
}

std::string DescribeAuditSettingResult::getSeed()const
{
	return seed_;
}

