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

#include <alibabacloud/sddp/model/DescribeCloudDatabasesRequest.h>

using AlibabaCloud::Sddp::Model::DescribeCloudDatabasesRequest;

DescribeCloudDatabasesRequest::DescribeCloudDatabasesRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeCloudDatabases")
{}

DescribeCloudDatabasesRequest::~DescribeCloudDatabasesRequest()
{}

std::string DescribeCloudDatabasesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeCloudDatabasesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeCloudDatabasesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCloudDatabasesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeCloudDatabasesRequest::getLang()const
{
	return lang_;
}

void DescribeCloudDatabasesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long DescribeCloudDatabasesRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeCloudDatabasesRequest::setResourceType(long resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string DescribeCloudDatabasesRequest::getServiceRegionId()const
{
	return serviceRegionId_;
}

void DescribeCloudDatabasesRequest::setServiceRegionId(const std::string& serviceRegionId)
{
	serviceRegionId_ = serviceRegionId;
	setCoreParameter("ServiceRegionId", serviceRegionId);
}

