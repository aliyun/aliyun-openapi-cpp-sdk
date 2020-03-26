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

#include <alibabacloud/cloudwf/model/ListApPositionMapRequest.h>

using AlibabaCloud::Cloudwf::Model::ListApPositionMapRequest;

ListApPositionMapRequest::ListApPositionMapRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListApPositionMap")
{
	setMethod(HttpRequest::Method::Post);
}

ListApPositionMapRequest::~ListApPositionMapRequest()
{}

std::string ListApPositionMapRequest::getOrderCol()const
{
	return orderCol_;
}

void ListApPositionMapRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListApPositionMapRequest::getSearchName()const
{
	return searchName_;
}

void ListApPositionMapRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

int ListApPositionMapRequest::getLength()const
{
	return length_;
}

void ListApPositionMapRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListApPositionMapRequest::getOrderDir()const
{
	return orderDir_;
}

void ListApPositionMapRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

std::string ListApPositionMapRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApPositionMapRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListApPositionMapRequest::getTotalItem()const
{
	return totalItem_;
}

void ListApPositionMapRequest::setTotalItem(int totalItem)
{
	totalItem_ = totalItem;
	setParameter("TotalItem", std::to_string(totalItem));
}

int ListApPositionMapRequest::getMapType()const
{
	return mapType_;
}

void ListApPositionMapRequest::setMapType(int mapType)
{
	mapType_ = mapType;
	setParameter("MapType", std::to_string(mapType));
}

int ListApPositionMapRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListApPositionMapRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListApPositionMapRequest::getSearchApgroupName()const
{
	return searchApgroupName_;
}

void ListApPositionMapRequest::setSearchApgroupName(const std::string& searchApgroupName)
{
	searchApgroupName_ = searchApgroupName;
	setParameter("SearchApgroupName", searchApgroupName);
}

