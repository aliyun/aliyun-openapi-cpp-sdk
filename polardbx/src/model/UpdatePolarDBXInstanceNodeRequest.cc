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

#include <alibabacloud/polardbx/model/UpdatePolarDBXInstanceNodeRequest.h>

using AlibabaCloud::Polardbx::Model::UpdatePolarDBXInstanceNodeRequest;

UpdatePolarDBXInstanceNodeRequest::UpdatePolarDBXInstanceNodeRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "UpdatePolarDBXInstanceNode")
{
	setMethod(HttpRequest::Method::Post);
}

UpdatePolarDBXInstanceNodeRequest::~UpdatePolarDBXInstanceNodeRequest()
{}

std::string UpdatePolarDBXInstanceNodeRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void UpdatePolarDBXInstanceNodeRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

std::string UpdatePolarDBXInstanceNodeRequest::getClientToken()const
{
	return clientToken_;
}

void UpdatePolarDBXInstanceNodeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdatePolarDBXInstanceNodeRequest::getRegionId()const
{
	return regionId_;
}

void UpdatePolarDBXInstanceNodeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdatePolarDBXInstanceNodeRequest::getDbInstanceNodeCount()const
{
	return dbInstanceNodeCount_;
}

void UpdatePolarDBXInstanceNodeRequest::setDbInstanceNodeCount(const std::string& dbInstanceNodeCount)
{
	dbInstanceNodeCount_ = dbInstanceNodeCount;
	setParameter("DbInstanceNodeCount", dbInstanceNodeCount);
}

