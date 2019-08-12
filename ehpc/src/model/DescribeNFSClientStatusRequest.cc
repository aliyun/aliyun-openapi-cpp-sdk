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

#include <alibabacloud/ehpc/model/DescribeNFSClientStatusRequest.h>

using AlibabaCloud::EHPC::Model::DescribeNFSClientStatusRequest;

DescribeNFSClientStatusRequest::DescribeNFSClientStatusRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "DescribeNFSClientStatus")
{}

DescribeNFSClientStatusRequest::~DescribeNFSClientStatusRequest()
{}

std::string DescribeNFSClientStatusRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeNFSClientStatusRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string DescribeNFSClientStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeNFSClientStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

