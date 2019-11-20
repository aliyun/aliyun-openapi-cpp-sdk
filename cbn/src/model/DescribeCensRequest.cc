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

#include <alibabacloud/cbn/model/DescribeCensRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCensRequest;

DescribeCensRequest::DescribeCensRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeCens")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCensRequest::~DescribeCensRequest()
{}

long DescribeCensRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCensRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeCensRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCensRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeCensRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCensRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeCensRequest::Tag> DescribeCensRequest::getTag()const
{
	return tag_;
}

void DescribeCensRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeCensRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCensRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCensRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCensRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeCensRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCensRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<DescribeCensRequest::Filter> DescribeCensRequest::getFilter()const
{
	return filter_;
}

void DescribeCensRequest::setFilter(const std::vector<Filter>& filter)
{
	filter_ = filter;
	for(int dep1 = 0; dep1!= filter.size(); dep1++) {
		auto filterObj = filter.at(dep1);
		std::string filterObjStr = "Filter." + std::to_string(dep1);
		for(int dep2 = 0; dep2!= filterObj.value.size(); dep2++) {
			setCoreParameter(filterObjStr + ".Value."+ std::to_string(dep2), filterObj.value.at(dep2));
		}
		setCoreParameter(filterObjStr + ".Key", filterObj.key);
	}
}

