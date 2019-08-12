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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSuccessList = value["SuccessList"]["SendResult"];
	for (auto value : allSuccessList)
	{
		SendResult successListObject;
		if(!value["Email"].isNull())
			successListObject.email = value["Email"].asString();
		if(!value["Code"].isNull())
			successListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			successListObject.message = value["Message"].asString();
		successList_.push_back(successListObject);
	}
	auto allFailList = value["FailList"]["SendResult"];
	for (auto value : allFailList)
	{
		SendResult failListObject;
		if(!value["Email"].isNull())
			failListObject.email = value["Email"].asString();
		if(!value["Code"].isNull())
			failListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			failListObject.message = value["Message"].asString();
		failList_.push_back(failListObject);
	}
	auto allExistList = value["ExistList"]["SendResult"];
	for (auto value : allExistList)
	{
		SendResult existListObject;
		if(!value["Email"].isNull())
			existListObject.email = value["Email"].asString();
		if(!value["Code"].isNull())
			existListObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			existListObject.message = value["Message"].asString();
		existList_.push_back(existListObject);
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

