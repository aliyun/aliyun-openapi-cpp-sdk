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

#include <alibabacloud/drds/model/DescribeCreateDrdsInstanceStatusRequest.h>

using AlibabaCloud::Drds::Model::DescribeCreateDrdsInstanceStatusRequest;

DescribeCreateDrdsInstanceStatusRequest::DescribeCreateDrdsInstanceStatusRequest() :
	RpcServiceRequest("drds", "2017-10-16", "DescribeCreateDrdsInstanceStatus")
{}

DescribeCreateDrdsInstanceStatusRequest::~DescribeCreateDrdsInstanceStatusRequest()
{}

std::string DescribeCreateDrdsInstanceStatusRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeCreateDrdsInstanceStatusRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeCreateDrdsInstanceStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCreateDrdsInstanceStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

