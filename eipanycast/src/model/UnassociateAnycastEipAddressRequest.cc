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

#include <alibabacloud/eipanycast/model/UnassociateAnycastEipAddressRequest.h>

using AlibabaCloud::Eipanycast::Model::UnassociateAnycastEipAddressRequest;

UnassociateAnycastEipAddressRequest::UnassociateAnycastEipAddressRequest() :
	RpcServiceRequest("eipanycast", "2020-03-09", "UnassociateAnycastEipAddress")
{
	setMethod(HttpRequest::Method::Post);
}

UnassociateAnycastEipAddressRequest::~UnassociateAnycastEipAddressRequest()
{}

std::string UnassociateAnycastEipAddressRequest::getDryRun()const
{
	return dryRun_;
}

void UnassociateAnycastEipAddressRequest::setDryRun(const std::string& dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun);
}

std::string UnassociateAnycastEipAddressRequest::getClientToken()const
{
	return clientToken_;
}

void UnassociateAnycastEipAddressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UnassociateAnycastEipAddressRequest::getBindInstanceType()const
{
	return bindInstanceType_;
}

void UnassociateAnycastEipAddressRequest::setBindInstanceType(const std::string& bindInstanceType)
{
	bindInstanceType_ = bindInstanceType;
	setParameter("BindInstanceType", bindInstanceType);
}

std::string UnassociateAnycastEipAddressRequest::getBindInstanceRegionId()const
{
	return bindInstanceRegionId_;
}

void UnassociateAnycastEipAddressRequest::setBindInstanceRegionId(const std::string& bindInstanceRegionId)
{
	bindInstanceRegionId_ = bindInstanceRegionId;
	setParameter("BindInstanceRegionId", bindInstanceRegionId);
}

std::string UnassociateAnycastEipAddressRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void UnassociateAnycastEipAddressRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string UnassociateAnycastEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void UnassociateAnycastEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UnassociateAnycastEipAddressRequest::getAnycastId()const
{
	return anycastId_;
}

void UnassociateAnycastEipAddressRequest::setAnycastId(const std::string& anycastId)
{
	anycastId_ = anycastId;
	setParameter("AnycastId", anycastId);
}

std::string UnassociateAnycastEipAddressRequest::getBindInstanceId()const
{
	return bindInstanceId_;
}

void UnassociateAnycastEipAddressRequest::setBindInstanceId(const std::string& bindInstanceId)
{
	bindInstanceId_ = bindInstanceId;
	setParameter("BindInstanceId", bindInstanceId);
}

