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

#include <alibabacloud/cassandra/model/DeleteDataCenterRequest.h>

using AlibabaCloud::Cassandra::Model::DeleteDataCenterRequest;

DeleteDataCenterRequest::DeleteDataCenterRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "DeleteDataCenter")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDataCenterRequest::~DeleteDataCenterRequest()
{}

std::string DeleteDataCenterRequest::getDataCenterId()const
{
	return dataCenterId_;
}

void DeleteDataCenterRequest::setDataCenterId(const std::string& dataCenterId)
{
	dataCenterId_ = dataCenterId;
	setParameter("DataCenterId", dataCenterId);
}

std::string DeleteDataCenterRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteDataCenterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

