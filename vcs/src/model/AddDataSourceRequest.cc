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

#include <alibabacloud/vcs/model/AddDataSourceRequest.h>

using AlibabaCloud::Vcs::Model::AddDataSourceRequest;

AddDataSourceRequest::AddDataSourceRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "AddDataSource")
{
	setMethod(HttpRequest::Method::Post);
}

AddDataSourceRequest::~AddDataSourceRequest()
{}

std::string AddDataSourceRequest::getDataSourceType()const
{
	return dataSourceType_;
}

void AddDataSourceRequest::setDataSourceType(const std::string& dataSourceType)
{
	dataSourceType_ = dataSourceType;
	setBodyParameter("DataSourceType", dataSourceType);
}

std::string AddDataSourceRequest::getCorpId()const
{
	return corpId_;
}

void AddDataSourceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string AddDataSourceRequest::getDescription()const
{
	return description_;
}

void AddDataSourceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string AddDataSourceRequest::getDataSourceName()const
{
	return dataSourceName_;
}

void AddDataSourceRequest::setDataSourceName(const std::string& dataSourceName)
{
	dataSourceName_ = dataSourceName;
	setBodyParameter("DataSourceName", dataSourceName);
}

int AddDataSourceRequest::getFileRetentionDays()const
{
	return fileRetentionDays_;
}

void AddDataSourceRequest::setFileRetentionDays(int fileRetentionDays)
{
	fileRetentionDays_ = fileRetentionDays;
	setBodyParameter("FileRetentionDays", std::to_string(fileRetentionDays));
}

