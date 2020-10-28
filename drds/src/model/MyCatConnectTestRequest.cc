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

#include <alibabacloud/drds/model/MyCatConnectTestRequest.h>

using AlibabaCloud::Drds::Model::MyCatConnectTestRequest;

MyCatConnectTestRequest::MyCatConnectTestRequest() :
	RpcServiceRequest("drds", "2019-01-23", "MyCatConnectTest")
{
	setMethod(HttpRequest::Method::Post);
}

MyCatConnectTestRequest::~MyCatConnectTestRequest()
{}

std::string MyCatConnectTestRequest::getSchemaUrl()const
{
	return schemaUrl_;
}

void MyCatConnectTestRequest::setSchemaUrl(const std::string& schemaUrl)
{
	schemaUrl_ = schemaUrl;
	setParameter("SchemaUrl", schemaUrl);
}

std::string MyCatConnectTestRequest::getDbName()const
{
	return dbName_;
}

void MyCatConnectTestRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string MyCatConnectTestRequest::getRegionId()const
{
	return regionId_;
}

void MyCatConnectTestRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string MyCatConnectTestRequest::getRuleUrl()const
{
	return ruleUrl_;
}

void MyCatConnectTestRequest::setRuleUrl(const std::string& ruleUrl)
{
	ruleUrl_ = ruleUrl;
	setParameter("RuleUrl", ruleUrl);
}

