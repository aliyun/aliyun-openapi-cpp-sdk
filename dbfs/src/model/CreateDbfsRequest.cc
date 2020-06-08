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

#include <alibabacloud/dbfs/model/CreateDbfsRequest.h>

using AlibabaCloud::DBFS::Model::CreateDbfsRequest;

CreateDbfsRequest::CreateDbfsRequest() :
	RpcServiceRequest("dbfs", "2020-02-19", "CreateDbfs")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDbfsRequest::~CreateDbfsRequest()
{}

int CreateDbfsRequest::getSizeG()const
{
	return sizeG_;
}

void CreateDbfsRequest::setSizeG(int sizeG)
{
	sizeG_ = sizeG;
	setParameter("SizeG", std::to_string(sizeG));
}

std::string CreateDbfsRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDbfsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDbfsRequest::getFsName()const
{
	return fsName_;
}

void CreateDbfsRequest::setFsName(const std::string& fsName)
{
	fsName_ = fsName;
	setParameter("FsName", fsName);
}

std::string CreateDbfsRequest::getRegionId()const
{
	return regionId_;
}

void CreateDbfsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDbfsRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDbfsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDbfsRequest::getCategory()const
{
	return category_;
}

void CreateDbfsRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

