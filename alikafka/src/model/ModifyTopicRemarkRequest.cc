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

#include <alibabacloud/alikafka/model/ModifyTopicRemarkRequest.h>

using AlibabaCloud::Alikafka::Model::ModifyTopicRemarkRequest;

ModifyTopicRemarkRequest::ModifyTopicRemarkRequest() :
	RpcServiceRequest("alikafka", "2019-09-16", "ModifyTopicRemark")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyTopicRemarkRequest::~ModifyTopicRemarkRequest()
{}

std::string ModifyTopicRemarkRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyTopicRemarkRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyTopicRemarkRequest::getRegionId()const
{
	return regionId_;
}

void ModifyTopicRemarkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyTopicRemarkRequest::getTopic()const
{
	return topic_;
}

void ModifyTopicRemarkRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setParameter("Topic", topic);
}

std::string ModifyTopicRemarkRequest::getRemark()const
{
	return remark_;
}

void ModifyTopicRemarkRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

