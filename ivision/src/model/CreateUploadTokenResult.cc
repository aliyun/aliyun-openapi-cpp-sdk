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

#include <alibabacloud/ivision/model/CreateUploadTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

CreateUploadTokenResult::CreateUploadTokenResult() :
	ServiceResult()
{}

CreateUploadTokenResult::CreateUploadTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateUploadTokenResult::~CreateUploadTokenResult()
{}

void CreateUploadTokenResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto uploadTokenNode = value["UploadToken"];
	if(!uploadTokenNode["AccessKeyId"].isNull())
		uploadToken_.accessKeyId = uploadTokenNode["AccessKeyId"].asString();
	if(!uploadTokenNode["AccessKeySecret"].isNull())
		uploadToken_.accessKeySecret = uploadTokenNode["AccessKeySecret"].asString();
	if(!uploadTokenNode["SecurityToken"].isNull())
		uploadToken_.securityToken = uploadTokenNode["SecurityToken"].asString();
	if(!uploadTokenNode["Expiration"].isNull())
		uploadToken_.expiration = uploadTokenNode["Expiration"].asString();
	if(!uploadTokenNode["Bucket"].isNull())
		uploadToken_.bucket = uploadTokenNode["Bucket"].asString();
	if(!uploadTokenNode["Object"].isNull())
		uploadToken_.object = uploadTokenNode["Object"].asString();
	if(!uploadTokenNode["Endpoint"].isNull())
		uploadToken_.endpoint = uploadTokenNode["Endpoint"].asString();
	if(!uploadTokenNode["Url"].isNull())
		uploadToken_.url = uploadTokenNode["Url"].asString();

}

CreateUploadTokenResult::UploadToken CreateUploadTokenResult::getUploadToken()const
{
	return uploadToken_;
}

