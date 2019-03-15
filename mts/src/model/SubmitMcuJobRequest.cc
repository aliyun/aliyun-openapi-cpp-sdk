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

#include <alibabacloud/mts/model/SubmitMcuJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitMcuJobRequest;

SubmitMcuJobRequest::SubmitMcuJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitMcuJob")
{}

SubmitMcuJobRequest::~SubmitMcuJobRequest()
{}

std::string SubmitMcuJobRequest::get_Template()const
{
	return _template_;
}

void SubmitMcuJobRequest::set_Template(const std::string& _template)
{
	_template_ = _template;
	setParameter("_Template", _template);
}

std::string SubmitMcuJobRequest::getInput()const
{
	return input_;
}

void SubmitMcuJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setParameter("Input", input);
}

std::string SubmitMcuJobRequest::getUserData()const
{
	return userData_;
}

void SubmitMcuJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

long SubmitMcuJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitMcuJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitMcuJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitMcuJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitMcuJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitMcuJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SubmitMcuJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitMcuJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitMcuJobRequest::getTemplateId()const
{
	return templateId_;
}

void SubmitMcuJobRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

std::string SubmitMcuJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitMcuJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitMcuJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitMcuJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

