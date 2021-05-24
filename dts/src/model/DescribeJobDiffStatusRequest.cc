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

#include <alibabacloud/dts/model/DescribeJobDiffStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribeJobDiffStatusRequest;

DescribeJobDiffStatusRequest::DescribeJobDiffStatusRequest() :
	RpcServiceRequest("dts", "2020-01-01", "DescribeJobDiffStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeJobDiffStatusRequest::~DescribeJobDiffStatusRequest()
{}

std::string DescribeJobDiffStatusRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeJobDiffStatusRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string DescribeJobDiffStatusRequest::getTbName()const
{
	return tbName_;
}

void DescribeJobDiffStatusRequest::setTbName(const std::string& tbName)
{
	tbName_ = tbName;
	setParameter("TbName", tbName);
}

std::string DescribeJobDiffStatusRequest::getDbName()const
{
	return dbName_;
}

void DescribeJobDiffStatusRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string DescribeJobDiffStatusRequest::getRegionId()const
{
	return regionId_;
}

void DescribeJobDiffStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeJobDiffStatusRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeJobDiffStatusRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

std::string DescribeJobDiffStatusRequest::getDtsJobId()const
{
	return dtsJobId_;
}

void DescribeJobDiffStatusRequest::setDtsJobId(const std::string& dtsJobId)
{
	dtsJobId_ = dtsJobId;
	setParameter("DtsJobId", dtsJobId);
}

