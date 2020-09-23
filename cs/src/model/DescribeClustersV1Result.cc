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

#include <alibabacloud/cs/model/DescribeClustersV1Result.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeClustersV1Result::DescribeClustersV1Result() :
	ServiceResult()
{}

DescribeClustersV1Result::DescribeClustersV1Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClustersV1Result::~DescribeClustersV1Result()
{}

void DescribeClustersV1Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allclustersNode = value["clusters"]["clustersItem"];
	for (auto valueclustersclustersItem : allclustersNode)
	{
		ClustersItem clustersObject;
		if(!valueclustersclustersItem["resource_group_id"].isNull())
			clustersObject.resource_group_id = valueclustersclustersItem["resource_group_id"].asString();
		if(!valueclustersclustersItem["private_zone"].isNull())
			clustersObject.private_zone = valueclustersclustersItem["private_zone"].asString() == "true";
		if(!valueclustersclustersItem["vpc_id"].isNull())
			clustersObject.vpc_id = valueclustersclustersItem["vpc_id"].asString();
		if(!valueclustersclustersItem["network_mode"].isNull())
			clustersObject.network_mode = valueclustersclustersItem["network_mode"].asString();
		if(!valueclustersclustersItem["security_group_id"].isNull())
			clustersObject.security_group_id = valueclustersclustersItem["security_group_id"].asString();
		if(!valueclustersclustersItem["cluster_type"].isNull())
			clustersObject.cluster_type = valueclustersclustersItem["cluster_type"].asString();
		if(!valueclustersclustersItem["docker_version"].isNull())
			clustersObject.docker_version = valueclustersclustersItem["docker_version"].asString();
		if(!valueclustersclustersItem["data_disk_category"].isNull())
			clustersObject.data_disk_category = valueclustersclustersItem["data_disk_category"].asString();
		if(!valueclustersclustersItem["zone_id"].isNull())
			clustersObject.zone_id = valueclustersclustersItem["zone_id"].asString();
		if(!valueclustersclustersItem["cluster_id"].isNull())
			clustersObject.cluster_id = valueclustersclustersItem["cluster_id"].asString();
		if(!valueclustersclustersItem["external_loadbalancer_id"].isNull())
			clustersObject.external_loadbalancer_id = valueclustersclustersItem["external_loadbalancer_id"].asString();
		if(!valueclustersclustersItem["vswitch_id"].isNull())
			clustersObject.vswitch_id = valueclustersclustersItem["vswitch_id"].asString();
		if(!valueclustersclustersItem["meta_data"].isNull())
			clustersObject.meta_data = valueclustersclustersItem["meta_data"].asString();
		if(!valueclustersclustersItem["state"].isNull())
			clustersObject.state = valueclustersclustersItem["state"].asString();
		if(!valueclustersclustersItem["init_version"].isNull())
			clustersObject.init_version = valueclustersclustersItem["init_version"].asString();
		if(!valueclustersclustersItem["node_status"].isNull())
			clustersObject.node_status = valueclustersclustersItem["node_status"].asString();
		if(!valueclustersclustersItem["deletion_protection"].isNull())
			clustersObject.deletion_protection = valueclustersclustersItem["deletion_protection"].asString() == "true";
		if(!valueclustersclustersItem["created"].isNull())
			clustersObject.created = valueclustersclustersItem["created"].asString();
		if(!valueclustersclustersItem["subnet_cidr"].isNull())
			clustersObject.subnet_cidr = valueclustersclustersItem["subnet_cidr"].asString();
		if(!valueclustersclustersItem["profile"].isNull())
			clustersObject.profile = valueclustersclustersItem["profile"].asString();
		if(!valueclustersclustersItem["region_id"].isNull())
			clustersObject.region_id = valueclustersclustersItem["region_id"].asString();
		if(!valueclustersclustersItem["master_url"].isNull())
			clustersObject.master_url = valueclustersclustersItem["master_url"].asString();
		if(!valueclustersclustersItem["current_version"].isNull())
			clustersObject.current_version = valueclustersclustersItem["current_version"].asString();
		if(!valueclustersclustersItem["vswitch_cidr"].isNull())
			clustersObject.vswitch_cidr = valueclustersclustersItem["vswitch_cidr"].asString();
		if(!valueclustersclustersItem["cluster_healthy"].isNull())
			clustersObject.cluster_healthy = valueclustersclustersItem["cluster_healthy"].asString();
		if(!valueclustersclustersItem["size"].isNull())
			clustersObject.size = std::stol(valueclustersclustersItem["size"].asString());
		if(!valueclustersclustersItem["data_disk_size"].isNull())
			clustersObject.data_disk_size = std::stol(valueclustersclustersItem["data_disk_size"].asString());
		if(!valueclustersclustersItem["name"].isNull())
			clustersObject.name = valueclustersclustersItem["name"].asString();
		if(!valueclustersclustersItem["worker_ram_role_name"].isNull())
			clustersObject.worker_ram_role_name = valueclustersclustersItem["worker_ram_role_name"].asString();
		if(!valueclustersclustersItem["updated"].isNull())
			clustersObject.updated = valueclustersclustersItem["updated"].asString();
		auto alltagsNode = allclustersNode["tags"]["tagsItem"];
		for (auto allclustersNodetagstagsItem : alltagsNode)
		{
			ClustersItem::TagsItem tagsObject;
			if(!allclustersNodetagstagsItem["value"].isNull())
				tagsObject.value = allclustersNodetagstagsItem["value"].asString();
			if(!allclustersNodetagstagsItem["key"].isNull())
				tagsObject.key = allclustersNodetagstagsItem["key"].asString();
			clustersObject.tags.push_back(tagsObject);
		}
		clusters_.push_back(clustersObject);
	}
	auto page_infoNode = value["page_info"];
	if(!page_infoNode["page_number"].isNull())
		page_info_.page_number = std::stoi(page_infoNode["page_number"].asString());
	if(!page_infoNode["total_count"].isNull())
		page_info_.total_count = std::stoi(page_infoNode["total_count"].asString());
	if(!page_infoNode["page_size"].isNull())
		page_info_.page_size = std::stoi(page_infoNode["page_size"].asString());

}

DescribeClustersV1Result::Page_info DescribeClustersV1Result::getPage_info()const
{
	return page_info_;
}

std::vector<DescribeClustersV1Result::ClustersItem> DescribeClustersV1Result::getclusters()const
{
	return clusters_;
}

