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
	auto allDataNode = value["Data"]["AuctionDetail"];
	for (auto valueDataAuctionDetail : allDataNode)
	{
		AuctionDetail dataObject;
		if(!valueDataAuctionDetail["Status"].isNull())
			dataObject.status = valueDataAuctionDetail["Status"].asString();
		if(!valueDataAuctionDetail["ReserveMet"].isNull())
			dataObject.reserveMet = valueDataAuctionDetail["ReserveMet"].asString() == "true";
		if(!valueDataAuctionDetail["HighBid"].isNull())
			dataObject.highBid = std::stof(valueDataAuctionDetail["HighBid"].asString());
		if(!valueDataAuctionDetail["DeliveryTime"].isNull())
			dataObject.deliveryTime = std::stol(valueDataAuctionDetail["DeliveryTime"].asString());
		if(!valueDataAuctionDetail["TransferInPrice"].isNull())
			dataObject.transferInPrice = std::stof(valueDataAuctionDetail["TransferInPrice"].asString());
		if(!valueDataAuctionDetail["NextValidBid"].isNull())
			dataObject.nextValidBid = std::stof(valueDataAuctionDetail["NextValidBid"].asString());
		if(!valueDataAuctionDetail["ProduceStatus"].isNull())
			dataObject.produceStatus = valueDataAuctionDetail["ProduceStatus"].asString();
		if(!valueDataAuctionDetail["HighBidder"].isNull())
			dataObject.highBidder = valueDataAuctionDetail["HighBidder"].asString();
		if(!valueDataAuctionDetail["BookedPartner"].isNull())
			dataObject.bookedPartner = valueDataAuctionDetail["BookedPartner"].asString();
		if(!valueDataAuctionDetail["Currency"].isNull())
			dataObject.currency = valueDataAuctionDetail["Currency"].asString();
		if(!valueDataAuctionDetail["DomainName"].isNull())
			dataObject.domainName = valueDataAuctionDetail["DomainName"].asString();
		if(!valueDataAuctionDetail["YourCurrentBid"].isNull())
			dataObject.yourCurrentBid = std::stof(valueDataAuctionDetail["YourCurrentBid"].asString());
		if(!valueDataAuctionDetail["FailCode"].isNull())
			dataObject.failCode = valueDataAuctionDetail["FailCode"].asString();
		if(!valueDataAuctionDetail["AuctionEndTime"].isNull())
			dataObject.auctionEndTime = std::stol(valueDataAuctionDetail["AuctionEndTime"].asString());
		if(!valueDataAuctionDetail["BookEndTime"].isNull())
			dataObject.bookEndTime = std::stol(valueDataAuctionDetail["BookEndTime"].asString());
		if(!valueDataAuctionDetail["PayEndTime"].isNull())
			dataObject.payEndTime = std::stol(valueDataAuctionDetail["PayEndTime"].asString());
		if(!valueDataAuctionDetail["PayStatus"].isNull())
			dataObject.payStatus = valueDataAuctionDetail["PayStatus"].asString();
		if(!valueDataAuctionDetail["YourMaxBid"].isNull())
			dataObject.yourMaxBid = std::stof(valueDataAuctionDetail["YourMaxBid"].asString());
		if(!valueDataAuctionDetail["PayPrice"].isNull())
			dataObject.payPrice = std::stof(valueDataAuctionDetail["PayPrice"].asString());
		if(!valueDataAuctionDetail["AuctionId"].isNull())
			dataObject.auctionId = valueDataAuctionDetail["AuctionId"].asString();
		if(!valueDataAuctionDetail["PartnerType"].isNull())
			dataObject.partnerType = valueDataAuctionDetail["PartnerType"].asString();
		if(!valueDataAuctionDetail["DomainType"].isNull())
			dataObject.domainType = valueDataAuctionDetail["DomainType"].asString();
		if(!valueDataAuctionDetail["ReserveMin"].isNull())
			dataObject.reserveMin = std::stol(valueDataAuctionDetail["ReserveMin"].asString());
		if(!valueDataAuctionDetail["ReserveMax"].isNull())
			dataObject.reserveMax = std::stol(valueDataAuctionDetail["ReserveMax"].asString());
		data_.push_back(dataObject);
	}
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());

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

