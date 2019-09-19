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

#include <alibabacloud/trademark/model/ListNotaryInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

ListNotaryInfosResult::ListNotaryInfosResult() :
	ServiceResult()
{}

ListNotaryInfosResult::ListNotaryInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNotaryInfosResult::~ListNotaryInfosResult()
{}

void ListNotaryInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["NotaryInfo"];
	for (auto valueDataNotaryInfo : allDataNode)
	{
		NotaryInfo dataObject;
		if(!valueDataNotaryInfo["BizOrderNo"].isNull())
			dataObject.bizOrderNo = valueDataNotaryInfo["BizOrderNo"].asString();
		if(!valueDataNotaryInfo["Token"].isNull())
			dataObject.token = valueDataNotaryInfo["Token"].asString();
		if(!valueDataNotaryInfo["NotaryStatus"].isNull())
			dataObject.notaryStatus = std::stoi(valueDataNotaryInfo["NotaryStatus"].asString());
		if(!valueDataNotaryInfo["TmRegisterNo"].isNull())
			dataObject.tmRegisterNo = valueDataNotaryInfo["TmRegisterNo"].asString();
		if(!valueDataNotaryInfo["TmClassification"].isNull())
			dataObject.tmClassification = valueDataNotaryInfo["TmClassification"].asString();
		if(!valueDataNotaryInfo["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(valueDataNotaryInfo["GmtModified"].asString());
		if(!valueDataNotaryInfo["NotaryFailedReason"].isNull())
			dataObject.notaryFailedReason = valueDataNotaryInfo["NotaryFailedReason"].asString();
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

bool ListNotaryInfosResult::getPrePage()const
{
	return prePage_;
}

int ListNotaryInfosResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListNotaryInfosResult::getPageSize()const
{
	return pageSize_;
}

int ListNotaryInfosResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::string ListNotaryInfosResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListNotaryInfosResult::NotaryInfo> ListNotaryInfosResult::getData()const
{
	return data_;
}

std::string ListNotaryInfosResult::getErrorCode()const
{
	return errorCode_;
}

int ListNotaryInfosResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool ListNotaryInfosResult::getNextPage()const
{
	return nextPage_;
}

bool ListNotaryInfosResult::getSuccess()const
{
	return success_;
}

