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

#include <alibabacloud/cloudwf/model/ListApAssetCanBeAddedRequest.h>

using AlibabaCloud::Cloudwf::Model::ListApAssetCanBeAddedRequest;

ListApAssetCanBeAddedRequest::ListApAssetCanBeAddedRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListApAssetCanBeAdded")
{}

ListApAssetCanBeAddedRequest::~ListApAssetCanBeAddedRequest()
{}

std::string ListApAssetCanBeAddedRequest::getSearchName()const
{
	return searchName_;
}

void ListApAssetCanBeAddedRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setCoreParameter("SearchName", searchName);
}

long ListApAssetCanBeAddedRequest::getApgroupId()const
{
	return apgroupId_;
}

void ListApAssetCanBeAddedRequest::setApgroupId(long apgroupId)
{
	apgroupId_ = apgroupId;
	setCoreParameter("ApgroupId", std::to_string(apgroupId));
}

int ListApAssetCanBeAddedRequest::getLength()const
{
	return length_;
}

void ListApAssetCanBeAddedRequest::setLength(int length)
{
	length_ = length;
	setCoreParameter("Length", std::to_string(length));
}

int ListApAssetCanBeAddedRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListApAssetCanBeAddedRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setCoreParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListApAssetCanBeAddedRequest::getSearchMac()const
{
	return searchMac_;
}

void ListApAssetCanBeAddedRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setCoreParameter("SearchMac", searchMac);
}

std::string ListApAssetCanBeAddedRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListApAssetCanBeAddedRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListApAssetCanBeAddedRequest::getSearchModel()const
{
	return searchModel_;
}

void ListApAssetCanBeAddedRequest::setSearchModel(const std::string& searchModel)
{
	searchModel_ = searchModel;
	setCoreParameter("SearchModel", searchModel);
}

