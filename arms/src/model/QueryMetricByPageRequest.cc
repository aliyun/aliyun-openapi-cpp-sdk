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

#include <alibabacloud/arms/model/QueryMetricByPageRequest.h>

using AlibabaCloud::ARMS::Model::QueryMetricByPageRequest;

QueryMetricByPageRequest::QueryMetricByPageRequest() :
	RpcServiceRequest("arms", "2019-08-08", "QueryMetricByPage")
{
	setMethod(HttpRequest::Method::Post);
}

QueryMetricByPageRequest::~QueryMetricByPageRequest()
{}

std::string QueryMetricByPageRequest::getConsistencyQueryStrategy()const
{
	return consistencyQueryStrategy_;
}

void QueryMetricByPageRequest::setConsistencyQueryStrategy(const std::string& consistencyQueryStrategy)
{
	consistencyQueryStrategy_ = consistencyQueryStrategy;
	setParameter("ConsistencyQueryStrategy", consistencyQueryStrategy);
}

long QueryMetricByPageRequest::getEndTime()const
{
	return endTime_;
}

void QueryMetricByPageRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string QueryMetricByPageRequest::getOrderBy()const
{
	return orderBy_;
}

void QueryMetricByPageRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setParameter("OrderBy", orderBy);
}

int QueryMetricByPageRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryMetricByPageRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

long QueryMetricByPageRequest::getStartTime()const
{
	return startTime_;
}

void QueryMetricByPageRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::vector<QueryMetricByPageRequest::Filters> QueryMetricByPageRequest::getFilters()const
{
	return filters_;
}

void QueryMetricByPageRequest::setFilters(const std::vector<Filters>& filters)
{
	filters_ = filters;
	for(int dep1 = 0; dep1!= filters.size(); dep1++) {
		auto filtersObj = filters.at(dep1);
		std::string filtersObjStr = "Filters." + std::to_string(dep1 + 1);
		setParameter(filtersObjStr + ".Value", filtersObj.value);
		setParameter(filtersObjStr + ".Key", filtersObj.key);
	}
}

std::string QueryMetricByPageRequest::getConsistencyDataKey()const
{
	return consistencyDataKey_;
}

void QueryMetricByPageRequest::setConsistencyDataKey(const std::string& consistencyDataKey)
{
	consistencyDataKey_ = consistencyDataKey;
	setParameter("ConsistencyDataKey", consistencyDataKey);
}

std::string QueryMetricByPageRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void QueryMetricByPageRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::vector<std::string> QueryMetricByPageRequest::getMeasures()const
{
	return measures_;
}

void QueryMetricByPageRequest::setMeasures(const std::vector<std::string>& measures)
{
	measures_ = measures;
	for(int dep1 = 0; dep1!= measures.size(); dep1++) {
		setParameter("Measures."+ std::to_string(dep1), measures.at(dep1));
	}
}

int QueryMetricByPageRequest::getIntervalInSec()const
{
	return intervalInSec_;
}

void QueryMetricByPageRequest::setIntervalInSec(int intervalInSec)
{
	intervalInSec_ = intervalInSec;
	setParameter("IntervalInSec", std::to_string(intervalInSec));
}

std::string QueryMetricByPageRequest::getMetric()const
{
	return metric_;
}

void QueryMetricByPageRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

int QueryMetricByPageRequest::getPageSize()const
{
	return pageSize_;
}

void QueryMetricByPageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<std::string> QueryMetricByPageRequest::getDimensions()const
{
	return dimensions_;
}

void QueryMetricByPageRequest::setDimensions(const std::vector<std::string>& dimensions)
{
	dimensions_ = dimensions;
	for(int dep1 = 0; dep1!= dimensions.size(); dep1++) {
		setParameter("Dimensions."+ std::to_string(dep1), dimensions.at(dep1));
	}
}

std::string QueryMetricByPageRequest::getOrder()const
{
	return order_;
}

void QueryMetricByPageRequest::setOrder(const std::string& order)
{
	order_ = order;
	setParameter("Order", order);
}

