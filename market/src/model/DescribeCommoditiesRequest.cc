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

#include <alibabacloud/market/model/DescribeCommoditiesRequest.h>

using AlibabaCloud::Market::Model::DescribeCommoditiesRequest;

DescribeCommoditiesRequest::DescribeCommoditiesRequest() :
	RpcServiceRequest("market", "2015-11-01", "DescribeCommodities")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeCommoditiesRequest::~DescribeCommoditiesRequest()
{}

std::string DescribeCommoditiesRequest::getCommodityGmtModifiedTo()const
{
	return commodityGmtModifiedTo_;
}

void DescribeCommoditiesRequest::setCommodityGmtModifiedTo(const std::string& commodityGmtModifiedTo)
{
	commodityGmtModifiedTo_ = commodityGmtModifiedTo;
	setParameter("CommodityGmtModifiedTo", commodityGmtModifiedTo);
}

std::string DescribeCommoditiesRequest::getCommodityGmtModifiedFrom()const
{
	return commodityGmtModifiedFrom_;
}

void DescribeCommoditiesRequest::setCommodityGmtModifiedFrom(const std::string& commodityGmtModifiedFrom)
{
	commodityGmtModifiedFrom_ = commodityGmtModifiedFrom;
	setParameter("CommodityGmtModifiedFrom", commodityGmtModifiedFrom);
}

std::string DescribeCommoditiesRequest::getCommodityId()const
{
	return commodityId_;
}

void DescribeCommoditiesRequest::setCommodityId(const std::string& commodityId)
{
	commodityId_ = commodityId;
	setParameter("CommodityId", commodityId);
}

std::string DescribeCommoditiesRequest::getCommodityGmtPublishFrom()const
{
	return commodityGmtPublishFrom_;
}

void DescribeCommoditiesRequest::setCommodityGmtPublishFrom(const std::string& commodityGmtPublishFrom)
{
	commodityGmtPublishFrom_ = commodityGmtPublishFrom;
	setParameter("CommodityGmtPublishFrom", commodityGmtPublishFrom);
}

std::string DescribeCommoditiesRequest::getCommodityStatuses()const
{
	return commodityStatuses_;
}

void DescribeCommoditiesRequest::setCommodityStatuses(const std::string& commodityStatuses)
{
	commodityStatuses_ = commodityStatuses;
	setParameter("CommodityStatuses", commodityStatuses);
}

int DescribeCommoditiesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCommoditiesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeCommoditiesRequest::getCommodityGmtCreatedFrom()const
{
	return commodityGmtCreatedFrom_;
}

void DescribeCommoditiesRequest::setCommodityGmtCreatedFrom(const std::string& commodityGmtCreatedFrom)
{
	commodityGmtCreatedFrom_ = commodityGmtCreatedFrom;
	setParameter("CommodityGmtCreatedFrom", commodityGmtCreatedFrom);
}

std::string DescribeCommoditiesRequest::getCommodityIds()const
{
	return commodityIds_;
}

void DescribeCommoditiesRequest::setCommodityIds(const std::string& commodityIds)
{
	commodityIds_ = commodityIds;
	setParameter("CommodityIds", commodityIds);
}

std::string DescribeCommoditiesRequest::getCommodityGmtCreatedTo()const
{
	return commodityGmtCreatedTo_;
}

void DescribeCommoditiesRequest::setCommodityGmtCreatedTo(const std::string& commodityGmtCreatedTo)
{
	commodityGmtCreatedTo_ = commodityGmtCreatedTo;
	setParameter("CommodityGmtCreatedTo", commodityGmtCreatedTo);
}

int DescribeCommoditiesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCommoditiesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCommoditiesRequest::getCommodityGmtPublishTo()const
{
	return commodityGmtPublishTo_;
}

void DescribeCommoditiesRequest::setCommodityGmtPublishTo(const std::string& commodityGmtPublishTo)
{
	commodityGmtPublishTo_ = commodityGmtPublishTo;
	setParameter("CommodityGmtPublishTo", commodityGmtPublishTo);
}

std::string DescribeCommoditiesRequest::getCommodityAuditStatuses()const
{
	return commodityAuditStatuses_;
}

void DescribeCommoditiesRequest::setCommodityAuditStatuses(const std::string& commodityAuditStatuses)
{
	commodityAuditStatuses_ = commodityAuditStatuses;
	setParameter("CommodityAuditStatuses", commodityAuditStatuses);
}

std::string DescribeCommoditiesRequest::getProperties()const
{
	return properties_;
}

void DescribeCommoditiesRequest::setProperties(const std::string& properties)
{
	properties_ = properties;
	setParameter("Properties", properties);
}

std::string DescribeCommoditiesRequest::getCommodityCategoryIds()const
{
	return commodityCategoryIds_;
}

void DescribeCommoditiesRequest::setCommodityCategoryIds(const std::string& commodityCategoryIds)
{
	commodityCategoryIds_ = commodityCategoryIds;
	setParameter("CommodityCategoryIds", commodityCategoryIds);
}

