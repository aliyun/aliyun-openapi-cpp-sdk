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

#include <alibabacloud/dyvmsapi/model/QueryCallInTransferRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

QueryCallInTransferRecordResult::QueryCallInTransferRecordResult() :
	ServiceResult()
{}

QueryCallInTransferRecordResult::QueryCallInTransferRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCallInTransferRecordResult::~QueryCallInTransferRecordResult()
{}

void QueryCallInTransferRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stol(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	auto allValuesNode = dataNode["Values"]["ValuesItem"];
	for (auto dataNodeValuesValuesItem : allValuesNode)
	{
		Data::ValuesItem valuesItemObject;
		if(!dataNodeValuesValuesItem["CallInCaller"].isNull())
			valuesItemObject.callInCaller = dataNodeValuesValuesItem["CallInCaller"].asString();
		if(!dataNodeValuesValuesItem["CallInCalled"].isNull())
			valuesItemObject.callInCalled = dataNodeValuesValuesItem["CallInCalled"].asString();
		if(!dataNodeValuesValuesItem["TransferCaller"].isNull())
			valuesItemObject.transferCaller = dataNodeValuesValuesItem["TransferCaller"].asString();
		if(!dataNodeValuesValuesItem["TransferCalled"].isNull())
			valuesItemObject.transferCalled = dataNodeValuesValuesItem["TransferCalled"].asString();
		if(!dataNodeValuesValuesItem["RecordUrl"].isNull())
			valuesItemObject.recordUrl = dataNodeValuesValuesItem["RecordUrl"].asString();
		if(!dataNodeValuesValuesItem["GmtCreate"].isNull())
			valuesItemObject.gmtCreate = std::stol(dataNodeValuesValuesItem["GmtCreate"].asString());
		data_.values.push_back(valuesItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryCallInTransferRecordResult::getMessage()const
{
	return message_;
}

QueryCallInTransferRecordResult::Data QueryCallInTransferRecordResult::getData()const
{
	return data_;
}

std::string QueryCallInTransferRecordResult::getCode()const
{
	return code_;
}

