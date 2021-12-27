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

#include <alibabacloud/dcdn/model/DescribeDcdnEsExecuteDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnEsExecuteDataRequest;

DescribeDcdnEsExecuteDataRequest::DescribeDcdnEsExecuteDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnEsExecuteData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnEsExecuteDataRequest::~DescribeDcdnEsExecuteDataRequest()
{}

std::string DescribeDcdnEsExecuteDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnEsExecuteDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDcdnEsExecuteDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnEsExecuteDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDcdnEsExecuteDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnEsExecuteDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnEsExecuteDataRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeDcdnEsExecuteDataRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

