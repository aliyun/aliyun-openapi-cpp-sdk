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

#include <alibabacloud/sas/model/DescribeScanTaskStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeScanTaskStatisticsResult::DescribeScanTaskStatisticsResult() :
	ServiceResult()
{}

DescribeScanTaskStatisticsResult::DescribeScanTaskStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScanTaskStatisticsResult::~DescribeScanTaskStatisticsResult()
{}

void DescribeScanTaskStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TotalTaskNum"].isNull())
		totalTaskNum_ = std::stol(value["TotalTaskNum"].asString());
	if(!value["UserNum"].isNull())
		userNum_ = std::stol(value["UserNum"].asString());
	if(!value["DealedRiskNum"].isNull())
		dealedRiskNum_ = std::stoi(value["DealedRiskNum"].asString());
	if(!value["PersonalTaskNum"].isNull())
		personalTaskNum_ = std::stol(value["PersonalTaskNum"].asString());

}

long DescribeScanTaskStatisticsResult::getTotalTaskNum()const
{
	return totalTaskNum_;
}

int DescribeScanTaskStatisticsResult::getDealedRiskNum()const
{
	return dealedRiskNum_;
}

long DescribeScanTaskStatisticsResult::getPersonalTaskNum()const
{
	return personalTaskNum_;
}

long DescribeScanTaskStatisticsResult::getUserNum()const
{
	return userNum_;
}

