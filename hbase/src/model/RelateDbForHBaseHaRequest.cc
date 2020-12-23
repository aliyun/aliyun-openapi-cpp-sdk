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

#include <alibabacloud/hbase/model/RelateDbForHBaseHaRequest.h>

using AlibabaCloud::HBase::Model::RelateDbForHBaseHaRequest;

RelateDbForHBaseHaRequest::RelateDbForHBaseHaRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "RelateDbForHBaseHa")
{
	setMethod(HttpRequest::Method::Post);
}

RelateDbForHBaseHaRequest::~RelateDbForHBaseHaRequest()
{}

std::string RelateDbForHBaseHaRequest::getHaMigrateType()const
{
	return haMigrateType_;
}

void RelateDbForHBaseHaRequest::setHaMigrateType(const std::string& haMigrateType)
{
	haMigrateType_ = haMigrateType;
	setParameter("HaMigrateType", haMigrateType);
}

std::string RelateDbForHBaseHaRequest::getHaActiveHdfsUri()const
{
	return haActiveHdfsUri_;
}

void RelateDbForHBaseHaRequest::setHaActiveHdfsUri(const std::string& haActiveHdfsUri)
{
	haActiveHdfsUri_ = haActiveHdfsUri;
	setParameter("HaActiveHdfsUri", haActiveHdfsUri);
}

std::string RelateDbForHBaseHaRequest::getHaStandbyVersion()const
{
	return haStandbyVersion_;
}

void RelateDbForHBaseHaRequest::setHaStandbyVersion(const std::string& haStandbyVersion)
{
	haStandbyVersion_ = haStandbyVersion;
	setParameter("HaStandbyVersion", haStandbyVersion);
}

bool RelateDbForHBaseHaRequest::getIsStandbyStandard()const
{
	return isStandbyStandard_;
}

void RelateDbForHBaseHaRequest::setIsStandbyStandard(bool isStandbyStandard)
{
	isStandbyStandard_ = isStandbyStandard;
	setParameter("IsStandbyStandard", isStandbyStandard ? "true" : "false");
}

std::string RelateDbForHBaseHaRequest::getHaActiveClusterKey()const
{
	return haActiveClusterKey_;
}

void RelateDbForHBaseHaRequest::setHaActiveClusterKey(const std::string& haActiveClusterKey)
{
	haActiveClusterKey_ = haActiveClusterKey;
	setParameter("HaActiveClusterKey", haActiveClusterKey);
}

std::string RelateDbForHBaseHaRequest::getHaStandbyPassword()const
{
	return haStandbyPassword_;
}

void RelateDbForHBaseHaRequest::setHaStandbyPassword(const std::string& haStandbyPassword)
{
	haStandbyPassword_ = haStandbyPassword;
	setParameter("HaStandbyPassword", haStandbyPassword);
}

std::string RelateDbForHBaseHaRequest::getHaStandbyClusterKey()const
{
	return haStandbyClusterKey_;
}

void RelateDbForHBaseHaRequest::setHaStandbyClusterKey(const std::string& haStandbyClusterKey)
{
	haStandbyClusterKey_ = haStandbyClusterKey;
	setParameter("HaStandbyClusterKey", haStandbyClusterKey);
}

std::string RelateDbForHBaseHaRequest::getHaStandbyHbaseFsDir()const
{
	return haStandbyHbaseFsDir_;
}

void RelateDbForHBaseHaRequest::setHaStandbyHbaseFsDir(const std::string& haStandbyHbaseFsDir)
{
	haStandbyHbaseFsDir_ = haStandbyHbaseFsDir;
	setParameter("HaStandbyHbaseFsDir", haStandbyHbaseFsDir);
}

std::string RelateDbForHBaseHaRequest::getHaActiveHbaseFsDir()const
{
	return haActiveHbaseFsDir_;
}

void RelateDbForHBaseHaRequest::setHaActiveHbaseFsDir(const std::string& haActiveHbaseFsDir)
{
	haActiveHbaseFsDir_ = haActiveHbaseFsDir;
	setParameter("HaActiveHbaseFsDir", haActiveHbaseFsDir);
}

std::string RelateDbForHBaseHaRequest::getHaActiveDBType()const
{
	return haActiveDBType_;
}

void RelateDbForHBaseHaRequest::setHaActiveDBType(const std::string& haActiveDBType)
{
	haActiveDBType_ = haActiveDBType;
	setParameter("HaActiveDBType", haActiveDBType);
}

std::string RelateDbForHBaseHaRequest::getHaActivePassword()const
{
	return haActivePassword_;
}

void RelateDbForHBaseHaRequest::setHaActivePassword(const std::string& haActivePassword)
{
	haActivePassword_ = haActivePassword;
	setParameter("HaActivePassword", haActivePassword);
}

bool RelateDbForHBaseHaRequest::getIsActiveStandard()const
{
	return isActiveStandard_;
}

void RelateDbForHBaseHaRequest::setIsActiveStandard(bool isActiveStandard)
{
	isActiveStandard_ = isActiveStandard;
	setParameter("IsActiveStandard", isActiveStandard ? "true" : "false");
}

std::string RelateDbForHBaseHaRequest::getHaStandbyUser()const
{
	return haStandbyUser_;
}

void RelateDbForHBaseHaRequest::setHaStandbyUser(const std::string& haStandbyUser)
{
	haStandbyUser_ = haStandbyUser;
	setParameter("HaStandbyUser", haStandbyUser);
}

std::string RelateDbForHBaseHaRequest::getHaActive()const
{
	return haActive_;
}

void RelateDbForHBaseHaRequest::setHaActive(const std::string& haActive)
{
	haActive_ = haActive;
	setParameter("HaActive", haActive);
}

std::string RelateDbForHBaseHaRequest::getHaStandby()const
{
	return haStandby_;
}

void RelateDbForHBaseHaRequest::setHaStandby(const std::string& haStandby)
{
	haStandby_ = haStandby;
	setParameter("HaStandby", haStandby);
}

std::string RelateDbForHBaseHaRequest::getHaStandbyHdfsUri()const
{
	return haStandbyHdfsUri_;
}

void RelateDbForHBaseHaRequest::setHaStandbyHdfsUri(const std::string& haStandbyHdfsUri)
{
	haStandbyHdfsUri_ = haStandbyHdfsUri;
	setParameter("HaStandbyHdfsUri", haStandbyHdfsUri);
}

std::string RelateDbForHBaseHaRequest::getHaActiveVersion()const
{
	return haActiveVersion_;
}

void RelateDbForHBaseHaRequest::setHaActiveVersion(const std::string& haActiveVersion)
{
	haActiveVersion_ = haActiveVersion;
	setParameter("HaActiveVersion", haActiveVersion);
}

std::string RelateDbForHBaseHaRequest::getClusterId()const
{
	return clusterId_;
}

void RelateDbForHBaseHaRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string RelateDbForHBaseHaRequest::getHaStandbyDBType()const
{
	return haStandbyDBType_;
}

void RelateDbForHBaseHaRequest::setHaStandbyDBType(const std::string& haStandbyDBType)
{
	haStandbyDBType_ = haStandbyDBType;
	setParameter("HaStandbyDBType", haStandbyDBType);
}

std::string RelateDbForHBaseHaRequest::getHaTables()const
{
	return haTables_;
}

void RelateDbForHBaseHaRequest::setHaTables(const std::string& haTables)
{
	haTables_ = haTables;
	setParameter("HaTables", haTables);
}

std::string RelateDbForHBaseHaRequest::getHaActiveUser()const
{
	return haActiveUser_;
}

void RelateDbForHBaseHaRequest::setHaActiveUser(const std::string& haActiveUser)
{
	haActiveUser_ = haActiveUser;
	setParameter("HaActiveUser", haActiveUser);
}

