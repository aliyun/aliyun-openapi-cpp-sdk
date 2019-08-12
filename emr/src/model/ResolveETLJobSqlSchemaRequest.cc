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

#include <alibabacloud/emr/model/ResolveETLJobSqlSchemaRequest.h>

using AlibabaCloud::Emr::Model::ResolveETLJobSqlSchemaRequest;

ResolveETLJobSqlSchemaRequest::ResolveETLJobSqlSchemaRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ResolveETLJobSqlSchema")
{}

ResolveETLJobSqlSchemaRequest::~ResolveETLJobSqlSchemaRequest()
{}

std::string ResolveETLJobSqlSchemaRequest::getStageName()const
{
	return stageName_;
}

void ResolveETLJobSqlSchemaRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", stageName);
}

long ResolveETLJobSqlSchemaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResolveETLJobSqlSchemaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ResolveETLJobSqlSchemaRequest::getRegionId()const
{
	return regionId_;
}

void ResolveETLJobSqlSchemaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ResolveETLJobSqlSchemaRequest::getEtlJobId()const
{
	return etlJobId_;
}

void ResolveETLJobSqlSchemaRequest::setEtlJobId(const std::string& etlJobId)
{
	etlJobId_ = etlJobId;
	setCoreParameter("EtlJobId", etlJobId);
}

std::string ResolveETLJobSqlSchemaRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ResolveETLJobSqlSchemaRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", dataSourceId);
}

std::string ResolveETLJobSqlSchemaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResolveETLJobSqlSchemaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ResolveETLJobSqlSchemaRequest::getSql()const
{
	return sql_;
}

void ResolveETLJobSqlSchemaRequest::setSql(const std::string& sql)
{
	sql_ = sql;
	setCoreParameter("Sql", sql);
}

