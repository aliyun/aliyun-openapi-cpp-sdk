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

#include <alibabacloud/dcdn/model/DescribeDcdnServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnServiceResult::DescribeDcdnServiceResult() :
	ServiceResult()
{}

DescribeDcdnServiceResult::DescribeDcdnServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnServiceResult::~DescribeDcdnServiceResult()
{}

void DescribeDcdnServiceResult::parse(const std::string &payload)
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
	if(!value["WebsocketChangingTime"].isNull())
		websocketChangingTime_ = value["WebsocketChangingTime"].asString();
	if(!value["WebsocketChangingType"].isNull())
		websocketChangingType_ = value["WebsocketChangingType"].asString();
	if(!value["ChangingAffectTime"].isNull())
		changingAffectTime_ = value["ChangingAffectTime"].asString();
	if(!value["ChangingChargeType"].isNull())
		changingChargeType_ = value["ChangingChargeType"].asString();
	if(!value["OpeningTime"].isNull())
		openingTime_ = value["OpeningTime"].asString();
	if(!value["InternetChargeType"].isNull())
		internetChargeType_ = value["InternetChargeType"].asString();
	if(!value["WebsocketType"].isNull())
		websocketType_ = value["WebsocketType"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string DescribeDcdnServiceResult::getWebsocketChangingType()const
{
	return websocketChangingType_;
}

std::string DescribeDcdnServiceResult::getChangingChargeType()const
{
	return changingChargeType_;
}

std::string DescribeDcdnServiceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeDcdnServiceResult::getWebsocketType()const
{
	return websocketType_;
}

std::string DescribeDcdnServiceResult::getOpeningTime()const
{
	return openingTime_;
}

std::vector<DescribeDcdnServiceResult::LockReason> DescribeDcdnServiceResult::getOperationLocks()const
{
	return operationLocks_;
}

std::string DescribeDcdnServiceResult::getChangingAffectTime()const
{
	return changingAffectTime_;
}

std::string DescribeDcdnServiceResult::getWebsocketChangingTime()const
{
	return websocketChangingTime_;
}

std::string DescribeDcdnServiceResult::getInternetChargeType()const
{
	return internetChargeType_;
}

