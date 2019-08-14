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

#include <alibabacloud/drds/model/DescribeDrdsInstancesRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsInstancesRequest;

DescribeDrdsInstancesRequest::DescribeDrdsInstancesRequest() :
	RpcServiceRequest("drds", "2017-10-16", "DescribeDrdsInstances")
{}

DescribeDrdsInstancesRequest::~DescribeDrdsInstancesRequest()
{}

std::string DescribeDrdsInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDrdsInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDrdsInstancesRequest::getType()const
{
	return type_;
}

void DescribeDrdsInstancesRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeDrdsInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDrdsInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDrdsInstancesRequest::getTags()const
{
	return tags_;
}

void DescribeDrdsInstancesRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

