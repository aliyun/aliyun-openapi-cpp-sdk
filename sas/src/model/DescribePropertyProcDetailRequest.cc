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

#include <alibabacloud/sas/model/DescribePropertyProcDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyProcDetailRequest;

DescribePropertyProcDetailRequest::DescribePropertyProcDetailRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribePropertyProcDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePropertyProcDetailRequest::~DescribePropertyProcDetailRequest()
{}

std::string DescribePropertyProcDetailRequest::getRemark()const
{
	return remark_;
}

void DescribePropertyProcDetailRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string DescribePropertyProcDetailRequest::getUuid()const
{
	return uuid_;
}

void DescribePropertyProcDetailRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string DescribePropertyProcDetailRequest::getCmdline()const
{
	return cmdline_;
}

void DescribePropertyProcDetailRequest::setCmdline(const std::string& cmdline)
{
	cmdline_ = cmdline;
	setParameter("Cmdline", cmdline);
}

std::string DescribePropertyProcDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePropertyProcDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribePropertyProcDetailRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePropertyProcDetailRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribePropertyProcDetailRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePropertyProcDetailRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribePropertyProcDetailRequest::getName()const
{
	return name_;
}

void DescribePropertyProcDetailRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribePropertyProcDetailRequest::getUser()const
{
	return user_;
}

void DescribePropertyProcDetailRequest::setUser(const std::string& user)
{
	user_ = user;
	setParameter("User", user);
}

