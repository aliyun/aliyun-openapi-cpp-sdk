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

#include <alibabacloud/arms/model/QueryMetricRequest.h>

using AlibabaCloud::ARMS::Model::QueryMetricRequest;

QueryMetricRequest::QueryMetricRequest() :
	RpcServiceRequest("arms", "2019-08-08", "QueryMetric")
{}

QueryMetricRequest::~QueryMetricRequest()
{}

long QueryMetricRequest::getEndTime()const
{
	return endTime_;
}

void QueryMetricRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string QueryMetricRequest::getOrderBy()const
{
	return orderBy_;
}

void QueryMetricRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", orderBy);
}

long QueryMetricRequest::getStartTime()const
{
	return startTime_;
}

void QueryMetricRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::vector<QueryMetricRequest::Filters> QueryMetricRequest::getFilters()const
{
	return filters_;
}

void QueryMetricRequest::setFilters(const std::vector<Filters>& filters)
{
	filters_ = filters;
	int i = 0;
	for(int i = 0; i!= filters.size(); i++)	{
		auto obj = filters.at(i);
		std::string str ="Filters."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::vector<std::string> QueryMetricRequest::getMeasures()const
{
	return measures_;
}

void QueryMetricRequest::setMeasures(const std::vector<std::string>& measures)
{
	measures_ = measures;
	for(int i = 0; i!= measures.size(); i++)
		setCoreParameter("Measures."+ std::to_string(i), measures.at(i));
}

int QueryMetricRequest::getIntervalInSec()const
{
	return intervalInSec_;
}

void QueryMetricRequest::setIntervalInSec(int intervalInSec)
{
	intervalInSec_ = intervalInSec;
	setCoreParameter("IntervalInSec", std::to_string(intervalInSec));
}

std::string QueryMetricRequest::getMetric()const
{
	return metric_;
}

void QueryMetricRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setCoreParameter("Metric", metric);
}

int QueryMetricRequest::getLimit()const
{
	return limit_;
}

void QueryMetricRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}

std::vector<std::string> QueryMetricRequest::getDimensions()const
{
	return dimensions_;
}

void QueryMetricRequest::setDimensions(const std::vector<std::string>& dimensions)
{
	dimensions_ = dimensions;
	for(int i = 0; i!= dimensions.size(); i++)
		setCoreParameter("Dimensions."+ std::to_string(i), dimensions.at(i));
}

std::string QueryMetricRequest::getOrder()const
{
	return order_;
}

void QueryMetricRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", order);
}

