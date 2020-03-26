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

#include <alibabacloud/trademark/model/CombineLoaRequest.h>

using AlibabaCloud::Trademark::Model::CombineLoaRequest;

CombineLoaRequest::CombineLoaRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "CombineLoa")
{
	setMethod(HttpRequest::Method::Post);
}

CombineLoaRequest::~CombineLoaRequest()
{}

std::string CombineLoaRequest::getMaterialName()const
{
	return materialName_;
}

void CombineLoaRequest::setMaterialName(const std::string& materialName)
{
	materialName_ = materialName;
	setParameter("MaterialName", materialName);
}

std::string CombineLoaRequest::getAddress()const
{
	return address_;
}

void CombineLoaRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string CombineLoaRequest::getMaterialId()const
{
	return materialId_;
}

void CombineLoaRequest::setMaterialId(const std::string& materialId)
{
	materialId_ = materialId;
	setParameter("MaterialId", materialId);
}

std::string CombineLoaRequest::getTrademarkName()const
{
	return trademarkName_;
}

void CombineLoaRequest::setTrademarkName(const std::string& trademarkName)
{
	trademarkName_ = trademarkName;
	setParameter("TrademarkName", trademarkName);
}

std::string CombineLoaRequest::getNationality()const
{
	return nationality_;
}

void CombineLoaRequest::setNationality(const std::string& nationality)
{
	nationality_ = nationality;
	setParameter("Nationality", nationality);
}

std::string CombineLoaRequest::getTmProduceType()const
{
	return tmProduceType_;
}

void CombineLoaRequest::setTmProduceType(const std::string& tmProduceType)
{
	tmProduceType_ = tmProduceType;
	setParameter("TmProduceType", tmProduceType);
}

