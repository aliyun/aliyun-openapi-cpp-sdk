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

#include <alibabacloud/cloudauth/model/DescribeOssUploadTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeOssUploadTokenResult::DescribeOssUploadTokenResult() :
	ServiceResult()
{}

DescribeOssUploadTokenResult::DescribeOssUploadTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOssUploadTokenResult::~DescribeOssUploadTokenResult()
{}

void DescribeOssUploadTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ossUploadTokenNode = value["OssUploadToken"];
	if(!ossUploadTokenNode["Key"].isNull())
		ossUploadToken_.key = ossUploadTokenNode["Key"].asString();
	if(!ossUploadTokenNode["Token"].isNull())
		ossUploadToken_.token = ossUploadTokenNode["Token"].asString();
	if(!ossUploadTokenNode["Secret"].isNull())
		ossUploadToken_.secret = ossUploadTokenNode["Secret"].asString();
	if(!ossUploadTokenNode["Expired"].isNull())
		ossUploadToken_.expired = std::stol(ossUploadTokenNode["Expired"].asString());
	if(!ossUploadTokenNode["Path"].isNull())
		ossUploadToken_.path = ossUploadTokenNode["Path"].asString();
	if(!ossUploadTokenNode["EndPoint"].isNull())
		ossUploadToken_.endPoint = ossUploadTokenNode["EndPoint"].asString();
	if(!ossUploadTokenNode["Bucket"].isNull())
		ossUploadToken_.bucket = ossUploadTokenNode["Bucket"].asString();

}

DescribeOssUploadTokenResult::OssUploadToken DescribeOssUploadTokenResult::getOssUploadToken()const
{
	return ossUploadToken_;
}

