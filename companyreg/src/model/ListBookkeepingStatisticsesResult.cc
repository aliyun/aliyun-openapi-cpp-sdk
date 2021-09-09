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

#include <alibabacloud/companyreg/model/ListBookkeepingStatisticsesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListBookkeepingStatisticsesResult::ListBookkeepingStatisticsesResult() :
	ServiceResult()
{}

ListBookkeepingStatisticsesResult::ListBookkeepingStatisticsesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBookkeepingStatisticsesResult::~ListBookkeepingStatisticsesResult()
{}

void ListBookkeepingStatisticsesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBookkeepingStatisticsesNode = value["BookkeepingStatisticses"]["BookkeepingStatistics"];
	for (auto valueBookkeepingStatisticsesBookkeepingStatistics : allBookkeepingStatisticsesNode)
	{
		BookkeepingStatistics bookkeepingStatisticsesObject;
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["ProduceBizId"].isNull())
			bookkeepingStatisticsesObject.produceBizId = valueBookkeepingStatisticsesBookkeepingStatistics["ProduceBizId"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["Year"].isNull())
			bookkeepingStatisticsesObject.year = std::stoi(valueBookkeepingStatisticsesBookkeepingStatistics["Year"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["Month"].isNull())
			bookkeepingStatisticsesObject.month = std::stoi(valueBookkeepingStatisticsesBookkeepingStatistics["Month"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["Income"].isNull())
			bookkeepingStatisticsesObject.income = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["Income"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["Expend"].isNull())
			bookkeepingStatisticsesObject.expend = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["Expend"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["Profit"].isNull())
			bookkeepingStatisticsesObject.profit = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["Profit"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxAmount"].isNull())
			bookkeepingStatisticsesObject.taxAmount = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["TaxAmount"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxZzs"].isNull())
			bookkeepingStatisticsesObject.taxZzs = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["TaxZzs"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxFjs"].isNull())
			bookkeepingStatisticsesObject.taxFjs = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["TaxFjs"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxQysds"].isNull())
			bookkeepingStatisticsesObject.taxQysds = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["TaxQysds"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxYhs"].isNull())
			bookkeepingStatisticsesObject.taxYhs = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["TaxYhs"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxGhjf"].isNull())
			bookkeepingStatisticsesObject.taxGhjf = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["TaxGhjf"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxSljj"].isNull())
			bookkeepingStatisticsesObject.taxSljj = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["TaxSljj"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxCjrbzj"].isNull())
			bookkeepingStatisticsesObject.taxCjrbzj = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["TaxCjrbzj"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxOther"].isNull())
			bookkeepingStatisticsesObject.taxOther = std::stof(valueBookkeepingStatisticsesBookkeepingStatistics["TaxOther"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxAmountNote"].isNull())
			bookkeepingStatisticsesObject.taxAmountNote = valueBookkeepingStatisticsesBookkeepingStatistics["TaxAmountNote"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxZzsNote"].isNull())
			bookkeepingStatisticsesObject.taxZzsNote = valueBookkeepingStatisticsesBookkeepingStatistics["TaxZzsNote"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxFjsNote"].isNull())
			bookkeepingStatisticsesObject.taxFjsNote = valueBookkeepingStatisticsesBookkeepingStatistics["TaxFjsNote"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxQysdsNote"].isNull())
			bookkeepingStatisticsesObject.taxQysdsNote = valueBookkeepingStatisticsesBookkeepingStatistics["TaxQysdsNote"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxYhsNote"].isNull())
			bookkeepingStatisticsesObject.taxYhsNote = valueBookkeepingStatisticsesBookkeepingStatistics["TaxYhsNote"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxGhjfNote"].isNull())
			bookkeepingStatisticsesObject.taxGhjfNote = valueBookkeepingStatisticsesBookkeepingStatistics["TaxGhjfNote"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxSljjNote"].isNull())
			bookkeepingStatisticsesObject.taxSljjNote = valueBookkeepingStatisticsesBookkeepingStatistics["TaxSljjNote"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxCjrbzjNote"].isNull())
			bookkeepingStatisticsesObject.taxCjrbzjNote = valueBookkeepingStatisticsesBookkeepingStatistics["TaxCjrbzjNote"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["TaxOtherNote"].isNull())
			bookkeepingStatisticsesObject.taxOtherNote = valueBookkeepingStatisticsesBookkeepingStatistics["TaxOtherNote"].asString();
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["VoucherCount"].isNull())
			bookkeepingStatisticsesObject.voucherCount = std::stoi(valueBookkeepingStatisticsesBookkeepingStatistics["VoucherCount"].asString());
		if(!valueBookkeepingStatisticsesBookkeepingStatistics["SubjectCount"].isNull())
			bookkeepingStatisticsesObject.subjectCount = std::stoi(valueBookkeepingStatisticsesBookkeepingStatistics["SubjectCount"].asString());
		auto allTaxDetailsNode = valueBookkeepingStatisticsesBookkeepingStatistics["TaxDetails"]["TaxDetail"];
		for (auto valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail : allTaxDetailsNode)
		{
			BookkeepingStatistics::TaxDetail taxDetailsObject;
			if(!valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["TaxName"].isNull())
				taxDetailsObject.taxName = valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["TaxName"].asString();
			if(!valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["Year"].isNull())
				taxDetailsObject.year = std::stoi(valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["Year"].asString());
			if(!valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["Month"].isNull())
				taxDetailsObject.month = std::stoi(valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["Month"].asString());
			if(!valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["Amount"].isNull())
				taxDetailsObject.amount = std::stof(valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["Amount"].asString());
			if(!valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["Remark"].isNull())
				taxDetailsObject.remark = valueBookkeepingStatisticsesBookkeepingStatisticsTaxDetailsTaxDetail["Remark"].asString();
			bookkeepingStatisticsesObject.taxDetails.push_back(taxDetailsObject);
		}
		bookkeepingStatisticses_.push_back(bookkeepingStatisticsesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["IncomeSum"].isNull())
		incomeSum_ = std::stof(value["IncomeSum"].asString());
	if(!value["ExpendSum"].isNull())
		expendSum_ = std::stof(value["ExpendSum"].asString());
	if(!value["ProfitSum"].isNull())
		profitSum_ = std::stof(value["ProfitSum"].asString());
	if(!value["TaxAmountSum"].isNull())
		taxAmountSum_ = std::stof(value["TaxAmountSum"].asString());

}

int ListBookkeepingStatisticsesResult::getTotalCount()const
{
	return totalCount_;
}

float ListBookkeepingStatisticsesResult::getExpendSum()const
{
	return expendSum_;
}

int ListBookkeepingStatisticsesResult::getPageSize()const
{
	return pageSize_;
}

float ListBookkeepingStatisticsesResult::getIncomeSum()const
{
	return incomeSum_;
}

int ListBookkeepingStatisticsesResult::getPageNumber()const
{
	return pageNumber_;
}

float ListBookkeepingStatisticsesResult::getTaxAmountSum()const
{
	return taxAmountSum_;
}

std::vector<ListBookkeepingStatisticsesResult::BookkeepingStatistics> ListBookkeepingStatisticsesResult::getBookkeepingStatisticses()const
{
	return bookkeepingStatisticses_;
}

float ListBookkeepingStatisticsesResult::getProfitSum()const
{
	return profitSum_;
}

