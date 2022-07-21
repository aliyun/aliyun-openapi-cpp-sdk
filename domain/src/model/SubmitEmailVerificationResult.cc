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

#include <alibabacloud/domain/model/SubmitEmailVerificationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

SubmitEmailVerificationResult::SubmitEmailVerificationResult() :
	ServiceResult()
{}

SubmitEmailVerificationResult::SubmitEmailVerificationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SubmitEmailVerificationResult::~SubmitEmailVerificationResult()
{}

void SubmitEmailVerificationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExistListNode = value["ExistList"]["SendResult"];
	for (auto valueExistListSendResult : allExistListNode)
	{
		SendResult existListObject;
		if(!valueExistListSendResult["Email"].isNull())
			existListObject.email = valueExistListSendResult["Email"].asString();
		if(!valueExistListSendResult["Code"].isNull())
			existListObject.code = valueExistListSendResult["Code"].asString();
		if(!valueExistListSendResult["Message"].isNull())
			existListObject.message = valueExistListSendResult["Message"].asString();
		existList_.push_back(existListObject);
	}
	auto allSuccessListNode = value["SuccessList"]["SendResult"];
	for (auto valueSuccessListSendResult : allSuccessListNode)
	{
		SendResult successListObject;
		if(!valueSuccessListSendResult["Email"].isNull())
			successListObject.email = valueSuccessListSendResult["Email"].asString();
		if(!valueSuccessListSendResult["Code"].isNull())
			successListObject.code = valueSuccessListSendResult["Code"].asString();
		if(!valueSuccessListSendResult["Message"].isNull())
			successListObject.message = valueSuccessListSendResult["Message"].asString();
		successList_.push_back(successListObject);
	}
	auto allFailListNode = value["FailList"]["SendResult"];
	for (auto valueFailListSendResult : allFailListNode)
	{
		SendResult failListObject;
		if(!valueFailListSendResult["Email"].isNull())
			failListObject.email = valueFailListSendResult["Email"].asString();
		if(!valueFailListSendResult["Code"].isNull())
			failListObject.code = valueFailListSendResult["Code"].asString();
		if(!valueFailListSendResult["Message"].isNull())
			failListObject.message = valueFailListSendResult["Message"].asString();
		failList_.push_back(failListObject);
	}

}

std::vector<SubmitEmailVerificationResult::SendResult> SubmitEmailVerificationResult::getExistList()const
{
	return existList_;
}

std::vector<SubmitEmailVerificationResult::SendResult> SubmitEmailVerificationResult::getSuccessList()const
{
	return successList_;
}

std::vector<SubmitEmailVerificationResult::SendResult> SubmitEmailVerificationResult::getFailList()const
{
	return failList_;
}

