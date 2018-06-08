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
	auto allOperationLocks = value["OperationLocks"]["LockReason"];
	for (auto value : allOperationLocks)
	{
		LockReason operationLocksObject;
		if(!value["LockReason"].isNull())
			operationLocksObject.lockReason = value["LockReason"].asString();
		operationLocks_.push_back(operationLocksObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["OpenTime"].isNull())
		openTime_ = value["OpenTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["ProtectType"].isNull())
		protectType_ = value["ProtectType"].asString();
	if(!value["ProtectTypeValue"].isNull())
		protectTypeValue_ = value["ProtectTypeValue"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = value["Bandwidth"].asString();
	if(!value["CcProtection"].isNull())
		ccProtection_ = value["CcProtection"].asString();
	if(!value["DDoSBasic"].isNull())
		dDoSBasic_ = value["DDoSBasic"].asString();
	if(!value["DomainCount"].isNull())
		domainCount_ = value["DomainCount"].asString();
	if(!value["ElasticProtection"].isNull())
		elasticProtection_ = value["ElasticProtection"].asString();
	if(!value["BandwidthValue"].isNull())
		bandwidthValue_ = value["BandwidthValue"].asString();
	if(!value["CcProtectionValue"].isNull())
		ccProtectionValue_ = value["CcProtectionValue"].asString();
	if(!value["DDoSBasicValue"].isNull())
		dDoSBasicValue_ = value["DDoSBasicValue"].asString();
	if(!value["DomainCountValue"].isNull())
		domainCountValue_ = value["DomainCountValue"].asString();
	if(!value["ElasticProtectionValue"].isNull())
		elasticProtectionValue_ = value["ElasticProtectionValue"].asString();
	if(!value["PriceType"].isNull())
		priceType_ = value["PriceType"].asString();
	if(!value["PricingCycle"].isNull())
		pricingCycle_ = value["PricingCycle"].asString();

}

std::string DescribeScdnServiceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeScdnServiceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeScdnServiceResult::getPricingCycle()const
{
	return pricingCycle_;
}

std::string DescribeScdnServiceResult::getElasticProtection()const
{
	return elasticProtection_;
}

std::string DescribeScdnServiceResult::getDDoSBasic()const
{
	return dDoSBasic_;
}

std::string DescribeScdnServiceResult::getDomainCountValue()const
{
	return domainCountValue_;
}

std::string DescribeScdnServiceResult::getProtectTypeValue()const
{
	return protectTypeValue_;
}

std::string DescribeScdnServiceResult::getCcProtectionValue()const
{
	return ccProtectionValue_;
}

std::string DescribeScdnServiceResult::getCcProtection()const
{
	return ccProtection_;
}

std::vector<DescribeScdnServiceResult::LockReason> DescribeScdnServiceResult::getOperationLocks()const
{
	return operationLocks_;
}

std::string DescribeScdnServiceResult::getElasticProtectionValue()const
{
	return elasticProtectionValue_;
}

std::string DescribeScdnServiceResult::getOpenTime()const
{
	return openTime_;
}

std::string DescribeScdnServiceResult::getBandwidth()const
{
	return bandwidth_;
}

std::string DescribeScdnServiceResult::getDDoSBasicValue()const
{
	return dDoSBasicValue_;
}

std::string DescribeScdnServiceResult::getProtectType()const
{
	return protectType_;
}

std::string DescribeScdnServiceResult::getBandwidthValue()const
{
	return bandwidthValue_;
}

std::string DescribeScdnServiceResult::getPriceType()const
{
	return priceType_;
}

std::string DescribeScdnServiceResult::getDomainCount()const
{
	return domainCount_;
}

