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

#include <alibabacloud/cloudwf/model/ListGroupApBriefConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::ListGroupApBriefConfigRequest;

ListGroupApBriefConfigRequest::ListGroupApBriefConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ListGroupApBriefConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ListGroupApBriefConfigRequest::~ListGroupApBriefConfigRequest()
{}

std::string ListGroupApBriefConfigRequest::getOrderCol()const
{
	return orderCol_;
}

void ListGroupApBriefConfigRequest::setOrderCol(const std::string& orderCol)
{
	orderCol_ = orderCol;
	setParameter("OrderCol", orderCol);
}

std::string ListGroupApBriefConfigRequest::getSearchName()const
{
	return searchName_;
}

void ListGroupApBriefConfigRequest::setSearchName(const std::string& searchName)
{
	searchName_ = searchName;
	setParameter("SearchName", searchName);
}

long ListGroupApBriefConfigRequest::getApgroupId()const
{
	return apgroupId_;
}

void ListGroupApBriefConfigRequest::setApgroupId(long apgroupId)
{
	apgroupId_ = apgroupId;
	setParameter("ApgroupId", std::to_string(apgroupId));
}

int ListGroupApBriefConfigRequest::getLength()const
{
	return length_;
}

void ListGroupApBriefConfigRequest::setLength(int length)
{
	length_ = length;
	setParameter("Length", std::to_string(length));
}

std::string ListGroupApBriefConfigRequest::getOrderDir()const
{
	return orderDir_;
}

void ListGroupApBriefConfigRequest::setOrderDir(const std::string& orderDir)
{
	orderDir_ = orderDir;
	setParameter("OrderDir", orderDir);
}

std::string ListGroupApBriefConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListGroupApBriefConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int ListGroupApBriefConfigRequest::getColCnt()const
{
	return colCnt_;
}

void ListGroupApBriefConfigRequest::setColCnt(int colCnt)
{
	colCnt_ = colCnt;
	setParameter("ColCnt", std::to_string(colCnt));
}

int ListGroupApBriefConfigRequest::getPageIndex()const
{
	return pageIndex_;
}

void ListGroupApBriefConfigRequest::setPageIndex(int pageIndex)
{
	pageIndex_ = pageIndex;
	setParameter("PageIndex", std::to_string(pageIndex));
}

std::string ListGroupApBriefConfigRequest::getSearchMac()const
{
	return searchMac_;
}

void ListGroupApBriefConfigRequest::setSearchMac(const std::string& searchMac)
{
	searchMac_ = searchMac;
	setParameter("SearchMac", searchMac);
}

