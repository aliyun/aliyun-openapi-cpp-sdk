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

#include <alibabacloud/cas/model/DescribeSignatureTradeListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeSignatureTradeListResult::DescribeSignatureTradeListResult() :
	ServiceResult()
{}

DescribeSignatureTradeListResult::DescribeSignatureTradeListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSignatureTradeListResult::~DescribeSignatureTradeListResult()
{}

void DescribeSignatureTradeListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTradeListNode = value["TradeList"]["trade"];
	for (auto valueTradeListtrade : allTradeListNode)
	{
		Trade tradeListObject;
		if(!valueTradeListtrade["Id"].isNull())
			tradeListObject.id = std::stol(valueTradeListtrade["Id"].asString());
		if(!valueTradeListtrade["DocTitle"].isNull())
			tradeListObject.docTitle = valueTradeListtrade["DocTitle"].asString();
		if(!valueTradeListtrade["TransactionId"].isNull())
			tradeListObject.transactionId = valueTradeListtrade["TransactionId"].asString();
		if(!valueTradeListtrade["PeopleName"].isNull())
			tradeListObject.peopleName = valueTradeListtrade["PeopleName"].asString();
		if(!valueTradeListtrade["CreateTime"].isNull())
			tradeListObject.createTime = std::stol(valueTradeListtrade["CreateTime"].asString());
		if(!valueTradeListtrade["SignStatus"].isNull())
			tradeListObject.signStatus = std::stoi(valueTradeListtrade["SignStatus"].asString());
		if(!valueTradeListtrade["SignMode"].isNull())
			tradeListObject.signMode = std::stoi(valueTradeListtrade["SignMode"].asString());
		if(!valueTradeListtrade["DocId"].isNull())
			tradeListObject.docId = valueTradeListtrade["DocId"].asString();
		if(!valueTradeListtrade["PeopleId"].isNull())
			tradeListObject.peopleId = valueTradeListtrade["PeopleId"].asString();
		tradeList_.push_back(tradeListObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["ShowSize"].isNull())
		showSize_ = std::stoi(value["ShowSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSignatureTradeListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSignatureTradeListResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeSignatureTradeListResult::getShowSize()const
{
	return showSize_;
}

std::vector<DescribeSignatureTradeListResult::Trade> DescribeSignatureTradeListResult::getTradeList()const
{
	return tradeList_;
}

