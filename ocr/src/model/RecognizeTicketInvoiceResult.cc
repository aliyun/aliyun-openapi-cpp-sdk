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

#include <alibabacloud/ocr/model/RecognizeTicketInvoiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

RecognizeTicketInvoiceResult::RecognizeTicketInvoiceResult() :
	ServiceResult()
{}

RecognizeTicketInvoiceResult::RecognizeTicketInvoiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeTicketInvoiceResult::~RecognizeTicketInvoiceResult()
{}

void RecognizeTicketInvoiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Count"].isNull())
		data_.count = std::stol(dataNode["Count"].asString());
	if(!dataNode["Height"].isNull())
		data_.height = std::stol(dataNode["Height"].asString());
	if(!dataNode["Width"].isNull())
		data_.width = std::stol(dataNode["Width"].asString());
	if(!dataNode["OrgHeight"].isNull())
		data_.orgHeight = std::stol(dataNode["OrgHeight"].asString());
	if(!dataNode["OrgWidth"].isNull())
		data_.orgWidth = std::stol(dataNode["OrgWidth"].asString());
	auto allResultsNode = dataNode["Results"]["resultsItem"];
	for (auto dataNodeResultsresultsItem : allResultsNode)
	{
		Data::ResultsItem resultsItemObject;
		if(!dataNodeResultsresultsItem["Index"].isNull())
			resultsItemObject.index = std::stol(dataNodeResultsresultsItem["Index"].asString());
		if(!dataNodeResultsresultsItem["Type"].isNull())
			resultsItemObject.type = dataNodeResultsresultsItem["Type"].asString();
		auto allKeyValueInfosNode = dataNodeResultsresultsItem["KeyValueInfos"]["keyValueInfosItem"];
		for (auto dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItem : allKeyValueInfosNode)
		{
			Data::ResultsItem::KeyValueInfosItem keyValueInfosObject;
			if(!dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItem["Key"].isNull())
				keyValueInfosObject.key = dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItem["Key"].asString();
			if(!dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItem["Value"].isNull())
				keyValueInfosObject.value = dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItem["Value"].asString();
			if(!dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItem["ValueScore"].isNull())
				keyValueInfosObject.valueScore = std::stof(dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItem["ValueScore"].asString());
			auto allValuePositionsNode = dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItem["ValuePositions"]["valuePositionsItem"];
			for (auto dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem : allValuePositionsNode)
			{
				Data::ResultsItem::KeyValueInfosItem::ValuePositionsItem valuePositionsObject;
				if(!dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem["X"].isNull())
					valuePositionsObject.x = std::stol(dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem["X"].asString());
				if(!dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem["Y"].isNull())
					valuePositionsObject.y = std::stol(dataNodeResultsresultsItemKeyValueInfoskeyValueInfosItemValuePositionsvaluePositionsItem["Y"].asString());
				keyValueInfosObject.valuePositions.push_back(valuePositionsObject);
			}
			resultsItemObject.keyValueInfos.push_back(keyValueInfosObject);
		}
		auto allSliceRectangleNode = dataNodeResultsresultsItem["SliceRectangle"]["sliceRectangleItem"];
		for (auto dataNodeResultsresultsItemSliceRectanglesliceRectangleItem : allSliceRectangleNode)
		{
			Data::ResultsItem::SliceRectangleItem sliceRectangleObject;
			if(!dataNodeResultsresultsItemSliceRectanglesliceRectangleItem["X"].isNull())
				sliceRectangleObject.x = std::stol(dataNodeResultsresultsItemSliceRectanglesliceRectangleItem["X"].asString());
			if(!dataNodeResultsresultsItemSliceRectanglesliceRectangleItem["Y"].isNull())
				sliceRectangleObject.y = std::stol(dataNodeResultsresultsItemSliceRectanglesliceRectangleItem["Y"].asString());
			resultsItemObject.sliceRectangle.push_back(sliceRectangleObject);
		}
		auto contentNode = value["Content"];
		if(!contentNode["InvoiceCode"].isNull())
			resultsItemObject.content.invoiceCode = contentNode["InvoiceCode"].asString();
		if(!contentNode["InvoiceNumber"].isNull())
			resultsItemObject.content.invoiceNumber = contentNode["InvoiceNumber"].asString();
		if(!contentNode["InvoiceDate"].isNull())
			resultsItemObject.content.invoiceDate = contentNode["InvoiceDate"].asString();
		if(!contentNode["AntiFakeCode"].isNull())
			resultsItemObject.content.antiFakeCode = contentNode["AntiFakeCode"].asString();
		if(!contentNode["PayeeName"].isNull())
			resultsItemObject.content.payeeName = contentNode["PayeeName"].asString();
		if(!contentNode["PayeeRegisterNo"].isNull())
			resultsItemObject.content.payeeRegisterNo = contentNode["PayeeRegisterNo"].asString();
		if(!contentNode["PayerName"].isNull())
			resultsItemObject.content.payerName = contentNode["PayerName"].asString();
		if(!contentNode["PayerRegisterNo"].isNull())
			resultsItemObject.content.payerRegisterNo = contentNode["PayerRegisterNo"].asString();
		if(!contentNode["SumAmount"].isNull())
			resultsItemObject.content.sumAmount = contentNode["SumAmount"].asString();
		data_.results.push_back(resultsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeTicketInvoiceResult::getMessage()const
{
	return message_;
}

RecognizeTicketInvoiceResult::Data RecognizeTicketInvoiceResult::getData()const
{
	return data_;
}

std::string RecognizeTicketInvoiceResult::getCode()const
{
	return code_;
}

