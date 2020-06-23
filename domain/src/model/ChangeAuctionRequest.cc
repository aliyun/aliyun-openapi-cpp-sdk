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

#include <alibabacloud/domain/model/ChangeAuctionRequest.h>

using AlibabaCloud::Domain::Model::ChangeAuctionRequest;

ChangeAuctionRequest::ChangeAuctionRequest() :
	RpcServiceRequest("domain", "2018-02-08", "ChangeAuction")
{
	setMethod(HttpRequest::Method::Post);
}

ChangeAuctionRequest::~ChangeAuctionRequest()
{}

std::vector<ChangeAuctionRequest::AuctionList> ChangeAuctionRequest::getAuctionList()const
{
	return auctionList_;
}

void ChangeAuctionRequest::setAuctionList(const std::vector<AuctionList>& auctionList)
{
	auctionList_ = auctionList;
	for(int dep1 = 0; dep1!= auctionList.size(); dep1++) {
		auto auctionListObj = auctionList.at(dep1);
		std::string auctionListObjStr = "AuctionList." + std::to_string(dep1 + 1);
		setParameter(auctionListObjStr + ".Winner", auctionListObj.winner);
		setParameter(auctionListObjStr + ".ReserveRange", auctionListObj.reserveRange);
		setParameter(auctionListObjStr + ".DomainName", auctionListObj.domainName);
		setParameter(auctionListObjStr + ".EndTime", auctionListObj.endTime);
		setParameter(auctionListObjStr + ".TimeLeft", std::to_string(auctionListObj.timeLeft));
		setParameter(auctionListObjStr + ".IsReserve", std::to_string(auctionListObj.isReserve));
		for(int dep2 = 0; dep2!= auctionListObj.bidRecords.size(); dep2++) {
			auto bidRecordsObj = auctionListObj.bidRecords.at(dep2);
			std::string bidRecordsObjStr = auctionListObjStr + "BidRecords." + std::to_string(dep2 + 1);
			setParameter(bidRecordsObjStr + ".CreateTime", bidRecordsObj.createTime);
			setParameter(bidRecordsObjStr + ".Price", std::to_string(bidRecordsObj.price));
			setParameter(bidRecordsObjStr + ".UserId", bidRecordsObj.userId);
		}
		setParameter(auctionListObjStr + ".WinnerPrice", std::to_string(auctionListObj.winnerPrice));
		setParameter(auctionListObjStr + ".Status", auctionListObj.status);
		setParameter(auctionListObjStr + ".ReservePrice", std::to_string(auctionListObj.reservePrice));
	}
}

