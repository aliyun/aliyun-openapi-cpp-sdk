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

#include <alibabacloud/hbase/model/CreateHBaseSlbServerRequest.h>

using AlibabaCloud::HBase::Model::CreateHBaseSlbServerRequest;

CreateHBaseSlbServerRequest::CreateHBaseSlbServerRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "CreateHBaseSlbServer")
{
	setMethod(HttpRequest::Method::Post);
}

CreateHBaseSlbServerRequest::~CreateHBaseSlbServerRequest()
{}

std::string CreateHBaseSlbServerRequest::getClientToken()const
{
	return clientToken_;
}

void CreateHBaseSlbServerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateHBaseSlbServerRequest::getClusterId()const
{
	return clusterId_;
}

void CreateHBaseSlbServerRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateHBaseSlbServerRequest::getSlbServer()const
{
	return slbServer_;
}

void CreateHBaseSlbServerRequest::setSlbServer(const std::string& slbServer)
{
	slbServer_ = slbServer;
	setParameter("SlbServer", slbServer);
}

