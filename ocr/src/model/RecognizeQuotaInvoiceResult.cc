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

#include <alibabacloud/ocr/model/RecognizeQuotaInvoiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeQuotaInvoiceResult::RecognizeQuotaInvoiceResult() :
	ServiceResult()
{}

RecognizeQuotaInvoiceResult::RecognizeQuotaInvoiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeQuotaInvoiceResult::~RecognizeQuotaInvoiceResult()
{}

void RecognizeQuotaInvoiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Angle"].isNull())
		data_.angle = std::stol(dataNode["Angle"].asString());
	if(!dataNode["Height"].isNull())
		data_.height = std::stol(dataNode["Height"].asString());
	if(!dataNode["Width"].isNull())
		data_.width = std::stol(dataNode["Width"].asString());
	if(!dataNode["OrgHeight"].isNull())
		data_.orgHeight = std::stol(dataNode["OrgHeight"].asString());
	if(!dataNode["OrgWidth"].isNull())
		data_.orgWidth = std::stol(dataNode["OrgWidth"].asString());
	auto allKeyValueInfosNode = dataNode["KeyValueInfos"]["keyValueInfosItem"];
	for (auto dataNodeKeyValueInfoskeyValueInfosItem : allKeyValueInfosNode)
	{
		Data::KeyValueInfosItem keyValueInfosItemObject;
		if(!dataNodeKeyValueInfoskeyValueInfosItem["Key"].isNull())
			keyValueInfosItemObject.key = dataNodeKeyValueInfoskeyValueInfosItem["Key"].asString();
		if(!dataNodeKeyValueInfoskeyValueInfosItem["Value"].isNull())
			keyValueInfosItemObject.value = dataNodeKeyValueInfoskeyValueInfosItem["Value"].asString();
		if(!dataNodeKeyValueInfoskeyValueInfosItem["ValueScore"].isNull())
			keyValueInfosItemObject.valueScore = std::stof(dataNodeKeyValueInfoskeyValueInfosItem["ValueScore"].asString());
		auto allValuePositionsNode = dataNodeKeyValueInfoskeyValueInfosItem["ValuePositions"]["valuePositionsItem"];
		for (auto dataNodeKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem : allValuePositionsNode)
		{
			Data::KeyValueInfosItem::ValuePositionsItem valuePositionsObject;
			if(!dataNodeKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem["X"].isNull())
				valuePositionsObject.x = std::stol(dataNodeKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem["X"].asString());
			if(!dataNodeKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem["Y"].isNull())
				valuePositionsObject.y = std::stol(dataNodeKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem["Y"].asString());
			keyValueInfosItemObject.valuePositions.push_back(valuePositionsObject);
		}
		data_.keyValueInfos.push_back(keyValueInfosItemObject);
	}
	auto contentNode = dataNode["Content"];
	if(!contentNode["SumAmount"].isNull())
		data_.content.sumAmount = contentNode["SumAmount"].asString();
	if(!contentNode["InvoiceCode"].isNull())
		data_.content.invoiceCode = contentNode["InvoiceCode"].asString();
	if(!contentNode["InvoiceNo"].isNull())
		data_.content.invoiceNo = contentNode["InvoiceNo"].asString();
	if(!contentNode["InvoiceAmount"].isNull())
		data_.content.invoiceAmount = contentNode["InvoiceAmount"].asString();
	if(!contentNode["InvoiceDetails"].isNull())
		data_.content.invoiceDetails = contentNode["InvoiceDetails"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeQuotaInvoiceResult::getMessage()const
{
	return message_;
}

RecognizeQuotaInvoiceResult::Data RecognizeQuotaInvoiceResult::getData()const
{
	return data_;
}

std::string RecognizeQuotaInvoiceResult::getCode()const
{
	return code_;
}

