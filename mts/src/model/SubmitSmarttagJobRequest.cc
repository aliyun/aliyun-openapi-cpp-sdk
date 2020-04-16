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

#include <alibabacloud/mts/model/SubmitSmarttagJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitSmarttagJobRequest;

SubmitSmarttagJobRequest::SubmitSmarttagJobRequest() :
	RpcServiceRequest("mts", "2014-06-18", "SubmitSmarttagJob")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitSmarttagJobRequest::~SubmitSmarttagJobRequest()
{}

long SubmitSmarttagJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitSmarttagJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitSmarttagJobRequest::getTitle()const
{
	return title_;
}

void SubmitSmarttagJobRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string SubmitSmarttagJobRequest::getContent()const
{
	return content_;
}

void SubmitSmarttagJobRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string SubmitSmarttagJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitSmarttagJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitSmarttagJobRequest::getUserData()const
{
	return userData_;
}

void SubmitSmarttagJobRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitSmarttagJobRequest::getNotifyUrl()const
{
	return notifyUrl_;
}

void SubmitSmarttagJobRequest::setNotifyUrl(const std::string& notifyUrl)
{
	notifyUrl_ = notifyUrl;
	setParameter("NotifyUrl", notifyUrl);
}

std::string SubmitSmarttagJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitSmarttagJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitSmarttagJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SubmitSmarttagJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SubmitSmarttagJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitSmarttagJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitSmarttagJobRequest::getParams()const
{
	return params_;
}

void SubmitSmarttagJobRequest::setParams(const std::string& params)
{
	params_ = params;
	setParameter("Params", params);
}

std::string SubmitSmarttagJobRequest::getPipelineId()const
{
	return pipelineId_;
}

void SubmitSmarttagJobRequest::setPipelineId(const std::string& pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", pipelineId);
}

std::string SubmitSmarttagJobRequest::getContentType()const
{
	return contentType_;
}

void SubmitSmarttagJobRequest::setContentType(const std::string& contentType)
{
	contentType_ = contentType;
	setParameter("ContentType", contentType);
}

std::string SubmitSmarttagJobRequest::getInput()const
{
	return input_;
}

void SubmitSmarttagJobRequest::setInput(const std::string& input)
{
	input_ = input;
	setParameter("Input", input);
}

std::string SubmitSmarttagJobRequest::getContentAddr()const
{
	return contentAddr_;
}

void SubmitSmarttagJobRequest::setContentAddr(const std::string& contentAddr)
{
	contentAddr_ = contentAddr;
	setParameter("ContentAddr", contentAddr);
}

