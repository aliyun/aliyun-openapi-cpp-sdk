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

#include <alibabacloud/linkwan/model/UpdateDataDispatchConfigRequest.h>

using AlibabaCloud::LinkWAN::Model::UpdateDataDispatchConfigRequest;

UpdateDataDispatchConfigRequest::UpdateDataDispatchConfigRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "UpdateDataDispatchConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDataDispatchConfigRequest::~UpdateDataDispatchConfigRequest()
{}

std::string UpdateDataDispatchConfigRequest::getUplinkTopic()const
{
	return uplinkTopic_;
}

void UpdateDataDispatchConfigRequest::setUplinkTopic(const std::string& uplinkTopic)
{
	uplinkTopic_ = uplinkTopic;
	setParameter("UplinkTopic", uplinkTopic);
}

bool UpdateDataDispatchConfigRequest::getDebugSwitch()const
{
	return debugSwitch_;
}

void UpdateDataDispatchConfigRequest::setDebugSwitch(bool debugSwitch)
{
	debugSwitch_ = debugSwitch;
	setParameter("DebugSwitch", debugSwitch ? "true" : "false");
}

std::string UpdateDataDispatchConfigRequest::getProductType()const
{
	return productType_;
}

void UpdateDataDispatchConfigRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

std::string UpdateDataDispatchConfigRequest::getProductName()const
{
	return productName_;
}

void UpdateDataDispatchConfigRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string UpdateDataDispatchConfigRequest::getDataDispatchDestination()const
{
	return dataDispatchDestination_;
}

void UpdateDataDispatchConfigRequest::setDataDispatchDestination(const std::string& dataDispatchDestination)
{
	dataDispatchDestination_ = dataDispatchDestination;
	setParameter("DataDispatchDestination", dataDispatchDestination);
}

std::string UpdateDataDispatchConfigRequest::getUplinkRegionName()const
{
	return uplinkRegionName_;
}

void UpdateDataDispatchConfigRequest::setUplinkRegionName(const std::string& uplinkRegionName)
{
	uplinkRegionName_ = uplinkRegionName;
	setParameter("UplinkRegionName", uplinkRegionName);
}

std::string UpdateDataDispatchConfigRequest::getProductKey()const
{
	return productKey_;
}

void UpdateDataDispatchConfigRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string UpdateDataDispatchConfigRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void UpdateDataDispatchConfigRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string UpdateDataDispatchConfigRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateDataDispatchConfigRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateDataDispatchConfigRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateDataDispatchConfigRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

