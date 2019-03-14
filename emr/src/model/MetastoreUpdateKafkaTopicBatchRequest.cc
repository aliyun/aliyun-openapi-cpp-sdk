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

#include <alibabacloud/emr/model/MetastoreUpdateKafkaTopicBatchRequest.h>

using AlibabaCloud::Emr::Model::MetastoreUpdateKafkaTopicBatchRequest;

MetastoreUpdateKafkaTopicBatchRequest::MetastoreUpdateKafkaTopicBatchRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreUpdateKafkaTopicBatch")
{}

MetastoreUpdateKafkaTopicBatchRequest::~MetastoreUpdateKafkaTopicBatchRequest()
{}

long MetastoreUpdateKafkaTopicBatchRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreUpdateKafkaTopicBatchRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<MetastoreUpdateKafkaTopicBatchRequest::TopicParam> MetastoreUpdateKafkaTopicBatchRequest::getTopicParam()const
{
	return topicParam_;
}

void MetastoreUpdateKafkaTopicBatchRequest::setTopicParam(const std::vector<TopicParam>& topicParam)
{
	topicParam_ = topicParam;
	int i = 0;
	for(int i = 0; i!= topicParam.size(); i++)	{
		auto obj = topicParam.at(i);
		std::string str ="TopicParam."+ std::to_string(i);
		setParameter(str + ".TopicId", obj.topicId);
		setParameter(str + ".NumPartitions", std::to_string(obj.numPartitions));
	}
}

std::string MetastoreUpdateKafkaTopicBatchRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreUpdateKafkaTopicBatchRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string MetastoreUpdateKafkaTopicBatchRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreUpdateKafkaTopicBatchRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

