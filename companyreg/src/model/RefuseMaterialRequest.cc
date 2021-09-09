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

#include <alibabacloud/companyreg/model/RefuseMaterialRequest.h>

using AlibabaCloud::Companyreg::Model::RefuseMaterialRequest;

RefuseMaterialRequest::RefuseMaterialRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "RefuseMaterial")
{
	setMethod(HttpRequest::Method::Post);
}

RefuseMaterialRequest::~RefuseMaterialRequest()
{}

std::string RefuseMaterialRequest::getNote()const
{
	return note_;
}

void RefuseMaterialRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

std::string RefuseMaterialRequest::getBizId()const
{
	return bizId_;
}

void RefuseMaterialRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

