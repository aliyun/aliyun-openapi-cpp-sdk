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
	auto allRecoveryPlans = value["RecoveryPlans"]["RecoveryPlan"];
	for (auto value : allRecoveryPlans)
	{
		RecoveryPlan recoveryPlansObject;
		if(!value["RecoveryPlanId"].isNull())
			recoveryPlansObject.recoveryPlanId = std::stol(value["RecoveryPlanId"].asString());
		if(!value["Name"].isNull())
			recoveryPlansObject.name = value["Name"].asString();
		if(!value["Remark"].isNull())
			recoveryPlansObject.remark = value["Remark"].asString();
		if(!value["FaultAddrPoolNum"].isNull())
			recoveryPlansObject.faultAddrPoolNum = std::stoi(value["FaultAddrPoolNum"].asString());
		if(!value["LastExecuteTime"].isNull())
			recoveryPlansObject.lastExecuteTime = value["LastExecuteTime"].asString();
		if(!value["LastExecuteTimestamp"].isNull())
			recoveryPlansObject.lastExecuteTimestamp = std::stol(value["LastExecuteTimestamp"].asString());
		if(!value["LastRollbackTime"].isNull())
			recoveryPlansObject.lastRollbackTime = value["LastRollbackTime"].asString();
		if(!value["LastRollbackTimestamp"].isNull())
			recoveryPlansObject.lastRollbackTimestamp = std::stol(value["LastRollbackTimestamp"].asString());
		if(!value["CreateTime"].isNull())
			recoveryPlansObject.createTime = value["CreateTime"].asString();
		if(!value["CreateTimestamp"].isNull())
			recoveryPlansObject.createTimestamp = std::stol(value["CreateTimestamp"].asString());
		if(!value["UpdateTime"].isNull())
			recoveryPlansObject.updateTime = value["UpdateTime"].asString();
		if(!value["UpdateTimestamp"].isNull())
			recoveryPlansObject.updateTimestamp = std::stol(value["UpdateTimestamp"].asString());
		if(!value["Status"].isNull())
			recoveryPlansObject.status = value["Status"].asString();
		recoveryPlans_.push_back(recoveryPlansObject);
	}
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

