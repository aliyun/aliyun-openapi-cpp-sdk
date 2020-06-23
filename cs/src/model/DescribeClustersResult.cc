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

#include <alibabacloud/cs/model/DescribeClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeClustersResult::DescribeClustersResult() :
	ServiceResult()
{}

DescribeClustersResult::DescribeClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClustersResult::~DescribeClustersResult()
{}

void DescribeClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allclustersNode = value["clusters"]["clusterDetail"];
	for (auto valueclustersclusterDetail : allclustersNode)
	{
		ClusterDetail clustersObject;
		if(!valueclustersclusterDetail["name"].isNull())
			clustersObject.name = valueclustersclusterDetail["name"].asString();
		if(!valueclustersclusterDetail["cluster_id"].isNull())
			clustersObject.cluster_id = valueclustersclusterDetail["cluster_id"].asString();
		if(!valueclustersclusterDetail["region_id"].isNull())
			clustersObject.region_id = valueclustersclusterDetail["region_id"].asString();
		if(!valueclustersclusterDetail["state"].isNull())
			clustersObject.state = valueclustersclusterDetail["state"].asString();
		if(!valueclustersclusterDetail["cluster_type"].isNull())
			clustersObject.cluster_type = valueclustersclusterDetail["cluster_type"].asString();
		if(!valueclustersclusterDetail["current_version"].isNull())
			clustersObject.current_version = valueclustersclusterDetail["current_version"].asString();
		if(!valueclustersclusterDetail["meta_data"].isNull())
			clustersObject.meta_data = valueclustersclusterDetail["meta_data"].asString();
		if(!valueclustersclusterDetail["resource_group_id"].isNull())
			clustersObject.resource_group_id = valueclustersclusterDetail["resource_group_id"].asString();
		if(!valueclustersclusterDetail["vpc_id"].isNull())
			clustersObject.vpc_id = valueclustersclusterDetail["vpc_id"].asString();
		if(!valueclustersclusterDetail["vswitch_id"].isNull())
			clustersObject.vswitch_id = valueclustersclusterDetail["vswitch_id"].asString();
		if(!valueclustersclusterDetail["vswitch_cidr"].isNull())
			clustersObject.vswitch_cidr = valueclustersclusterDetail["vswitch_cidr"].asString();
		if(!valueclustersclusterDetail["data_disk_size"].isNull())
			clustersObject.data_disk_size = std::stoi(valueclustersclusterDetail["data_disk_size"].asString());
		if(!valueclustersclusterDetail["data_disk_category"].isNull())
			clustersObject.data_disk_category = valueclustersclusterDetail["data_disk_category"].asString();
		if(!valueclustersclusterDetail["security_group_id"].isNull())
			clustersObject.security_group_id = valueclustersclusterDetail["security_group_id"].asString();
		if(!valueclustersclusterDetail["zone_id"].isNull())
			clustersObject.zone_id = valueclustersclusterDetail["zone_id"].asString();
		if(!valueclustersclusterDetail["network_mode"].isNull())
			clustersObject.network_mode = valueclustersclusterDetail["network_mode"].asString();
		if(!valueclustersclusterDetail["master_url"].isNull())
			clustersObject.master_url = valueclustersclusterDetail["master_url"].asString();
		if(!valueclustersclusterDetail["docker_version"].isNull())
			clustersObject.docker_version = valueclustersclusterDetail["docker_version"].asString();
		if(!valueclustersclusterDetail["deletion_protection"].isNull())
			clustersObject.deletion_protection = valueclustersclusterDetail["deletion_protection"].asString() == "true";
		if(!valueclustersclusterDetail["external_loadbalancer_id"].isNull())
			clustersObject.external_loadbalancer_id = valueclustersclusterDetail["external_loadbalancer_id"].asString();
		if(!valueclustersclusterDetail["created"].isNull())
			clustersObject.created = valueclustersclusterDetail["created"].asString();
		if(!valueclustersclusterDetail["updated"].isNull())
			clustersObject.updated = valueclustersclusterDetail["updated"].asString();
		if(!valueclustersclusterDetail["size"].isNull())
			clustersObject.size = valueclustersclusterDetail["size"].asString();
		auto alltagsNode = allclustersNode["tags"]["tagsItem"];
		for (auto allclustersNodetagstagsItem : alltagsNode)
		{
			ClusterDetail::TagsItem tagsObject;
			if(!allclustersNodetagstagsItem["key"].isNull())
				tagsObject.key = allclustersNodetagstagsItem["key"].asString();
			if(!allclustersNodetagstagsItem["value"].isNull())
				tagsObject.value = allclustersNodetagstagsItem["value"].asString();
			clustersObject.tags.push_back(tagsObject);
		}
		clusters_.push_back(clustersObject);
	}

}

std::vector<DescribeClustersResult::ClusterDetail> DescribeClustersResult::getclusters()const
{
	return clusters_;
}

