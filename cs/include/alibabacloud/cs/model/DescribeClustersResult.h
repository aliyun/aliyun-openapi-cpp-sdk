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


				DescribeClustersResult();
				explicit DescribeClustersResult(const std::string &payload);
				~DescribeClustersResult();
				std::string getCluster_id()const;
				std::string getExternal_loadbalancer_id()const;
				std::string getUpdated()const;
				std::string getRegion_id()const;
				std::string getSize()const;
				std::string getVpc_id()const;
				std::string getNetwork_mode()const;
				std::string getSecurity_group_id()const;
				std::string getCreated()const;
				std::string getName()const;
				std::string getAgent_version()const;
				std::string getState()const;
				std::string getVpc_id1()const;
				std::string getMaster_url()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string cluster_id_;
				std::string external_loadbalancer_id_;
				std::string updated_;
				std::string region_id_;
				std::string size_;
				std::string vpc_id_;
				std::string network_mode_;
				std::string security_group_id_;
				std::string created_;
				std::string name_;
				std::string agent_version_;
				std::string state_;
				std::string vpc_id1_;
				std::string master_url_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_DESCRIBECLUSTERSRESULT_H_