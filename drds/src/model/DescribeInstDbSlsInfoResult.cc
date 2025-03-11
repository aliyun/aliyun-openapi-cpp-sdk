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

#include <alibabacloud/drds/model/DescribeInstDbSlsInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeInstDbSlsInfoResult::DescribeInstDbSlsInfoResult() :
	ServiceResult()
{}

DescribeInstDbSlsInfoResult::DescribeInstDbSlsInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstDbSlsInfoResult::~DescribeInstDbSlsInfoResult()
{}

void DescribeInstDbSlsInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto auditInfoNode = value["AuditInfo"];
	if(!auditInfoNode["LogStore"].isNull())
		auditInfo_.logStore = auditInfoNode["LogStore"].asString();
	if(!auditInfoNode["Project"].isNull())
		auditInfo_.project = auditInfoNode["Project"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeInstDbSlsInfoResult::AuditInfo DescribeInstDbSlsInfoResult::getAuditInfo()const
{
	return auditInfo_;
}

bool DescribeInstDbSlsInfoResult::getSuccess()const
{
	return success_;
}

