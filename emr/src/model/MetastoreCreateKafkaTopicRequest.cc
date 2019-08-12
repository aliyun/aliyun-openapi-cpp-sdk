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

#include <alibabacloud/emr/model/MetastoreCreateKafkaTopicRequest.h>

using AlibabaCloud::Emr::Model::MetastoreCreateKafkaTopicRequest;

MetastoreCreateKafkaTopicRequest::MetastoreCreateKafkaTopicRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreCreateKafkaTopic")
{}

MetastoreCreateKafkaTopicRequest::~MetastoreCreateKafkaTopicRequest()
{}

long MetastoreCreateKafkaTopicRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreCreateKafkaTopicRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreCreateKafkaTopicRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreCreateKafkaTopicRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MetastoreCreateKafkaTopicRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void MetastoreCreateKafkaTopicRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", dataSourceId);
}

std::string MetastoreCreateKafkaTopicRequest::getTopicName()const
{
	return topicName_;
}

void MetastoreCreateKafkaTopicRequest::setTopicName(const std::string& topicName)
{
	topicName_ = topicName;
	setCoreParameter("TopicName", topicName);
}

std::vector<MetastoreCreateKafkaTopicRequest::AdvancedConfig> MetastoreCreateKafkaTopicRequest::getAdvancedConfig()const
{
	return advancedConfig_;
}

void MetastoreCreateKafkaTopicRequest::setAdvancedConfig(const std::vector<AdvancedConfig>& advancedConfig)
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

int MetastoreCreateKafkaTopicRequest::getNumPartitions()const
{
	return numPartitions_;
}

void MetastoreCreateKafkaTopicRequest::setNumPartitions(int numPartitions)
{
	numPartitions_ = numPartitions;
	setCoreParameter("NumPartitions", std::to_string(numPartitions));
}

int MetastoreCreateKafkaTopicRequest::getReplicationFactor()const
{
	return replicationFactor_;
}

void MetastoreCreateKafkaTopicRequest::setReplicationFactor(int replicationFactor)
{
	replicationFactor_ = replicationFactor;
	setCoreParameter("ReplicationFactor", std::to_string(replicationFactor));
}

std::string MetastoreCreateKafkaTopicRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreCreateKafkaTopicRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

