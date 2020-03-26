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

#include <alibabacloud/trademark/model/UpdateSendMaterialNumRequest.h>

using AlibabaCloud::Trademark::Model::UpdateSendMaterialNumRequest;

UpdateSendMaterialNumRequest::UpdateSendMaterialNumRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "UpdateSendMaterialNum")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateSendMaterialNumRequest::~UpdateSendMaterialNumRequest()
{}

std::string UpdateSendMaterialNumRequest::getNum()const
{
	return num_;
}

void UpdateSendMaterialNumRequest::setNum(const std::string& num)
{
	num_ = num;
	setParameter("Num", num);
}

std::string UpdateSendMaterialNumRequest::getBizId()const
{
	return bizId_;
}

void UpdateSendMaterialNumRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int UpdateSendMaterialNumRequest::getOperateType()const
{
	return operateType_;
}

void UpdateSendMaterialNumRequest::setOperateType(int operateType)
{
	operateType_ = operateType;
	setParameter("OperateType", std::to_string(operateType));
}

