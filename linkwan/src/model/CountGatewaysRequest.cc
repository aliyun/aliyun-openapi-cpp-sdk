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

#include <alibabacloud/linkwan/model/CountGatewaysRequest.h>

using AlibabaCloud::LinkWAN::Model::CountGatewaysRequest;

CountGatewaysRequest::CountGatewaysRequest() :
	RpcServiceRequest("linkwan", "2019-03-01", "CountGateways")
{
	setMethod(HttpRequest::Method::Post);
}

CountGatewaysRequest::~CountGatewaysRequest()
{}

std::string CountGatewaysRequest::getRealTenantId()const
{
	return realTenantId_;
}

void CountGatewaysRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string CountGatewaysRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void CountGatewaysRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string CountGatewaysRequest::getFuzzyGwEui()const
{
	return fuzzyGwEui_;
}

void CountGatewaysRequest::setFuzzyGwEui(const std::string& fuzzyGwEui)
{
	fuzzyGwEui_ = fuzzyGwEui;
	setParameter("FuzzyGwEui", fuzzyGwEui);
}

std::string CountGatewaysRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CountGatewaysRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string CountGatewaysRequest::getFuzzyCity()const
{
	return fuzzyCity_;
}

void CountGatewaysRequest::setFuzzyCity(const std::string& fuzzyCity)
{
	fuzzyCity_ = fuzzyCity;
	setParameter("FuzzyCity", fuzzyCity);
}

std::string CountGatewaysRequest::getOnlineState()const
{
	return onlineState_;
}

void CountGatewaysRequest::setOnlineState(const std::string& onlineState)
{
	onlineState_ = onlineState;
	setParameter("OnlineState", onlineState);
}

bool CountGatewaysRequest::getIsEnabled()const
{
	return isEnabled_;
}

void CountGatewaysRequest::setIsEnabled(bool isEnabled)
{
	isEnabled_ = isEnabled;
	setParameter("IsEnabled", isEnabled ? "true" : "false");
}

std::string CountGatewaysRequest::getFuzzyName()const
{
	return fuzzyName_;
}

void CountGatewaysRequest::setFuzzyName(const std::string& fuzzyName)
{
	fuzzyName_ = fuzzyName;
	setParameter("FuzzyName", fuzzyName);
}

long CountGatewaysRequest::getFreqBandPlanGroupId()const
{
	return freqBandPlanGroupId_;
}

void CountGatewaysRequest::setFreqBandPlanGroupId(long freqBandPlanGroupId)
{
	freqBandPlanGroupId_ = freqBandPlanGroupId;
	setParameter("FreqBandPlanGroupId", std::to_string(freqBandPlanGroupId));
}

std::string CountGatewaysRequest::getApiProduct()const
{
	return apiProduct_;
}

void CountGatewaysRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string CountGatewaysRequest::getApiRevision()const
{
	return apiRevision_;
}

void CountGatewaysRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

