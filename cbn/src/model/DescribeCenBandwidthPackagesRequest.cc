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

#include <alibabacloud/cbn/model/DescribeCenBandwidthPackagesRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenBandwidthPackagesRequest;

DescribeCenBandwidthPackagesRequest::DescribeCenBandwidthPackagesRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeCenBandwidthPackages")
{}

DescribeCenBandwidthPackagesRequest::~DescribeCenBandwidthPackagesRequest()
{}

std::vector<DescribeCenBandwidthPackagesRequest::Filter> DescribeCenBandwidthPackagesRequest::getFilter()const
{
	return filter_;
}

void DescribeCenBandwidthPackagesRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	int i = 0;
	for(int i = 0; i!= filter.size(); i++)	{
		auto obj = filter.at(i);
		std::string str ="Filter."+ std::to_string(i);
		for(int i = 0; i!= obj.value.size(); i++)				setCoreParameter(str + ".Value."+ std::to_string(i), std::to_string(obj.value.at(i)));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

long DescribeCenBandwidthPackagesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCenBandwidthPackagesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeCenBandwidthPackagesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCenBandwidthPackagesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeCenBandwidthPackagesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCenBandwidthPackagesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeCenBandwidthPackagesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCenBandwidthPackagesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long DescribeCenBandwidthPackagesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCenBandwidthPackagesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeCenBandwidthPackagesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCenBandwidthPackagesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

bool DescribeCenBandwidthPackagesRequest::getIsOrKey()const
{
	return isOrKey_;
}

void DescribeCenBandwidthPackagesRequest::setIsOrKey(bool isOrKey)
{
	isOrKey_ = isOrKey;
	setCoreParameter("IsOrKey", isOrKey ? "true" : "false");
}

