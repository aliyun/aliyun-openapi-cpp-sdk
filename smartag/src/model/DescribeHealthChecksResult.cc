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

#include <alibabacloud/smartag/model/DescribeHealthChecksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeHealthChecksResult::DescribeHealthChecksResult() :
	ServiceResult()
{}

DescribeHealthChecksResult::DescribeHealthChecksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHealthChecksResult::~DescribeHealthChecksResult()
{}

void DescribeHealthChecksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHealthChecksNode = value["HealthChecks"]["HealthCheck"];
	for (auto valueHealthChecksHealthCheck : allHealthChecksNode)
	{
		HealthCheck healthChecksObject;
		if(!valueHealthChecksHealthCheck["Type"].isNull())
			healthChecksObject.type = valueHealthChecksHealthCheck["Type"].asString();
		if(!valueHealthChecksHealthCheck["ProbeTimeout"].isNull())
			healthChecksObject.probeTimeout = std::stoi(valueHealthChecksHealthCheck["ProbeTimeout"].asString());
		if(!valueHealthChecksHealthCheck["Status"].isNull())
			healthChecksObject.status = valueHealthChecksHealthCheck["Status"].asString();
		if(!valueHealthChecksHealthCheck["DstIpAddr"].isNull())
			healthChecksObject.dstIpAddr = valueHealthChecksHealthCheck["DstIpAddr"].asString();
		if(!valueHealthChecksHealthCheck["RelationCount"].isNull())
			healthChecksObject.relationCount = std::stoi(valueHealthChecksHealthCheck["RelationCount"].asString());
		if(!valueHealthChecksHealthCheck["RttFailThreshold"].isNull())
			healthChecksObject.rttFailThreshold = std::stoi(valueHealthChecksHealthCheck["RttFailThreshold"].asString());
		if(!valueHealthChecksHealthCheck["SmartAGId"].isNull())
			healthChecksObject.smartAGId = valueHealthChecksHealthCheck["SmartAGId"].asString();
		if(!valueHealthChecksHealthCheck["DstPort"].isNull())
			healthChecksObject.dstPort = std::stoi(valueHealthChecksHealthCheck["DstPort"].asString());
		if(!valueHealthChecksHealthCheck["FailCountThreshold"].isNull())
			healthChecksObject.failCountThreshold = std::stoi(valueHealthChecksHealthCheck["FailCountThreshold"].asString());
		if(!valueHealthChecksHealthCheck["RttThreshold"].isNull())
			healthChecksObject.rttThreshold = std::stoi(valueHealthChecksHealthCheck["RttThreshold"].asString());
		if(!valueHealthChecksHealthCheck["SrcPort"].isNull())
			healthChecksObject.srcPort = std::stoi(valueHealthChecksHealthCheck["SrcPort"].asString());
		if(!valueHealthChecksHealthCheck["ProbeCount"].isNull())
			healthChecksObject.probeCount = std::stoi(valueHealthChecksHealthCheck["ProbeCount"].asString());
		if(!valueHealthChecksHealthCheck["Description"].isNull())
			healthChecksObject.description = valueHealthChecksHealthCheck["Description"].asString();
		if(!valueHealthChecksHealthCheck["SrcIpAddr"].isNull())
			healthChecksObject.srcIpAddr = valueHealthChecksHealthCheck["SrcIpAddr"].asString();
		if(!valueHealthChecksHealthCheck["ProbeInterval"].isNull())
			healthChecksObject.probeInterval = std::stoi(valueHealthChecksHealthCheck["ProbeInterval"].asString());
		if(!valueHealthChecksHealthCheck["Name"].isNull())
			healthChecksObject.name = valueHealthChecksHealthCheck["Name"].asString();
		if(!valueHealthChecksHealthCheck["HcInstanceId"].isNull())
			healthChecksObject.hcInstanceId = valueHealthChecksHealthCheck["HcInstanceId"].asString();
		healthChecks_.push_back(healthChecksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeHealthChecksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeHealthChecksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeHealthChecksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeHealthChecksResult::HealthCheck> DescribeHealthChecksResult::getHealthChecks()const
{
	return healthChecks_;
}

