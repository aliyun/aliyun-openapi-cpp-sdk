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

#include <alibabacloud/companyreg/model/ListCompanyRegOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListCompanyRegOrdersResult::ListCompanyRegOrdersResult() :
	ServiceResult()
{}

ListCompanyRegOrdersResult::ListCompanyRegOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCompanyRegOrdersResult::~ListCompanyRegOrdersResult()
{}

void ListCompanyRegOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["CompanyRegOrder"];
	for (auto valueDataCompanyRegOrder : allDataNode)
	{
		CompanyRegOrder dataObject;
		if(!valueDataCompanyRegOrder["BizId"].isNull())
			dataObject.bizId = valueDataCompanyRegOrder["BizId"].asString();
		if(!valueDataCompanyRegOrder["CompanyName"].isNull())
			dataObject.companyName = valueDataCompanyRegOrder["CompanyName"].asString();
		if(!valueDataCompanyRegOrder["BizStatus"].isNull())
			dataObject.bizStatus = valueDataCompanyRegOrder["BizStatus"].asString();
		if(!valueDataCompanyRegOrder["BizInfo"].isNull())
			dataObject.bizInfo = valueDataCompanyRegOrder["BizInfo"].asString();
		if(!valueDataCompanyRegOrder["SupplementBizInfo"].isNull())
			dataObject.supplementBizInfo = valueDataCompanyRegOrder["SupplementBizInfo"].asString();
		if(!valueDataCompanyRegOrder["AliyunOrderId"].isNull())
			dataObject.aliyunOrderId = valueDataCompanyRegOrder["AliyunOrderId"].asString();
		if(!valueDataCompanyRegOrder["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(valueDataCompanyRegOrder["GmtModified"].asString());
		if(!valueDataCompanyRegOrder["Extend"].isNull())
			dataObject.extend = valueDataCompanyRegOrder["Extend"].asString();
		if(!valueDataCompanyRegOrder["BizSubCode"].isNull())
			dataObject.bizSubCode = valueDataCompanyRegOrder["BizSubCode"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

bool ListCompanyRegOrdersResult::getPrePage()const
{
	return prePage_;
}

int ListCompanyRegOrdersResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListCompanyRegOrdersResult::getPageSize()const
{
	return pageSize_;
}

int ListCompanyRegOrdersResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListCompanyRegOrdersResult::CompanyRegOrder> ListCompanyRegOrdersResult::getData()const
{
	return data_;
}

int ListCompanyRegOrdersResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool ListCompanyRegOrdersResult::getNextPage()const
{
	return nextPage_;
}

