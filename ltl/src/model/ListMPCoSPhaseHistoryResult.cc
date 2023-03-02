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

#include <alibabacloud/ltl/model/ListMPCoSPhaseHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

ListMPCoSPhaseHistoryResult::ListMPCoSPhaseHistoryResult() :
	ServiceResult()
{}

ListMPCoSPhaseHistoryResult::ListMPCoSPhaseHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMPCoSPhaseHistoryResult::~ListMPCoSPhaseHistoryResult()
{}

void ListMPCoSPhaseHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Num"].isNull())
		data_.num = std::stoi(dataNode["Num"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Size"].isNull())
		data_.size = std::stoi(dataNode["Size"].asString());
	auto allPageDataNode = dataNode["PageData"]["HistoryDataInfo"];
	for (auto dataNodePageDataHistoryDataInfo : allPageDataNode)
	{
		Data::HistoryDataInfo historyDataInfoObject;
		if(!dataNodePageDataHistoryDataInfo["ProductKey"].isNull())
			historyDataInfoObject.productKey = dataNodePageDataHistoryDataInfo["ProductKey"].asString();
		if(!dataNodePageDataHistoryDataInfo["PreviousHash"].isNull())
			historyDataInfoObject.previousHash = dataNodePageDataHistoryDataInfo["PreviousHash"].asString();
		if(!dataNodePageDataHistoryDataInfo["DataHash"].isNull())
			historyDataInfoObject.dataHash = dataNodePageDataHistoryDataInfo["DataHash"].asString();
		if(!dataNodePageDataHistoryDataInfo["DataSeq"].isNull())
			historyDataInfoObject.dataSeq = dataNodePageDataHistoryDataInfo["DataSeq"].asString();
		if(!dataNodePageDataHistoryDataInfo["DataValue"].isNull())
			historyDataInfoObject.dataValue = dataNodePageDataHistoryDataInfo["DataValue"].asString();
		if(!dataNodePageDataHistoryDataInfo["Timestamp"].isNull())
			historyDataInfoObject.timestamp = std::stol(dataNodePageDataHistoryDataInfo["Timestamp"].asString());
		if(!dataNodePageDataHistoryDataInfo["TransactionHash"].isNull())
			historyDataInfoObject.transactionHash = dataNodePageDataHistoryDataInfo["TransactionHash"].asString();
		if(!dataNodePageDataHistoryDataInfo["BlockHash"].isNull())
			historyDataInfoObject.blockHash = dataNodePageDataHistoryDataInfo["BlockHash"].asString();
		if(!dataNodePageDataHistoryDataInfo["BlockNumber"].isNull())
			historyDataInfoObject.blockNumber = std::stol(dataNodePageDataHistoryDataInfo["BlockNumber"].asString());
		if(!dataNodePageDataHistoryDataInfo["IotId"].isNull())
			historyDataInfoObject.iotId = dataNodePageDataHistoryDataInfo["IotId"].asString();
		data_.pageData.push_back(historyDataInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListMPCoSPhaseHistoryResult::getMessage()const
{
	return message_;
}

ListMPCoSPhaseHistoryResult::Data ListMPCoSPhaseHistoryResult::getData()const
{
	return data_;
}

int ListMPCoSPhaseHistoryResult::getCode()const
{
	return code_;
}

bool ListMPCoSPhaseHistoryResult::getSuccess()const
{
	return success_;
}

