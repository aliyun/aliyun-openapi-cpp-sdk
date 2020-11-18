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

#include <alibabacloud/hbase/model/AddUserHdfsInfoRequest.h>

using AlibabaCloud::HBase::Model::AddUserHdfsInfoRequest;

AddUserHdfsInfoRequest::AddUserHdfsInfoRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "AddUserHdfsInfo")
{
	setMethod(HttpRequest::Method::Post);
}

AddUserHdfsInfoRequest::~AddUserHdfsInfoRequest()
{}

std::string AddUserHdfsInfoRequest::getExtInfo()const
{
	return extInfo_;
}

void AddUserHdfsInfoRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setParameter("ExtInfo", extInfo);
}

std::string AddUserHdfsInfoRequest::getClientToken()const
{
	return clientToken_;
}

void AddUserHdfsInfoRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AddUserHdfsInfoRequest::getClusterId()const
{
	return clusterId_;
}

void AddUserHdfsInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

