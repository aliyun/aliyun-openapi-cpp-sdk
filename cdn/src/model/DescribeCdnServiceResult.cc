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
	auto allOperationLocks = value["OperationLocks"]["LockReason"];
	for (auto value : allOperationLocks)
	{
		LockReason lockReasonObject;
		lockReasonObject.lockReason = value["LockReason"].asString();
		operationLocks_.push_back(lockReasonObject);
	}
	instanceId_ = value["InstanceId"].asString();
	internetChargeType_ = value["InternetChargeType"].asString();
	openingTime_ = value["OpeningTime"].asString();
	changingChargeType_ = value["ChangingChargeType"].asString();
	changingAffectTime_ = value["ChangingAffectTime"].asString();

}

std::string DescribeCdnServiceResult::getChangingChargeType()const
{
	return changingChargeType_;
}

void DescribeCdnServiceResult::setChangingChargeType(const std::string& changingChargeType)
{
	changingChargeType_ = changingChargeType;
}

std::string DescribeCdnServiceResult::getInstanceId()const
{
	return instanceId_;
}

void DescribeCdnServiceResult::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
}

std::string DescribeCdnServiceResult::getOpeningTime()const
{
	return openingTime_;
}

void DescribeCdnServiceResult::setOpeningTime(const std::string& openingTime)
{
	openingTime_ = openingTime;
}

std::string DescribeCdnServiceResult::getChangingAffectTime()const
{
	return changingAffectTime_;
}

void DescribeCdnServiceResult::setChangingAffectTime(const std::string& changingAffectTime)
{
	changingAffectTime_ = changingAffectTime;
}

std::string DescribeCdnServiceResult::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribeCdnServiceResult::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
}

