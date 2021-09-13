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

#include <alibabacloud/linkwan/model/ListGatewaysRequest.h>

using AlibabaCloud::LinkWAN::Model::ListGatewaysRequest;

ListGatewaysRequest::ListGatewaysRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "ListGateways")
{
	setMethod(HttpRequest::Method::Post);
}

ListGatewaysRequest::~ListGatewaysRequest()
{}

std::string ListGatewaysRequest::getFuzzyGwEui()const
{
	return fuzzyGwEui_;
}

void ListGatewaysRequest::setFuzzyGwEui(const std::string& fuzzyGwEui)
{
	fuzzyGwEui_ = fuzzyGwEui;
	setParameter("FuzzyGwEui", fuzzyGwEui);
}

std::string ListGatewaysRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void ListGatewaysRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

long ListGatewaysRequest::getLimit()const
{
	return limit_;
}

void ListGatewaysRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string ListGatewaysRequest::getFuzzyCity()const
{
	return fuzzyCity_;
}

void ListGatewaysRequest::setFuzzyCity(const std::string& fuzzyCity)
{
	fuzzyCity_ = fuzzyCity;
	setParameter("FuzzyCity", fuzzyCity);
}

std::string ListGatewaysRequest::getOnlineState()const
{
	return onlineState_;
}

void ListGatewaysRequest::setOnlineState(const std::string& onlineState)
{
	onlineState_ = onlineState;
	setParameter("OnlineState", onlineState);
}

bool ListGatewaysRequest::getIsEnabled()const
{
	return isEnabled_;
}

void ListGatewaysRequest::setIsEnabled(bool isEnabled)
{
	isEnabled_ = isEnabled;
	setParameter("IsEnabled", isEnabled ? "true" : "false");
}

std::string ListGatewaysRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void ListGatewaysRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setParameter("FuzzyName", fuzzyName);
}

long ListGatewaysRequest::getOffset()const
{
	return offset_;
}

void ListGatewaysRequest::setOffset(long offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

bool ListGatewaysRequest::getAscending()const
{
	return ascending_;
}

void ListGatewaysRequest::setAscending(bool ascending)
{
	ascending_ = ascending;
	setParameter("Ascending", ascending ? "true" : "false");
}

long ListGatewaysRequest::getFreqBandPlanGroupId()const
{
	return freqBandPlanGroupId_;
}

void ListGatewaysRequest::setFreqBandPlanGroupId(long freqBandPlanGroupId)
{
	freqBandPlanGroupId_ = freqBandPlanGroupId;
	setParameter("FreqBandPlanGroupId", std::to_string(freqBandPlanGroupId));
}

std::string ListGatewaysRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListGatewaysRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListGatewaysRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListGatewaysRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListGatewaysRequest::getSortingField()const
{
	return sortingField_;
}

void ListGatewaysRequest::setSortingField(const std::string& sortingField)
{
	sortingField_ = sortingField;
	setParameter("SortingField", sortingField);
}

