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

#include <alibabacloud/afs/model/DescribeCaptchaRiskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeCaptchaRiskResult::DescribeCaptchaRiskResult() :
	ServiceResult()
{}

DescribeCaptchaRiskResult::DescribeCaptchaRiskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCaptchaRiskResult::~DescribeCaptchaRiskResult()
{}

void DescribeCaptchaRiskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["NumOfThisMonth"].isNull())
		numOfThisMonth_ = std::stoi(value["NumOfThisMonth"].asString());
	if(!value["NumOfLastMonth"].isNull())
		numOfLastMonth_ = std::stoi(value["NumOfLastMonth"].asString());
	if(!value["RiskLevel"].isNull())
		riskLevel_ = value["RiskLevel"].asString();

}

int DescribeCaptchaRiskResult::getNumOfLastMonth()const
{
	return numOfLastMonth_;
}

std::string DescribeCaptchaRiskResult::getRiskLevel()const
{
	return riskLevel_;
}

std::string DescribeCaptchaRiskResult::getBizCode()const
{
	return bizCode_;
}

int DescribeCaptchaRiskResult::getNumOfThisMonth()const
{
	return numOfThisMonth_;
}

