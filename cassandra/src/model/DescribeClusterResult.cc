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

#include <alibabacloud/cassandra/model/DescribeClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeClusterResult::DescribeClusterResult() :
	ServiceResult()
{}

DescribeClusterResult::DescribeClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterResult::~DescribeClusterResult()
{}

void DescribeClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterNode = value["Cluster"];
	if(!clusterNode["ClusterId"].isNull())
		cluster_.clusterId = clusterNode["ClusterId"].asString();
	if(!clusterNode["ClusterName"].isNull())
		cluster_.clusterName = clusterNode["ClusterName"].asString();
	if(!clusterNode["Status"].isNull())
		cluster_.status = clusterNode["Status"].asString();
	if(!clusterNode["PayType"].isNull())
		cluster_.payType = clusterNode["PayType"].asString();
	if(!clusterNode["CreatedTime"].isNull())
		cluster_.createdTime = clusterNode["CreatedTime"].asString();
	if(!clusterNode["ExpireTime"].isNull())
		cluster_.expireTime = clusterNode["ExpireTime"].asString();
	if(!clusterNode["MajorVersion"].isNull())
		cluster_.majorVersion = clusterNode["MajorVersion"].asString();
	if(!clusterNode["MinorVersion"].isNull())
		cluster_.minorVersion = clusterNode["MinorVersion"].asString();
	if(!clusterNode["DataCenterCount"].isNull())
		cluster_.dataCenterCount = std::stoi(clusterNode["DataCenterCount"].asString());
	if(!clusterNode["IsLatestVersion"].isNull())
		cluster_.isLatestVersion = clusterNode["IsLatestVersion"].asString() == "true";
	if(!clusterNode["MaintainStartTime"].isNull())
		cluster_.maintainStartTime = clusterNode["MaintainStartTime"].asString();
	if(!clusterNode["MaintainEndTime"].isNull())
		cluster_.maintainEndTime = clusterNode["MaintainEndTime"].asString();
	if(!clusterNode["LockMode"].isNull())
		cluster_.lockMode = clusterNode["LockMode"].asString();
	if(!clusterNode["AutoRenewal"].isNull())
		cluster_.autoRenewal = clusterNode["AutoRenewal"].asString() == "true";
	if(!clusterNode["AutoRenewPeriod"].isNull())
		cluster_.autoRenewPeriod = std::stoi(clusterNode["AutoRenewPeriod"].asString());
	if(!clusterNode["ResourceGroupId"].isNull())
		cluster_.resourceGroupId = clusterNode["ResourceGroupId"].asString();
	auto allTagsNode = clusterNode["Tags"]["Tag"];
	for (auto clusterNodeTagsTag : allTagsNode)
	{
		Cluster::Tag tagObject;
		if(!clusterNodeTagsTag["Key"].isNull())
			tagObject.key = clusterNodeTagsTag["Key"].asString();
		if(!clusterNodeTagsTag["Value"].isNull())
			tagObject.value = clusterNodeTagsTag["Value"].asString();
		cluster_.tags.push_back(tagObject);
	}

}

DescribeClusterResult::Cluster DescribeClusterResult::getCluster()const
{
	return cluster_;
}

