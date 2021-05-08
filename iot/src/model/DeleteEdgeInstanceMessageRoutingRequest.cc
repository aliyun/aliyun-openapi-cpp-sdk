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

#include <alibabacloud/iot/model/DeleteEdgeInstanceMessageRoutingRequest.h>

using AlibabaCloud::Iot::Model::DeleteEdgeInstanceMessageRoutingRequest;

DeleteEdgeInstanceMessageRoutingRequest::DeleteEdgeInstanceMessageRoutingRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteEdgeInstanceMessageRouting")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteEdgeInstanceMessageRoutingRequest::~DeleteEdgeInstanceMessageRoutingRequest()
{}

std::string DeleteEdgeInstanceMessageRoutingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteEdgeInstanceMessageRoutingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteEdgeInstanceMessageRoutingRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteEdgeInstanceMessageRoutingRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteEdgeInstanceMessageRoutingRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteEdgeInstanceMessageRoutingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long DeleteEdgeInstanceMessageRoutingRequest::getRouteId()const
{
	return routeId_;
}

void DeleteEdgeInstanceMessageRoutingRequest::setRouteId(long routeId)
{
	routeId_ = routeId;
	setParameter("RouteId", std::to_string(routeId));
}

std::string DeleteEdgeInstanceMessageRoutingRequest::getApiProduct()const
{
	return apiProduct_;
}

void DeleteEdgeInstanceMessageRoutingRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string DeleteEdgeInstanceMessageRoutingRequest::getApiRevision()const
{
	return apiRevision_;
}

void DeleteEdgeInstanceMessageRoutingRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

