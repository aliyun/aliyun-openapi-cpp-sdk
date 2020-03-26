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

#include <alibabacloud/trademark/model/QueryTrademarkPriceRequest.h>

using AlibabaCloud::Trademark::Model::QueryTrademarkPriceRequest;

QueryTrademarkPriceRequest::QueryTrademarkPriceRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryTrademarkPrice")
{
	setMethod(HttpRequest::Method::Post);
}

QueryTrademarkPriceRequest::~QueryTrademarkPriceRequest()
{}

std::string QueryTrademarkPriceRequest::getTmName()const
{
	return tmName_;
}

void QueryTrademarkPriceRequest::setTmName(const std::string& tmName)
{
	tmName_ = tmName;
	setParameter("TmName", tmName);
}

std::string QueryTrademarkPriceRequest::getOrderData()const
{
	return orderData_;
}

void QueryTrademarkPriceRequest::setOrderData(const std::string& orderData)
{
	orderData_ = orderData;
	setParameter("OrderData", orderData);
}

int QueryTrademarkPriceRequest::getType()const
{
	return type_;
}

void QueryTrademarkPriceRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

long QueryTrademarkPriceRequest::getUserId()const
{
	return userId_;
}

void QueryTrademarkPriceRequest::setUserId(long userId)
{
	userId_ = userId;
	setParameter("UserId", std::to_string(userId));
}

std::string QueryTrademarkPriceRequest::getTmIcon()const
{
	return tmIcon_;
}

void QueryTrademarkPriceRequest::setTmIcon(const std::string& tmIcon)
{
	tmIcon_ = tmIcon;
	setParameter("TmIcon", tmIcon);
}

