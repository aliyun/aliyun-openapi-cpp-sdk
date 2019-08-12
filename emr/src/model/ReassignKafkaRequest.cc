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

#include <alibabacloud/emr/model/ReassignKafkaRequest.h>

using AlibabaCloud::Emr::Model::ReassignKafkaRequest;

ReassignKafkaRequest::ReassignKafkaRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ReassignKafka")
{}

ReassignKafkaRequest::~ReassignKafkaRequest()
{}

long ReassignKafkaRequest::getThrottle()const
{
	return throttle_;
}

void ReassignKafkaRequest::setThrottle(long throttle)
{
	throttle_ = throttle;
	setCoreParameter("Throttle", throttle);
}

long ReassignKafkaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReassignKafkaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ReassignKafkaRequest::getTopicId()const
{
	return topicId_;
}

void ReassignKafkaRequest::setTopicId(const std::string& topicId)
{
	topicId_ = topicId;
	setCoreParameter("TopicId", std::to_string(topicId));
}

std::vector<int> ReassignKafkaRequest::getBrokerId()const
{
	return brokerId_;
}

void ReassignKafkaRequest::setBrokerId(const std::vector<int>& brokerId)
{
	brokerId_ = brokerId;
	for(int i = 0; i!= brokerId.size(); i++)
		setCoreParameter("BrokerId."+ std::to_string(i), brokerId.at(i));
}

std::string ReassignKafkaRequest::getRegionId()const
{
	return regionId_;
}

void ReassignKafkaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ReassignKafkaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReassignKafkaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

