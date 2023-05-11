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

#include <alibabacloud/alidns/model/DescribeGtmRecoveryPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmRecoveryPlanResult::DescribeGtmRecoveryPlanResult() :
	ServiceResult()
{}

DescribeGtmRecoveryPlanResult::DescribeGtmRecoveryPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmRecoveryPlanResult::~DescribeGtmRecoveryPlanResult()
{}

void DescribeGtmRecoveryPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFaultAddrPoolsNode = value["FaultAddrPools"]["FaultAddrPool"];
	for (auto valueFaultAddrPoolsFaultAddrPool : allFaultAddrPoolsNode)
	{
		FaultAddrPool faultAddrPoolsObject;
		if(!valueFaultAddrPoolsFaultAddrPool["AddrPoolId"].isNull())
			faultAddrPoolsObject.addrPoolId = valueFaultAddrPoolsFaultAddrPool["AddrPoolId"].asString();
		if(!valueFaultAddrPoolsFaultAddrPool["InstanceId"].isNull())
			faultAddrPoolsObject.instanceId = valueFaultAddrPoolsFaultAddrPool["InstanceId"].asString();
		if(!valueFaultAddrPoolsFaultAddrPool["AddrPoolName"].isNull())
			faultAddrPoolsObject.addrPoolName = valueFaultAddrPoolsFaultAddrPool["AddrPoolName"].asString();
		auto allAddrsNode = valueFaultAddrPoolsFaultAddrPool["Addrs"]["Addr"];
		for (auto valueFaultAddrPoolsFaultAddrPoolAddrsAddr : allAddrsNode)
		{
			FaultAddrPool::Addr addrsObject;
			if(!valueFaultAddrPoolsFaultAddrPoolAddrsAddr["Value"].isNull())
				addrsObject.value = valueFaultAddrPoolsFaultAddrPoolAddrsAddr["Value"].asString();
			if(!valueFaultAddrPoolsFaultAddrPoolAddrsAddr["Mode"].isNull())
				addrsObject.mode = valueFaultAddrPoolsFaultAddrPoolAddrsAddr["Mode"].asString();
			if(!valueFaultAddrPoolsFaultAddrPoolAddrsAddr["Id"].isNull())
				addrsObject.id = std::stol(valueFaultAddrPoolsFaultAddrPoolAddrsAddr["Id"].asString());
			faultAddrPoolsObject.addrs.push_back(addrsObject);
		}
		faultAddrPools_.push_back(faultAddrPoolsObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["LastRollbackTime"].isNull())
		lastRollbackTime_ = value["LastRollbackTime"].asString();
	if(!value["FaultAddrPoolNum"].isNull())
		faultAddrPoolNum_ = std::stoi(value["FaultAddrPoolNum"].asString());
	if(!value["LastExecuteTime"].isNull())
		lastExecuteTime_ = value["LastExecuteTime"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["LastExecuteTimestamp"].isNull())
		lastExecuteTimestamp_ = std::stol(value["LastExecuteTimestamp"].asString());
	if(!value["Remark"].isNull())
		remark_ = value["Remark"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["RecoveryPlanId"].isNull())
		recoveryPlanId_ = std::stol(value["RecoveryPlanId"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["UpdateTimestamp"].isNull())
		updateTimestamp_ = std::stol(value["UpdateTimestamp"].asString());
	if(!value["LastRollbackTimestamp"].isNull())
		lastRollbackTimestamp_ = std::stol(value["LastRollbackTimestamp"].asString());
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());

}

std::string DescribeGtmRecoveryPlanResult::getStatus()const
{
	return status_;
}

std::string DescribeGtmRecoveryPlanResult::getLastRollbackTime()const
{
	return lastRollbackTime_;
}

int DescribeGtmRecoveryPlanResult::getFaultAddrPoolNum()const
{
	return faultAddrPoolNum_;
}

std::vector<DescribeGtmRecoveryPlanResult::FaultAddrPool> DescribeGtmRecoveryPlanResult::getFaultAddrPools()const
{
	return faultAddrPools_;
}

std::string DescribeGtmRecoveryPlanResult::getLastExecuteTime()const
{
	return lastExecuteTime_;
}

std::string DescribeGtmRecoveryPlanResult::getCreateTime()const
{
	return createTime_;
}

long DescribeGtmRecoveryPlanResult::getLastExecuteTimestamp()const
{
	return lastExecuteTimestamp_;
}

std::string DescribeGtmRecoveryPlanResult::getRemark()const
{
	return remark_;
}

std::string DescribeGtmRecoveryPlanResult::getName()const
{
	return name_;
}

long DescribeGtmRecoveryPlanResult::getRecoveryPlanId()const
{
	return recoveryPlanId_;
}

std::string DescribeGtmRecoveryPlanResult::getUpdateTime()const
{
	return updateTime_;
}

long DescribeGtmRecoveryPlanResult::getUpdateTimestamp()const
{
	return updateTimestamp_;
}

long DescribeGtmRecoveryPlanResult::getLastRollbackTimestamp()const
{
	return lastRollbackTimestamp_;
}

long DescribeGtmRecoveryPlanResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

