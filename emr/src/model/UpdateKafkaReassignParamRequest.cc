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

#include <alibabacloud/emr/model/UpdateKafkaReassignParamRequest.h>

using AlibabaCloud::Emr::Model::UpdateKafkaReassignParamRequest;

UpdateKafkaReassignParamRequest::UpdateKafkaReassignParamRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateKafkaReassignParam")
{}

UpdateKafkaReassignParamRequest::~UpdateKafkaReassignParamRequest()
{}

long UpdateKafkaReassignParamRequest::getThrottle()const
{
	return throttle_;
}

void UpdateKafkaReassignParamRequest::setThrottle(long throttle)
{
	throttle_ = throttle;
	setCoreParameter("Throttle", throttle);
}

long UpdateKafkaReassignParamRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateKafkaReassignParamRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateKafkaReassignParamRequest::getRegionId()const
{
	return regionId_;
}

void UpdateKafkaReassignParamRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateKafkaReassignParamRequest::getReassignId()const
{
	return reassignId_;
}

void UpdateKafkaReassignParamRequest::setReassignId(const std::string& reassignId)
{
	reassignId_ = reassignId;
	setCoreParameter("ReassignId", reassignId);
}

std::string UpdateKafkaReassignParamRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateKafkaReassignParamRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

