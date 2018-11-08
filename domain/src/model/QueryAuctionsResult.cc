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

#include <alibabacloud/domain/model/QueryAuctionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryAuctionsResult::QueryAuctionsResult() :
	ServiceResult()
{}

QueryAuctionsResult::QueryAuctionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAuctionsResult::~QueryAuctionsResult()
{}

void QueryAuctionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["AuctionDetail"];
	for (auto value : allData)
	{
		AuctionDetail dataObject;
		if(!value["DomainName"].isNull())
			dataObject.domainName = value["DomainName"].asString();
		if(!value["AuctionId"].isNull())
			dataObject.auctionId = value["AuctionId"].asString();
		if(!value["DomainType"].isNull())
			dataObject.domainType = value["DomainType"].asString();
		if(!value["BookedPartner"].isNull())
			dataObject.bookedPartner = value["BookedPartner"].asString();
		if(!value["PartnerType"].isNull())
			dataObject.partnerType = value["PartnerType"].asString();
		if(!value["Currency"].isNull())
			dataObject.currency = value["Currency"].asString();
		if(!value["YourCurrentBid"].isNull())
			dataObject.yourCurrentBid = std::stof(value["YourCurrentBid"].asString());
		if(!value["YourMaxBid"].isNull())
			dataObject.yourMaxBid = std::stof(value["YourMaxBid"].asString());
		if(!value["HighBid"].isNull())
			dataObject.highBid = std::stof(value["HighBid"].asString());
		if(!value["NextValidBid"].isNull())
			dataObject.nextValidBid = std::stof(value["NextValidBid"].asString());
		if(!value["ReserveMet"].isNull())
			dataObject.reserveMet = value["ReserveMet"].asString() == "true";
		if(!value["TransferInPrice"].isNull())
			dataObject.transferInPrice = std::stof(value["TransferInPrice"].asString());
		if(!value["PayPrice"].isNull())
			dataObject.payPrice = std::stof(value["PayPrice"].asString());
		if(!value["HighBidder"].isNull())
			dataObject.highBidder = value["HighBidder"].asString();
		if(!value["Status"].isNull())
			dataObject.status = value["Status"].asString();
		if(!value["PayStatus"].isNull())
			dataObject.payStatus = value["PayStatus"].asString();
		if(!value["ProduceStatus"].isNull())
			dataObject.produceStatus = value["ProduceStatus"].asString();
		if(!value["AuctionEndTime"].isNull())
			dataObject.auctionEndTime = std::stol(value["AuctionEndTime"].asString());
		if(!value["BookEndTime"].isNull())
			dataObject.bookEndTime = std::stol(value["BookEndTime"].asString());
		if(!value["PayEndTime"].isNull())
			dataObject.payEndTime = std::stol(value["PayEndTime"].asString());
		if(!value["DeliveryTime"].isNull())
			dataObject.deliveryTime = std::stol(value["DeliveryTime"].asString());
		if(!value["FailCode"].isNull())
			dataObject.failCode = value["FailCode"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());

}

int QueryAuctionsResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryAuctionsResult::getPageSize()const
{
	return pageSize_;
}

int QueryAuctionsResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryAuctionsResult::AuctionDetail> QueryAuctionsResult::getData()const
{
	return data_;
}

int QueryAuctionsResult::getTotalItemNum()const
{
	return totalItemNum_;
}

