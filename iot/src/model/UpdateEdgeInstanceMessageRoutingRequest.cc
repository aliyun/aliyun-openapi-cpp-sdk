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

#include <alibabacloud/iot/model/UpdateEdgeInstanceMessageRoutingRequest.h>

using AlibabaCloud::Iot::Model::UpdateEdgeInstanceMessageRoutingRequest;

UpdateEdgeInstanceMessageRoutingRequest::UpdateEdgeInstanceMessageRoutingRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateEdgeInstanceMessageRouting")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateEdgeInstanceMessageRoutingRequest::~UpdateEdgeInstanceMessageRoutingRequest()
{}

std::string UpdateEdgeInstanceMessageRoutingRequest::getSourceData()const
{
	return sourceData_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setSourceData(const std::string& sourceData)
{
	sourceData_ = sourceData;
	setParameter("SourceData", sourceData);
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getTargetType()const
{
	return targetType_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setTargetType(const std::string& targetType)
{
	targetType_ = targetType;
	setParameter("TargetType", targetType);
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getSourceType()const
{
	return sourceType_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setParameter("SourceType", sourceType);
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getTopicFilter()const
{
	return topicFilter_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setTopicFilter(const std::string& topicFilter)
{
	topicFilter_ = topicFilter;
	setParameter("TopicFilter", topicFilter);
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

long UpdateEdgeInstanceMessageRoutingRequest::getRouteId()const
{
	return routeId_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setRouteId(long routeId)
{
	routeId_ = routeId;
	setParameter("RouteId", std::to_string(routeId));
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getTargetData()const
{
	return targetData_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setTargetData(const std::string& targetData)
{
	targetData_ = targetData;
	setParameter("TargetData", targetData);
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getName()const
{
	return name_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateEdgeInstanceMessageRoutingRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int UpdateEdgeInstanceMessageRoutingRequest::getTargetIotHubQos()const
{
	return targetIotHubQos_;
}

void UpdateEdgeInstanceMessageRoutingRequest::setTargetIotHubQos(int targetIotHubQos)
{
	targetIotHubQos_ = targetIotHubQos;
	setParameter("TargetIotHubQos", std::to_string(targetIotHubQos));
}

