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

#include <alibabacloud/dataworks-public/model/CreateRealTimeProcessRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateRealTimeProcessRequest;

CreateRealTimeProcessRequest::CreateRealTimeProcessRequest() :
	RpcServiceRequest("dataworks-public", "2018-06-01", "CreateRealTimeProcess")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRealTimeProcessRequest::~CreateRealTimeProcessRequest()
{}

std::string CreateRealTimeProcessRequest::getUid()const
{
	return uid_;
}

void CreateRealTimeProcessRequest::setUid(const std::string& uid)
{
	uid_ = uid;
	setParameter("Uid", uid);
}

std::string CreateRealTimeProcessRequest::getTables()const
{
	return tables_;
}

void CreateRealTimeProcessRequest::setTables(const std::string& tables)
{
	tables_ = tables;
	setParameter("Tables", tables);
}

std::string CreateRealTimeProcessRequest::getJobConfig()const
{
	return jobConfig_;
}

void CreateRealTimeProcessRequest::setJobConfig(const std::string& jobConfig)
{
	jobConfig_ = jobConfig;
	setParameter("JobConfig", jobConfig);
}

std::string CreateRealTimeProcessRequest::getDataSource()const
{
	return dataSource_;
}

void CreateRealTimeProcessRequest::setDataSource(const std::string& dataSource)
{
	dataSource_ = dataSource;
	setParameter("DataSource", dataSource);
}

bool CreateRealTimeProcessRequest::getCreateResGroup()const
{
	return createResGroup_;
}

void CreateRealTimeProcessRequest::setCreateResGroup(bool createResGroup)
{
	createResGroup_ = createResGroup;
	setParameter("CreateResGroup", createResGroup ? "true" : "false");
}

std::string CreateRealTimeProcessRequest::getDataworksVersion()const
{
	return dataworksVersion_;
}

void CreateRealTimeProcessRequest::setDataworksVersion(const std::string& dataworksVersion)
{
	dataworksVersion_ = dataworksVersion;
	setParameter("DataworksVersion", dataworksVersion);
}

std::string CreateRealTimeProcessRequest::getResourceSpec()const
{
	return resourceSpec_;
}

void CreateRealTimeProcessRequest::setResourceSpec(const std::string& resourceSpec)
{
	resourceSpec_ = resourceSpec;
	setParameter("ResourceSpec", resourceSpec);
}

std::string CreateRealTimeProcessRequest::getTableRule()const
{
	return tableRule_;
}

void CreateRealTimeProcessRequest::setTableRule(const std::string& tableRule)
{
	tableRule_ = tableRule;
	setParameter("TableRule", tableRule);
}

