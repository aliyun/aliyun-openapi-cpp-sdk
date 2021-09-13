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

#include <alibabacloud/linkwan/model/ListGatewayTransferFlowStatsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListGatewayTransferFlowStatsRequest;

ListGatewayTransferFlowStatsRequest::ListGatewayTransferFlowStatsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListGatewayTransferFlowStats")
{
	setMethod(HttpRequest::Method::Post);
}

ListGatewayTransferFlowStatsRequest::~ListGatewayTransferFlowStatsRequest()
{}

long ListGatewayTransferFlowStatsRequest::getEndMillis()const
{
	return endMillis_;
}

void ListGatewayTransferFlowStatsRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

std::string ListGatewayTransferFlowStatsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListGatewayTransferFlowStatsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListGatewayTransferFlowStatsRequest::getTimeIntervalUnit()const
{
	return timeIntervalUnit_;
}

void ListGatewayTransferFlowStatsRequest::setTimeIntervalUnit(const std::string& timeIntervalUnit)
{
	timeIntervalUnit_ = timeIntervalUnit;
	setParameter("TimeIntervalUnit", timeIntervalUnit);
}

std::string ListGatewayTransferFlowStatsRequest::getGwEui()const
{
	return gwEui_;
}

void ListGatewayTransferFlowStatsRequest::setGwEui(const std::string& gwEui)
{
	gwEui_ = gwEui;
	setParameter("GwEui", gwEui);
}

std::string ListGatewayTransferFlowStatsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListGatewayTransferFlowStatsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListGatewayTransferFlowStatsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListGatewayTransferFlowStatsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

long ListGatewayTransferFlowStatsRequest::getBeginMillis()const
{
	return beginMillis_;
}

void ListGatewayTransferFlowStatsRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

