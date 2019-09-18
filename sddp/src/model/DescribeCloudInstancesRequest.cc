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

#include <alibabacloud/sddp/model/DescribeCloudInstancesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeCloudInstancesRequest;

DescribeCloudInstancesRequest::DescribeCloudInstancesRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeCloudInstances")
{}

DescribeCloudInstancesRequest::~DescribeCloudInstancesRequest()
{}

long DescribeCloudInstancesRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeCloudInstancesRequest::setResourceType(long resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", std::to_string(resourceType));
}

std::string DescribeCloudInstancesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCloudInstancesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeCloudInstancesRequest::getLang()const
{
	return lang_;
}

void DescribeCloudInstancesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeCloudInstancesRequest::getServiceRegionId()const
{
	return serviceRegionId_;
}

void DescribeCloudInstancesRequest::setServiceRegionId(const std::string& serviceRegionId)
{
	serviceRegionId_ = serviceRegionId;
	setCoreParameter("ServiceRegionId", serviceRegionId);
}

