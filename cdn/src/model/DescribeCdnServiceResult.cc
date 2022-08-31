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

#include <alibabacloud/cdn/model/DescribeCdnServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnServiceResult::DescribeCdnServiceResult() :
	ServiceResult()
{}

DescribeCdnServiceResult::DescribeCdnServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnServiceResult::~DescribeCdnServiceResult()
{}

void DescribeCdnServiceResult::parse(const std::string &payload)
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
	if(!value["ChangingAffectTime"].isNull())
		changingAffectTime_ = value["ChangingAffectTime"].asString();
	if(!value["ChangingChargeType"].isNull())
		changingChargeType_ = value["ChangingChargeType"].asString();
	if(!value["OpeningTime"].isNull())
		openingTime_ = value["OpeningTime"].asString();
	if(!value["InternetChargeType"].isNull())
		internetChargeType_ = value["InternetChargeType"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::string DescribeCdnServiceResult::getChangingChargeType()const
{
	return changingChargeType_;
}

std::string DescribeCdnServiceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeCdnServiceResult::getOpeningTime()const
{
	return openingTime_;
}

std::vector<DescribeCdnServiceResult::LockReason> DescribeCdnServiceResult::getOperationLocks()const
{
	return operationLocks_;
}

std::string DescribeCdnServiceResult::getChangingAffectTime()const
{
	return changingAffectTime_;
}

std::string DescribeCdnServiceResult::getInternetChargeType()const
{
	return internetChargeType_;
}

