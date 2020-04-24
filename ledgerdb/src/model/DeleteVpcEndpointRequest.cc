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

#include <alibabacloud/ledgerdb/model/DeleteVpcEndpointRequest.h>

using AlibabaCloud::Ledgerdb::Model::DeleteVpcEndpointRequest;

DeleteVpcEndpointRequest::DeleteVpcEndpointRequest() :
	RpcServiceRequest("ledgerdb", "2019-11-22", "DeleteVpcEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteVpcEndpointRequest::~DeleteVpcEndpointRequest()
{}

std::string DeleteVpcEndpointRequest::getLedgerId()const
{
	return ledgerId_;
}

void DeleteVpcEndpointRequest::setLedgerId(const std::string& ledgerId)
{
	ledgerId_ = ledgerId;
	setParameter("LedgerId", ledgerId);
}

std::string DeleteVpcEndpointRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DeleteVpcEndpointRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string DeleteVpcEndpointRequest::getVpcId()const
{
	return vpcId_;
}

void DeleteVpcEndpointRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DeleteVpcEndpointRequest::getVpcEndpointId()const
{
	return vpcEndpointId_;
}

void DeleteVpcEndpointRequest::setVpcEndpointId(const std::string& vpcEndpointId)
{
	vpcEndpointId_ = vpcEndpointId;
	setParameter("VpcEndpointId", vpcEndpointId);
}

