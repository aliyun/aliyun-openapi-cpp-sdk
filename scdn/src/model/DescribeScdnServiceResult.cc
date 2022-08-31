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

#include <alibabacloud/scdn/model/DescribeScdnServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnServiceResult::DescribeScdnServiceResult() :
	ServiceResult()
{}

DescribeScdnServiceResult::DescribeScdnServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnServiceResult::~DescribeScdnServiceResult()
{}

void DescribeScdnServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOperationLocksNode = value["OperationLocks"]["LockReason"];
	for (auto valueOperationLocksLockReason : allOperationLocksNode)
	{
		LockReason operationLocksObject;
		if(!valueOperationLocksLockReason["LockReason"].isNull())
			operationLocksObject.lockReason = valueOperationLocksLockReason["LockReason"].asString();
		operationLocks_.push_back(operationLocksObject);
	}
	if(!value["DomainCountValue"].isNull())
		domainCountValue_ = value["DomainCountValue"].asString();
	if(!value["DDoSBasicValue"].isNull())
		dDoSBasicValue_ = value["DDoSBasicValue"].asString();
	if(!value["ChangingAffectTime"].isNull())
		changingAffectTime_ = value["ChangingAffectTime"].asString();
	if(!value["CcProtection"].isNull())
		ccProtection_ = value["CcProtection"].asString();
	if(!value["CurrentDomainCount"].isNull())
		currentDomainCount_ = value["CurrentDomainCount"].asString();
	if(!value["PricingCycle"].isNull())
		pricingCycle_ = value["PricingCycle"].asString();
	if(!value["OpenTime"].isNull())
		openTime_ = value["OpenTime"].asString();
	if(!value["ChangingChargeType"].isNull())
		changingChargeType_ = value["ChangingChargeType"].asString();
	if(!value["CurrentBandwidthValue"].isNull())
		currentBandwidthValue_ = value["CurrentBandwidthValue"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = value["Bandwidth"].asString();
	if(!value["DomainCount"].isNull())
		domainCount_ = value["DomainCount"].asString();
	if(!value["ProtectTypeValue"].isNull())
		protectTypeValue_ = value["ProtectTypeValue"].asString();
	if(!value["CurrentBandwidth"].isNull())
		currentBandwidth_ = value["CurrentBandwidth"].asString();
	if(!value["PriceType"].isNull())
		priceType_ = value["PriceType"].asString();
	if(!value["CcProtectionValue"].isNull())
		ccProtectionValue_ = value["CcProtectionValue"].asString();
	if(!value["CurrentDDoSBasic"].isNull())
		currentDDoSBasic_ = value["CurrentDDoSBasic"].asString();
	if(!value["ProtectType"].isNull())
		protectType_ = value["ProtectType"].asString();
	if(!value["CurrentElasticProtection"].isNull())
		currentElasticProtection_ = value["CurrentElasticProtection"].asString();
	if(!value["CurrentElasticProtectionValue"].isNull())
		currentElasticProtectionValue_ = value["CurrentElasticProtectionValue"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["CurrentProtectType"].isNull())
		currentProtectType_ = value["CurrentProtectType"].asString();
	if(!value["ElasticProtection"].isNull())
		elasticProtection_ = value["ElasticProtection"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["CurrentDDoSBasicValue"].isNull())
		currentDDoSBasicValue_ = value["CurrentDDoSBasicValue"].asString();
	if(!value["BandwidthValue"].isNull())
		bandwidthValue_ = value["BandwidthValue"].asString();
	if(!value["DDoSBasic"].isNull())
		dDoSBasic_ = value["DDoSBasic"].asString();
	if(!value["CurrentDomainCountValue"].isNull())
		currentDomainCountValue_ = value["CurrentDomainCountValue"].asString();
	if(!value["ElasticProtectionValue"].isNull())
		elasticProtectionValue_ = value["ElasticProtectionValue"].asString();
	if(!value["CurrentCcProtection"].isNull())
		currentCcProtection_ = value["CurrentCcProtection"].asString();
	if(!value["InternetChargeType"].isNull())
		internetChargeType_ = value["InternetChargeType"].asString();
	if(!value["CurrentProtectTypeValue"].isNull())
		currentProtectTypeValue_ = value["CurrentProtectTypeValue"].asString();
	if(!value["CurrentCcProtectionValue"].isNull())
		currentCcProtectionValue_ = value["CurrentCcProtectionValue"].asString();

}

std::string DescribeScdnServiceResult::getCurrentDDoSBasicValue()const
{
	return currentDDoSBasicValue_;
}

std::string DescribeScdnServiceResult::getCurrentElasticProtectionValue()const
{
	return currentElasticProtectionValue_;
}

std::string DescribeScdnServiceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnServiceResult::getPricingCycle()const
{
	return pricingCycle_;
}

std::string DescribeScdnServiceResult::getElasticProtection()const
{
	return elasticProtection_;
}

std::string DescribeScdnServiceResult::getDomainCountValue()const
{
	return domainCountValue_;
}

std::string DescribeScdnServiceResult::getCurrentDomainCount()const
{
	return currentDomainCount_;
}

std::string DescribeScdnServiceResult::getDDoSBasic()const
{
	return dDoSBasic_;
}

std::string DescribeScdnServiceResult::getCcProtectionValue()const
{
	return ccProtectionValue_;
}

std::string DescribeScdnServiceResult::getElasticProtectionValue()const
{
	return elasticProtectionValue_;
}

std::string DescribeScdnServiceResult::getOpenTime()const
{
	return openTime_;
}

std::string DescribeScdnServiceResult::getChangingChargeType()const
{
	return changingChargeType_;
}

std::string DescribeScdnServiceResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeScdnServiceResult::getDomainCount()const
{
	return domainCount_;
}

std::string DescribeScdnServiceResult::getCurrentBandwidth()const
{
	return currentBandwidth_;
}

std::string DescribeScdnServiceResult::getCurrentElasticProtection()const
{
	return currentElasticProtection_;
}

std::string DescribeScdnServiceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeScdnServiceResult::getCurrentCcProtectionValue()const
{
	return currentCcProtectionValue_;
}

std::string DescribeScdnServiceResult::getCurrentDDoSBasic()const
{
	return currentDDoSBasic_;
}

std::string DescribeScdnServiceResult::getCurrentProtectType()const
{
	return currentProtectType_;
}

std::string DescribeScdnServiceResult::getCurrentDomainCountValue()const
{
	return currentDomainCountValue_;
}

std::string DescribeScdnServiceResult::getCurrentBandwidthValue()const
{
	return currentBandwidthValue_;
}

std::string DescribeScdnServiceResult::getProtectTypeValue()const
{
	return protectTypeValue_;
}

std::string DescribeScdnServiceResult::getCurrentProtectTypeValue()const
{
	return currentProtectTypeValue_;
}

std::string DescribeScdnServiceResult::getCcProtection()const
{
	return ccProtection_;
}

std::vector<DescribeScdnServiceResult::LockReason> DescribeScdnServiceResult::getOperationLocks()const
{
	return operationLocks_;
}

std::string DescribeScdnServiceResult::getChangingAffectTime()const
{
	return changingAffectTime_;
}

std::string DescribeScdnServiceResult::getInternetChargeType()const
{
	return internetChargeType_;
}

std::string DescribeScdnServiceResult::getDDoSBasicValue()const
{
	return dDoSBasicValue_;
}

std::string DescribeScdnServiceResult::getProtectType()const
{
	return protectType_;
}

std::string DescribeScdnServiceResult::getCurrentCcProtection()const
{
	return currentCcProtection_;
}

std::string DescribeScdnServiceResult::getPriceType()const
{
	return priceType_;
}

std::string DescribeScdnServiceResult::getBandwidthValue()const
{
	return bandwidthValue_;
}

