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

#include <alibabacloud/dcdn/model/DescribeDcdnDdosServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDdosServiceResult::DescribeDcdnDdosServiceResult() :
	ServiceResult()
{}

DescribeDcdnDdosServiceResult::DescribeDcdnDdosServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDdosServiceResult::~DescribeDcdnDdosServiceResult()
{}

void DescribeDcdnDdosServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ChangingAffectTime"].isNull())
		changingAffectTime_ = value["ChangingAffectTime"].asString();
	if(!value["OpeningTime"].isNull())
		openingTime_ = value["OpeningTime"].asString();
	if(!value["ChangingEdition"].isNull())
		changingEdition_ = value["ChangingEdition"].asString();
	if(!value["ChargeType"].isNull())
		chargeType_ = value["ChargeType"].asString();
	if(!value["DomianNum"].isNull())
		domianNum_ = std::stoi(value["DomianNum"].asString());
	if(!value["ChangingProtectNum"].isNull())
		changingProtectNum_ = std::stoi(value["ChangingProtectNum"].asString());
	if(!value["ChangingDomianNum"].isNull())
		changingDomianNum_ = std::stoi(value["ChangingDomianNum"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["Edition"].isNull())
		edition_ = value["Edition"].asString();
	if(!value["ChangingChargeType"].isNull())
		changingChargeType_ = value["ChangingChargeType"].asString();
	if(!value["ProtectNum"].isNull())
		protectNum_ = std::stoi(value["ProtectNum"].asString());
	if(!value["Enabled"].isNull())
		enabled_ = value["Enabled"].asString();
	if(!value["EndingTime"].isNull())
		endingTime_ = value["EndingTime"].asString();

}

std::string DescribeDcdnDdosServiceResult::getStatus()const
{
	return status_;
}

std::string DescribeDcdnDdosServiceResult::getChangingEdition()const
{
	return changingEdition_;
}

std::string DescribeDcdnDdosServiceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeDcdnDdosServiceResult::getOpeningTime()const
{
	return openingTime_;
}

std::string DescribeDcdnDdosServiceResult::getEnabled()const
{
	return enabled_;
}

std::string DescribeDcdnDdosServiceResult::getEndingTime()const
{
	return endingTime_;
}

std::string DescribeDcdnDdosServiceResult::getChangingAffectTime()const
{
	return changingAffectTime_;
}

std::string DescribeDcdnDdosServiceResult::getEdition()const
{
	return edition_;
}

int DescribeDcdnDdosServiceResult::getChangingProtectNum()const
{
	return changingProtectNum_;
}

std::string DescribeDcdnDdosServiceResult::getChangingChargeType()const
{
	return changingChargeType_;
}

int DescribeDcdnDdosServiceResult::getProtectNum()const
{
	return protectNum_;
}

std::string DescribeDcdnDdosServiceResult::getChargeType()const
{
	return chargeType_;
}

int DescribeDcdnDdosServiceResult::getDomianNum()const
{
	return domianNum_;
}

int DescribeDcdnDdosServiceResult::getChangingDomianNum()const
{
	return changingDomianNum_;
}

