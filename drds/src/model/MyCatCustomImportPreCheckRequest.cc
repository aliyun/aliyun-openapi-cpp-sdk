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

#include <alibabacloud/drds/model/MyCatCustomImportPreCheckRequest.h>

using AlibabaCloud::Drds::Model::MyCatCustomImportPreCheckRequest;

MyCatCustomImportPreCheckRequest::MyCatCustomImportPreCheckRequest() :
	RpcServiceRequest("drds", "2019-01-23", "MyCatCustomImportPreCheck")
{
	setMethod(HttpRequest::Method::Post);
}

MyCatCustomImportPreCheckRequest::~MyCatCustomImportPreCheckRequest()
{}

int MyCatCustomImportPreCheckRequest::getDstPort()const
{
	return dstPort_;
}

void MyCatCustomImportPreCheckRequest::setDstPort(int dstPort)
{
	dstPort_ = dstPort;
	setParameter("DstPort", std::to_string(dstPort));
}

std::string MyCatCustomImportPreCheckRequest::getTaskName()const
{
	return taskName_;
}

void MyCatCustomImportPreCheckRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string MyCatCustomImportPreCheckRequest::getSchemaUrl()const
{
	return schemaUrl_;
}

void MyCatCustomImportPreCheckRequest::setSchemaUrl(const std::string& schemaUrl)
{
	schemaUrl_ = schemaUrl;
	setParameter("SchemaUrl", schemaUrl);
}

std::string MyCatCustomImportPreCheckRequest::getRegionId()const
{
	return regionId_;
}

void MyCatCustomImportPreCheckRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string MyCatCustomImportPreCheckRequest::getDstUser()const
{
	return dstUser_;
}

void MyCatCustomImportPreCheckRequest::setDstUser(const std::string& dstUser)
{
	dstUser_ = dstUser;
	setParameter("DstUser", dstUser);
}

std::string MyCatCustomImportPreCheckRequest::getDstDbNme()const
{
	return dstDbNme_;
}

void MyCatCustomImportPreCheckRequest::setDstDbNme(const std::string& dstDbNme)
{
	dstDbNme_ = dstDbNme;
	setParameter("DstDbNme", dstDbNme);
}

std::string MyCatCustomImportPreCheckRequest::getTableMap()const
{
	return tableMap_;
}

void MyCatCustomImportPreCheckRequest::setTableMap(const std::string& tableMap)
{
	tableMap_ = tableMap;
	setParameter("TableMap", tableMap);
}

std::string MyCatCustomImportPreCheckRequest::getImportDb()const
{
	return importDb_;
}

void MyCatCustomImportPreCheckRequest::setImportDb(const std::string& importDb)
{
	importDb_ = importDb;
	setParameter("ImportDb", importDb);
}

std::string MyCatCustomImportPreCheckRequest::getDstPwd()const
{
	return dstPwd_;
}

void MyCatCustomImportPreCheckRequest::setDstPwd(const std::string& dstPwd)
{
	dstPwd_ = dstPwd;
	setParameter("DstPwd", dstPwd);
}

std::string MyCatCustomImportPreCheckRequest::getRuleUrl()const
{
	return ruleUrl_;
}

void MyCatCustomImportPreCheckRequest::setRuleUrl(const std::string& ruleUrl)
{
	ruleUrl_ = ruleUrl;
	setParameter("RuleUrl", ruleUrl);
}

std::string MyCatCustomImportPreCheckRequest::getDstDrdsInstanceId()const
{
	return dstDrdsInstanceId_;
}

void MyCatCustomImportPreCheckRequest::setDstDrdsInstanceId(const std::string& dstDrdsInstanceId)
{
	dstDrdsInstanceId_ = dstDrdsInstanceId;
	setParameter("DstDrdsInstanceId", dstDrdsInstanceId);
}

