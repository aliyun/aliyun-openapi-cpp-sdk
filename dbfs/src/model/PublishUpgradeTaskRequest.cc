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

#include <alibabacloud/dbfs/model/PublishUpgradeTaskRequest.h>

using AlibabaCloud::DBFS::Model::PublishUpgradeTaskRequest;

PublishUpgradeTaskRequest::PublishUpgradeTaskRequest() :
	RpcServiceRequest("dbfs", "2020-04-18", "PublishUpgradeTask")
{
	setMethod(HttpRequest::Method::Post);
}

PublishUpgradeTaskRequest::~PublishUpgradeTaskRequest()
{}

int PublishUpgradeTaskRequest::getPageNumber()const
{
	return pageNumber_;
}

void PublishUpgradeTaskRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string PublishUpgradeTaskRequest::getBatchStrategyList()const
{
	return batchStrategyList_;
}

void PublishUpgradeTaskRequest::setBatchStrategyList(const std::string& batchStrategyList)
{
	batchStrategyList_ = batchStrategyList;
	setParameter("BatchStrategyList", batchStrategyList);
}

std::string PublishUpgradeTaskRequest::getRegionId()const
{
	return regionId_;
}

void PublishUpgradeTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int PublishUpgradeTaskRequest::getPageSize()const
{
	return pageSize_;
}

void PublishUpgradeTaskRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

