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

#include <alibabacloud/cloudauth/model/GetMaterialsRequest.h>

using AlibabaCloud::Cloudauth::Model::GetMaterialsRequest;

GetMaterialsRequest::GetMaterialsRequest() :
	RpcServiceRequest("cloudauth", "2018-05-04", "GetMaterials")
{}

GetMaterialsRequest::~GetMaterialsRequest()
{}

long GetMaterialsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetMaterialsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetMaterialsRequest::getBiz()const
{
	return biz_;
}

void GetMaterialsRequest::setBiz(const std::string& biz)
{
	biz_ = biz;
	setParameter("Biz", biz);
}

std::string GetMaterialsRequest::getSourceIp()const
{
	return sourceIp_;
}

void GetMaterialsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string GetMaterialsRequest::getTicketId()const
{
	return ticketId_;
}

void GetMaterialsRequest::setTicketId(const std::string& ticketId)
{
	ticketId_ = ticketId;
	setParameter("TicketId", ticketId);
}

