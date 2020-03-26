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

#include <alibabacloud/sddp/model/CreateDataLimitRequest.h>

using AlibabaCloud::Sddp::Model::CreateDataLimitRequest;

CreateDataLimitRequest::CreateDataLimitRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "CreateDataLimit")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDataLimitRequest::~CreateDataLimitRequest()
{}

std::string CreateDataLimitRequest::getParentId()const
{
	return parentId_;
}

void CreateDataLimitRequest::setParentId(const std::string& parentId)
{
	parentId_ = parentId;
	setParameter("ParentId", parentId);
}

std::string CreateDataLimitRequest::getPassword()const
{
	return password_;
}

void CreateDataLimitRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

bool CreateDataLimitRequest::getBatchCreate()const
{
	return batchCreate_;
}

void CreateDataLimitRequest::setBatchCreate(bool batchCreate)
{
	batchCreate_ = batchCreate;
	setParameter("BatchCreate", batchCreate ? "true" : "false");
}

std::string CreateDataLimitRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateDataLimitRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateDataLimitRequest::getDataLimitList()const
{
	return dataLimitList_;
}

void CreateDataLimitRequest::setDataLimitList(const std::string& dataLimitList)
{
	dataLimitList_ = dataLimitList;
	setParameter("DataLimitList", dataLimitList);
}

std::string CreateDataLimitRequest::getLang()const
{
	return lang_;
}

void CreateDataLimitRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateDataLimitRequest::getServiceRegionId()const
{
	return serviceRegionId_;
}

void CreateDataLimitRequest::setServiceRegionId(const std::string& serviceRegionId)
{
	serviceRegionId_ = serviceRegionId;
	setParameter("ServiceRegionId", serviceRegionId);
}

std::string CreateDataLimitRequest::getEngineType()const
{
	return engineType_;
}

void CreateDataLimitRequest::setEngineType(const std::string& engineType)
{
	engineType_ = engineType;
	setParameter("EngineType", engineType);
}

int CreateDataLimitRequest::getAuditStatus()const
{
	return auditStatus_;
}

void CreateDataLimitRequest::setAuditStatus(int auditStatus)
{
	auditStatus_ = auditStatus;
	setParameter("AuditStatus", std::to_string(auditStatus));
}

int CreateDataLimitRequest::getAutoScan()const
{
	return autoScan_;
}

void CreateDataLimitRequest::setAutoScan(int autoScan)
{
	autoScan_ = autoScan;
	setParameter("AutoScan", std::to_string(autoScan));
}

int CreateDataLimitRequest::getLogStoreDay()const
{
	return logStoreDay_;
}

void CreateDataLimitRequest::setLogStoreDay(int logStoreDay)
{
	logStoreDay_ = logStoreDay;
	setParameter("LogStoreDay", std::to_string(logStoreDay));
}

int CreateDataLimitRequest::getResourceType()const
{
	return resourceType_;
}

void CreateDataLimitRequest::setResourceType(int resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", std::to_string(resourceType));
}

std::string CreateDataLimitRequest::getConnector()const
{
	return connector_;
}

void CreateDataLimitRequest::setConnector(const std::string& connector)
{
	connector_ = connector;
	setParameter("Connector", connector);
}

int CreateDataLimitRequest::getPort()const
{
	return port_;
}

void CreateDataLimitRequest::setPort(int port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

std::string CreateDataLimitRequest::getUserName()const
{
	return userName_;
}

void CreateDataLimitRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

