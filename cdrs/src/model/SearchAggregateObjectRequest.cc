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

#include <alibabacloud/cdrs/model/SearchAggregateObjectRequest.h>

using AlibabaCloud::CDRS::Model::SearchAggregateObjectRequest;

SearchAggregateObjectRequest::SearchAggregateObjectRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "SearchAggregateObject")
{
	setMethod(HttpRequest::Method::Post);
}

SearchAggregateObjectRequest::~SearchAggregateObjectRequest()
{}

std::string SearchAggregateObjectRequest::getShotTimeEnd()const
{
	return shotTimeEnd_;
}

void SearchAggregateObjectRequest::setShotTimeEnd(const std::string& shotTimeEnd)
{
	shotTimeEnd_ = shotTimeEnd;
	setBodyParameter("ShotTimeEnd", shotTimeEnd);
}

std::string SearchAggregateObjectRequest::getCorpId()const
{
	return corpId_;
}

void SearchAggregateObjectRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

int SearchAggregateObjectRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchAggregateObjectRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string SearchAggregateObjectRequest::getFeature()const
{
	return feature_;
}

void SearchAggregateObjectRequest::setFeature(const std::string& feature)
{
	feature_ = feature;
	setBodyParameter("Feature", feature);
}

std::string SearchAggregateObjectRequest::getVendor()const
{
	return vendor_;
}

void SearchAggregateObjectRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setBodyParameter("Vendor", vendor);
}

bool SearchAggregateObjectRequest::getRequireTotalCount()const
{
	return requireTotalCount_;
}

void SearchAggregateObjectRequest::setRequireTotalCount(bool requireTotalCount)
{
	requireTotalCount_ = requireTotalCount;
	setBodyParameter("RequireTotalCount", requireTotalCount ? "true" : "false");
}

int SearchAggregateObjectRequest::getPageSize()const
{
	return pageSize_;
}

void SearchAggregateObjectRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string SearchAggregateObjectRequest::getImageContent()const
{
	return imageContent_;
}

void SearchAggregateObjectRequest::setImageContent(const std::string& imageContent)
{
	imageContent_ = imageContent;
	setBodyParameter("ImageContent", imageContent);
}

std::string SearchAggregateObjectRequest::getObjectType()const
{
	return objectType_;
}

void SearchAggregateObjectRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setBodyParameter("ObjectType", objectType);
}

std::string SearchAggregateObjectRequest::getDeviceList()const
{
	return deviceList_;
}

void SearchAggregateObjectRequest::setDeviceList(const std::string& deviceList)
{
	deviceList_ = deviceList;
	setBodyParameter("DeviceList", deviceList);
}

std::string SearchAggregateObjectRequest::getImageUrl()const
{
	return imageUrl_;
}

void SearchAggregateObjectRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setBodyParameter("ImageUrl", imageUrl);
}

std::string SearchAggregateObjectRequest::getAttributes()const
{
	return attributes_;
}

void SearchAggregateObjectRequest::setAttributes(const std::string& attributes)
{
	attributes_ = attributes;
	setBodyParameter("Attributes", attributes);
}

std::string SearchAggregateObjectRequest::getShotTimeStart()const
{
	return shotTimeStart_;
}

void SearchAggregateObjectRequest::setShotTimeStart(const std::string& shotTimeStart)
{
	shotTimeStart_ = shotTimeStart;
	setBodyParameter("ShotTimeStart", shotTimeStart);
}

