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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSV1RESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSV1RESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT DescribeClustersV1Result : public ServiceResult
			{
			public:
				struct Page_info
				{
					int page_size;
					int page_number;
					int total_count;
				};
				struct ClustersItem
				{
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string cluster_id;
					std::string external_loadbalancer_id;
					std::string cluster_healthy;
					std::string region_id;
					long size;
					std::string worker_ram_role_name;
					std::string vpc_id;
					bool deletion_protection;
					std::string profile;
					std::string created;
					std::string name;
					std::string vswitch_cidr;
					std::string init_version;
					std::string resource_group_id;
					std::string cluster_type;
					std::string docker_version;
					std::string data_disk_category;
					std::string updated;
					std::string vswitch_id;
					std::string meta_data;
					std::string network_mode;
					std::string security_group_id;
					std::string subnet_cidr;
					std::vector<ClustersItem::TagsItem> tags;
					long data_disk_size;
					bool private_zone;
					std::string zone_id;
					std::string state;
					std::string node_status;
					std::string master_url;
					std::string current_version;
				};


				DescribeClustersV1Result();
				explicit DescribeClustersV1Result(const std::string &payload);
				~DescribeClustersV1Result();
				Page_info getPage_info()const;
				std::vector<ClustersItem> getclusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				Page_info page_info_;
				std::vector<ClustersItem> clusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSV1RESULT_H_