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

#include <alibabacloud/dataworks-public/model/CheckMetaPartitionRequest.h>

using AlibabaCloud::Dataworks_public::Model::CheckMetaPartitionRequest;

CheckMetaPartitionRequest::CheckMetaPartitionRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CheckMetaPartition")
{
	setMethod(HttpRequest::Method::Post);
}

CheckMetaPartitionRequest::~CheckMetaPartitionRequest()
{}

std::string CheckMetaPartitionRequest::getPartition()const
{
	return partition_;
}

void CheckMetaPartitionRequest::setPartition(const std::string& partition)
{
	partition_ = partition;
	setParameter("Partition", partition);
}

std::string CheckMetaPartitionRequest::getTableGuid()const
{
	return tableGuid_;
}

void CheckMetaPartitionRequest::setTableGuid(const std::string& tableGuid)
{
	tableGuid_ = tableGuid;
	setParameter("TableGuid", tableGuid);
}

