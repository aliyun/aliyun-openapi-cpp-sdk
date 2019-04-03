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

#include <alibabacloud/sas/model/ModifyRiskSingleResultStatusRequest.h>

using AlibabaCloud::Sas::Model::ModifyRiskSingleResultStatusRequest;

ModifyRiskSingleResultStatusRequest::ModifyRiskSingleResultStatusRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ModifyRiskSingleResultStatus")
{}

ModifyRiskSingleResultStatusRequest::~ModifyRiskSingleResultStatusRequest()
{}

long ModifyRiskSingleResultStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyRiskSingleResultStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyRiskSingleResultStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyRiskSingleResultStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::vector<std::string> ModifyRiskSingleResultStatusRequest::getIds()const
{
	return ids_;
}

void ModifyRiskSingleResultStatusRequest::setIds(const std::vector<std::string>& ids)
{
	ids_ = ids;
	for(int i = 0; i!= ids.size(); i++)
		setCoreParameter("Ids."+ std::to_string(i), ids.at(i));
}

std::string ModifyRiskSingleResultStatusRequest::getLang()const
{
	return lang_;
}

void ModifyRiskSingleResultStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

long ModifyRiskSingleResultStatusRequest::getTaskId()const
{
	return taskId_;
}

void ModifyRiskSingleResultStatusRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

std::string ModifyRiskSingleResultStatusRequest::getStatus()const
{
	return status_;
}

void ModifyRiskSingleResultStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

