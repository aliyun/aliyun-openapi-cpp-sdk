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

#include <alibabacloud/paifeaturestore/model/GetDatasourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetDatasourceResult::GetDatasourceResult() :
	ServiceResult()
{}

GetDatasourceResult::GetDatasourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDatasourceResult::~GetDatasourceResult()
{}

void GetDatasourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DatasourceId"].isNull())
		datasourceId_ = value["DatasourceId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Uri"].isNull())
		uri_ = value["Uri"].asString();
	if(!value["Config"].isNull())
		config_ = value["Config"].asString();
	if(!value["WorkspaceId"].isNull())
		workspaceId_ = value["WorkspaceId"].asString();
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();
	if(!value["GmtModifiedTime"].isNull())
		gmtModifiedTime_ = value["GmtModifiedTime"].asString();

}

std::string GetDatasourceResult::getType()const
{
	return type_;
}

std::string GetDatasourceResult::getDatasourceId()const
{
	return datasourceId_;
}

std::string GetDatasourceResult::getConfig()const
{
	return config_;
}

std::string GetDatasourceResult::getWorkspaceId()const
{
	return workspaceId_;
}

std::string GetDatasourceResult::getUri()const
{
	return uri_;
}

std::string GetDatasourceResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

std::string GetDatasourceResult::getGmtModifiedTime()const
{
	return gmtModifiedTime_;
}

std::string GetDatasourceResult::getName()const
{
	return name_;
}

