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

#include <alibabacloud/trademark/model/ListNotaryOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

ListNotaryOrdersResult::ListNotaryOrdersResult() :
	ServiceResult()
{}

ListNotaryOrdersResult::ListNotaryOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNotaryOrdersResult::~ListNotaryOrdersResult()
{}

void ListNotaryOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["NotaryOrder"];
	for (auto valueDataNotaryOrder : allDataNode)
	{
		NotaryOrder dataObject;
		if(!valueDataNotaryOrder["NotaryOrderId"].isNull())
			dataObject.notaryOrderId = std::stol(valueDataNotaryOrder["NotaryOrderId"].asString());
		if(!valueDataNotaryOrder["AliyunOrderId"].isNull())
			dataObject.aliyunOrderId = valueDataNotaryOrder["AliyunOrderId"].asString();
		if(!valueDataNotaryOrder["TmRegisterNo"].isNull())
			dataObject.tmRegisterNo = valueDataNotaryOrder["TmRegisterNo"].asString();
		if(!valueDataNotaryOrder["TmName"].isNull())
			dataObject.tmName = valueDataNotaryOrder["TmName"].asString();
		if(!valueDataNotaryOrder["TmImage"].isNull())
			dataObject.tmImage = valueDataNotaryOrder["TmImage"].asString();
		if(!valueDataNotaryOrder["TmClassification"].isNull())
			dataObject.tmClassification = valueDataNotaryOrder["TmClassification"].asString();
		if(!valueDataNotaryOrder["OrderPrice"].isNull())
			dataObject.orderPrice = std::stof(valueDataNotaryOrder["OrderPrice"].asString());
		if(!valueDataNotaryOrder["NotaryStatus"].isNull())
			dataObject.notaryStatus = std::stoi(valueDataNotaryOrder["NotaryStatus"].asString());
		if(!valueDataNotaryOrder["OrderDate"].isNull())
			dataObject.orderDate = std::stol(valueDataNotaryOrder["OrderDate"].asString());
		if(!valueDataNotaryOrder["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(valueDataNotaryOrder["GmtModified"].asString());
		if(!valueDataNotaryOrder["NotaryCertificate"].isNull())
			dataObject.notaryCertificate = valueDataNotaryOrder["NotaryCertificate"].asString();
		if(!valueDataNotaryOrder["BizId"].isNull())
			dataObject.bizId = valueDataNotaryOrder["BizId"].asString();
		if(!valueDataNotaryOrder["NotaryType"].isNull())
			dataObject.notaryType = std::stoi(valueDataNotaryOrder["NotaryType"].asString());
		if(!valueDataNotaryOrder["NotaryPlatformName"].isNull())
			dataObject.notaryPlatformName = valueDataNotaryOrder["NotaryPlatformName"].asString();
		if(!valueDataNotaryOrder["ApplyPostStatus"].isNull())
			dataObject.applyPostStatus = valueDataNotaryOrder["ApplyPostStatus"].asString();
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
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

bool ListNotaryOrdersResult::getPrePage()const
{
	return prePage_;
}

int ListNotaryOrdersResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListNotaryOrdersResult::getPageSize()const
{
	return pageSize_;
}

int ListNotaryOrdersResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::string ListNotaryOrdersResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListNotaryOrdersResult::NotaryOrder> ListNotaryOrdersResult::getData()const
{
	return data_;
}

std::string ListNotaryOrdersResult::getErrorCode()const
{
	return errorCode_;
}

int ListNotaryOrdersResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool ListNotaryOrdersResult::getNextPage()const
{
	return nextPage_;
}

bool ListNotaryOrdersResult::getSuccess()const
{
	return success_;
}

