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

#include <alibabacloud/green/model/RefundCdiBagRequest.h>

using AlibabaCloud::Green::Model::RefundCdiBagRequest;

RefundCdiBagRequest::RefundCdiBagRequest() :
	RpcServiceRequest("green", "2017-08-23", "RefundCdiBag")
{
	setMethod(HttpRequest::Method::Post);
}

RefundCdiBagRequest::~RefundCdiBagRequest()
{}

std::string RefundCdiBagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RefundCdiBagRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string RefundCdiBagRequest::getInstanceId()const
{
	return instanceId_;
}

void RefundCdiBagRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

