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

#include <alibabacloud/lto/model/ListBizChainDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListBizChainDataResult::ListBizChainDataResult() :
	ServiceResult()
{}

ListBizChainDataResult::ListBizChainDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBizChainDataResult::~ListBizChainDataResult()
{}

void ListBizChainDataResult::parse(const std::string &payload)
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
	auto allPageDataNode = dataNode["PageData"]["BizChainDataInfo"];
	for (auto dataNodePageDataBizChainDataInfo : allPageDataNode)
	{
		Data::BizChainDataInfo bizChainDataInfoObject;
		if(!dataNodePageDataBizChainDataInfo["BlockNum"].isNull())
			bizChainDataInfoObject.blockNum = dataNodePageDataBizChainDataInfo["BlockNum"].asString();
		if(!dataNodePageDataBizChainDataInfo["ProductKey"].isNull())
			bizChainDataInfoObject.productKey = dataNodePageDataBizChainDataInfo["ProductKey"].asString();
		if(!dataNodePageDataBizChainDataInfo["MemberName"].isNull())
			bizChainDataInfoObject.memberName = dataNodePageDataBizChainDataInfo["MemberName"].asString();
		if(!dataNodePageDataBizChainDataInfo["DeviceName"].isNull())
			bizChainDataInfoObject.deviceName = dataNodePageDataBizChainDataInfo["DeviceName"].asString();
		if(!dataNodePageDataBizChainDataInfo["BlockHash"].isNull())
			bizChainDataInfoObject.blockHash = dataNodePageDataBizChainDataInfo["BlockHash"].asString();
		if(!dataNodePageDataBizChainDataInfo["TxHash"].isNull())
			bizChainDataInfoObject.txHash = dataNodePageDataBizChainDataInfo["TxHash"].asString();
		if(!dataNodePageDataBizChainDataInfo["Timestamp"].isNull())
			bizChainDataInfoObject.timestamp = std::stol(dataNodePageDataBizChainDataInfo["Timestamp"].asString());
		if(!dataNodePageDataBizChainDataInfo["IotDataDID"].isNull())
			bizChainDataInfoObject.iotDataDID = dataNodePageDataBizChainDataInfo["IotDataDID"].asString();
		data_.pageData.push_back(bizChainDataInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListBizChainDataResult::getMessage()const
{
	return message_;
}

int ListBizChainDataResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListBizChainDataResult::Data ListBizChainDataResult::getData()const
{
	return data_;
}

std::string ListBizChainDataResult::getCode()const
{
	return code_;
}

bool ListBizChainDataResult::getSuccess()const
{
	return success_;
}

