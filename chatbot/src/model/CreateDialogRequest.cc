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

#include <alibabacloud/chatbot/model/CreateDialogRequest.h>

using AlibabaCloud::Chatbot::Model::CreateDialogRequest;

CreateDialogRequest::CreateDialogRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "CreateDialog")
{}

CreateDialogRequest::~CreateDialogRequest()
{}

std::string CreateDialogRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateDialogRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string CreateDialogRequest::getDescription()const
{
	return description_;
}

void CreateDialogRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateDialogRequest::getDialogName()const
{
	return dialogName_;
}

void CreateDialogRequest::setDialogName(const std::string& dialogName)
{
	dialogName_ = dialogName;
	setCoreParameter("DialogName", std::to_string(dialogName));
}

