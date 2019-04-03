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

#include <alibabacloud/sas/model/ModifyRiskCheckStatusRequest.h>

using AlibabaCloud::Sas::Model::ModifyRiskCheckStatusRequest;

ModifyRiskCheckStatusRequest::ModifyRiskCheckStatusRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ModifyRiskCheckStatus")
{}

ModifyRiskCheckStatusRequest::~ModifyRiskCheckStatusRequest()
{}

long ModifyRiskCheckStatusRequest::getItemId()const
{
	return itemId_;
}

void ModifyRiskCheckStatusRequest::setItemId(long itemId)
{
	itemId_ = itemId;
	setCoreParameter("ItemId", std::to_string(itemId));
}

long ModifyRiskCheckStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyRiskCheckStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyRiskCheckStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyRiskCheckStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyRiskCheckStatusRequest::getLang()const
{
	return lang_;
}

void ModifyRiskCheckStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long ModifyRiskCheckStatusRequest::getTaskId()const
{
	return taskId_;
}

void ModifyRiskCheckStatusRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

std::string ModifyRiskCheckStatusRequest::getStatus()const
{
	return status_;
}

void ModifyRiskCheckStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

