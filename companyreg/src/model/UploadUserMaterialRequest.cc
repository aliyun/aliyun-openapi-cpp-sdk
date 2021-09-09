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

#include <alibabacloud/companyreg/model/UploadUserMaterialRequest.h>

using AlibabaCloud::Companyreg::Model::UploadUserMaterialRequest;

UploadUserMaterialRequest::UploadUserMaterialRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "UploadUserMaterial")
{
	setMethod(HttpRequest::Method::Post);
}

UploadUserMaterialRequest::~UploadUserMaterialRequest()
{}

std::string UploadUserMaterialRequest::getBizId()const
{
	return bizId_;
}

void UploadUserMaterialRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::vector<UploadUserMaterialRequest::Attribute> UploadUserMaterialRequest::getAttribute()const
{
	return attribute_;
}

void UploadUserMaterialRequest::setAttribute(const std::vector<Attribute>& attribute)
{
	attribute_ = attribute;
	for(int dep1 = 0; dep1!= attribute.size(); dep1++) {
		auto attributeObj = attribute.at(dep1);
		std::string attributeObjStr = "Attribute." + std::to_string(dep1 + 1);
		setParameter(attributeObjStr + ".Value", attributeObj.value);
		setParameter(attributeObjStr + ".Key", attributeObj.key);
	}
}

int UploadUserMaterialRequest::getStatus()const
{
	return status_;
}

void UploadUserMaterialRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

