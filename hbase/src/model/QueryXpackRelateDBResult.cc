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

#include <alibabacloud/hbase/model/QueryXpackRelateDBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

QueryXpackRelateDBResult::QueryXpackRelateDBResult() :
	ServiceResult()
{}

QueryXpackRelateDBResult::QueryXpackRelateDBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryXpackRelateDBResult::~QueryXpackRelateDBResult()
{}

void QueryXpackRelateDBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterListNode = value["ClusterList"]["Cluster"];
	for (auto valueClusterListCluster : allClusterListNode)
	{
		Cluster clusterListObject;
		if(!valueClusterListCluster["ClusterId"].isNull())
			clusterListObject.clusterId = valueClusterListCluster["ClusterId"].asString();
		if(!valueClusterListCluster["ClusterName"].isNull())
			clusterListObject.clusterName = valueClusterListCluster["ClusterName"].asString();
		if(!valueClusterListCluster["DBVersion"].isNull())
			clusterListObject.dBVersion = valueClusterListCluster["DBVersion"].asString();
		if(!valueClusterListCluster["Status"].isNull())
			clusterListObject.status = valueClusterListCluster["Status"].asString();
		if(!valueClusterListCluster["DBType"].isNull())
			clusterListObject.dBType = valueClusterListCluster["DBType"].asString();
		if(!valueClusterListCluster["IsRelated"].isNull())
			clusterListObject.isRelated = valueClusterListCluster["IsRelated"].asString() == "true";
		if(!valueClusterListCluster["LockMode"].isNull())
			clusterListObject.lockMode = valueClusterListCluster["LockMode"].asString();
		clusterList_.push_back(clusterListObject);
	}

}

std::vector<QueryXpackRelateDBResult::Cluster> QueryXpackRelateDBResult::getClusterList()const
{
	return clusterList_;
}

