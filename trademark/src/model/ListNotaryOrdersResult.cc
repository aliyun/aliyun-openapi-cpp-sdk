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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allData = value["Data"]["NotaryOrder"];
	for (auto value : allData)
	{
		NotaryOrder dataObject;
		if(!value["NotaryOrderId"].isNull())
			dataObject.notaryOrderId = std::stol(value["NotaryOrderId"].asString());
		if(!value["AliyunOrderId"].isNull())
			dataObject.aliyunOrderId = value["AliyunOrderId"].asString();
		if(!value["TmRegisterNo"].isNull())
			dataObject.tmRegisterNo = value["TmRegisterNo"].asString();
		if(!value["TmName"].isNull())
			dataObject.tmName = value["TmName"].asString();
		if(!value["TmImage"].isNull())
			dataObject.tmImage = value["TmImage"].asString();
		if(!value["TmClassification"].isNull())
			dataObject.tmClassification = value["TmClassification"].asString();
		if(!value["OrderPrice"].isNull())
			dataObject.orderPrice = std::stof(value["OrderPrice"].asString());
		if(!value["NotaryStatus"].isNull())
			dataObject.notaryStatus = std::stoi(value["NotaryStatus"].asString());
		if(!value["OrderDate"].isNull())
			dataObject.orderDate = std::stol(value["OrderDate"].asString());
		if(!value["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["NotaryCertificate"].isNull())
			dataObject.notaryCertificate = value["NotaryCertificate"].asString();
		if(!value["BizId"].isNull())
			dataObject.bizId = value["BizId"].asString();
		if(!value["NotaryType"].isNull())
			dataObject.notaryType = std::stoi(value["NotaryType"].asString());
		if(!value["NotaryPlatformName"].isNull())
			dataObject.notaryPlatformName = value["NotaryPlatformName"].asString();
		if(!value["ApplyPostStatus"].isNull())
			dataObject.applyPostStatus = value["ApplyPostStatus"].asString();
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

