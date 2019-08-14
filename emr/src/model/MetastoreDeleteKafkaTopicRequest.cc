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

#include <alibabacloud/emr/model/MetastoreDeleteKafkaTopicRequest.h>

using AlibabaCloud::Emr::Model::MetastoreDeleteKafkaTopicRequest;

MetastoreDeleteKafkaTopicRequest::MetastoreDeleteKafkaTopicRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreDeleteKafkaTopic")
{}

MetastoreDeleteKafkaTopicRequest::~MetastoreDeleteKafkaTopicRequest()
{}

long MetastoreDeleteKafkaTopicRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreDeleteKafkaTopicRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreDeleteKafkaTopicRequest::getTopicId()const
{
	return topicId_;
}

void MetastoreDeleteKafkaTopicRequest::setTopicId(const std::string& topicId)
{
	topicId_ = topicId;
	setCoreParameter("TopicId", topicId);
}

std::string MetastoreDeleteKafkaTopicRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreDeleteKafkaTopicRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MetastoreDeleteKafkaTopicRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreDeleteKafkaTopicRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

