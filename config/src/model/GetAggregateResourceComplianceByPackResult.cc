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

#include <alibabacloud/config/model/GetAggregateResourceComplianceByPackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

GetAggregateResourceComplianceByPackResult::GetAggregateResourceComplianceByPackResult() :
	ServiceResult()
{}

GetAggregateResourceComplianceByPackResult::GetAggregateResourceComplianceByPackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAggregateResourceComplianceByPackResult::~GetAggregateResourceComplianceByPackResult()
{}

void GetAggregateResourceComplianceByPackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceComplianceResultNode = value["ResourceComplianceResult"];
	if(!resourceComplianceResultNode["CompliancePackId"].isNull())
		resourceComplianceResult_.compliancePackId = resourceComplianceResultNode["CompliancePackId"].asString();
	if(!resourceComplianceResultNode["NonCompliantCount"].isNull())
		resourceComplianceResult_.nonCompliantCount = std::stoi(resourceComplianceResultNode["NonCompliantCount"].asString());
	if(!resourceComplianceResultNode["TotalCount"].isNull())
		resourceComplianceResult_.totalCount = std::stoi(resourceComplianceResultNode["TotalCount"].asString());

}

GetAggregateResourceComplianceByPackResult::ResourceComplianceResult GetAggregateResourceComplianceByPackResult::getResourceComplianceResult()const
{
	return resourceComplianceResult_;
}

