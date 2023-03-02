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

#include <alibabacloud/ltl/model/DescribeMPCoSPhaseInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ltl;
using namespace AlibabaCloud::Ltl::Model;

DescribeMPCoSPhaseInfoResult::DescribeMPCoSPhaseInfoResult() :
	ServiceResult()
{}

DescribeMPCoSPhaseInfoResult::DescribeMPCoSPhaseInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMPCoSPhaseInfoResult::~DescribeMPCoSPhaseInfoResult()
{}

void DescribeMPCoSPhaseInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PreviousHash"].isNull())
		data_.previousHash = dataNode["PreviousHash"].asString();
	if(!dataNode["ProductKey"].isNull())
		data_.productKey = dataNode["ProductKey"].asString();
	if(!dataNode["DataHash"].isNull())
		data_.dataHash = dataNode["DataHash"].asString();
	if(!dataNode["DataValue"].isNull())
		data_.dataValue = dataNode["DataValue"].asString();
	if(!dataNode["Timestamp"].isNull())
		data_.timestamp = std::stol(dataNode["Timestamp"].asString());
	if(!dataNode["TransactionHash"].isNull())
		data_.transactionHash = dataNode["TransactionHash"].asString();
	if(!dataNode["BlockHash"].isNull())
		data_.blockHash = dataNode["BlockHash"].asString();
	if(!dataNode["BlockNumber"].isNull())
		data_.blockNumber = std::stol(dataNode["BlockNumber"].asString());
	if(!dataNode["IotId"].isNull())
		data_.iotId = dataNode["IotId"].asString();
	auto allRelatedDataListNode = dataNode["RelatedDataList"]["RelatedData"];
	for (auto dataNodeRelatedDataListRelatedData : allRelatedDataListNode)
	{
		Data::RelatedData relatedDataObject;
		if(!dataNodeRelatedDataListRelatedData["RelatedDataKey"].isNull())
			relatedDataObject.relatedDataKey = dataNodeRelatedDataListRelatedData["RelatedDataKey"].asString();
		if(!dataNodeRelatedDataListRelatedData["RelatedPhaseDataHash"].isNull())
			relatedDataObject.relatedPhaseDataHash = dataNodeRelatedDataListRelatedData["RelatedPhaseDataHash"].asString();
		if(!dataNodeRelatedDataListRelatedData["RelatedDataSeq"].isNull())
			relatedDataObject.relatedDataSeq = dataNodeRelatedDataListRelatedData["RelatedDataSeq"].asString();
		if(!dataNodeRelatedDataListRelatedData["RelatedPhaseName"].isNull())
			relatedDataObject.relatedPhaseName = dataNodeRelatedDataListRelatedData["RelatedPhaseName"].asString();
		if(!dataNodeRelatedDataListRelatedData["RelatedPhaseId"].isNull())
			relatedDataObject.relatedPhaseId = dataNodeRelatedDataListRelatedData["RelatedPhaseId"].asString();
		data_.relatedDataList.push_back(relatedDataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMPCoSPhaseInfoResult::getMessage()const
{
	return message_;
}

DescribeMPCoSPhaseInfoResult::Data DescribeMPCoSPhaseInfoResult::getData()const
{
	return data_;
}

int DescribeMPCoSPhaseInfoResult::getCode()const
{
	return code_;
}

bool DescribeMPCoSPhaseInfoResult::getSuccess()const
{
	return success_;
}

