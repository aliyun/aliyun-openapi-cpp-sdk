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

#include <alibabacloud/iot/model/QueryDynamicGroupDevicesRequest.h>

using AlibabaCloud::Iot::Model::QueryDynamicGroupDevicesRequest;

QueryDynamicGroupDevicesRequest::QueryDynamicGroupDevicesRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDynamicGroupDevices")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDynamicGroupDevicesRequest::~QueryDynamicGroupDevicesRequest()
{}

std::string QueryDynamicGroupDevicesRequest::getNextToken()const
{
	return nextToken_;
}

void QueryDynamicGroupDevicesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string QueryDynamicGroupDevicesRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDynamicGroupDevicesRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryDynamicGroupDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDynamicGroupDevicesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

bool QueryDynamicGroupDevicesRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void QueryDynamicGroupDevicesRequest::setFuzzyName(bool fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setParameter("FuzzyName", fuzzyName ? "true" : "false");
}

std::string QueryDynamicGroupDevicesRequest::getGroupId()const
{
	return groupId_;
}

void QueryDynamicGroupDevicesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

int QueryDynamicGroupDevicesRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryDynamicGroupDevicesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryDynamicGroupDevicesRequest::getProductKey()const
{
	return productKey_;
}

void QueryDynamicGroupDevicesRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string QueryDynamicGroupDevicesRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryDynamicGroupDevicesRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryDynamicGroupDevicesRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryDynamicGroupDevicesRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string QueryDynamicGroupDevicesRequest::getDeviceName()const
{
	return deviceName_;
}

void QueryDynamicGroupDevicesRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

std::string QueryDynamicGroupDevicesRequest::getStatus()const
{
	return status_;
}

void QueryDynamicGroupDevicesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

