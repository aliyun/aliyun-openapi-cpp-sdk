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

#include <alibabacloud/domain/model/BidDomainRequest.h>

using AlibabaCloud::Domain::Model::BidDomainRequest;

BidDomainRequest::BidDomainRequest() :
	RpcServiceRequest("domain", "2018-02-08", "BidDomain")
{
	setMethod(HttpRequest::Method::Post);
}

BidDomainRequest::~BidDomainRequest()
{}

std::string BidDomainRequest::getAuctionId()const
{
	return auctionId_;
}

void BidDomainRequest::setAuctionId(const std::string& auctionId)
{
	auctionId_ = auctionId;
	setBodyParameter("AuctionId", auctionId);
}

float BidDomainRequest::getMaxBid()const
{
	return maxBid_;
}

void BidDomainRequest::setMaxBid(float maxBid)
{
	maxBid_ = maxBid;
	setBodyParameter("MaxBid", std::to_string(maxBid));
}

std::string BidDomainRequest::getCurrency()const
{
	return currency_;
}

void BidDomainRequest::setCurrency(const std::string& currency)
{
	currency_ = currency;
	setBodyParameter("Currency", currency);
}

