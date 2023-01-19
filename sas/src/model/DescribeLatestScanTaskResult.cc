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

#include <alibabacloud/sas/model/DescribeLatestScanTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeLatestScanTaskResult::DescribeLatestScanTaskResult() :
	ServiceResult()
{}

DescribeLatestScanTaskResult::DescribeLatestScanTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLatestScanTaskResult::~DescribeLatestScanTaskResult()
{}

void DescribeLatestScanTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUuids = value["Uuids"]["uuid"];
	for (const auto &item : allUuids)
		uuids_.push_back(item.asString());
	if(!value["TargetInfo"].isNull())
		targetInfo_ = value["TargetInfo"].asString();
	if(!value["LastCheckTime"].isNull())
		lastCheckTime_ = std::stol(value["LastCheckTime"].asString());
	if(!value["RiskNum"].isNull())
		riskNum_ = std::stoi(value["RiskNum"].asString());

}

std::string DescribeLatestScanTaskResult::getTargetInfo()const
{
	return targetInfo_;
}

long DescribeLatestScanTaskResult::getLastCheckTime()const
{
	return lastCheckTime_;
}

int DescribeLatestScanTaskResult::getRiskNum()const
{
	return riskNum_;
}

std::vector<std::string> DescribeLatestScanTaskResult::getUuids()const
{
	return uuids_;
}

