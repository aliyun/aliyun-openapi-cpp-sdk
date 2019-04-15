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

#include <alibabacloud/aegis/model/DescribeWebLockMachineListRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWebLockMachineListRequest;

DescribeWebLockMachineListRequest::DescribeWebLockMachineListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWebLockMachineList")
{}

DescribeWebLockMachineListRequest::~DescribeWebLockMachineListRequest()
{}

std::string DescribeWebLockMachineListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebLockMachineListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeWebLockMachineListRequest::getLang()const
{
	return lang_;
}

void DescribeWebLockMachineListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

