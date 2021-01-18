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

#include <alibabacloud/dg/model/CreateDatabaseAccessPointRequest.h>

using AlibabaCloud::Dg::Model::CreateDatabaseAccessPointRequest;

CreateDatabaseAccessPointRequest::CreateDatabaseAccessPointRequest() :
	RpcServiceRequest("dg", "2019-03-27", "CreateDatabaseAccessPoint")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDatabaseAccessPointRequest::~CreateDatabaseAccessPointRequest()
{}

std::string CreateDatabaseAccessPointRequest::getVpcAZone()const
{
	return vpcAZone_;
}

void CreateDatabaseAccessPointRequest::setVpcAZone(const std::string& vpcAZone)
{
	vpcAZone_ = vpcAZone;
	setBodyParameter("VpcAZone", vpcAZone);
}

std::string CreateDatabaseAccessPointRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDatabaseAccessPointRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string CreateDatabaseAccessPointRequest::getRegionId()const
{
	return regionId_;
}

void CreateDatabaseAccessPointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string CreateDatabaseAccessPointRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void CreateDatabaseAccessPointRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setBodyParameter("DbInstanceId", dbInstanceId);
}

std::string CreateDatabaseAccessPointRequest::getVpcRegionId()const
{
	return vpcRegionId_;
}

void CreateDatabaseAccessPointRequest::setVpcRegionId(const std::string& vpcRegionId)
{
	vpcRegionId_ = vpcRegionId;
	setBodyParameter("VpcRegionId", vpcRegionId);
}

std::string CreateDatabaseAccessPointRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateDatabaseAccessPointRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setBodyParameter("VSwitchId", vSwitchId);
}

std::string CreateDatabaseAccessPointRequest::getVpcId()const
{
	return vpcId_;
}

void CreateDatabaseAccessPointRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setBodyParameter("VpcId", vpcId);
}

