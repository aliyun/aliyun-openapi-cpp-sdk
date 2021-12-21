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

#include <alibabacloud/config/model/CreateAggregateCompliancePackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

CreateAggregateCompliancePackResult::CreateAggregateCompliancePackResult() :
	ServiceResult()
{}

CreateAggregateCompliancePackResult::CreateAggregateCompliancePackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAggregateCompliancePackResult::~CreateAggregateCompliancePackResult()
{}

void CreateAggregateCompliancePackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CompliancePackId"].isNull())
		compliancePackId_ = value["CompliancePackId"].asString();

}

std::string CreateAggregateCompliancePackResult::getCompliancePackId()const
{
	return compliancePackId_;
}

