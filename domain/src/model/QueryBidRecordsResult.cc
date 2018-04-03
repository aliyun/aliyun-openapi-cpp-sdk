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

#include <alibabacloud/domain/model/QueryBidRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryBidRecordsResult::QueryBidRecordsResult() :
	ServiceResult()
{}

QueryBidRecordsResult::QueryBidRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryBidRecordsResult::~QueryBidRecordsResult()
{}

void QueryBidRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["BidRecord"];
	for (auto value : allData)
	{
		BidRecord dataObject;
		if(!value["DomainName"].isNull())
			dataObject.domainName = value["DomainName"].asString();
		if(!value["Currency"].isNull())
			dataObject.currency = value["Currency"].asString();
		if(!value["Bid"].isNull())
			dataObject.bid = std::stof(value["Bid"].asString());
		if(!value["BidTime"].isNull())
			dataObject.bidTime = std::stol(value["BidTime"].asString());
		if(!value["Bidder"].isNull())
			dataObject.bidder = value["Bidder"].asString();
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

int QueryBidRecordsResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryBidRecordsResult::getPageSize()const
{
	return pageSize_;
}

int QueryBidRecordsResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryBidRecordsResult::BidRecord> QueryBidRecordsResult::getData()const
{
	return data_;
}

int QueryBidRecordsResult::getTotalItemNum()const
{
	return totalItemNum_;
}

