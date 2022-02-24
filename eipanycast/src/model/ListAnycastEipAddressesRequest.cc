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

#include <alibabacloud/eipanycast/model/ListAnycastEipAddressesRequest.h>

using AlibabaCloud::Eipanycast::Model::ListAnycastEipAddressesRequest;

ListAnycastEipAddressesRequest::ListAnycastEipAddressesRequest() :
	RpcServiceRequest("eipanycast", "2020-03-09", "ListAnycastEipAddresses")
{
	setMethod(HttpRequest::Method::Post);
}

ListAnycastEipAddressesRequest::~ListAnycastEipAddressesRequest()
{}

std::string ListAnycastEipAddressesRequest::getRegionId()const
{
	return regionId_;
}

void ListAnycastEipAddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListAnycastEipAddressesRequest::getNextToken()const
{
	return nextToken_;
}

void ListAnycastEipAddressesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string ListAnycastEipAddressesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void ListAnycastEipAddressesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string ListAnycastEipAddressesRequest::getBusinessStatus()const
{
	return businessStatus_;
}

void ListAnycastEipAddressesRequest::setBusinessStatus(const std::string& businessStatus)
{
	businessStatus_ = businessStatus;
	setParameter("BusinessStatus", businessStatus);
}

std::string ListAnycastEipAddressesRequest::getServiceLocation()const
{
	return serviceLocation_;
}

void ListAnycastEipAddressesRequest::setServiceLocation(const std::string& serviceLocation)
{
	serviceLocation_ = serviceLocation;
	setParameter("ServiceLocation", serviceLocation);
}

std::string ListAnycastEipAddressesRequest::getAnycastEipAddress()const
{
	return anycastEipAddress_;
}

void ListAnycastEipAddressesRequest::setAnycastEipAddress(const std::string& anycastEipAddress)
{
	anycastEipAddress_ = anycastEipAddress;
	setParameter("AnycastEipAddress", anycastEipAddress);
}

std::string ListAnycastEipAddressesRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void ListAnycastEipAddressesRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string ListAnycastEipAddressesRequest::getAnycastId()const
{
	return anycastId_;
}

void ListAnycastEipAddressesRequest::setAnycastId(const std::string& anycastId)
{
	anycastId_ = anycastId;
	setParameter("AnycastId", anycastId);
}

std::string ListAnycastEipAddressesRequest::getName()const
{
	return name_;
}

void ListAnycastEipAddressesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::vector<std::string> ListAnycastEipAddressesRequest::getBindInstanceIds()const
{
	return bindInstanceIds_;
}

void ListAnycastEipAddressesRequest::setBindInstanceIds(const std::vector<std::string>& bindInstanceIds)
{
	bindInstanceIds_ = bindInstanceIds;
	for(int dep1 = 0; dep1!= bindInstanceIds.size(); dep1++) {
		setParameter("BindInstanceIds."+ std::to_string(dep1), bindInstanceIds.at(dep1));
	}
}

int ListAnycastEipAddressesRequest::getMaxResults()const
{
	return maxResults_;
}

void ListAnycastEipAddressesRequest::setMaxResults(int maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

std::string ListAnycastEipAddressesRequest::getStatus()const
{
	return status_;
}

void ListAnycastEipAddressesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

