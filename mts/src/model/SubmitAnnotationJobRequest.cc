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

#include <alibabacloud/mts/model/SubmitAnnotationJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitAnnotationJobRequest;

SubmitAnnotationJobRequest::SubmitAnnotationJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitAnnotationJob")
{}

SubmitAnnotationJobRequest::~SubmitAnnotationJobRequest()
{}

std::string SubmitAnnotationJobRequest::getInput()const
{
	return input_;
}

void SubmitAnnotationJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setParameter("Input", input);
}

std::string SubmitAnnotationJobRequest::getUserData()const
{
	return userData_;
}

void SubmitAnnotationJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

long SubmitAnnotationJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitAnnotationJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitAnnotationJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitAnnotationJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitAnnotationJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitAnnotationJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string SubmitAnnotationJobRequest::getAnnotationConfig()const
{
	return annotationConfig_;
}

void SubmitAnnotationJobRequest::setAnnotationConfig(const std::string& annotationConfig)
{
	annotationConfig_ = annotationConfig;
	setParameter("AnnotationConfig", annotationConfig);
}

long SubmitAnnotationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitAnnotationJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitAnnotationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitAnnotationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitAnnotationJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitAnnotationJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

