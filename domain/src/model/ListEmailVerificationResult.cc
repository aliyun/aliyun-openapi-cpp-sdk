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

#include <alibabacloud/domain/model/ListEmailVerificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

ListEmailVerificationResult::ListEmailVerificationResult() :
	ServiceResult()
{}

ListEmailVerificationResult::ListEmailVerificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEmailVerificationResult::~ListEmailVerificationResult()
{}

void ListEmailVerificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["EmailVerification"];
	for (auto valueDataEmailVerification : allDataNode)
	{
		EmailVerification dataObject;
		if(!valueDataEmailVerification["VerificationTime"].isNull())
			dataObject.verificationTime = valueDataEmailVerification["VerificationTime"].asString();
		if(!valueDataEmailVerification["Email"].isNull())
			dataObject.email = valueDataEmailVerification["Email"].asString();
		if(!valueDataEmailVerification["EmailVerificationNo"].isNull())
			dataObject.emailVerificationNo = valueDataEmailVerification["EmailVerificationNo"].asString();
		if(!valueDataEmailVerification["UserId"].isNull())
			dataObject.userId = valueDataEmailVerification["UserId"].asString();
		if(!valueDataEmailVerification["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataEmailVerification["GmtCreate"].asString();
		if(!valueDataEmailVerification["VerificationStatus"].isNull())
			dataObject.verificationStatus = std::stoi(valueDataEmailVerification["VerificationStatus"].asString());
		if(!valueDataEmailVerification["TokenSendTime"].isNull())
			dataObject.tokenSendTime = valueDataEmailVerification["TokenSendTime"].asString();
		if(!valueDataEmailVerification["SendIp"].isNull())
			dataObject.sendIp = valueDataEmailVerification["SendIp"].asString();
		if(!valueDataEmailVerification["GmtModified"].isNull())
			dataObject.gmtModified = valueDataEmailVerification["GmtModified"].asString();
		if(!valueDataEmailVerification["ConfirmIp"].isNull())
			dataObject.confirmIp = valueDataEmailVerification["ConfirmIp"].asString();
		data_.push_back(dataObject);
	}
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

bool ListEmailVerificationResult::getPrePage()const
{
	return prePage_;
}

int ListEmailVerificationResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListEmailVerificationResult::getPageSize()const
{
	return pageSize_;
}

int ListEmailVerificationResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListEmailVerificationResult::EmailVerification> ListEmailVerificationResult::getData()const
{
	return data_;
}

int ListEmailVerificationResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool ListEmailVerificationResult::getNextPage()const
{
	return nextPage_;
}

