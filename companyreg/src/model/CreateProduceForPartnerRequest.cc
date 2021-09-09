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

#include <alibabacloud/companyreg/model/CreateProduceForPartnerRequest.h>

using AlibabaCloud::Companyreg::Model::CreateProduceForPartnerRequest;

CreateProduceForPartnerRequest::CreateProduceForPartnerRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "CreateProduceForPartner")
{
	setMethod(HttpRequest::Method::Post);
}

CreateProduceForPartnerRequest::~CreateProduceForPartnerRequest()
{}

std::string CreateProduceForPartnerRequest::getBizType()const
{
	return bizType_;
}

void CreateProduceForPartnerRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string CreateProduceForPartnerRequest::getExtInfo()const
{
	return extInfo_;
}

void CreateProduceForPartnerRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setParameter("ExtInfo", extInfo);
}

std::string CreateProduceForPartnerRequest::getBizId()const
{
	return bizId_;
}

void CreateProduceForPartnerRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

