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

#include <alibabacloud/iot/model/CreateEdgeInstanceMessageRoutingRequest.h>

using AlibabaCloud::Iot::Model::CreateEdgeInstanceMessageRoutingRequest;

CreateEdgeInstanceMessageRoutingRequest::CreateEdgeInstanceMessageRoutingRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateEdgeInstanceMessageRouting")
{
	setMethod(HttpRequest::Method::Post);
}

CreateEdgeInstanceMessageRoutingRequest::~CreateEdgeInstanceMessageRoutingRequest()
{}

std::string CreateEdgeInstanceMessageRoutingRequest::getSourceData()const
{
	return sourceData_;
}

void CreateEdgeInstanceMessageRoutingRequest::setSourceData(const std::string& sourceData)
{
	sourceData_ = sourceData;
	setParameter("SourceData", sourceData);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getTargetType()const
{
	return targetType_;
}

void CreateEdgeInstanceMessageRoutingRequest::setTargetType(const std::string& targetType)
{
	targetType_ = targetType;
	setParameter("TargetType", targetType);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateEdgeInstanceMessageRoutingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateEdgeInstanceMessageRoutingRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getSourceType()const
{
	return sourceType_;
}

void CreateEdgeInstanceMessageRoutingRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setParameter("SourceType", sourceType);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getTopicFilter()const
{
	return topicFilter_;
}

void CreateEdgeInstanceMessageRoutingRequest::setTopicFilter(const std::string& topicFilter)
{
	topicFilter_ = topicFilter;
	setParameter("TopicFilter", topicFilter);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateEdgeInstanceMessageRoutingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getTargetData()const
{
	return targetData_;
}

void CreateEdgeInstanceMessageRoutingRequest::setTargetData(const std::string& targetData)
{
	targetData_ = targetData;
	setParameter("TargetData", targetData);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getApiProduct()const
{
	return apiProduct_;
}

void CreateEdgeInstanceMessageRoutingRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getName()const
{
	return name_;
}

void CreateEdgeInstanceMessageRoutingRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateEdgeInstanceMessageRoutingRequest::getApiRevision()const
{
	return apiRevision_;
}

void CreateEdgeInstanceMessageRoutingRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int CreateEdgeInstanceMessageRoutingRequest::getTargetIotHubQos()const
{
	return targetIotHubQos_;
}

void CreateEdgeInstanceMessageRoutingRequest::setTargetIotHubQos(int targetIotHubQos)
{
	targetIotHubQos_ = targetIotHubQos;
	setParameter("TargetIotHubQos", std::to_string(targetIotHubQos));
}

