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

#include <alibabacloud/mts/model/ListFpShotNotaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

ListFpShotNotaryResult::ListFpShotNotaryResult() :
	ServiceResult()
{}

ListFpShotNotaryResult::ListFpShotNotaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFpShotNotaryResult::~ListFpShotNotaryResult()
{}

void ListFpShotNotaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFpShotNotaryListNode = value["FpShotNotaryList"]["FpShotNotary"];
	for (auto valueFpShotNotaryListFpShotNotary : allFpShotNotaryListNode)
	{
		FpShotNotary fpShotNotaryListObject;
		if(!valueFpShotNotaryListFpShotNotary["TransactionId"].isNull())
			fpShotNotaryListObject.transactionId = valueFpShotNotaryListFpShotNotary["TransactionId"].asString();
		if(!valueFpShotNotaryListFpShotNotary["TxHash"].isNull())
			fpShotNotaryListObject.txHash = valueFpShotNotaryListFpShotNotary["TxHash"].asString();
		if(!valueFpShotNotaryListFpShotNotary["FpDBId"].isNull())
			fpShotNotaryListObject.fpDBId = valueFpShotNotaryListFpShotNotary["FpDBId"].asString();
		if(!valueFpShotNotaryListFpShotNotary["JobId"].isNull())
			fpShotNotaryListObject.jobId = valueFpShotNotaryListFpShotNotary["JobId"].asString();
		if(!valueFpShotNotaryListFpShotNotary["Detail"].isNull())
			fpShotNotaryListObject.detail = valueFpShotNotaryListFpShotNotary["Detail"].asString();
		if(!valueFpShotNotaryListFpShotNotary["CreationTime"].isNull())
			fpShotNotaryListObject.creationTime = valueFpShotNotaryListFpShotNotary["CreationTime"].asString();
		if(!valueFpShotNotaryListFpShotNotary["FinishTime"].isNull())
			fpShotNotaryListObject.finishTime = valueFpShotNotaryListFpShotNotary["FinishTime"].asString();
		fpShotNotaryList_.push_back(fpShotNotaryListObject);
	}
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::vector<ListFpShotNotaryResult::FpShotNotary> ListFpShotNotaryResult::getFpShotNotaryList()const
{
	return fpShotNotaryList_;
}

std::string ListFpShotNotaryResult::getNextPageToken()const
{
	return nextPageToken_;
}

