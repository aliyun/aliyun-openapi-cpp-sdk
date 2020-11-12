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

#include <alibabacloud/openanalytics-open/model/DescribeVirtualClusterV2Request.h>

using AlibabaCloud::Openanalytics_open::Model::DescribeVirtualClusterV2Request;

DescribeVirtualClusterV2Request::DescribeVirtualClusterV2Request() :
	RpcServiceRequest("openanalytics-open", "2018-06-19", "DescribeVirtualClusterV2")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeVirtualClusterV2Request::~DescribeVirtualClusterV2Request()
{}

std::string DescribeVirtualClusterV2Request::getName()const
{
	return name_;
}

void DescribeVirtualClusterV2Request::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

