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

#include <alibabacloud/market/model/DescribeDistributionProductsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeDistributionProductsResult::DescribeDistributionProductsResult() :
	ServiceResult()
{}

DescribeDistributionProductsResult::DescribeDistributionProductsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDistributionProductsResult::~DescribeDistributionProductsResult()
{}

void DescribeDistributionProductsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultsNode = value["Results"]["Result"];
	for (auto valueResultsResult : allResultsNode)
	{
		Result resultsObject;
		if(!valueResultsResult["FirstCategoryName"].isNull())
			resultsObject.firstCategoryName = valueResultsResult["FirstCategoryName"].asString();
		if(!valueResultsResult["SecondCategoryName"].isNull())
			resultsObject.secondCategoryName = valueResultsResult["SecondCategoryName"].asString();
		if(!valueResultsResult["Type"].isNull())
			resultsObject.type = valueResultsResult["Type"].asString();
		if(!valueResultsResult["ImageUrl"].isNull())
			resultsObject.imageUrl = valueResultsResult["ImageUrl"].asString();
		if(!valueResultsResult["Code"].isNull())
			resultsObject.code = valueResultsResult["Code"].asString();
		if(!valueResultsResult["Name"].isNull())
			resultsObject.name = valueResultsResult["Name"].asString();
		if(!valueResultsResult["ShortDescription"].isNull())
			resultsObject.shortDescription = valueResultsResult["ShortDescription"].asString();
		if(!valueResultsResult["Price"].isNull())
			resultsObject.price = valueResultsResult["Price"].asString();
		if(!valueResultsResult["Score"].isNull())
			resultsObject.score = valueResultsResult["Score"].asString();
		if(!valueResultsResult["TradeCount"].isNull())
			resultsObject.tradeCount = valueResultsResult["TradeCount"].asString();
		if(!valueResultsResult["UserCommentCount"].isNull())
			resultsObject.userCommentCount = valueResultsResult["UserCommentCount"].asString();
		if(!valueResultsResult["SubmissionRadio"].isNull())
			resultsObject.submissionRadio = valueResultsResult["SubmissionRadio"].asString();
		if(!valueResultsResult["SupplierName"].isNull())
			resultsObject.supplierName = valueResultsResult["SupplierName"].asString();
		if(!valueResultsResult["SupplierUId"].isNull())
			resultsObject.supplierUId = valueResultsResult["SupplierUId"].asString();
		results_.push_back(resultsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDistributionProductsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDistributionProductsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeDistributionProductsResult::Result> DescribeDistributionProductsResult::getResults()const
{
	return results_;
}

int DescribeDistributionProductsResult::getPageNumber()const
{
	return pageNumber_;
}

