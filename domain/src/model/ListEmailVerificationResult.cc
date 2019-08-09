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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allData = value["Data"]["EmailVerification"];
	for (auto value : allData)
	{
		EmailVerification dataObject;
		if(!value["GmtCreate"].isNull())
			dataObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			dataObject.gmtModified = value["GmtModified"].asString();
		if(!value["Email"].isNull())
			dataObject.email = value["Email"].asString();
		if(!value["UserId"].isNull())
			dataObject.userId = value["UserId"].asString();
		if(!value["EmailVerificationNo"].isNull())
			dataObject.emailVerificationNo = value["EmailVerificationNo"].asString();
		if(!value["TokenSendTime"].isNull())
			dataObject.tokenSendTime = value["TokenSendTime"].asString();
		if(!value["VerificationStatus"].isNull())
			dataObject.verificationStatus = std::stoi(value["VerificationStatus"].asString());
		if(!value["VerificationTime"].isNull())
			dataObject.verificationTime = value["VerificationTime"].asString();
		if(!value["SendIp"].isNull())
			dataObject.sendIp = value["SendIp"].asString();
		if(!value["ConfirmIp"].isNull())
			dataObject.confirmIp = value["ConfirmIp"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
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

