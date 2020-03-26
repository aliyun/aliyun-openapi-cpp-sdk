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

#include <alibabacloud/cs/model/DescribeClusterV2UserKubeconfigRequest.h>

using AlibabaCloud::CS::Model::DescribeClusterV2UserKubeconfigRequest;

DescribeClusterV2UserKubeconfigRequest::DescribeClusterV2UserKubeconfigRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/api/v2/k8s/[ClusterId]/user_config");
	setMethod(HttpRequest::Method::Get);
}

DescribeClusterV2UserKubeconfigRequest::~DescribeClusterV2UserKubeconfigRequest()
{}

bool DescribeClusterV2UserKubeconfigRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void DescribeClusterV2UserKubeconfigRequest::setPrivateIpAddress(bool privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress ? "true" : "false");
}

std::string DescribeClusterV2UserKubeconfigRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterV2UserKubeconfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

