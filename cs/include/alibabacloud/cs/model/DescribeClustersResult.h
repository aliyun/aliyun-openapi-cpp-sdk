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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSRESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSRESULT_H_

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
			class ALIBABACLOUD_CS_EXPORT DescribeClustersResult : public ServiceResult
			{
			public:
				struct ClusterDetail
				{
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string cluster_type;
					std::string resource_group_id;
					std::string data_disk_category;
					std::string docker_version;
					std::string cluster_id;
					std::string external_loadbalancer_id;
					std::string updated;
					std::string region_id;
					std::string size;
					std::string vpc_id;
					std::string vswitch_id;
					std::string meta_data;
					bool deletion_protection;
					std::string network_mode;
					std::string security_group_id;
					std::vector<ClusterDetail::TagsItem> tags;
					std::string name;
					int data_disk_size;
					std::string created;
					std::string state;
					std::string zone_id;
					std::string vswitch_cidr;
					std::string master_url;
					std::string current_version;
				};


				DescribeClustersResult();
				explicit DescribeClustersResult(const std::string &payload);
				~DescribeClustersResult();
				std::vector<ClusterDetail> getclusters()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ClusterDetail> clusters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSRESULT_H_