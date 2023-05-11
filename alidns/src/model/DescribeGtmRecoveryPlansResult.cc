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

#include <alibabacloud/alidns/model/DescribeGtmRecoveryPlansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmRecoveryPlansResult::DescribeGtmRecoveryPlansResult() :
	ServiceResult()
{}

DescribeGtmRecoveryPlansResult::DescribeGtmRecoveryPlansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmRecoveryPlansResult::~DescribeGtmRecoveryPlansResult()
{}

void DescribeGtmRecoveryPlansResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecoveryPlansNode = value["RecoveryPlans"]["RecoveryPlan"];
	for (auto valueRecoveryPlansRecoveryPlan : allRecoveryPlansNode)
	{
		RecoveryPlan recoveryPlansObject;
		if(!valueRecoveryPlansRecoveryPlan["Status"].isNull())
			recoveryPlansObject.status = valueRecoveryPlansRecoveryPlan["Status"].asString();
		if(!valueRecoveryPlansRecoveryPlan["LastRollbackTimestamp"].isNull())
			recoveryPlansObject.lastRollbackTimestamp = std::stol(valueRecoveryPlansRecoveryPlan["LastRollbackTimestamp"].asString());
		if(!valueRecoveryPlansRecoveryPlan["UpdateTime"].isNull())
			recoveryPlansObject.updateTime = valueRecoveryPlansRecoveryPlan["UpdateTime"].asString();
		if(!valueRecoveryPlansRecoveryPlan["Remark"].isNull())
			recoveryPlansObject.remark = valueRecoveryPlansRecoveryPlan["Remark"].asString();
		if(!valueRecoveryPlansRecoveryPlan["CreateTime"].isNull())
			recoveryPlansObject.createTime = valueRecoveryPlansRecoveryPlan["CreateTime"].asString();
		if(!valueRecoveryPlansRecoveryPlan["RecoveryPlanId"].isNull())
			recoveryPlansObject.recoveryPlanId = std::stol(valueRecoveryPlansRecoveryPlan["RecoveryPlanId"].asString());
		if(!valueRecoveryPlansRecoveryPlan["UpdateTimestamp"].isNull())
			recoveryPlansObject.updateTimestamp = std::stol(valueRecoveryPlansRecoveryPlan["UpdateTimestamp"].asString());
		if(!valueRecoveryPlansRecoveryPlan["LastExecuteTimestamp"].isNull())
			recoveryPlansObject.lastExecuteTimestamp = std::stol(valueRecoveryPlansRecoveryPlan["LastExecuteTimestamp"].asString());
		if(!valueRecoveryPlansRecoveryPlan["LastExecuteTime"].isNull())
			recoveryPlansObject.lastExecuteTime = valueRecoveryPlansRecoveryPlan["LastExecuteTime"].asString();
		if(!valueRecoveryPlansRecoveryPlan["LastRollbackTime"].isNull())
			recoveryPlansObject.lastRollbackTime = valueRecoveryPlansRecoveryPlan["LastRollbackTime"].asString();
		if(!valueRecoveryPlansRecoveryPlan["Name"].isNull())
			recoveryPlansObject.name = valueRecoveryPlansRecoveryPlan["Name"].asString();
		if(!valueRecoveryPlansRecoveryPlan["FaultAddrPoolNum"].isNull())
			recoveryPlansObject.faultAddrPoolNum = std::stoi(valueRecoveryPlansRecoveryPlan["FaultAddrPoolNum"].asString());
		if(!valueRecoveryPlansRecoveryPlan["CreateTimestamp"].isNull())
			recoveryPlansObject.createTimestamp = std::stol(valueRecoveryPlansRecoveryPlan["CreateTimestamp"].asString());
		recoveryPlans_.push_back(recoveryPlansObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());

}

std::vector<DescribeGtmRecoveryPlansResult::RecoveryPlan> DescribeGtmRecoveryPlansResult::getRecoveryPlans()const
{
	return recoveryPlans_;
}

int DescribeGtmRecoveryPlansResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGtmRecoveryPlansResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeGtmRecoveryPlansResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeGtmRecoveryPlansResult::getTotalItems()const
{
	return totalItems_;
}

