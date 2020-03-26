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

#include <alibabacloud/hbase/model/EnableHBaseueBackupRequest.h>

using AlibabaCloud::HBase::Model::EnableHBaseueBackupRequest;

EnableHBaseueBackupRequest::EnableHBaseueBackupRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "EnableHBaseueBackup")
{
	setMethod(HttpRequest::Method::Post);
}

EnableHBaseueBackupRequest::~EnableHBaseueBackupRequest()
{}

std::string EnableHBaseueBackupRequest::getClientToken()const
{
	return clientToken_;
}

void EnableHBaseueBackupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string EnableHBaseueBackupRequest::getHbaseueClusterId()const
{
	return hbaseueClusterId_;
}

void EnableHBaseueBackupRequest::setHbaseueClusterId(const std::string& hbaseueClusterId)
{
	hbaseueClusterId_ = hbaseueClusterId;
	setParameter("HbaseueClusterId", hbaseueClusterId);
}

int EnableHBaseueBackupRequest::getColdStorageSize()const
{
	return coldStorageSize_;
}

void EnableHBaseueBackupRequest::setColdStorageSize(int coldStorageSize)
{
	coldStorageSize_ = coldStorageSize;
	setParameter("ColdStorageSize", std::to_string(coldStorageSize));
}

int EnableHBaseueBackupRequest::getNodeCount()const
{
	return nodeCount_;
}

void EnableHBaseueBackupRequest::setNodeCount(int nodeCount)
{
	nodeCount_ = nodeCount;
	setParameter("NodeCount", std::to_string(nodeCount));
}

