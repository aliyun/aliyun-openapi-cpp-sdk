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

#include <alibabacloud/elasticsearch/model/ListInstanceRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListInstanceRequest;

ListInstanceRequest::ListInstanceRequest() :
	RoaServiceRequest("elasticsearch", "2017-06-13")
{
	setResourcePath("/openapi/instances");
	setMethod(HttpRequest::Method::Get);
}

ListInstanceRequest::~ListInstanceRequest()
{}

std::string ListInstanceRequest::getDescription()const
{
	return description_;
}

void ListInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ListInstanceRequest::getInstanceCategory()const
{
	return instanceCategory_;
}

void ListInstanceRequest::setInstanceCategory(const std::string& instanceCategory)
{
	instanceCategory_ = instanceCategory;
	setParameter("InstanceCategory", instanceCategory);
}

std::string ListInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void ListInstanceRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListInstanceRequest::getTags()const
{
	return tags_;
}

void ListInstanceRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string ListInstanceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ListInstanceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string ListInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void ListInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ListInstanceRequest::getSize()const
{
	return size_;
}

void ListInstanceRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string ListInstanceRequest::getEsVersion()const
{
	return esVersion_;
}

void ListInstanceRequest::setEsVersion(const std::string& esVersion)
{
	esVersion_ = esVersion;
	setParameter("EsVersion", esVersion);
}

std::string ListInstanceRequest::getVpcId()const
{
	return vpcId_;
}

void ListInstanceRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string ListInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void ListInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int ListInstanceRequest::getPage()const
{
	return page_;
}

void ListInstanceRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

std::string ListInstanceRequest::getPaymentType()const
{
	return paymentType_;
}

void ListInstanceRequest::setPaymentType(const std::string& paymentType)
{
	paymentType_ = paymentType;
	setParameter("PaymentType", paymentType);
}

