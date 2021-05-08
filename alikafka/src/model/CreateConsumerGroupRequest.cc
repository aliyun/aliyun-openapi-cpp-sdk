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

#include <alibabacloud/alikafka/model/CreateConsumerGroupRequest.h>

using AlibabaCloud::Alikafka::Model::CreateConsumerGroupRequest;

CreateConsumerGroupRequest::CreateConsumerGroupRequest() :
	RpcServiceRequest("alikafka", "2019-09-16", "CreateConsumerGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateConsumerGroupRequest::~CreateConsumerGroupRequest()
{}

std::string CreateConsumerGroupRequest::getConsumerId()const
{
	return consumerId_;
}

void CreateConsumerGroupRequest::setConsumerId(const std::string& consumerId)
{
	consumerId_ = consumerId;
	setParameter("ConsumerId", consumerId);
}

std::string CreateConsumerGroupRequest::getRemark()const
{
	return remark_;
}

void CreateConsumerGroupRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string CreateConsumerGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateConsumerGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateConsumerGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateConsumerGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

