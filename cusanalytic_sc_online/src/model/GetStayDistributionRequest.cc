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

#include <alibabacloud/cusanalytic_sc_online/model/GetStayDistributionRequest.h>

using AlibabaCloud::Cusanalytic_sc_online::Model::GetStayDistributionRequest;

GetStayDistributionRequest::GetStayDistributionRequest() :
	RpcServiceRequest("cusanalytic_sc_online", "2019-05-24", "GetStayDistribution")
{
	setMethod(HttpRequest::Method::Post);
}

GetStayDistributionRequest::~GetStayDistributionRequest()
{}

long GetStayDistributionRequest::getSummaryTime()const
{
	return summaryTime_;
}

void GetStayDistributionRequest::setSummaryTime(long summaryTime)
{
	summaryTime_ = summaryTime;
	setBodyParameter("SummaryTime", std::to_string(summaryTime));
}

long GetStayDistributionRequest::getStoreId()const
{
	return storeId_;
}

void GetStayDistributionRequest::setStoreId(long storeId)
{
	storeId_ = storeId;
	setBodyParameter("StoreId", std::to_string(storeId));
}

std::string GetStayDistributionRequest::getSummaryType()const
{
	return summaryType_;
}

void GetStayDistributionRequest::setSummaryType(const std::string& summaryType)
{
	summaryType_ = summaryType;
	setBodyParameter("SummaryType", summaryType);
}

long GetStayDistributionRequest::getLocationId()const
{
	return locationId_;
}

void GetStayDistributionRequest::setLocationId(long locationId)
{
	locationId_ = locationId;
	setBodyParameter("LocationId", std::to_string(locationId));
}

