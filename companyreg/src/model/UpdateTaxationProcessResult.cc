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

#include <alibabacloud/companyreg/model/UpdateTaxationProcessResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

UpdateTaxationProcessResult::UpdateTaxationProcessResult() :
	ServiceResult()
{}

UpdateTaxationProcessResult::UpdateTaxationProcessResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateTaxationProcessResult::~UpdateTaxationProcessResult()
{}

void UpdateTaxationProcessResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaxItemDetailListNode = value["TaxItemDetailList"]["TaxItemDetailListItem"];
	for (auto valueTaxItemDetailListTaxItemDetailListItem : allTaxItemDetailListNode)
	{
		TaxItemDetailListItem taxItemDetailListObject;
		if(!valueTaxItemDetailListTaxItemDetailListItem["Id"].isNull())
			taxItemDetailListObject.id = std::stol(valueTaxItemDetailListTaxItemDetailListItem["Id"].asString());
		if(!valueTaxItemDetailListTaxItemDetailListItem["IsDeclared"].isNull())
			taxItemDetailListObject.isDeclared = valueTaxItemDetailListTaxItemDetailListItem["IsDeclared"].asString() == "true";
		if(!valueTaxItemDetailListTaxItemDetailListItem["IsDeclaredThisPeriod"].isNull())
			taxItemDetailListObject.isDeclaredThisPeriod = valueTaxItemDetailListTaxItemDetailListItem["IsDeclaredThisPeriod"].asString() == "true";
		if(!valueTaxItemDetailListTaxItemDetailListItem["IsPaid"].isNull())
			taxItemDetailListObject.isPaid = valueTaxItemDetailListTaxItemDetailListItem["IsPaid"].asString() == "true";
		if(!valueTaxItemDetailListTaxItemDetailListItem["TaxAmount"].isNull())
			taxItemDetailListObject.taxAmount = valueTaxItemDetailListTaxItemDetailListItem["TaxAmount"].asString();
		if(!valueTaxItemDetailListTaxItemDetailListItem["TaxTypeId"].isNull())
			taxItemDetailListObject.taxTypeId = std::stoi(valueTaxItemDetailListTaxItemDetailListItem["TaxTypeId"].asString());
		if(!valueTaxItemDetailListTaxItemDetailListItem["TaxTypeName"].isNull())
			taxItemDetailListObject.taxTypeName = valueTaxItemDetailListTaxItemDetailListItem["TaxTypeName"].asString();
		taxItemDetailList_.push_back(taxItemDetailListObject);
	}
	if(!value["DeclareProcessType"].isNull())
		declareProcessType_ = value["DeclareProcessType"].asString();

}

std::vector<UpdateTaxationProcessResult::TaxItemDetailListItem> UpdateTaxationProcessResult::getTaxItemDetailList()const
{
	return taxItemDetailList_;
}

std::string UpdateTaxationProcessResult::getDeclareProcessType()const
{
	return declareProcessType_;
}

