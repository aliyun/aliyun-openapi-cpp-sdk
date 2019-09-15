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

#include <alibabacloud/aegis/model/CreateOrUpdateDataSourceRequest.h>

using AlibabaCloud::Aegis::Model::CreateOrUpdateDataSourceRequest;

CreateOrUpdateDataSourceRequest::CreateOrUpdateDataSourceRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateOrUpdateDataSource")
{}

CreateOrUpdateDataSourceRequest::~CreateOrUpdateDataSourceRequest()
{}

std::string CreateOrUpdateDataSourceRequest::getDatasourceDescription()const
{
	return datasourceDescription_;
}

void CreateOrUpdateDataSourceRequest::setDatasourceDescription(const std::string& datasourceDescription)
{
	datasourceDescription_ = datasourceDescription;
	setCoreParameter("DatasourceDescription", datasourceDescription);
}

std::string CreateOrUpdateDataSourceRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrUpdateDataSourceRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateOrUpdateDataSourceRequest::getProjectName()const
{
	return projectName_;
}

void CreateOrUpdateDataSourceRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string CreateOrUpdateDataSourceRequest::getConfigType()const
{
	return configType_;
}

void CreateOrUpdateDataSourceRequest::setConfigType(const std::string& configType)
{
	configType_ = configType;
	setCoreParameter("ConfigType", configType);
}

std::string CreateOrUpdateDataSourceRequest::getLogStoreName()const
{
	return logStoreName_;
}

void CreateOrUpdateDataSourceRequest::setLogStoreName(const std::string& logStoreName)
{
	logStoreName_ = logStoreName;
	setCoreParameter("LogStoreName", logStoreName);
}

std::string CreateOrUpdateDataSourceRequest::getRegionNo()const
{
	return regionNo_;
}

void CreateOrUpdateDataSourceRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setCoreParameter("RegionNo", regionNo);
}

std::string CreateOrUpdateDataSourceRequest::getFields()const
{
	return fields_;
}

void CreateOrUpdateDataSourceRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

