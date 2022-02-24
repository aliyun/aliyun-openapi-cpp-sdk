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

#include <alibabacloud/eipanycast/model/UpdateAnycastEipAddressAssociationsRequest.h>

using AlibabaCloud::Eipanycast::Model::UpdateAnycastEipAddressAssociationsRequest;

UpdateAnycastEipAddressAssociationsRequest::UpdateAnycastEipAddressAssociationsRequest() :
	RpcServiceRequest("eipanycast", "2020-03-09", "UpdateAnycastEipAddressAssociations")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateAnycastEipAddressAssociationsRequest::~UpdateAnycastEipAddressAssociationsRequest()
{}

bool UpdateAnycastEipAddressAssociationsRequest::getDryRun()const
{
	return dryRun_;
}

void UpdateAnycastEipAddressAssociationsRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string UpdateAnycastEipAddressAssociationsRequest::getAssociationMode()const
{
	return associationMode_;
}

void UpdateAnycastEipAddressAssociationsRequest::setAssociationMode(const std::string& associationMode)
{
	associationMode_ = associationMode;
	setParameter("AssociationMode", associationMode);
}

std::string UpdateAnycastEipAddressAssociationsRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateAnycastEipAddressAssociationsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

Array UpdateAnycastEipAddressAssociationsRequest::getPopLocationDeleteList()const
{
	return popLocationDeleteList_;
}

void UpdateAnycastEipAddressAssociationsRequest::setPopLocationDeleteList(const Array& popLocationDeleteList)
{
	popLocationDeleteList_ = popLocationDeleteList;
	setParameter("PopLocationDeleteList", std::to_string(popLocationDeleteList));
}

std::string UpdateAnycastEipAddressAssociationsRequest::getRegionId()const
{
	return regionId_;
}

void UpdateAnycastEipAddressAssociationsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateAnycastEipAddressAssociationsRequest::getAnycastId()const
{
	return anycastId_;
}

void UpdateAnycastEipAddressAssociationsRequest::setAnycastId(const std::string& anycastId)
{
	anycastId_ = anycastId;
	setParameter("AnycastId", anycastId);
}

Array UpdateAnycastEipAddressAssociationsRequest::getPopLocationAddList()const
{
	return popLocationAddList_;
}

void UpdateAnycastEipAddressAssociationsRequest::setPopLocationAddList(const Array& popLocationAddList)
{
	popLocationAddList_ = popLocationAddList;
	setParameter("PopLocationAddList", std::to_string(popLocationAddList));
}

std::string UpdateAnycastEipAddressAssociationsRequest::getBindInstanceId()const
{
	return bindInstanceId_;
}

void UpdateAnycastEipAddressAssociationsRequest::setBindInstanceId(const std::string& bindInstanceId)
{
	bindInstanceId_ = bindInstanceId;
	setParameter("BindInstanceId", bindInstanceId);
}

