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

#include <alibabacloud/waf-openapi/model/DescribeLogServiceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeLogServiceStatusResult::DescribeLogServiceStatusResult() :
	ServiceResult()
{}

DescribeLogServiceStatusResult::DescribeLogServiceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogServiceStatusResult::~DescribeLogServiceStatusResult()
{}

void DescribeLogServiceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainStatusNode = value["DomainStatus"]["status"];
	for (auto valueDomainStatusstatus : allDomainStatusNode)
	{
		Status domainStatusObject;
		if(!valueDomainStatusstatus["Domain"].isNull())
			domainStatusObject.domain = valueDomainStatusstatus["Domain"].asString();
		if(!valueDomainStatusstatus["SlsLogActive"].isNull())
			domainStatusObject.slsLogActive = std::stoi(valueDomainStatusstatus["SlsLogActive"].asString());
		domainStatus_.push_back(domainStatusObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeLogServiceStatusResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeLogServiceStatusResult::Status> DescribeLogServiceStatusResult::getDomainStatus()const
{
	return domainStatus_;
}

