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

#include <alibabacloud/drds/model/DatalinkReplicationPrecheckRequest.h>

using AlibabaCloud::Drds::Model::DatalinkReplicationPrecheckRequest;

DatalinkReplicationPrecheckRequest::DatalinkReplicationPrecheckRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DatalinkReplicationPrecheck")
{
	setMethod(HttpRequest::Method::Post);
}

DatalinkReplicationPrecheckRequest::~DatalinkReplicationPrecheckRequest()
{}

std::string DatalinkReplicationPrecheckRequest::getSrcTableName()const
{
	return srcTableName_;
}

void DatalinkReplicationPrecheckRequest::setSrcTableName(const std::string& srcTableName)
{
	srcTableName_ = srcTableName;
	setParameter("SrcTableName", srcTableName);
}

std::string DatalinkReplicationPrecheckRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DatalinkReplicationPrecheckRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DatalinkReplicationPrecheckRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DatalinkReplicationPrecheckRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DatalinkReplicationPrecheckRequest::getDbName()const
{
	return dbName_;
}

void DatalinkReplicationPrecheckRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string DatalinkReplicationPrecheckRequest::getDstTableName()const
{
	return dstTableName_;
}

void DatalinkReplicationPrecheckRequest::setDstTableName(const std::string& dstTableName)
{
	dstTableName_ = dstTableName;
	setParameter("DstTableName", dstTableName);
}

