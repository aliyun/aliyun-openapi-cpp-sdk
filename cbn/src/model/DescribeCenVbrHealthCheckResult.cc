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

#include <alibabacloud/cbn/model/DescribeCenVbrHealthCheckResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenVbrHealthCheckResult::DescribeCenVbrHealthCheckResult() :
	ServiceResult()
{}

DescribeCenVbrHealthCheckResult::DescribeCenVbrHealthCheckResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenVbrHealthCheckResult::~DescribeCenVbrHealthCheckResult()
{}

void DescribeCenVbrHealthCheckResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVbrHealthChecksNode = value["VbrHealthChecks"]["VbrHealthCheck"];
	for (auto valueVbrHealthChecksVbrHealthCheck : allVbrHealthChecksNode)
	{
		VbrHealthCheck vbrHealthChecksObject;
		if(!valueVbrHealthChecksVbrHealthCheck["HealthCheckTargetIp"].isNull())
			vbrHealthChecksObject.healthCheckTargetIp = valueVbrHealthChecksVbrHealthCheck["HealthCheckTargetIp"].asString();
		if(!valueVbrHealthChecksVbrHealthCheck["VbrInstanceId"].isNull())
			vbrHealthChecksObject.vbrInstanceId = valueVbrHealthChecksVbrHealthCheck["VbrInstanceId"].asString();
		if(!valueVbrHealthChecksVbrHealthCheck["VbrInstanceRegionId"].isNull())
			vbrHealthChecksObject.vbrInstanceRegionId = valueVbrHealthChecksVbrHealthCheck["VbrInstanceRegionId"].asString();
		if(!valueVbrHealthChecksVbrHealthCheck["Delay"].isNull())
			vbrHealthChecksObject.delay = std::stol(valueVbrHealthChecksVbrHealthCheck["Delay"].asString());
		if(!valueVbrHealthChecksVbrHealthCheck["LinkStatus"].isNull())
			vbrHealthChecksObject.linkStatus = valueVbrHealthChecksVbrHealthCheck["LinkStatus"].asString();
		if(!valueVbrHealthChecksVbrHealthCheck["CenId"].isNull())
			vbrHealthChecksObject.cenId = valueVbrHealthChecksVbrHealthCheck["CenId"].asString();
		if(!valueVbrHealthChecksVbrHealthCheck["HealthyThreshold"].isNull())
			vbrHealthChecksObject.healthyThreshold = std::stoi(valueVbrHealthChecksVbrHealthCheck["HealthyThreshold"].asString());
		if(!valueVbrHealthChecksVbrHealthCheck["HealthCheckInterval"].isNull())
			vbrHealthChecksObject.healthCheckInterval = std::stoi(valueVbrHealthChecksVbrHealthCheck["HealthCheckInterval"].asString());
		if(!valueVbrHealthChecksVbrHealthCheck["HealthCheckSourceIp"].isNull())
			vbrHealthChecksObject.healthCheckSourceIp = valueVbrHealthChecksVbrHealthCheck["HealthCheckSourceIp"].asString();
		if(!valueVbrHealthChecksVbrHealthCheck["PacketLoss"].isNull())
			vbrHealthChecksObject.packetLoss = std::stol(valueVbrHealthChecksVbrHealthCheck["PacketLoss"].asString());
		if(!valueVbrHealthChecksVbrHealthCheck["HealthCheckOnly"].isNull())
			vbrHealthChecksObject.healthCheckOnly = valueVbrHealthChecksVbrHealthCheck["HealthCheckOnly"].asString() == "true";
		if(!valueVbrHealthChecksVbrHealthCheck["Description"].isNull())
			vbrHealthChecksObject.description = valueVbrHealthChecksVbrHealthCheck["Description"].asString();
		vbrHealthChecks_.push_back(vbrHealthChecksObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCenVbrHealthCheckResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCenVbrHealthCheckResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenVbrHealthCheckResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCenVbrHealthCheckResult::VbrHealthCheck> DescribeCenVbrHealthCheckResult::getVbrHealthChecks()const
{
	return vbrHealthChecks_;
}

