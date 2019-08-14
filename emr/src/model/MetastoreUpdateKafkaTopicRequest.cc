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

#include <alibabacloud/emr/model/MetastoreUpdateKafkaTopicRequest.h>

using AlibabaCloud::Emr::Model::MetastoreUpdateKafkaTopicRequest;

MetastoreUpdateKafkaTopicRequest::MetastoreUpdateKafkaTopicRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreUpdateKafkaTopic")
{}

MetastoreUpdateKafkaTopicRequest::~MetastoreUpdateKafkaTopicRequest()
{}

long MetastoreUpdateKafkaTopicRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreUpdateKafkaTopicRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreUpdateKafkaTopicRequest::getTopicId()const
{
	return topicId_;
}

void MetastoreUpdateKafkaTopicRequest::setTopicId(const std::string& topicId)
{
	topicId_ = topicId;
	setCoreParameter("TopicId", topicId);
}

std::string MetastoreUpdateKafkaTopicRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreUpdateKafkaTopicRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<MetastoreUpdateKafkaTopicRequest::AdvancedConfig> MetastoreUpdateKafkaTopicRequest::getAdvancedConfig()const
{
	return advancedConfig_;
}

void MetastoreUpdateKafkaTopicRequest::setAdvancedConfig(const std::vector<AdvancedConfig>& advancedConfig)
{
	advancedConfig_ = advancedConfig;
	int i = 0;
	for(int i = 0; i!= advancedConfig.size(); i++)	{
		auto obj = advancedConfig.at(i);
		std::string str ="AdvancedConfig."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

int MetastoreUpdateKafkaTopicRequest::getNumPartitions()const
{
	return numPartitions_;
}

void MetastoreUpdateKafkaTopicRequest::setNumPartitions(int numPartitions)
{
	numPartitions_ = numPartitions;
	setCoreParameter("NumPartitions", std::to_string(numPartitions));
}

std::string MetastoreUpdateKafkaTopicRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreUpdateKafkaTopicRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

