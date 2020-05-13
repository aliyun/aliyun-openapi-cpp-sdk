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

#include <alibabacloud/cloudauth/model/GetVerifyTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

GetVerifyTokenResult::GetVerifyTokenResult() :
	ServiceResult()
{}

GetVerifyTokenResult::GetVerifyTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVerifyTokenResult::~GetVerifyTokenResult()
{}

void GetVerifyTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CloudauthPageUrl"].isNull())
		data_.cloudauthPageUrl = dataNode["CloudauthPageUrl"].asString();
	auto verifyTokenNode = dataNode["VerifyToken"];
	if(!verifyTokenNode["Token"].isNull())
		data_.verifyToken.token = verifyTokenNode["Token"].asString();
	if(!verifyTokenNode["DurationSeconds"].isNull())
		data_.verifyToken.durationSeconds = std::stoi(verifyTokenNode["DurationSeconds"].asString());
	auto stsTokenNode = dataNode["StsToken"];
	if(!stsTokenNode["AccessKeyId"].isNull())
		data_.stsToken.accessKeyId = stsTokenNode["AccessKeyId"].asString();
	if(!stsTokenNode["AccessKeySecret"].isNull())
		data_.stsToken.accessKeySecret = stsTokenNode["AccessKeySecret"].asString();
	if(!stsTokenNode["Expiration"].isNull())
		data_.stsToken.expiration = stsTokenNode["Expiration"].asString();
	if(!stsTokenNode["EndPoint"].isNull())
		data_.stsToken.endPoint = stsTokenNode["EndPoint"].asString();
	if(!stsTokenNode["BucketName"].isNull())
		data_.stsToken.bucketName = stsTokenNode["BucketName"].asString();
	if(!stsTokenNode["Path"].isNull())
		data_.stsToken.path = stsTokenNode["Path"].asString();
	if(!stsTokenNode["Token"].isNull())
		data_.stsToken.token = stsTokenNode["Token"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetVerifyTokenResult::getMessage()const
{
	return message_;
}

GetVerifyTokenResult::Data GetVerifyTokenResult::getData()const
{
	return data_;
}

std::string GetVerifyTokenResult::getCode()const
{
	return code_;
}

bool GetVerifyTokenResult::getSuccess()const
{
	return success_;
}

