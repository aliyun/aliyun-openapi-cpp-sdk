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

#include <alibabacloud/chatbot/model/DeleteBotRequest.h>

using AlibabaCloud::Chatbot::Model::DeleteBotRequest;

DeleteBotRequest::DeleteBotRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "DeleteBot")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteBotRequest::~DeleteBotRequest()
{}

std::string DeleteBotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteBotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteBotRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteBotRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

