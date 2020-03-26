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

#include <alibabacloud/sas/model/DescribePropertySoftwareDetailRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertySoftwareDetailRequest;

DescribePropertySoftwareDetailRequest::DescribePropertySoftwareDetailRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribePropertySoftwareDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePropertySoftwareDetailRequest::~DescribePropertySoftwareDetailRequest()
{}

std::string DescribePropertySoftwareDetailRequest::getSoftwareVersion()const
{
	return softwareVersion_;
}

void DescribePropertySoftwareDetailRequest::setSoftwareVersion(const std::string& softwareVersion)
{
	softwareVersion_ = softwareVersion;
	setParameter("SoftwareVersion", softwareVersion);
}

std::string DescribePropertySoftwareDetailRequest::getRemark()const
{
	return remark_;
}

void DescribePropertySoftwareDetailRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string DescribePropertySoftwareDetailRequest::getUuid()const
{
	return uuid_;
}

void DescribePropertySoftwareDetailRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string DescribePropertySoftwareDetailRequest::getPath()const
{
	return path_;
}

void DescribePropertySoftwareDetailRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

std::string DescribePropertySoftwareDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePropertySoftwareDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribePropertySoftwareDetailRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePropertySoftwareDetailRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribePropertySoftwareDetailRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePropertySoftwareDetailRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribePropertySoftwareDetailRequest::getName()const
{
	return name_;
}

void DescribePropertySoftwareDetailRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

