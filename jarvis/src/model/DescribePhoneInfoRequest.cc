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

#include <alibabacloud/jarvis/model/DescribePhoneInfoRequest.h>

using AlibabaCloud::Jarvis::Model::DescribePhoneInfoRequest;

DescribePhoneInfoRequest::DescribePhoneInfoRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribePhoneInfo")
{}

DescribePhoneInfoRequest::~DescribePhoneInfoRequest()
{}

std::string DescribePhoneInfoRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePhoneInfoRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribePhoneInfoRequest::getPhoneNum()const
{
	return phoneNum_;
}

void DescribePhoneInfoRequest::setPhoneNum(const std::string& phoneNum)
{
	phoneNum_ = phoneNum;
	setCoreParameter("PhoneNum", phoneNum);
}

std::string DescribePhoneInfoRequest::getLang()const
{
	return lang_;
}

void DescribePhoneInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribePhoneInfoRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribePhoneInfoRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

