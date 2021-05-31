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

#include <alibabacloud/dbfs/model/DbfsRecordRequest.h>

using AlibabaCloud::DBFS::Model::DbfsRecordRequest;

DbfsRecordRequest::DbfsRecordRequest() :
	RpcServiceRequest("dbfs", "2020-04-18", "DbfsRecord")
{
	setMethod(HttpRequest::Method::Post);
}

DbfsRecordRequest::~DbfsRecordRequest()
{}

int DbfsRecordRequest::getPageNumber()const
{
	return pageNumber_;
}

void DbfsRecordRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DbfsRecordRequest::getRegionId()const
{
	return regionId_;
}

void DbfsRecordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DbfsRecordRequest::getPageSize()const
{
	return pageSize_;
}

void DbfsRecordRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DbfsRecordRequest::getBatchStrategyNo()const
{
	return batchStrategyNo_;
}

void DbfsRecordRequest::setBatchStrategyNo(const std::string& batchStrategyNo)
{
	batchStrategyNo_ = batchStrategyNo;
	setParameter("BatchStrategyNo", batchStrategyNo);
}

