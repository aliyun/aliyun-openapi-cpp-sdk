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

#include <alibabacloud/iot/model/GetEdgeInstanceMessageRoutingRequest.h>

using AlibabaCloud::Iot::Model::GetEdgeInstanceMessageRoutingRequest;

GetEdgeInstanceMessageRoutingRequest::GetEdgeInstanceMessageRoutingRequest() :
	RpcServiceRequest("iot", "2018-01-20", "GetEdgeInstanceMessageRouting")
{
	setMethod(HttpRequest::Method::Post);
}

GetEdgeInstanceMessageRoutingRequest::~GetEdgeInstanceMessageRoutingRequest()
{}

std::string GetEdgeInstanceMessageRoutingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetEdgeInstanceMessageRoutingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetEdgeInstanceMessageRoutingRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void GetEdgeInstanceMessageRoutingRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string GetEdgeInstanceMessageRoutingRequest::getInstanceId()const
{
	return instanceId_;
}

void GetEdgeInstanceMessageRoutingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long GetEdgeInstanceMessageRoutingRequest::getRouteId()const
{
	return routeId_;
}

void GetEdgeInstanceMessageRoutingRequest::setRouteId(long routeId)
{
	routeId_ = routeId;
	setParameter("RouteId", std::to_string(routeId));
}

std::string GetEdgeInstanceMessageRoutingRequest::getApiProduct()const
{
	return apiProduct_;
}

void GetEdgeInstanceMessageRoutingRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string GetEdgeInstanceMessageRoutingRequest::getApiRevision()const
{
	return apiRevision_;
}

void GetEdgeInstanceMessageRoutingRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

