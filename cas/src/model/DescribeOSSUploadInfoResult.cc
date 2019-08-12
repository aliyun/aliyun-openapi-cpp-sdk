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

#include <alibabacloud/cas/model/DescribeOSSUploadInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeOSSUploadInfoResult::DescribeOSSUploadInfoResult() :
	ServiceResult()
{}

DescribeOSSUploadInfoResult::DescribeOSSUploadInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOSSUploadInfoResult::~DescribeOSSUploadInfoResult()
{}

void DescribeOSSUploadInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["AccessId"].isNull())
		accessId_ = value["AccessId"].asString();
	if(!value["Policy"].isNull())
		policy_ = value["Policy"].asString();
	if(!value["Signature"].isNull())
		signature_ = value["Signature"].asString();
	if(!value["Key"].isNull())
		key_ = value["Key"].asString();
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["Expire"].isNull())
		expire_ = std::stoi(value["Expire"].asString());

}

std::string DescribeOSSUploadInfoResult::getPolicy()const
{
	return policy_;
}

int DescribeOSSUploadInfoResult::getExpire()const
{
	return expire_;
}

std::string DescribeOSSUploadInfoResult::getAccessId()const
{
	return accessId_;
}

std::string DescribeOSSUploadInfoResult::getSignature()const
{
	return signature_;
}

std::string DescribeOSSUploadInfoResult::getHost()const
{
	return host_;
}

std::string DescribeOSSUploadInfoResult::getKey()const
{
	return key_;
}

