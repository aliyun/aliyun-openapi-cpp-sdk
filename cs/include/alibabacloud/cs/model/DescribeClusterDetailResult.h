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

#ifndef ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERDETAILRESULT_H_
#define ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERDETAILRESULT_H_

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
			class ALIBABACLOUD_CS_EXPORT DescribeClusterDetailResult : public ServiceResult
			{
			public:
				struct TagsItem
				{
					std::string value;
					std::string key;
				};


				DescribeClusterDetailResult();
				explicit DescribeClusterDetailResult(const std::string &payload);
				~DescribeClusterDetailResult();
				std::string getResource_group_id()const;
				std::string getCluster_type()const;
				std::string getDocker_version()const;
				std::string getCluster_id()const;
				std::string getExternal_loadbalancer_id()const;
				std::string getUpdated()const;
				std::string getRegion_id()const;
				int getSize()const;
				std::string getVpc_id()const;
				std::string getVswitch_id()const;
				bool getDeletion_protection()const;
				std::string getMeta_data()const;
				std::string getNetwork_mode()const;
				std::string getSecurity_group_id()const;
				std::vector<TagsItem> gettags()const;
				std::string getCreated()const;
				std::string getName()const;
				std::string getZone_id()const;
				std::string getState()const;
				std::string getVswitch_cidr()const;
				std::string getCurrent_version()const;
				std::string getInstance_type()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string resource_group_id_;
				std::string cluster_type_;
				std::string docker_version_;
				std::string cluster_id_;
				std::string external_loadbalancer_id_;
				std::string updated_;
				std::string region_id_;
				int size_;
				std::string vpc_id_;
				std::string vswitch_id_;
				bool deletion_protection_;
				std::string meta_data_;
				std::string network_mode_;
				std::string security_group_id_;
				std::vector<TagsItem> tags_;
				std::string created_;
				std::string name_;
				std::string zone_id_;
				std::string state_;
				std::string vswitch_cidr_;
				std::string current_version_;
				std::string instance_type_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERDETAILRESULT_H_