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

#include <alibabacloud/linkwan/model/CountNodesByNodeGroupIdRequest.h>

using AlibabaCloud::LinkWAN::Model::CountNodesByNodeGroupIdRequest;

CountNodesByNodeGroupIdRequest::CountNodesByNodeGroupIdRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CountNodesByNodeGroupId")
{
	setMethod(HttpRequest::Method::Post);
}

CountNodesByNodeGroupIdRequest::~CountNodesByNodeGroupIdRequest()
{}

std::string CountNodesByNodeGroupIdRequest::getFuzzyDevEui()const
{
	return fuzzyDevEui_;
}

void CountNodesByNodeGroupIdRequest::setFuzzyDevEui(const std::string& fuzzyDevEui)
{
	fuzzyDevEui_ = fuzzyDevEui;
	setParameter("FuzzyDevEui", fuzzyDevEui);
}

std::string CountNodesByNodeGroupIdRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void CountNodesByNodeGroupIdRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string CountNodesByNodeGroupIdRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountNodesByNodeGroupIdRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountNodesByNodeGroupIdRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountNodesByNodeGroupIdRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

