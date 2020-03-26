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

#include <alibabacloud/trademark/model/QueryCredentialsInfoRequest.h>

using AlibabaCloud::Trademark::Model::QueryCredentialsInfoRequest;

QueryCredentialsInfoRequest::QueryCredentialsInfoRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryCredentialsInfo")
{
	setMethod(HttpRequest::Method::Post);
}

QueryCredentialsInfoRequest::~QueryCredentialsInfoRequest()
{}

std::string QueryCredentialsInfoRequest::getOssKey()const
{
	return ossKey_;
}

void QueryCredentialsInfoRequest::setOssKey(const std::string& ossKey)
{
	ossKey_ = ossKey;
	setBodyParameter("OssKey", ossKey);
}

std::string QueryCredentialsInfoRequest::getMaterialType()const
{
	return materialType_;
}

void QueryCredentialsInfoRequest::setMaterialType(const std::string& materialType)
{
	materialType_ = materialType;
	setBodyParameter("MaterialType", materialType);
}

std::string QueryCredentialsInfoRequest::getCompanyName()const
{
	return companyName_;
}

void QueryCredentialsInfoRequest::setCompanyName(const std::string& companyName)
{
	companyName_ = companyName;
	setParameter("CompanyName", companyName);
}

