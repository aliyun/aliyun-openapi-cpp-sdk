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

#include <alibabacloud/cms/model/DescribeMetricMetaListRequest.h>

using AlibabaCloud::Cms::Model::DescribeMetricMetaListRequest;

DescribeMetricMetaListRequest::DescribeMetricMetaListRequest() :
	RpcServiceRequest("cms", "2019-01-01", "DescribeMetricMetaList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMetricMetaListRequest::~DescribeMetricMetaListRequest()
{}

int DescribeMetricMetaListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeMetricMetaListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeMetricMetaListRequest::getLabels()const
{
	return labels_;
}

void DescribeMetricMetaListRequest::setLabels(const std::string& labels)
{
	labels_ = labels;
	setParameter("Labels", labels);
}

std::string DescribeMetricMetaListRequest::get_Namespace()const
{
	return _namespace_;
}

void DescribeMetricMetaListRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

int DescribeMetricMetaListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeMetricMetaListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeMetricMetaListRequest::getMetricName()const
{
	return metricName_;
}

void DescribeMetricMetaListRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setParameter("MetricName", metricName);
}

