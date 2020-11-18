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

#include <alibabacloud/hbase/model/CreateHbaseHaSlbRequest.h>

using AlibabaCloud::HBase::Model::CreateHbaseHaSlbRequest;

CreateHbaseHaSlbRequest::CreateHbaseHaSlbRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "CreateHbaseHaSlb")
{
	setMethod(HttpRequest::Method::Post);
}

CreateHbaseHaSlbRequest::~CreateHbaseHaSlbRequest()
{}

std::string CreateHbaseHaSlbRequest::getClientToken()const
{
	return clientToken_;
}

void CreateHbaseHaSlbRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateHbaseHaSlbRequest::getHaTypes()const
{
	return haTypes_;
}

void CreateHbaseHaSlbRequest::setHaTypes(const std::string& haTypes)
{
	haTypes_ = haTypes;
	setParameter("HaTypes", haTypes);
}

std::string CreateHbaseHaSlbRequest::getHbaseType()const
{
	return hbaseType_;
}

void CreateHbaseHaSlbRequest::setHbaseType(const std::string& hbaseType)
{
	hbaseType_ = hbaseType;
	setParameter("HbaseType", hbaseType);
}

std::string CreateHbaseHaSlbRequest::getBdsId()const
{
	return bdsId_;
}

void CreateHbaseHaSlbRequest::setBdsId(const std::string& bdsId)
{
	bdsId_ = bdsId;
	setParameter("BdsId", bdsId);
}

std::string CreateHbaseHaSlbRequest::getHaId()const
{
	return haId_;
}

void CreateHbaseHaSlbRequest::setHaId(const std::string& haId)
{
	haId_ = haId;
	setParameter("HaId", haId);
}

