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
	auto allData = value["Data"]["CompanyRegOrder"];
	for (auto value : allData)
	{
		CompanyRegOrder dataObject;
		if(!value["BizId"].isNull())
			dataObject.bizId = value["BizId"].asString();
		if(!value["CompanyName"].isNull())
			dataObject.companyName = value["CompanyName"].asString();
		if(!value["BizStatus"].isNull())
			dataObject.bizStatus = value["BizStatus"].asString();
		if(!value["BizInfo"].isNull())
			dataObject.bizInfo = value["BizInfo"].asString();
		if(!value["SupplementBizInfo"].isNull())
			dataObject.supplementBizInfo = value["SupplementBizInfo"].asString();
		if(!value["AliyunOrderId"].isNull())
			dataObject.aliyunOrderId = value["AliyunOrderId"].asString();
		if(!value["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Extend"].isNull())
			dataObject.extend = value["Extend"].asString();
		if(!value["BizSubCode"].isNull())
			dataObject.bizSubCode = value["BizSubCode"].asString();
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

