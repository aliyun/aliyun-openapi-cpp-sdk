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

#include <alibabacloud/eipanycast/model/ModifyAnycastEipAddressSpecRequest.h>

using AlibabaCloud::Eipanycast::Model::ModifyAnycastEipAddressSpecRequest;

ModifyAnycastEipAddressSpecRequest::ModifyAnycastEipAddressSpecRequest() :
	RpcServiceRequest("eipanycast", "2020-03-09", "ModifyAnycastEipAddressSpec")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyAnycastEipAddressSpecRequest::~ModifyAnycastEipAddressSpecRequest()
{}

std::string ModifyAnycastEipAddressSpecRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifyAnycastEipAddressSpecRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", bandwidth);
}

std::string ModifyAnycastEipAddressSpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAnycastEipAddressSpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyAnycastEipAddressSpecRequest::getAnycastId()const
{
	return anycastId_;
}

void ModifyAnycastEipAddressSpecRequest::setAnycastId(const std::string& anycastId)
{
	anycastId_ = anycastId;
	setParameter("AnycastId", anycastId);
}

