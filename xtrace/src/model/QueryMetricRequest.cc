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

#include <alibabacloud/xtrace/model/QueryMetricRequest.h>

using AlibabaCloud::Xtrace::Model::QueryMetricRequest;

QueryMetricRequest::QueryMetricRequest() :
	RpcServiceRequest("xtrace", "2019-08-08", "QueryMetric")
{
	setMethod(HttpRequest::Method::Post);
}

QueryMetricRequest::~QueryMetricRequest()
{}

long QueryMetricRequest::getEndTime()const
{
	return endTime_;
}

void QueryMetricRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string QueryMetricRequest::getOrderBy()const
{
	return orderBy_;
}

void QueryMetricRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

long QueryMetricRequest::getStartTime()const
{
	return startTime_;
}

void QueryMetricRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::vector<QueryMetricRequest::Filters> QueryMetricRequest::getFilters()const
{
	return filters_;
}

void QueryMetricRequest::setFilters(const std::vector<Filters>& filters)
{
	filters_ = filters;
	for(int dep1 = 0; dep1!= filters.size(); dep1++) {
		auto filtersObj = filters.at(dep1);
		std::string filtersObjStr = "Filters." + std::to_string(dep1 + 1);
		setParameter(filtersObjStr + ".Value", filtersObj.value);
		setParameter(filtersObjStr + ".Key", filtersObj.key);
	}
}

std::string QueryMetricRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void QueryMetricRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::vector<std::string> QueryMetricRequest::getMeasures()const
{
	return measures_;
}

void QueryMetricRequest::setMeasures(const std::vector<std::string>& measures)
{
	measures_ = measures;
	for(int dep1 = 0; dep1!= measures.size(); dep1++) {
		setParameter("Measures."+ std::to_string(dep1), measures.at(dep1));
	}
}

int QueryMetricRequest::getIntervalInSec()const
{
	return intervalInSec_;
}

void QueryMetricRequest::setIntervalInSec(int intervalInSec)
{
	intervalInSec_ = intervalInSec;
	setParameter("IntervalInSec", std::to_string(intervalInSec));
}

std::string QueryMetricRequest::getMetric()const
{
	return metric_;
}

void QueryMetricRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

int QueryMetricRequest::getLimit()const
{
	return limit_;
}

void QueryMetricRequest::setLimit(int limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::vector<std::string> QueryMetricRequest::getDimensions()const
{
	return dimensions_;
}

void QueryMetricRequest::setDimensions(const std::vector<std::string>& dimensions)
{
	dimensions_ = dimensions;
	for(int dep1 = 0; dep1!= dimensions.size(); dep1++) {
		setParameter("Dimensions."+ std::to_string(dep1), dimensions.at(dep1));
	}
}

std::string QueryMetricRequest::getOrder()const
{
	return order_;
}

void QueryMetricRequest::setOrder(const std::string& order)
{
	order_ = order;
	setParameter("Order", order);
}

