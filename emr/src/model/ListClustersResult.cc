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

#include <alibabacloud/emr/model/ListClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClustersResult::ListClustersResult() :
	ServiceResult()
{}

ListClustersResult::ListClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClustersResult::~ListClustersResult()
{}

void ListClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["Cluster"];
	for (auto valueClustersCluster : allClustersNode)
	{
		Cluster clustersObject;
		if(!valueClustersCluster["ClusterId"].isNull())
			clustersObject.clusterId = valueClustersCluster["ClusterId"].asString();
		if(!valueClustersCluster["ClusterName"].isNull())
			clustersObject.clusterName = valueClustersCluster["ClusterName"].asString();
		if(!valueClustersCluster["ClusterType"].isNull())
			clustersObject.clusterType = valueClustersCluster["ClusterType"].asString();
		if(!valueClustersCluster["ClusterState"].isNull())
			clustersObject.clusterState = valueClustersCluster["ClusterState"].asString();
		if(!valueClustersCluster["PaymentStatus"].isNull())
			clustersObject.paymentStatus = valueClustersCluster["PaymentStatus"].asString();
		if(!valueClustersCluster["PaymentType"].isNull())
			clustersObject.paymentType = valueClustersCluster["PaymentType"].asString();
		if(!valueClustersCluster["CreateTime"].isNull())
			clustersObject.createTime = std::stol(valueClustersCluster["CreateTime"].asString());
		if(!valueClustersCluster["ExpiredTime"].isNull())
			clustersObject.expiredTime = std::stol(valueClustersCluster["ExpiredTime"].asString());
		if(!valueClustersCluster["DeleteTime"].isNull())
			clustersObject.deleteTime = std::stol(valueClustersCluster["DeleteTime"].asString());
		if(!valueClustersCluster["MainVersion"].isNull())
			clustersObject.mainVersion = valueClustersCluster["MainVersion"].asString();
		if(!valueClustersCluster["ReleaseVersion"].isNull())
			clustersObject.releaseVersion = valueClustersCluster["ReleaseVersion"].asString();
		if(!valueClustersCluster["HasUncompletedOrder"].isNull())
			clustersObject.hasUncompletedOrder = valueClustersCluster["HasUncompletedOrder"].asString() == "true";
		auto allTagResourceListNode = valueClustersCluster["TagResourceList"]["TagResource"];
		for (auto valueClustersClusterTagResourceListTagResource : allTagResourceListNode)
		{
			Cluster::TagResource tagResourceListObject;
			if(!valueClustersClusterTagResourceListTagResource["TagKey"].isNull())
				tagResourceListObject.tagKey = valueClustersClusterTagResourceListTagResource["TagKey"].asString();
			if(!valueClustersClusterTagResourceListTagResource["TagValue"].isNull())
				tagResourceListObject.tagValue = valueClustersClusterTagResourceListTagResource["TagValue"].asString();
			if(!valueClustersClusterTagResourceListTagResource["ResourceType"].isNull())
				tagResourceListObject.resourceType = valueClustersClusterTagResourceListTagResource["ResourceType"].asString();
			if(!valueClustersClusterTagResourceListTagResource["ResourceId"].isNull())
				tagResourceListObject.resourceId = valueClustersClusterTagResourceListTagResource["ResourceId"].asString();
			clustersObject.tagResourceList.push_back(tagResourceListObject);
		}
		auto allTagsNode = valueClustersCluster["Tags"]["Tag"];
		for (auto valueClustersClusterTagsTag : allTagsNode)
		{
			Cluster::Tag tagsObject;
			if(!valueClustersClusterTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueClustersClusterTagsTag["TagKey"].asString();
			if(!valueClustersClusterTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueClustersClusterTagsTag["TagValue"].asString();
			if(!valueClustersClusterTagsTag["Key"].isNull())
				tagsObject.key = valueClustersClusterTagsTag["Key"].asString();
			if(!valueClustersClusterTagsTag["Value"].isNull())
				tagsObject.value = valueClustersClusterTagsTag["Value"].asString();
			clustersObject.tags.push_back(tagsObject);
		}
		auto failedReasonNode = value["FailedReason"];
		if(!failedReasonNode["ErrorCode"].isNull())
			clustersObject.failedReason.errorCode = failedReasonNode["ErrorCode"].asString();
		if(!failedReasonNode["ErrorMsg"].isNull())
			clustersObject.failedReason.errorMsg = failedReasonNode["ErrorMsg"].asString();
		if(!failedReasonNode["ErrorMessage"].isNull())
			clustersObject.failedReason.errorMessage = failedReasonNode["ErrorMessage"].asString();
		if(!failedReasonNode["RequestId"].isNull())
			clustersObject.failedReason.requestId = failedReasonNode["RequestId"].asString();
		clusters_.push_back(clustersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListClustersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListClustersResult::getNextToken()const
{
	return nextToken_;
}

int ListClustersResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListClustersResult::Cluster> ListClustersResult::getClusters()const
{
	return clusters_;
}

