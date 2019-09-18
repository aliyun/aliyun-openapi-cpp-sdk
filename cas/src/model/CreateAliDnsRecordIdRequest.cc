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

#include <alibabacloud/cas/model/CreateAliDnsRecordIdRequest.h>

using AlibabaCloud::Cas::Model::CreateAliDnsRecordIdRequest;

CreateAliDnsRecordIdRequest::CreateAliDnsRecordIdRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateAliDnsRecordId")
{}

CreateAliDnsRecordIdRequest::~CreateAliDnsRecordIdRequest()
{}

long CreateAliDnsRecordIdRequest::getOrderId()const
{
	return orderId_;
}

void CreateAliDnsRecordIdRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", std::to_string(orderId));
}

std::string CreateAliDnsRecordIdRequest::getRecordId()const
{
	return recordId_;
}

void CreateAliDnsRecordIdRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", recordId);
}

std::string CreateAliDnsRecordIdRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateAliDnsRecordIdRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateAliDnsRecordIdRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateAliDnsRecordIdRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateAliDnsRecordIdRequest::getLang()const
{
	return lang_;
}

void CreateAliDnsRecordIdRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

