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

#include <alibabacloud/cdrs/model/SearchObjectRequest.h>

using AlibabaCloud::CDRS::Model::SearchObjectRequest;

SearchObjectRequest::SearchObjectRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "SearchObject")
{
	setMethod(HttpRequest::Method::Post);
}

SearchObjectRequest::~SearchObjectRequest()
{}

std::string SearchObjectRequest::getShotTimeEnd()const
{
	return shotTimeEnd_;
}

void SearchObjectRequest::setShotTimeEnd(const std::string& shotTimeEnd)
{
	shotTimeEnd_ = shotTimeEnd;
	setBodyParameter("ShotTimeEnd", shotTimeEnd);
}

std::string SearchObjectRequest::getCorpId()const
{
	return corpId_;
}

void SearchObjectRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

int SearchObjectRequest::getPageNumber()const
{
	return pageNumber_;
}

void SearchObjectRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string SearchObjectRequest::getFeature()const
{
	return feature_;
}

void SearchObjectRequest::setFeature(const std::string& feature)
{
	feature_ = feature;
	setBodyParameter("Feature", feature);
}

std::string SearchObjectRequest::getVendor()const
{
	return vendor_;
}

void SearchObjectRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setBodyParameter("Vendor", vendor);
}

int SearchObjectRequest::getPageSize()const
{
	return pageSize_;
}

void SearchObjectRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string SearchObjectRequest::getImageContent()const
{
	return imageContent_;
}

void SearchObjectRequest::setImageContent(const std::string& imageContent)
{
	imageContent_ = imageContent;
	setBodyParameter("ImageContent", imageContent);
}

std::string SearchObjectRequest::getObjectType()const
{
	return objectType_;
}

void SearchObjectRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setBodyParameter("ObjectType", objectType);
}

std::string SearchObjectRequest::getDeviceList()const
{
	return deviceList_;
}

void SearchObjectRequest::setDeviceList(const std::string& deviceList)
{
	deviceList_ = deviceList;
	setBodyParameter("DeviceList", deviceList);
}

std::string SearchObjectRequest::getImageUrl()const
{
	return imageUrl_;
}

void SearchObjectRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setBodyParameter("ImageUrl", imageUrl);
}

std::string SearchObjectRequest::getAttributes()const
{
	return attributes_;
}

void SearchObjectRequest::setAttributes(const std::string& attributes)
{
	attributes_ = attributes;
	setBodyParameter("Attributes", attributes);
}

std::string SearchObjectRequest::getShotTimeStart()const
{
	return shotTimeStart_;
}

void SearchObjectRequest::setShotTimeStart(const std::string& shotTimeStart)
{
	shotTimeStart_ = shotTimeStart;
	setBodyParameter("ShotTimeStart", shotTimeStart);
}

