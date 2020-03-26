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

#include <alibabacloud/trademark/model/RefuseAdditionalMaterialRequest.h>

using AlibabaCloud::Trademark::Model::RefuseAdditionalMaterialRequest;

RefuseAdditionalMaterialRequest::RefuseAdditionalMaterialRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "RefuseAdditionalMaterial")
{
	setMethod(HttpRequest::Method::Post);
}

RefuseAdditionalMaterialRequest::~RefuseAdditionalMaterialRequest()
{}

std::string RefuseAdditionalMaterialRequest::getNote()const
{
	return note_;
}

void RefuseAdditionalMaterialRequest::setNote(const std::string& note)
{
	note_ = note;
	setParameter("Note", note);
}

std::string RefuseAdditionalMaterialRequest::getBizId()const
{
	return bizId_;
}

void RefuseAdditionalMaterialRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

