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

#include <alibabacloud/trademark/model/AcceptPartnerNotificationRequest.h>

using AlibabaCloud::Trademark::Model::AcceptPartnerNotificationRequest;

AcceptPartnerNotificationRequest::AcceptPartnerNotificationRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "AcceptPartnerNotification")
{
	setMethod(HttpRequest::Method::Post);
}

AcceptPartnerNotificationRequest::~AcceptPartnerNotificationRequest()
{}

std::string AcceptPartnerNotificationRequest::getMaterial()const
{
	return material_;
}

void AcceptPartnerNotificationRequest::setMaterial(const std::string& material)
{
	material_ = material;
	setParameter("Material", material);
}

std::string AcceptPartnerNotificationRequest::getBizId()const
{
	return bizId_;
}

void AcceptPartnerNotificationRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string AcceptPartnerNotificationRequest::getRemark()const
{
	return remark_;
}

void AcceptPartnerNotificationRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string AcceptPartnerNotificationRequest::getOperation()const
{
	return operation_;
}

void AcceptPartnerNotificationRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setParameter("Operation", operation);
}

