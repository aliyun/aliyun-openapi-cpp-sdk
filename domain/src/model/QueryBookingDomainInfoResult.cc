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

#include <alibabacloud/domain/model/QueryBookingDomainInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryBookingDomainInfoResult::QueryBookingDomainInfoResult() :
	ServiceResult()
{}

QueryBookingDomainInfoResult::QueryBookingDomainInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryBookingDomainInfoResult::~QueryBookingDomainInfoResult()
{}

void QueryBookingDomainInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AuctionId"].isNull())
		auctionId_ = std::stoi(value["AuctionId"].asString());
	if(!value["PartnerType"].isNull())
		partnerType_ = value["PartnerType"].asString();
	if(!value["MaxBid"].isNull())
		maxBid_ = std::stof(value["MaxBid"].asString());
	if(!value["TransferInPrice"].isNull())
		transferInPrice_ = std::stof(value["TransferInPrice"].asString());
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();
	if(!value["BookEndTime"].isNull())
		bookEndTime_ = std::stol(value["BookEndTime"].asString());

}

std::string QueryBookingDomainInfoResult::getPartnerType()const
{
	return partnerType_;
}

float QueryBookingDomainInfoResult::getTransferInPrice()const
{
	return transferInPrice_;
}

std::string QueryBookingDomainInfoResult::getCurrency()const
{
	return currency_;
}

float QueryBookingDomainInfoResult::getMaxBid()const
{
	return maxBid_;
}

long QueryBookingDomainInfoResult::getBookEndTime()const
{
	return bookEndTime_;
}

int QueryBookingDomainInfoResult::getAuctionId()const
{
	return auctionId_;
}

