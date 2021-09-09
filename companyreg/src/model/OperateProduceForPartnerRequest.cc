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

#include <alibabacloud/companyreg/model/OperateProduceForPartnerRequest.h>

using AlibabaCloud::Companyreg::Model::OperateProduceForPartnerRequest;

OperateProduceForPartnerRequest::OperateProduceForPartnerRequest() :
	RpcServiceRequest("companyreg", "2020-03-06", "OperateProduceForPartner")
{
	setMethod(HttpRequest::Method::Post);
}

OperateProduceForPartnerRequest::~OperateProduceForPartnerRequest()
{}

std::string OperateProduceForPartnerRequest::getBizType()const
{
	return bizType_;
}

void OperateProduceForPartnerRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

std::string OperateProduceForPartnerRequest::getExtInfo()const
{
	return extInfo_;
}

void OperateProduceForPartnerRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setParameter("ExtInfo", extInfo);
}

std::string OperateProduceForPartnerRequest::getBizId()const
{
	return bizId_;
}

void OperateProduceForPartnerRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string OperateProduceForPartnerRequest::getOperateType()const
{
	return operateType_;
}

void OperateProduceForPartnerRequest::setOperateType(const std::string& operateType)
{
	operateType_ = operateType;
	setParameter("OperateType", operateType);
}

