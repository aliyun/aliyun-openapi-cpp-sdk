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

#ifndef ALIBABACLOUD_CS_MODEL_CREATECLUSTERREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_CREATECLUSTERREQUEST_H_

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
			class ALIBABACLOUD_CS_EXPORT CreateClusterRequest : public RoaServiceRequest
			{

			public:
				CreateClusterRequest();
				~CreateClusterRequest();

				std::string getProxy_mode()const;
				void setProxy_mode(const std::string& proxy_mode);
				std::string getMaster_system_disk_category()const;
				void setMaster_system_disk_category(const std::string& master_system_disk_category);
				bool getCloud_monitor_flags()const;
				void setCloud_monitor_flags(bool cloud_monitor_flags);
				int getMaster_period()const;
				void setMaster_period(int master_period);
				bool getSsh_flags()const;
				void setSsh_flags(bool ssh_flags);
				std::string getSecurity_group_id()const;
				void setSecurity_group_id(const std::string& security_group_id);
				std::string getContainer_cidr()const;
				void setContainer_cidr(const std::string& container_cidr);
				std::string getCluster_type()const;
				void setCluster_type(const std::string& cluster_type);
				bool getEndpoint_public_access()const;
				void setEndpoint_public_access(bool endpoint_public_access);
				bool getWorker_auto_renew()const;
				void setWorker_auto_renew(bool worker_auto_renew);
				std::string getPlatform()const;
				void setPlatform(const std::string& platform);
				std::string getNode_port_range()const;
				void setNode_port_range(const std::string& node_port_range);
				std::string getService_cidr()const;
				void setService_cidr(const std::string& service_cidr);
				std::string getLogin_password()const;
				void setLogin_password(const std::string& login_password);
				std::string getKubernetes_version()const;
				void setKubernetes_version(const std::string& kubernetes_version);
				std::string getMaster_period_unit()const;
				void setMaster_period_unit(const std::string& master_period_unit);
				int getMaster_system_disk_size()const;
				void setMaster_system_disk_size(int master_system_disk_size);
				int getMaster_count()const;
				void setMaster_count(int master_count);
				int getNum_of_nodes()const;
				void setNum_of_nodes(int num_of_nodes);
				bool getDeletion_protection()const;
				void setDeletion_protection(bool deletion_protection);
				std::string getKey_pair()const;
				void setKey_pair(const std::string& key_pair);
				bool getWorker_data_disk()const;
				void setWorker_data_disk(bool worker_data_disk);
				bool getMaster_auto_renew()const;
				void setMaster_auto_renew(bool master_auto_renew);
				std::string getRegion_id()const;
				void setRegion_id(const std::string& region_id);
				bool getSnat_entry()const;
				void setSnat_entry(bool snat_entry);
				std::string getWorker_system_disk_category()const;
				void setWorker_system_disk_category(const std::string& worker_system_disk_category);
				std::string getRuntime()const;
				void setRuntime(const std::string& runtime);
				std::string getWorker_period_unit()const;
				void setWorker_period_unit(const std::string& worker_period_unit);
				std::string getMaster_instance_charge_type()const;
				void setMaster_instance_charge_type(const std::string& master_instance_charge_type);
				std::string getNode_cidr_mask()const;
				void setNode_cidr_mask(const std::string& node_cidr_mask);
				int getWorker_auto_renew_period()const;
				void setWorker_auto_renew_period(int worker_auto_renew_period);
				int getMaster_auto_renew_period()const;
				void setMaster_auto_renew_period(int master_auto_renew_period);
				int getTimeout_mins()const;
				void setTimeout_mins(int timeout_mins);
				int getWorker_period()const;
				void setWorker_period(int worker_period);
				int getWorker_system_disk_size()const;
				void setWorker_system_disk_size(int worker_system_disk_size);
				std::string getOs_type()const;
				void setOs_type(const std::string& os_type);
				std::string getCpu_policy()const;
				void setCpu_policy(const std::string& cpu_policy);
				std::string getVpcid()const;
				void setVpcid(const std::string& vpcid);
				std::string getName()const;
				void setName(const std::string& name);
				bool getDisable_rollback()const;
				void setDisable_rollback(bool disable_rollback);
				std::string getWorker_instance_charge_type()const;
				void setWorker_instance_charge_type(const std::string& worker_instance_charge_type);

            private:
				std::string proxy_mode_;
				std::string master_system_disk_category_;
				bool cloud_monitor_flags_;
				int master_period_;
				bool ssh_flags_;
				std::string security_group_id_;
				std::string container_cidr_;
				std::string cluster_type_;
				bool endpoint_public_access_;
				bool worker_auto_renew_;
				std::string platform_;
				std::string node_port_range_;
				std::string service_cidr_;
				std::string login_password_;
				std::string kubernetes_version_;
				std::string master_period_unit_;
				int master_system_disk_size_;
				int master_count_;
				int num_of_nodes_;
				bool deletion_protection_;
				std::string key_pair_;
				bool worker_data_disk_;
				bool master_auto_renew_;
				std::string region_id_;
				bool snat_entry_;
				std::string worker_system_disk_category_;
				std::string runtime_;
				std::string worker_period_unit_;
				std::string master_instance_charge_type_;
				std::string node_cidr_mask_;
				int worker_auto_renew_period_;
				int master_auto_renew_period_;
				int timeout_mins_;
				int worker_period_;
				int worker_system_disk_size_;
				std::string os_type_;
				std::string cpu_policy_;
				std::string vpcid_;
				std::string name_;
				bool disable_rollback_;
				std::string worker_instance_charge_type_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_CREATECLUSTERREQUEST_H_