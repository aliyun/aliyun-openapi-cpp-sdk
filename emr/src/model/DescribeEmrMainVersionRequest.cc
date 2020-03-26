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

#include <alibabacloud/emr/model/DescribeEmrMainVersionRequest.h>

using AlibabaCloud::Emr::Model::DescribeEmrMainVersionRequest;

DescribeEmrMainVersionRequest::DescribeEmrMainVersionRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeEmrMainVersion")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeEmrMainVersionRequest::~DescribeEmrMainVersionRequest()
{}

long DescribeEmrMainVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeEmrMainVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeEmrMainVersionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeEmrMainVersionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeEmrMainVersionRequest::getRegionId()const
{
	return regionId_;
}

void DescribeEmrMainVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeEmrMainVersionRequest::getEmrVersion()const
{
	return emrVersion_;
}

void DescribeEmrMainVersionRequest::setEmrVersion(const std::string& emrVersion)
{
	emrVersion_ = emrVersion;
	setParameter("EmrVersion", emrVersion);
}

