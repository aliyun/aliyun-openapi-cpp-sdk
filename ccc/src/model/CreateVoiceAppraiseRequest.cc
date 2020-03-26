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

#include <alibabacloud/ccc/model/CreateVoiceAppraiseRequest.h>

using AlibabaCloud::CCC::Model::CreateVoiceAppraiseRequest;

CreateVoiceAppraiseRequest::CreateVoiceAppraiseRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CreateVoiceAppraise")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVoiceAppraiseRequest::~CreateVoiceAppraiseRequest()
{}

bool CreateVoiceAppraiseRequest::getIsAppraise()const
{
	return isAppraise_;
}

void CreateVoiceAppraiseRequest::setIsAppraise(bool isAppraise)
{
	isAppraise_ = isAppraise;
	setParameter("IsAppraise", isAppraise ? "true" : "false");
}

std::string CreateVoiceAppraiseRequest::getContent()const
{
	return content_;
}

void CreateVoiceAppraiseRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string CreateVoiceAppraiseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateVoiceAppraiseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateVoiceAppraiseRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateVoiceAppraiseRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateVoiceAppraiseRequest::getContactFlowVersionId()const
{
	return contactFlowVersionId_;
}

void CreateVoiceAppraiseRequest::setContactFlowVersionId(const std::string& contactFlowVersionId)
{
	contactFlowVersionId_ = contactFlowVersionId;
	setParameter("ContactFlowVersionId", contactFlowVersionId);
}

