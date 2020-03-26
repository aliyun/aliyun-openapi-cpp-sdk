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

#include <alibabacloud/trademark/model/DescirbeCombineTrademarkRequest.h>

using AlibabaCloud::Trademark::Model::DescirbeCombineTrademarkRequest;

DescirbeCombineTrademarkRequest::DescirbeCombineTrademarkRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "DescirbeCombineTrademark")
{
	setMethod(HttpRequest::Method::Post);
}

DescirbeCombineTrademarkRequest::~DescirbeCombineTrademarkRequest()
{}

std::string DescirbeCombineTrademarkRequest::getOwnerName()const
{
	return ownerName_;
}

void DescirbeCombineTrademarkRequest::setOwnerName(const std::string& ownerName)
{
	ownerName_ = ownerName;
	setParameter("OwnerName", ownerName);
}

std::string DescirbeCombineTrademarkRequest::getClassification()const
{
	return classification_;
}

void DescirbeCombineTrademarkRequest::setClassification(const std::string& classification)
{
	classification_ = classification;
	setParameter("Classification", classification);
}

std::string DescirbeCombineTrademarkRequest::getRegistrationNumber()const
{
	return registrationNumber_;
}

void DescirbeCombineTrademarkRequest::setRegistrationNumber(const std::string& registrationNumber)
{
	registrationNumber_ = registrationNumber;
	setParameter("RegistrationNumber", registrationNumber);
}

bool DescirbeCombineTrademarkRequest::getAccurateMatch()const
{
	return accurateMatch_;
}

void DescirbeCombineTrademarkRequest::setAccurateMatch(bool accurateMatch)
{
	accurateMatch_ = accurateMatch;
	setParameter("AccurateMatch", accurateMatch ? "true" : "false");
}

int DescirbeCombineTrademarkRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescirbeCombineTrademarkRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescirbeCombineTrademarkRequest::getProducts()const
{
	return products_;
}

void DescirbeCombineTrademarkRequest::setProducts(const std::string& products)
{
	products_ = products;
	setParameter("Products", products);
}

std::string DescirbeCombineTrademarkRequest::getSimilarGroups()const
{
	return similarGroups_;
}

void DescirbeCombineTrademarkRequest::setSimilarGroups(const std::string& similarGroups)
{
	similarGroups_ = similarGroups;
	setParameter("SimilarGroups", similarGroups);
}

std::string DescirbeCombineTrademarkRequest::getName()const
{
	return name_;
}

void DescirbeCombineTrademarkRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int DescirbeCombineTrademarkRequest::getPageSize()const
{
	return pageSize_;
}

void DescirbeCombineTrademarkRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

