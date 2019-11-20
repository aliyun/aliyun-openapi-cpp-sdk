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

#include <alibabacloud/cms/model/DescribeMetricRuleCountRequest.h>

using AlibabaCloud::Cms::Model::DescribeMetricRuleCountRequest;

DescribeMetricRuleCountRequest::DescribeMetricRuleCountRequest() :
	RpcServiceRequest("cms", "2018-03-08", "DescribeMetricRuleCount")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeMetricRuleCountRequest::~DescribeMetricRuleCountRequest()
{}

std::string DescribeMetricRuleCountRequest::getCmsUserInner()const
{
	return cmsUserInner_;
}

void DescribeMetricRuleCountRequest::setCmsUserInner(const std::string& cmsUserInner)
{
	cmsUserInner_ = cmsUserInner;
	setCoreParameter("CmsUserInner", cmsUserInner);
}

std::string DescribeMetricRuleCountRequest::get_Namespace()const
{
	return _namespace_;
}

void DescribeMetricRuleCountRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setCoreParameter("_Namespace", _namespace);
}

std::string DescribeMetricRuleCountRequest::getMetricName()const
{
	return metricName_;
}

void DescribeMetricRuleCountRequest::setMetricName(const std::string& metricName)
{
	metricName_ = metricName;
	setCoreParameter("MetricName", metricName);
}

