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

#include <alibabacloud/ros/model/DescribeResourceTypesRequest.h>

using AlibabaCloud::ROS::Model::DescribeResourceTypesRequest;

DescribeResourceTypesRequest::DescribeResourceTypesRequest() :
	RoaServiceRequest("ros", "2015-09-01")
{
	setResourcePath("/resource_types");
	setMethod(HttpRequest::Method::Get);
}

DescribeResourceTypesRequest::~DescribeResourceTypesRequest()
{}

std::string DescribeResourceTypesRequest::getSupportStatus()const
{
	return supportStatus_;
}

void DescribeResourceTypesRequest::setSupportStatus(const std::string& supportStatus)
{
	supportStatus_ = supportStatus;
	setParameter("SupportStatus", supportStatus);
}

