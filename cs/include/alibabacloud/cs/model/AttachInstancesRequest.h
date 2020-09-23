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

#ifndef ALIBABACLOUD_CS_MODEL_ATTACHINSTANCESREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_ATTACHINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT AttachInstancesRequest : public RoaServiceRequest
			{

			public:
				AttachInstancesRequest();
				~AttachInstancesRequest();

				std::string getPassword()const;
				void setPassword(const std::string& password);
				bool getKeep_instance_name()const;
				void setKeep_instance_name(bool keep_instance_name);
				std::string getKey_pair()const;
				void setKey_pair(const std::string& key_pair);
				std::string getCpu_policy()const;
				void setCpu_policy(const std::string& cpu_policy);
				bool getIs_edge_worker()const;
				void setIs_edge_worker(bool is_edge_worker);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getUser_data()const;
				void setUser_data(const std::string& user_data);
				std::string getImage_id()const;
				void setImage_id(const std::string& image_id);
				bool getFormat_disk()const;
				void setFormat_disk(bool format_disk);
				std::string getNodepool_id()const;
				void setNodepool_id(const std::string& nodepool_id);

            private:
				std::string password_;
				bool keep_instance_name_;
				std::string key_pair_;
				std::string cpu_policy_;
				bool is_edge_worker_;
				std::string clusterId_;
				std::string user_data_;
				std::string image_id_;
				bool format_disk_;
				std::string nodepool_id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_ATTACHINSTANCESREQUEST_H_