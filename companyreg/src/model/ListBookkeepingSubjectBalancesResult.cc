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

#include <alibabacloud/companyreg/model/ListBookkeepingSubjectBalancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListBookkeepingSubjectBalancesResult::ListBookkeepingSubjectBalancesResult() :
	ServiceResult()
{}

ListBookkeepingSubjectBalancesResult::ListBookkeepingSubjectBalancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBookkeepingSubjectBalancesResult::~ListBookkeepingSubjectBalancesResult()
{}

void ListBookkeepingSubjectBalancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBookkeepingSubjectBalancesNode = value["BookkeepingSubjectBalances"]["BookkeepingSubjectBalancesItem"];
	for (auto valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem : allBookkeepingSubjectBalancesNode)
	{
		BookkeepingSubjectBalancesItem bookkeepingSubjectBalancesObject;
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["BizId"].isNull())
			bookkeepingSubjectBalancesObject.bizId = valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["BizId"].asString();
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["ParentBizId"].isNull())
			bookkeepingSubjectBalancesObject.parentBizId = valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["ParentBizId"].asString();
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["ParentSubjectCode"].isNull())
			bookkeepingSubjectBalancesObject.parentSubjectCode = valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["ParentSubjectCode"].asString();
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["SubjectCode"].isNull())
			bookkeepingSubjectBalancesObject.subjectCode = valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["SubjectCode"].asString();
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["SubjectName"].isNull())
			bookkeepingSubjectBalancesObject.subjectName = valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["SubjectName"].asString();
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["StartDebitValue"].isNull())
			bookkeepingSubjectBalancesObject.startDebitValue = std::stof(valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["StartDebitValue"].asString());
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["StartCreditValue"].isNull())
			bookkeepingSubjectBalancesObject.startCreditValue = std::stof(valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["StartCreditValue"].asString());
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["CurrentDebitValue"].isNull())
			bookkeepingSubjectBalancesObject.currentDebitValue = std::stof(valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["CurrentDebitValue"].asString());
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["CurrentCreditValue"].isNull())
			bookkeepingSubjectBalancesObject.currentCreditValue = std::stof(valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["CurrentCreditValue"].asString());
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["EndDebitValue"].isNull())
			bookkeepingSubjectBalancesObject.endDebitValue = std::stof(valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["EndDebitValue"].asString());
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["EndCreditValue"].isNull())
			bookkeepingSubjectBalancesObject.endCreditValue = std::stof(valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["EndCreditValue"].asString());
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["YearDebitValue"].isNull())
			bookkeepingSubjectBalancesObject.yearDebitValue = std::stof(valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["YearDebitValue"].asString());
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["YearCreditValue"].isNull())
			bookkeepingSubjectBalancesObject.yearCreditValue = std::stof(valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["YearCreditValue"].asString());
		if(!valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["SubjectLevel"].isNull())
			bookkeepingSubjectBalancesObject.subjectLevel = valueBookkeepingSubjectBalancesBookkeepingSubjectBalancesItem["SubjectLevel"].asString();
		bookkeepingSubjectBalances_.push_back(bookkeepingSubjectBalancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

int ListBookkeepingSubjectBalancesResult::getTotalCount()const
{
	return totalCount_;
}

int ListBookkeepingSubjectBalancesResult::getPageSize()const
{
	return pageSize_;
}

int ListBookkeepingSubjectBalancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListBookkeepingSubjectBalancesResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListBookkeepingSubjectBalancesResult::BookkeepingSubjectBalancesItem> ListBookkeepingSubjectBalancesResult::getBookkeepingSubjectBalances()const
{
	return bookkeepingSubjectBalances_;
}

bool ListBookkeepingSubjectBalancesResult::getSuccess()const
{
	return success_;
}

