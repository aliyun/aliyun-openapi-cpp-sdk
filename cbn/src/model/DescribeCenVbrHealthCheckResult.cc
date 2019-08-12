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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allVbrHealthChecks = value["VbrHealthChecks"]["VbrHealthCheck"];
	for (auto value : allVbrHealthChecks)
	{
		VbrHealthCheck vbrHealthChecksObject;
		if(!value["CenId"].isNull())
			vbrHealthChecksObject.cenId = value["CenId"].asString();
		if(!value["VbrInstanceId"].isNull())
			vbrHealthChecksObject.vbrInstanceId = value["VbrInstanceId"].asString();
		if(!value["LinkStatus"].isNull())
			vbrHealthChecksObject.linkStatus = value["LinkStatus"].asString();
		if(!value["PacketLoss"].isNull())
			vbrHealthChecksObject.packetLoss = std::stol(value["PacketLoss"].asString());
		if(!value["HealthCheckSourceIp"].isNull())
			vbrHealthChecksObject.healthCheckSourceIp = value["HealthCheckSourceIp"].asString();
		if(!value["HealthCheckTargetIp"].isNull())
			vbrHealthChecksObject.healthCheckTargetIp = value["HealthCheckTargetIp"].asString();
		if(!value["Delay"].isNull())
			vbrHealthChecksObject.delay = std::stol(value["Delay"].asString());
		vbrHealthChecks_.push_back(vbrHealthChecksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

