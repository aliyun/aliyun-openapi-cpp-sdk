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

#include <alibabacloud/cms/model/QueryCustomMetricListRequest.h>

using AlibabaCloud::Cms::Model::QueryCustomMetricListRequest;

QueryCustomMetricListRequest::QueryCustomMetricListRequest() :
	RpcServiceRequest("cms", "2018-03-08", "QueryCustomMetricList")
{}

QueryCustomMetricListRequest::~QueryCustomMetricListRequest()
{}

std::string QueryCustomMetricListRequest::getSize()const
{
	return size_;
}

void QueryCustomMetricListRequest::setSize(const std::string& size)
{
	size_ = size;
	setCoreParameter("Size", std::to_string(size));
}

std::string QueryCustomMetricListRequest::getGroupId()const
{
	return groupId_;
}

void QueryCustomMetricListRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string QueryCustomMetricListRequest::getPage()const
{
	return page_;
}

void QueryCustomMetricListRequest::setPage(const std::string& page)
{
	page_ = page;
	setCoreParameter("Page", std::to_string(page));
}

std::string QueryCustomMetricListRequest::getMetricName()const
{
	return metricName_;
}

void QueryCustomMetricListRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", std::to_string(metricName));
}

std::string QueryCustomMetricListRequest::getDimension()const
{
	return dimension_;
}

void QueryCustomMetricListRequest::setDimension(const std::string& dimension)
{
	dimension_ = dimension;
	setCoreParameter("Dimension", std::to_string(dimension));
}

std::string QueryCustomMetricListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryCustomMetricListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string QueryCustomMetricListRequest::getMd5()const
{
	return md5_;
}

void QueryCustomMetricListRequest::setMd5(const std::string& md5)
{
	md5_ = md5;
	setCoreParameter("Md5", std::to_string(md5));
}

