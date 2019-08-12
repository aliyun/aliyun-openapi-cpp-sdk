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

#include <alibabacloud/arms/model/MetricQueryRequest.h>

using AlibabaCloud::ARMS::Model::MetricQueryRequest;

MetricQueryRequest::MetricQueryRequest() :
	RpcServiceRequest("arms", "2019-02-19", "MetricQuery")
{}

MetricQueryRequest::~MetricQueryRequest()
{}

long MetricQueryRequest::getEndTime()const
{
	return endTime_;
}

void MetricQueryRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string MetricQueryRequest::getOrderBy()const
{
	return orderBy_;
}

void MetricQueryRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", orderBy);
}

std::vector<MetricQueryRequest::Filters> MetricQueryRequest::getFilters()const
{
	return filters_;
}

void MetricQueryRequest::setFilters(const std::vector<Filters>& filters)
{
	filters_ = filters;
	int i = 0;
	for(int i = 0; i!= filters.size(); i++)	{
		auto obj = filters.at(i);
		std::string str ="Filters."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

long MetricQueryRequest::getStartTime()const
{
	return startTime_;
}

void MetricQueryRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string MetricQueryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetricQueryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int MetricQueryRequest::getIintervalInSec()const
{
	return iintervalInSec_;
}

void MetricQueryRequest::setIintervalInSec(int iintervalInSec)
{
	iintervalInSec_ = iintervalInSec;
	setCoreParameter("IintervalInSec", iintervalInSec);
}

std::vector<std::string> MetricQueryRequest::getMeasures()const
{
	return measures_;
}

void MetricQueryRequest::setMeasures(const std::vector<std::string>& measures)
{
	measures_ = measures;
	for(int i = 0; i!= measures.size(); i++)
		setCoreParameter("Measures."+ std::to_string(i), std::to_string(measures.at(i)));
}

std::string MetricQueryRequest::getMetric()const
{
	return metric_;
}

void MetricQueryRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setCoreParameter("Metric", metric);
}

std::string MetricQueryRequest::getSecurityToken()const
{
	return securityToken_;
}

void MetricQueryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string MetricQueryRequest::getRegionId()const
{
	return regionId_;
}

void MetricQueryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MetricQueryRequest::getCustomFilters()const
{
	return customFilters_;
}

void MetricQueryRequest::setCustomFilters(const std::string& customFilters)
{
	customFilters_ = customFilters;
	setCoreParameter("CustomFilters", customFilters);
}

int MetricQueryRequest::getLimit()const
{
	return limit_;
}

void MetricQueryRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

std::string MetricQueryRequest::getWhere()const
{
	return where_;
}

void MetricQueryRequest::setWhere(const std::string& where)
{
	where_ = where;
	setCoreParameter("Where", where);
}

std::vector<std::string> MetricQueryRequest::getDimensions()const
{
	return dimensions_;
}

void MetricQueryRequest::setDimensions(const std::vector<std::string>& dimensions)
{
	dimensions_ = dimensions;
	for(int i = 0; i!= dimensions.size(); i++)
		setCoreParameter("Dimensions."+ std::to_string(i), std::to_string(dimensions.at(i)));
}

std::string MetricQueryRequest::getOrder()const
{
	return order_;
}

void MetricQueryRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", order);
}

