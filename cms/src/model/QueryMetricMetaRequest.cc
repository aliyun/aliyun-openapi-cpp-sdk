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

#include <alibabacloud/cms/model/QueryMetricMetaRequest.h>

using AlibabaCloud::Cms::Model::QueryMetricMetaRequest;

QueryMetricMetaRequest::QueryMetricMetaRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryMetricMeta")
{}

QueryMetricMetaRequest::~QueryMetricMetaRequest()
{}

std::string QueryMetricMetaRequest::getMetric()const
{
	return metric_;
}

void QueryMetricMetaRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

int QueryMetricMetaRequest::getPageSize()const
{
	return pageSize_;
}

void QueryMetricMetaRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryMetricMetaRequest::getProject()const
{
	return project_;
}

void QueryMetricMetaRequest::setProject(const std::string& project)
{
	project_ = project;
	setParameter("Project", project);
}

int QueryMetricMetaRequest::getPageNumber()const
{
	return pageNumber_;
}

void QueryMetricMetaRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string QueryMetricMetaRequest::getLabels()const
{
	return labels_;
}

void QueryMetricMetaRequest::setLabels(const std::string& labels)
{
	labels_ = labels;
	setParameter("Labels", labels);
}

