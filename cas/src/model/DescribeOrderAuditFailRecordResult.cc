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

#include <alibabacloud/cas/model/DescribeOrderAuditFailRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeOrderAuditFailRecordResult::DescribeOrderAuditFailRecordResult() :
	ServiceResult()
{}

DescribeOrderAuditFailRecordResult::DescribeOrderAuditFailRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOrderAuditFailRecordResult::~DescribeOrderAuditFailRecordResult()
{}

void DescribeOrderAuditFailRecordResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["AuditNote"].isNull())
		auditNote_ = value["AuditNote"].asString();
	if(!value["AuditType"].isNull())
		auditType_ = value["AuditType"].asString();
	if(!value["AuditTime"].isNull())
		auditTime_ = std::stol(value["AuditTime"].asString());

}

std::string DescribeOrderAuditFailRecordResult::getAuditNote()const
{
	return auditNote_;
}

std::string DescribeOrderAuditFailRecordResult::getAuditType()const
{
	return auditType_;
}

long DescribeOrderAuditFailRecordResult::getAuditTime()const
{
	return auditTime_;
}

