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

#include <alibabacloud/domain/model/QueryAuctionDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryAuctionDetailResult::QueryAuctionDetailResult() :
	ServiceResult()
{}

QueryAuctionDetailResult::QueryAuctionDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAuctionDetailResult::~QueryAuctionDetailResult()
{}

void QueryAuctionDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["AuctionId"].isNull())
		auctionId_ = value["AuctionId"].asString();
	if(!value["DomainType"].isNull())
		domainType_ = value["DomainType"].asString();
	if(!value["BookedPartner"].isNull())
		bookedPartner_ = value["BookedPartner"].asString();
	if(!value["PartnerType"].isNull())
		partnerType_ = value["PartnerType"].asString();
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();
	if(!value["YourCurrentBid"].isNull())
		yourCurrentBid_ = std::stof(value["YourCurrentBid"].asString());
	if(!value["YourMaxBid"].isNull())
		yourMaxBid_ = std::stof(value["YourMaxBid"].asString());
	if(!value["HighBid"].isNull())
		highBid_ = std::stof(value["HighBid"].asString());
	if(!value["NextValidBid"].isNull())
		nextValidBid_ = std::stof(value["NextValidBid"].asString());
	if(!value["ReserveMet"].isNull())
		reserveMet_ = value["ReserveMet"].asString() == "true";
	if(!value["TransferInPrice"].isNull())
		transferInPrice_ = std::stof(value["TransferInPrice"].asString());
	if(!value["PayPrice"].isNull())
		payPrice_ = std::stof(value["PayPrice"].asString());
	if(!value["HighBidder"].isNull())
		highBidder_ = value["HighBidder"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["PayStatus"].isNull())
		payStatus_ = value["PayStatus"].asString();
	if(!value["ProduceStatus"].isNull())
		produceStatus_ = value["ProduceStatus"].asString();
	if(!value["AuctionEndTime"].isNull())
		auctionEndTime_ = std::stol(value["AuctionEndTime"].asString());
	if(!value["BookEndTime"].isNull())
		bookEndTime_ = std::stol(value["BookEndTime"].asString());
	if(!value["PayEndTime"].isNull())
		payEndTime_ = std::stol(value["PayEndTime"].asString());
	if(!value["DeliveryTime"].isNull())
		deliveryTime_ = std::stol(value["DeliveryTime"].asString());
	if(!value["FailCode"].isNull())
		failCode_ = value["FailCode"].asString();

}

std::string QueryAuctionDetailResult::getPartnerType()const
{
	return partnerType_;
}

std::string QueryAuctionDetailResult::getStatus()const
{
	return status_;
}

float QueryAuctionDetailResult::getTransferInPrice()const
{
	return transferInPrice_;
}

std::string QueryAuctionDetailResult::getPayStatus()const
{
	return payStatus_;
}

std::string QueryAuctionDetailResult::getDomainName()const
{
	return domainName_;
}

std::string QueryAuctionDetailResult::getHighBidder()const
{
	return highBidder_;
}

std::string QueryAuctionDetailResult::getFailCode()const
{
	return failCode_;
}

float QueryAuctionDetailResult::getYourCurrentBid()const
{
	return yourCurrentBid_;
}

float QueryAuctionDetailResult::getPayPrice()const
{
	return payPrice_;
}

long QueryAuctionDetailResult::getDeliveryTime()const
{
	return deliveryTime_;
}

float QueryAuctionDetailResult::getHighBid()const
{
	return highBid_;
}

std::string QueryAuctionDetailResult::getDomainType()const
{
	return domainType_;
}

std::string QueryAuctionDetailResult::getBookedPartner()const
{
	return bookedPartner_;
}

std::string QueryAuctionDetailResult::getCurrency()const
{
	return currency_;
}

bool QueryAuctionDetailResult::getReserveMet()const
{
	return reserveMet_;
}

std::string QueryAuctionDetailResult::getProduceStatus()const
{
	return produceStatus_;
}

float QueryAuctionDetailResult::getNextValidBid()const
{
	return nextValidBid_;
}

float QueryAuctionDetailResult::getYourMaxBid()const
{
	return yourMaxBid_;
}

long QueryAuctionDetailResult::getAuctionEndTime()const
{
	return auctionEndTime_;
}

long QueryAuctionDetailResult::getBookEndTime()const
{
	return bookEndTime_;
}

long QueryAuctionDetailResult::getPayEndTime()const
{
	return payEndTime_;
}

std::string QueryAuctionDetailResult::getAuctionId()const
{
	return auctionId_;
}

