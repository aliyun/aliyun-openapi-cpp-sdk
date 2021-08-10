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

#include <alibabacloud/bssopenapi/model/QueryDPUtilizationDetailRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryDPUtilizationDetailRequest;

QueryDPUtilizationDetailRequest::QueryDPUtilizationDetailRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryDPUtilizationDetail")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDPUtilizationDetailRequest::~QueryDPUtilizationDetailRequest()
{}

std::string QueryDPUtilizationDetailRequest::getDeductedInstanceId()const
{
	return deductedInstanceId_;
}

void QueryDPUtilizationDetailRequest::setDeductedInstanceId(const std::string& deductedInstanceId)
{
	deductedInstanceId_ = deductedInstanceId;
	setParameter("DeductedInstanceId", deductedInstanceId);
}

std::string QueryDPUtilizationDetailRequest::getLastToken()const
{
	return lastToken_;
}

void QueryDPUtilizationDetailRequest::setLastToken(const std::string& lastToken)
{
	lastToken_ = lastToken;
	setParameter("LastToken", lastToken);
}

std::string QueryDPUtilizationDetailRequest::getInstanceSpec()const
{
	return instanceSpec_;
}

void QueryDPUtilizationDetailRequest::setInstanceSpec(const std::string& instanceSpec)
{
	instanceSpec_ = instanceSpec;
	setParameter("InstanceSpec", instanceSpec);
}

std::string QueryDPUtilizationDetailRequest::getProdCode()const
{
	return prodCode_;
}

void QueryDPUtilizationDetailRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

std::string QueryDPUtilizationDetailRequest::getEndTime()const
{
	return endTime_;
}

void QueryDPUtilizationDetailRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

bool QueryDPUtilizationDetailRequest::getIncludeShare()const
{
	return includeShare_;
}

void QueryDPUtilizationDetailRequest::setIncludeShare(bool includeShare)
{
	includeShare_ = includeShare;
	setParameter("IncludeShare", includeShare ? "true" : "false");
}

std::string QueryDPUtilizationDetailRequest::getCommodityCode()const
{
	return commodityCode_;
}

void QueryDPUtilizationDetailRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

std::string QueryDPUtilizationDetailRequest::getStartTime()const
{
	return startTime_;
}

void QueryDPUtilizationDetailRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string QueryDPUtilizationDetailRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryDPUtilizationDetailRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int QueryDPUtilizationDetailRequest::getLimit()const
{
	return limit_;
}

void QueryDPUtilizationDetailRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

