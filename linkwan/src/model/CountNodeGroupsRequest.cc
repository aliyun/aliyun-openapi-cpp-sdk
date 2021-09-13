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

#include <alibabacloud/linkwan/model/CountNodeGroupsRequest.h>

using AlibabaCloud::LinkWAN::Model::CountNodeGroupsRequest;

CountNodeGroupsRequest::CountNodeGroupsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CountNodeGroups")
{
	setMethod(HttpRequest::Method::Post);
}

CountNodeGroupsRequest::~CountNodeGroupsRequest()
{}

std::string CountNodeGroupsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CountNodeGroupsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CountNodeGroupsRequest::getFuzzyJoinEui()const
{
	return fuzzyJoinEui_;
}

void CountNodeGroupsRequest::setFuzzyJoinEui(const std::string& fuzzyJoinEui)
{
	fuzzyJoinEui_ = fuzzyJoinEui;
	setParameter("FuzzyJoinEui", fuzzyJoinEui);
}

std::string CountNodeGroupsRequest::getFuzzyDevEui()const
{
	return fuzzyDevEui_;
}

void CountNodeGroupsRequest::setFuzzyDevEui(const std::string& fuzzyDevEui)
{
	fuzzyDevEui_ = fuzzyDevEui;
	setParameter("FuzzyDevEui", fuzzyDevEui);
}

std::string CountNodeGroupsRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void CountNodeGroupsRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setParameter("FuzzyName", fuzzyName);
}

std::string CountNodeGroupsRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountNodeGroupsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountNodeGroupsRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountNodeGroupsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

