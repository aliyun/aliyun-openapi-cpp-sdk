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

#include <alibabacloud/dg/model/DeleteDatabaseAccessPointRequest.h>

using AlibabaCloud::Dg::Model::DeleteDatabaseAccessPointRequest;

DeleteDatabaseAccessPointRequest::DeleteDatabaseAccessPointRequest() :
	RpcServiceRequest("dg", "2019-03-27", "DeleteDatabaseAccessPoint")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDatabaseAccessPointRequest::~DeleteDatabaseAccessPointRequest()
{}

std::string DeleteDatabaseAccessPointRequest::getVpcAZone()const
{
	return vpcAZone_;
}

void DeleteDatabaseAccessPointRequest::setVpcAZone(const std::string& vpcAZone)
{
	vpcAZone_ = vpcAZone;
	setBodyParameter("VpcAZone", vpcAZone);
}

std::string DeleteDatabaseAccessPointRequest::getVpcRegionId()const
{
	return vpcRegionId_;
}

void DeleteDatabaseAccessPointRequest::setVpcRegionId(const std::string& vpcRegionId)
{
	vpcRegionId_ = vpcRegionId;
	setBodyParameter("VpcRegionId", vpcRegionId);
}

std::string DeleteDatabaseAccessPointRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DeleteDatabaseAccessPointRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setBodyParameter("VSwitchId", vSwitchId);
}

std::string DeleteDatabaseAccessPointRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDatabaseAccessPointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setBodyParameter("RegionId", regionId);
}

std::string DeleteDatabaseAccessPointRequest::getVpcId()const
{
	return vpcId_;
}

void DeleteDatabaseAccessPointRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setBodyParameter("VpcId", vpcId);
}

std::string DeleteDatabaseAccessPointRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void DeleteDatabaseAccessPointRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setBodyParameter("DbInstanceId", dbInstanceId);
}

