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

#include <alibabacloud/green/model/DescribeImageUploadInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeImageUploadInfoResult::DescribeImageUploadInfoResult() :
	ServiceResult()
{}

DescribeImageUploadInfoResult::DescribeImageUploadInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageUploadInfoResult::~DescribeImageUploadInfoResult()
{}

void DescribeImageUploadInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Accessid"].isNull())
		accessid_ = value["Accessid"].asString();
	if(!value["Policy"].isNull())
		policy_ = value["Policy"].asString();
	if(!value["Signature"].isNull())
		signature_ = value["Signature"].asString();
	if(!value["Folder"].isNull())
		folder_ = value["Folder"].asString();
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["Expire"].isNull())
		expire_ = std::stoi(value["Expire"].asString());

}

std::string DescribeImageUploadInfoResult::getPolicy()const
{
	return policy_;
}

int DescribeImageUploadInfoResult::getExpire()const
{
	return expire_;
}

std::string DescribeImageUploadInfoResult::getAccessid()const
{
	return accessid_;
}

std::string DescribeImageUploadInfoResult::getSignature()const
{
	return signature_;
}

std::string DescribeImageUploadInfoResult::getHost()const
{
	return host_;
}

std::string DescribeImageUploadInfoResult::getFolder()const
{
	return folder_;
}

