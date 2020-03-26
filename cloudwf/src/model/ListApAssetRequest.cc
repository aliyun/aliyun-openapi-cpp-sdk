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

#include <alibabacloud/cloudwf/model/ListApAssetRequest.h>

using AlibabaCloud::Cloudwf::Model::ListApAssetRequest;

ListApAssetRequest::ListApAssetRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListApAsset")
{
	setMethod(HttpRequest::Method::Post);
}

ListApAssetRequest::~ListApAssetRequest()
{}

std::string ListApAssetRequest::getOrderCol()const
{
	return orderCol_;
}

void ListApAssetRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListApAssetRequest::getSearchName()const
{
	return searchName_;
}

void ListApAssetRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

int ListApAssetRequest::getLength()const
{
	return length_;
}

void ListApAssetRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListApAssetRequest::getOrderDir()const
{
	return orderDir_;
}

void ListApAssetRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

std::string ListApAssetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApAssetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListApAssetRequest::getSearchSerialNo()const
{
	return searchSerialNo_;
}

void ListApAssetRequest::setSearchSerialNo(const std::string& searchSerialNo)
{
	searchSerialNo_ = searchSerialNo;
	setParameter("SearchSerialNo", searchSerialNo);
}

int ListApAssetRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListApAssetRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListApAssetRequest::getSearchMac()const
{
	return searchMac_;
}

void ListApAssetRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setParameter("SearchMac", searchMac);
}

std::string ListApAssetRequest::getSearchModel()const
{
	return searchModel_;
}

void ListApAssetRequest::setSearchModel(const std::string& searchModel)
{
	searchModel_ = searchModel;
	setParameter("SearchModel", searchModel);
}

