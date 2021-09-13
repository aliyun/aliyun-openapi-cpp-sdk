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

#include <alibabacloud/linkwan/model/ListNodeGroupTransferFlowStatsRequest.h>

using AlibabaCloud::LinkWAN::Model::ListNodeGroupTransferFlowStatsRequest;

ListNodeGroupTransferFlowStatsRequest::ListNodeGroupTransferFlowStatsRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListNodeGroupTransferFlowStats")
{
	setMethod(HttpRequest::Method::Post);
}

ListNodeGroupTransferFlowStatsRequest::~ListNodeGroupTransferFlowStatsRequest()
{}

long ListNodeGroupTransferFlowStatsRequest::getEndMillis()const
{
	return endMillis_;
}

void ListNodeGroupTransferFlowStatsRequest::setEndMillis(long endMillis)
{
	endMillis_ = endMillis;
	setParameter("EndMillis", std::to_string(endMillis));
}

std::string ListNodeGroupTransferFlowStatsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListNodeGroupTransferFlowStatsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string ListNodeGroupTransferFlowStatsRequest::getTimeIntervalUnit()const
{
	return timeIntervalUnit_;
}

void ListNodeGroupTransferFlowStatsRequest::setTimeIntervalUnit(const std::string& timeIntervalUnit)
{
	timeIntervalUnit_ = timeIntervalUnit;
	setParameter("TimeIntervalUnit", timeIntervalUnit);
}

std::string ListNodeGroupTransferFlowStatsRequest::getNodeGroupId()const
{
	return nodeGroupId_;
}

void ListNodeGroupTransferFlowStatsRequest::setNodeGroupId(const std::string& nodeGroupId)
{
	nodeGroupId_ = nodeGroupId;
	setParameter("NodeGroupId", nodeGroupId);
}

std::string ListNodeGroupTransferFlowStatsRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListNodeGroupTransferFlowStatsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListNodeGroupTransferFlowStatsRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListNodeGroupTransferFlowStatsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

long ListNodeGroupTransferFlowStatsRequest::getBeginMillis()const
{
	return beginMillis_;
}

void ListNodeGroupTransferFlowStatsRequest::setBeginMillis(long beginMillis)
{
	beginMillis_ = beginMillis;
	setParameter("BeginMillis", std::to_string(beginMillis));
}

