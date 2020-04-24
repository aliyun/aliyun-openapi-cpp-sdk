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

#include <alibabacloud/ledgerdb/model/CreateVpcEndpointRequest.h>

using AlibabaCloud::Ledgerdb::Model::CreateVpcEndpointRequest;

CreateVpcEndpointRequest::CreateVpcEndpointRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "CreateVpcEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVpcEndpointRequest::~CreateVpcEndpointRequest()
{}

std::string CreateVpcEndpointRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVpcEndpointRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateVpcEndpointRequest::getLedgerId()const
{
	return ledgerId_;
}

void CreateVpcEndpointRequest::setLedgerId(const std::string& ledgerId)
{
	ledgerId_ = ledgerId;
	setBodyParameter("LedgerId", ledgerId);
}

std::string CreateVpcEndpointRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateVpcEndpointRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setBodyParameter("VSwitchId", vSwitchId);
}

std::string CreateVpcEndpointRequest::getVpcId()const
{
	return vpcId_;
}

void CreateVpcEndpointRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setBodyParameter("VpcId", vpcId);
}

