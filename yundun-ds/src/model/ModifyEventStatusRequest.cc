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

#include <alibabacloud/yundun-ds/model/ModifyEventStatusRequest.h>

using AlibabaCloud::Yundun_ds::Model::ModifyEventStatusRequest;

ModifyEventStatusRequest::ModifyEventStatusRequest() :
	RpcServiceRequest("yundun-ds", "2019-01-03", "ModifyEventStatus")
{}

ModifyEventStatusRequest::~ModifyEventStatusRequest()
{}

std::string ModifyEventStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyEventStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

bool ModifyEventStatusRequest::getBacked()const
{
	return backed_;
}

void ModifyEventStatusRequest::setBacked(bool backed)
{
	backed_ = backed;
	setCoreParameter("Backed", backed ? "true" : "false");
}

int ModifyEventStatusRequest::getFeatureType()const
{
	return featureType_;
}

void ModifyEventStatusRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

std::string ModifyEventStatusRequest::getDealReason()const
{
	return dealReason_;
}

void ModifyEventStatusRequest::setDealReason(const std::string& dealReason)
{
	dealReason_ = dealReason;
	setCoreParameter("DealReason", dealReason);
}

long ModifyEventStatusRequest::getId()const
{
	return id_;
}

void ModifyEventStatusRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string ModifyEventStatusRequest::getLang()const
{
	return lang_;
}

void ModifyEventStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int ModifyEventStatusRequest::getStatus()const
{
	return status_;
}

void ModifyEventStatusRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

