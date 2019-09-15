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

#include <alibabacloud/aegis/model/DescribeScreenOssUploadInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeScreenOssUploadInfoResult::DescribeScreenOssUploadInfoResult() :
	ServiceResult()
{}

DescribeScreenOssUploadInfoResult::DescribeScreenOssUploadInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScreenOssUploadInfoResult::~DescribeScreenOssUploadInfoResult()
{}

void DescribeScreenOssUploadInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["AccessId"].isNull())
		accessId_ = value["AccessId"].asString();
	if(!value["Policy"].isNull())
		policy_ = value["Policy"].asString();
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["Signature"].isNull())
		signature_ = value["Signature"].asString();
	if(!value["Expire"].isNull())
		expire_ = std::stoi(value["Expire"].asString());
	if(!value["Key"].isNull())
		key_ = value["Key"].asString();

}

std::string DescribeScreenOssUploadInfoResult::getPolicy()const
{
	return policy_;
}

int DescribeScreenOssUploadInfoResult::getExpire()const
{
	return expire_;
}

std::string DescribeScreenOssUploadInfoResult::getAccessId()const
{
	return accessId_;
}

std::string DescribeScreenOssUploadInfoResult::getSignature()const
{
	return signature_;
}

std::string DescribeScreenOssUploadInfoResult::getHost()const
{
	return host_;
}

bool DescribeScreenOssUploadInfoResult::getSuccess()const
{
	return success_;
}

std::string DescribeScreenOssUploadInfoResult::getKey()const
{
	return key_;
}

