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

#include <alibabacloud/trademark/model/SearchTmOnsalesRequest.h>

using AlibabaCloud::Trademark::Model::SearchTmOnsalesRequest;

SearchTmOnsalesRequest::SearchTmOnsalesRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "SearchTmOnsales")
{
	setMethod(HttpRequest::Method::Post);
}

SearchTmOnsalesRequest::~SearchTmOnsalesRequest()
{}

std::string SearchTmOnsalesRequest::getTmName()const
{
	return tmName_;
}

void SearchTmOnsalesRequest::setTmName(const std::string& tmName)
{
	tmName_ = tmName;
	setParameter("TmName", tmName);
}

std::string SearchTmOnsalesRequest::getProductCode()const
{
	return productCode_;
}

void SearchTmOnsalesRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string SearchTmOnsalesRequest::getTopSearch()const
{
	return topSearch_;
}

void SearchTmOnsalesRequest::setTopSearch(const std::string& topSearch)
{
	topSearch_ = topSearch;
	setParameter("TopSearch", topSearch);
}

int SearchTmOnsalesRequest::getRegLeft()const
{
	return regLeft_;
}

void SearchTmOnsalesRequest::setRegLeft(int regLeft)
{
	regLeft_ = regLeft;
	setParameter("RegLeft", std::to_string(regLeft));
}

std::string SearchTmOnsalesRequest::getClassification()const
{
	return classification_;
}

void SearchTmOnsalesRequest::setClassification(const std::string& classification)
{
	classification_ = classification;
	setParameter("Classification", classification);
}

int SearchTmOnsalesRequest::getPageNum()const
{
	return pageNum_;
}

void SearchTmOnsalesRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

long SearchTmOnsalesRequest::getOrderPriceLeft()const
{
	return orderPriceLeft_;
}

void SearchTmOnsalesRequest::setOrderPriceLeft(long orderPriceLeft)
{
	orderPriceLeft_ = orderPriceLeft;
	setParameter("OrderPriceLeft", std::to_string(orderPriceLeft));
}

bool SearchTmOnsalesRequest::getQueryAll()const
{
	return queryAll_;
}

void SearchTmOnsalesRequest::setQueryAll(bool queryAll)
{
	queryAll_ = queryAll;
	setParameter("QueryAll", queryAll ? "true" : "false");
}

std::string SearchTmOnsalesRequest::getSortName()const
{
	return sortName_;
}

void SearchTmOnsalesRequest::setSortName(const std::string& sortName)
{
	sortName_ = sortName;
	setParameter("SortName", sortName);
}

long SearchTmOnsalesRequest::getOrderPriceRight()const
{
	return orderPriceRight_;
}

void SearchTmOnsalesRequest::setOrderPriceRight(long orderPriceRight)
{
	orderPriceRight_ = orderPriceRight;
	setParameter("OrderPriceRight", std::to_string(orderPriceRight));
}

int SearchTmOnsalesRequest::getPageSize()const
{
	return pageSize_;
}

void SearchTmOnsalesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string SearchTmOnsalesRequest::getSortOrder()const
{
	return sortOrder_;
}

void SearchTmOnsalesRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setParameter("SortOrder", sortOrder);
}

std::string SearchTmOnsalesRequest::getTag()const
{
	return tag_;
}

void SearchTmOnsalesRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setParameter("Tag", tag);
}

std::string SearchTmOnsalesRequest::getKeyword()const
{
	return keyword_;
}

void SearchTmOnsalesRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string SearchTmOnsalesRequest::getRegisterNumber()const
{
	return registerNumber_;
}

void SearchTmOnsalesRequest::setRegisterNumber(const std::string& registerNumber)
{
	registerNumber_ = registerNumber;
	setParameter("RegisterNumber", registerNumber);
}

int SearchTmOnsalesRequest::getRegRight()const
{
	return regRight_;
}

void SearchTmOnsalesRequest::setRegRight(int regRight)
{
	regRight_ = regRight;
	setParameter("RegRight", std::to_string(regRight));
}

