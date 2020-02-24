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

#include <alibabacloud/hbase/model/QueryXpackRelateDBRequest.h>

using AlibabaCloud::HBase::Model::QueryXpackRelateDBRequest;

QueryXpackRelateDBRequest::QueryXpackRelateDBRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "QueryXpackRelateDB")
{
	setMethod(HttpRequest::Method::Post);
}

QueryXpackRelateDBRequest::~QueryXpackRelateDBRequest()
{}

bool QueryXpackRelateDBRequest::getHasSingleNode()const
{
	return hasSingleNode_;
}

void QueryXpackRelateDBRequest::setHasSingleNode(bool hasSingleNode)
{
	hasSingleNode_ = hasSingleNode;
	setParameter("HasSingleNode", hasSingleNode ? "true" : "false");
}

std::string QueryXpackRelateDBRequest::getClusterId()const
{
	return clusterId_;
}

void QueryXpackRelateDBRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string QueryXpackRelateDBRequest::getRelateDbType()const
{
	return relateDbType_;
}

void QueryXpackRelateDBRequest::setRelateDbType(const std::string& relateDbType)
{
	relateDbType_ = relateDbType;
	setParameter("RelateDbType", relateDbType);
}

