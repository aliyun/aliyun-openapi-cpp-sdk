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

#include <alibabacloud/ccc/model/ModifyNotificationConfigRequest.h>

using AlibabaCloud::CCC::Model::ModifyNotificationConfigRequest;

ModifyNotificationConfigRequest::ModifyNotificationConfigRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyNotificationConfig")
{}

ModifyNotificationConfigRequest::~ModifyNotificationConfigRequest()
{}

std::vector<ModifyNotificationConfigRequest::Subscriptions> ModifyNotificationConfigRequest::getSubscriptions()const
{
	return subscriptions_;
}

void ModifyNotificationConfigRequest::setSubscriptions(const std::vector<Subscriptions>& subscriptions)
{
	subscriptions_ = subscriptions;
	int i = 0;
	for(int i = 0; i!= subscriptions.size(); i++)	{
		auto obj = subscriptions.at(i);
		std::string str ="Subscriptions."+ std::to_string(i);
		setCoreParameter(str + ".DisplayName", obj.displayName);
		setCoreParameter(str + ".Name", obj.name);
		setCoreParameter(str + ".Selected", obj.selected ? "true" : "false");
	}
}

std::string ModifyNotificationConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyNotificationConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyNotificationConfigRequest::getAccessPoint()const
{
	return accessPoint_;
}

void ModifyNotificationConfigRequest::setAccessPoint(const std::string& accessPoint)
{
	accessPoint_ = accessPoint;
	setCoreParameter("AccessPoint", accessPoint);
}

std::string ModifyNotificationConfigRequest::getTopic()const
{
	return topic_;
}

void ModifyNotificationConfigRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setCoreParameter("Topic", topic);
}

std::string ModifyNotificationConfigRequest::getProducerId()const
{
	return producerId_;
}

void ModifyNotificationConfigRequest::setProducerId(const std::string& producerId)
{
	producerId_ = producerId;
	setCoreParameter("ProducerId", producerId);
}

std::string ModifyNotificationConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyNotificationConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

