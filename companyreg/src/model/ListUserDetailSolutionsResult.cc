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

#include <alibabacloud/companyreg/model/ListUserDetailSolutionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListUserDetailSolutionsResult::ListUserDetailSolutionsResult() :
	ServiceResult()
{}

ListUserDetailSolutionsResult::ListUserDetailSolutionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserDetailSolutionsResult::~ListUserDetailSolutionsResult()
{}

void ListUserDetailSolutionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Solution"];
	for (auto valueDataSolution : allDataNode)
	{
		Solution dataObject;
		if(!valueDataSolution["BizId"].isNull())
			dataObject.bizId = valueDataSolution["BizId"].asString();
		if(!valueDataSolution["BizType"].isNull())
			dataObject.bizType = valueDataSolution["BizType"].asString();
		if(!valueDataSolution["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataSolution["CreateTime"].asString());
		if(!valueDataSolution["DeliveryOrderBizId"].isNull())
			dataObject.deliveryOrderBizId = valueDataSolution["DeliveryOrderBizId"].asString();
		if(!valueDataSolution["ExtInfo"].isNull())
			dataObject.extInfo = valueDataSolution["ExtInfo"].asString();
		if(!valueDataSolution["IntentionAssignBizId"].isNull())
			dataObject.intentionAssignBizId = valueDataSolution["IntentionAssignBizId"].asString();
		if(!valueDataSolution["IntentionBizId"].isNull())
			dataObject.intentionBizId = valueDataSolution["IntentionBizId"].asString();
		if(!valueDataSolution["PartnerCode"].isNull())
			dataObject.partnerCode = valueDataSolution["PartnerCode"].asString();
		if(!valueDataSolution["Reason"].isNull())
			dataObject.reason = valueDataSolution["Reason"].asString();
		if(!valueDataSolution["Status"].isNull())
			dataObject.status = std::stoi(valueDataSolution["Status"].asString());
		if(!valueDataSolution["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataSolution["UpdateTime"].asString());
		if(!valueDataSolution["UserId"].isNull())
			dataObject.userId = valueDataSolution["UserId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());

}

int ListUserDetailSolutionsResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListUserDetailSolutionsResult::getPageSize()const
{
	return pageSize_;
}

int ListUserDetailSolutionsResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListUserDetailSolutionsResult::Solution> ListUserDetailSolutionsResult::getData()const
{
	return data_;
}

int ListUserDetailSolutionsResult::getTotalItemNum()const
{
	return totalItemNum_;
}

