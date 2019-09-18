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

#include <alibabacloud/green/model/DescribeWebsiteVerifyInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

DescribeWebsiteVerifyInfoResult::DescribeWebsiteVerifyInfoResult() :
	ServiceResult()
{}

DescribeWebsiteVerifyInfoResult::DescribeWebsiteVerifyInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebsiteVerifyInfoResult::~DescribeWebsiteVerifyInfoResult()
{}

void DescribeWebsiteVerifyInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Cname"].isNull())
		cname_ = value["Cname"].asString();
	if(!value["HostFile"].isNull())
		hostFile_ = value["HostFile"].asString();
	if(!value["IndexPage"].isNull())
		indexPage_ = value["IndexPage"].asString();
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["VerifyMethod"].isNull())
		verifyMethod_ = value["VerifyMethod"].asString();
	if(!value["Protocol"].isNull())
		protocol_ = value["Protocol"].asString();

}

std::string DescribeWebsiteVerifyInfoResult::getVerifyMethod()const
{
	return verifyMethod_;
}

std::string DescribeWebsiteVerifyInfoResult::getDomain()const
{
	return domain_;
}

std::string DescribeWebsiteVerifyInfoResult::getProtocol()const
{
	return protocol_;
}

std::string DescribeWebsiteVerifyInfoResult::getCname()const
{
	return cname_;
}

std::string DescribeWebsiteVerifyInfoResult::getHostFile()const
{
	return hostFile_;
}

std::string DescribeWebsiteVerifyInfoResult::getIndexPage()const
{
	return indexPage_;
}

