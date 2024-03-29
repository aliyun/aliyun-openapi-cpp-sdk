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

#include <alibabacloud/dcdn/model/DescribeDcdnEsExceptionDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnEsExceptionDataRequest;

DescribeDcdnEsExceptionDataRequest::DescribeDcdnEsExceptionDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnEsExceptionData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnEsExceptionDataRequest::~DescribeDcdnEsExceptionDataRequest()
{}

std::string DescribeDcdnEsExceptionDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnEsExceptionDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDcdnEsExceptionDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnEsExceptionDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDcdnEsExceptionDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnEsExceptionDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnEsExceptionDataRequest::getRuleId()const
{
	return ruleId_;
}

void DescribeDcdnEsExceptionDataRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

