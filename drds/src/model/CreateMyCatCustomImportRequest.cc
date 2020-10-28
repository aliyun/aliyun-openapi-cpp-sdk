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

#include <alibabacloud/drds/model/CreateMyCatCustomImportRequest.h>

using AlibabaCloud::Drds::Model::CreateMyCatCustomImportRequest;

CreateMyCatCustomImportRequest::CreateMyCatCustomImportRequest() :
	RpcServiceRequest("drds", "2019-01-23", "CreateMyCatCustomImport")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMyCatCustomImportRequest::~CreateMyCatCustomImportRequest()
{}

int CreateMyCatCustomImportRequest::getDstPort()const
{
	return dstPort_;
}

void CreateMyCatCustomImportRequest::setDstPort(int dstPort)
{
	dstPort_ = dstPort;
	setParameter("DstPort", std::to_string(dstPort));
}

std::string CreateMyCatCustomImportRequest::getTaskName()const
{
	return taskName_;
}

void CreateMyCatCustomImportRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setParameter("TaskName", taskName);
}

std::string CreateMyCatCustomImportRequest::getSchemaUrl()const
{
	return schemaUrl_;
}

void CreateMyCatCustomImportRequest::setSchemaUrl(const std::string& schemaUrl)
{
	schemaUrl_ = schemaUrl;
	setParameter("SchemaUrl", schemaUrl);
}

std::string CreateMyCatCustomImportRequest::getRegionId()const
{
	return regionId_;
}

void CreateMyCatCustomImportRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateMyCatCustomImportRequest::getDstUser()const
{
	return dstUser_;
}

void CreateMyCatCustomImportRequest::setDstUser(const std::string& dstUser)
{
	dstUser_ = dstUser;
	setParameter("DstUser", dstUser);
}

std::string CreateMyCatCustomImportRequest::getDstDbNme()const
{
	return dstDbNme_;
}

void CreateMyCatCustomImportRequest::setDstDbNme(const std::string& dstDbNme)
{
	dstDbNme_ = dstDbNme;
	setParameter("DstDbNme", dstDbNme);
}

std::string CreateMyCatCustomImportRequest::getTableMap()const
{
	return tableMap_;
}

void CreateMyCatCustomImportRequest::setTableMap(const std::string& tableMap)
{
	tableMap_ = tableMap;
	setParameter("TableMap", tableMap);
}

std::string CreateMyCatCustomImportRequest::getImportDb()const
{
	return importDb_;
}

void CreateMyCatCustomImportRequest::setImportDb(const std::string& importDb)
{
	importDb_ = importDb;
	setParameter("ImportDb", importDb);
}

std::string CreateMyCatCustomImportRequest::getDstPwd()const
{
	return dstPwd_;
}

void CreateMyCatCustomImportRequest::setDstPwd(const std::string& dstPwd)
{
	dstPwd_ = dstPwd;
	setParameter("DstPwd", dstPwd);
}

std::string CreateMyCatCustomImportRequest::getRuleUrl()const
{
	return ruleUrl_;
}

void CreateMyCatCustomImportRequest::setRuleUrl(const std::string& ruleUrl)
{
	ruleUrl_ = ruleUrl;
	setParameter("RuleUrl", ruleUrl);
}

std::string CreateMyCatCustomImportRequest::getDstDrdsInstanceId()const
{
	return dstDrdsInstanceId_;
}

void CreateMyCatCustomImportRequest::setDstDrdsInstanceId(const std::string& dstDrdsInstanceId)
{
	dstDrdsInstanceId_ = dstDrdsInstanceId;
	setParameter("DstDrdsInstanceId", dstDrdsInstanceId);
}

