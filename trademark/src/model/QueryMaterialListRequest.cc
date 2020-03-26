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

#include <alibabacloud/trademark/model/QueryMaterialListRequest.h>

using AlibabaCloud::Trademark::Model::QueryMaterialListRequest;

QueryMaterialListRequest::QueryMaterialListRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryMaterialList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryMaterialListRequest::~QueryMaterialListRequest()
{}

int QueryMaterialListRequest::getType()const
{
	return type_;
}

void QueryMaterialListRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

int QueryMaterialListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryMaterialListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string QueryMaterialListRequest::getName()const
{
	return name_;
}

void QueryMaterialListRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int QueryMaterialListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryMaterialListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryMaterialListRequest::getCardNumber()const
{
	return cardNumber_;
}

void QueryMaterialListRequest::setCardNumber(const std::string& cardNumber)
{
	cardNumber_ = cardNumber;
	setParameter("CardNumber", cardNumber);
}

int QueryMaterialListRequest::getRegion()const
{
	return region_;
}

void QueryMaterialListRequest::setRegion(int region)
{
	region_ = region;
	setParameter("Region", std::to_string(region));
}

int QueryMaterialListRequest::getStatus()const
{
	return status_;
}

void QueryMaterialListRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

