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

#include <alibabacloud/paifeaturestore/model/GetProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetProjectResult::GetProjectResult() :
	ServiceResult()
{}

GetProjectResult::GetProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectResult::~GetProjectResult()
{}

void GetProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["OfflineDatasourceType"].isNull())
		offlineDatasourceType_ = value["OfflineDatasourceType"].asString();
	if(!value["OfflineDatasourceId"].isNull())
		offlineDatasourceId_ = value["OfflineDatasourceId"].asString();
	if(!value["OfflineDatasourceName"].isNull())
		offlineDatasourceName_ = value["OfflineDatasourceName"].asString();
	if(!value["OnlineDatasourceType"].isNull())
		onlineDatasourceType_ = value["OnlineDatasourceType"].asString();
	if(!value["OnlineDatasourceId"].isNull())
		onlineDatasourceId_ = value["OnlineDatasourceId"].asString();
	if(!value["OnlineDatasourceName"].isNull())
		onlineDatasourceName_ = value["OnlineDatasourceName"].asString();
	if(!value["OfflineLifecycle"].isNull())
		offlineLifecycle_ = std::stoi(value["OfflineLifecycle"].asString());
	if(!value["FeatureEntityCount"].isNull())
		featureEntityCount_ = std::stoi(value["FeatureEntityCount"].asString());
	if(!value["FeatureViewCount"].isNull())
		featureViewCount_ = std::stoi(value["FeatureViewCount"].asString());
	if(!value["ModelCount"].isNull())
		modelCount_ = std::stoi(value["ModelCount"].asString());
	if(!value["Owner"].isNull())
		owner_ = value["Owner"].asString();
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();
	if(!value["GmtModifiedTime"].isNull())
		gmtModifiedTime_ = value["GmtModifiedTime"].asString();

}

std::string GetProjectResult::getOnlineDatasourceType()const
{
	return onlineDatasourceType_;
}

std::string GetProjectResult::getOwner()const
{
	return owner_;
}

std::string GetProjectResult::getDescription()const
{
	return description_;
}

std::string GetProjectResult::getOfflineDatasourceName()const
{
	return offlineDatasourceName_;
}

std::string GetProjectResult::getGmtModifiedTime()const
{
	return gmtModifiedTime_;
}

std::string GetProjectResult::getName()const
{
	return name_;
}

std::string GetProjectResult::getOfflineDatasourceId()const
{
	return offlineDatasourceId_;
}

std::string GetProjectResult::getOnlineDatasourceName()const
{
	return onlineDatasourceName_;
}

int GetProjectResult::getFeatureViewCount()const
{
	return featureViewCount_;
}

int GetProjectResult::getOfflineLifecycle()const
{
	return offlineLifecycle_;
}

int GetProjectResult::getModelCount()const
{
	return modelCount_;
}

std::string GetProjectResult::getOfflineDatasourceType()const
{
	return offlineDatasourceType_;
}

int GetProjectResult::getFeatureEntityCount()const
{
	return featureEntityCount_;
}

std::string GetProjectResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

std::string GetProjectResult::getOnlineDatasourceId()const
{
	return onlineDatasourceId_;
}

