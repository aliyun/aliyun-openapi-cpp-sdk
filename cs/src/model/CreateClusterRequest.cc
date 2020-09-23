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

#include <alibabacloud/cs/model/CreateClusterRequest.h>

using AlibabaCloud::CS::Model::CreateClusterRequest;

CreateClusterRequest::CreateClusterRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters");
	setMethod(HttpRequest::Method::Post);
}

CreateClusterRequest::~CreateClusterRequest()
{}

bool CreateClusterRequest::getPrivate_zone()const
{
	return private_zone_;
}

void CreateClusterRequest::setPrivate_zone(bool private_zone)
{
	private_zone_ = private_zone;
	setBodyParameter("Private_zone", private_zone ? "true" : "false");
}

std::string CreateClusterRequest::getProxy_mode()const
{
	return proxy_mode_;
}

void CreateClusterRequest::setProxy_mode(const std::string& proxy_mode)
{
	proxy_mode_ = proxy_mode;
	setBodyParameter("Proxy_mode", proxy_mode);
}

std::string CreateClusterRequest::getMaster_system_disk_category()const
{
	return master_system_disk_category_;
}

void CreateClusterRequest::setMaster_system_disk_category(const std::string& master_system_disk_category)
{
	master_system_disk_category_ = master_system_disk_category;
	setBodyParameter("Master_system_disk_category", master_system_disk_category);
}

long CreateClusterRequest::getMaster_period()const
{
	return master_period_;
}

void CreateClusterRequest::setMaster_period(long master_period)
{
	master_period_ = master_period;
	setBodyParameter("Master_period", std::to_string(master_period));
}

bool CreateClusterRequest::getCloud_monitor_flags()const
{
	return cloud_monitor_flags_;
}

void CreateClusterRequest::setCloud_monitor_flags(bool cloud_monitor_flags)
{
	cloud_monitor_flags_ = cloud_monitor_flags;
	setBodyParameter("Cloud_monitor_flags", cloud_monitor_flags ? "true" : "false");
}

bool CreateClusterRequest::getSsh_flags()const
{
	return ssh_flags_;
}

void CreateClusterRequest::setSsh_flags(bool ssh_flags)
{
	ssh_flags_ = ssh_flags;
	setBodyParameter("Ssh_flags", ssh_flags ? "true" : "false");
}

std::string CreateClusterRequest::getSecurity_group_id()const
{
	return security_group_id_;
}

void CreateClusterRequest::setSecurity_group_id(const std::string& security_group_id)
{
	security_group_id_ = security_group_id;
	setBodyParameter("Security_group_id", security_group_id);
}

std::string CreateClusterRequest::getContainer_cidr()const
{
	return container_cidr_;
}

void CreateClusterRequest::setContainer_cidr(const std::string& container_cidr)
{
	container_cidr_ = container_cidr;
	setBodyParameter("Container_cidr", container_cidr);
}

std::string CreateClusterRequest::getCluster_type()const
{
	return cluster_type_;
}

void CreateClusterRequest::setCluster_type(const std::string& cluster_type)
{
	cluster_type_ = cluster_type;
	setBodyParameter("Cluster_type", cluster_type);
}

bool CreateClusterRequest::getEndpoint_public_access()const
{
	return endpoint_public_access_;
}

void CreateClusterRequest::setEndpoint_public_access(bool endpoint_public_access)
{
	endpoint_public_access_ = endpoint_public_access;
	setBodyParameter("Endpoint_public_access", endpoint_public_access ? "true" : "false");
}

bool CreateClusterRequest::getWorker_auto_renew()const
{
	return worker_auto_renew_;
}

void CreateClusterRequest::setWorker_auto_renew(bool worker_auto_renew)
{
	worker_auto_renew_ = worker_auto_renew;
	setBodyParameter("Worker_auto_renew", worker_auto_renew ? "true" : "false");
}

std::string CreateClusterRequest::getPlatform()const
{
	return platform_;
}

void CreateClusterRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setBodyParameter("Platform", platform);
}

std::string CreateClusterRequest::getService_cidr()const
{
	return service_cidr_;
}

void CreateClusterRequest::setService_cidr(const std::string& service_cidr)
{
	service_cidr_ = service_cidr;
	setBodyParameter("Service_cidr", service_cidr);
}

std::string CreateClusterRequest::getNode_port_range()const
{
	return node_port_range_;
}

void CreateClusterRequest::setNode_port_range(const std::string& node_port_range)
{
	node_port_range_ = node_port_range;
	setBodyParameter("Node_port_range", node_port_range);
}

std::string CreateClusterRequest::getZone_id()const
{
	return zone_id_;
}

void CreateClusterRequest::setZone_id(const std::string& zone_id)
{
	zone_id_ = zone_id;
	setBodyParameter("Zone_id", zone_id);
}

std::string CreateClusterRequest::getLogin_password()const
{
	return login_password_;
}

void CreateClusterRequest::setLogin_password(const std::string& login_password)
{
	login_password_ = login_password;
	setBodyParameter("Login_password", login_password);
}

std::string CreateClusterRequest::getKubernetes_version()const
{
	return kubernetes_version_;
}

void CreateClusterRequest::setKubernetes_version(const std::string& kubernetes_version)
{
	kubernetes_version_ = kubernetes_version;
	setBodyParameter("Kubernetes_version", kubernetes_version);
}

bool CreateClusterRequest::getIs_enterprise_security_group()const
{
	return is_enterprise_security_group_;
}

void CreateClusterRequest::setIs_enterprise_security_group(bool is_enterprise_security_group)
{
	is_enterprise_security_group_ = is_enterprise_security_group;
	setBodyParameter("Is_enterprise_security_group", is_enterprise_security_group ? "true" : "false");
}

std::string CreateClusterRequest::getMaster_period_unit()const
{
	return master_period_unit_;
}

void CreateClusterRequest::setMaster_period_unit(const std::string& master_period_unit)
{
	master_period_unit_ = master_period_unit;
	setBodyParameter("Master_period_unit", master_period_unit);
}

long CreateClusterRequest::getMaster_system_disk_size()const
{
	return master_system_disk_size_;
}

void CreateClusterRequest::setMaster_system_disk_size(long master_system_disk_size)
{
	master_system_disk_size_ = master_system_disk_size;
	setBodyParameter("Master_system_disk_size", std::to_string(master_system_disk_size));
}

long CreateClusterRequest::getMaster_count()const
{
	return master_count_;
}

void CreateClusterRequest::setMaster_count(long master_count)
{
	master_count_ = master_count;
	setBodyParameter("Master_count", std::to_string(master_count));
}

long CreateClusterRequest::getNum_of_nodes()const
{
	return num_of_nodes_;
}

void CreateClusterRequest::setNum_of_nodes(long num_of_nodes)
{
	num_of_nodes_ = num_of_nodes;
	setBodyParameter("Num_of_nodes", std::to_string(num_of_nodes));
}

std::string CreateClusterRequest::getDeletion_protection()const
{
	return deletion_protection_;
}

void CreateClusterRequest::setDeletion_protection(const std::string& deletion_protection)
{
	deletion_protection_ = deletion_protection;
	setBodyParameter("Deletion_protection", deletion_protection);
}

std::string CreateClusterRequest::getKey_pair()const
{
	return key_pair_;
}

void CreateClusterRequest::setKey_pair(const std::string& key_pair)
{
	key_pair_ = key_pair;
	setBodyParameter("Key_pair", key_pair);
}

bool CreateClusterRequest::getMaster_auto_renew()const
{
	return master_auto_renew_;
}

void CreateClusterRequest::setMaster_auto_renew(bool master_auto_renew)
{
	master_auto_renew_ = master_auto_renew;
	setBodyParameter("Master_auto_renew", master_auto_renew ? "true" : "false");
}

std::string CreateClusterRequest::getProfile()const
{
	return profile_;
}

void CreateClusterRequest::setProfile(const std::string& profile)
{
	profile_ = profile;
	setBodyParameter("Profile", profile);
}

std::string CreateClusterRequest::getRegion_id()const
{
	return region_id_;
}

void CreateClusterRequest::setRegion_id(const std::string& region_id)
{
	region_id_ = region_id;
	setBodyParameter("Region_id", region_id);
}

bool CreateClusterRequest::getSnat_entry()const
{
	return snat_entry_;
}

void CreateClusterRequest::setSnat_entry(bool snat_entry)
{
	snat_entry_ = snat_entry;
	setBodyParameter("Snat_entry", snat_entry ? "true" : "false");
}

std::string CreateClusterRequest::getWorker_system_disk_category()const
{
	return worker_system_disk_category_;
}

void CreateClusterRequest::setWorker_system_disk_category(const std::string& worker_system_disk_category)
{
	worker_system_disk_category_ = worker_system_disk_category;
	setBodyParameter("Worker_system_disk_category", worker_system_disk_category);
}

std::string CreateClusterRequest::getUser_data()const
{
	return user_data_;
}

void CreateClusterRequest::setUser_data(const std::string& user_data)
{
	user_data_ = user_data;
	setBodyParameter("User_data", user_data);
}

std::string CreateClusterRequest::getWorker_period_unit()const
{
	return worker_period_unit_;
}

void CreateClusterRequest::setWorker_period_unit(const std::string& worker_period_unit)
{
	worker_period_unit_ = worker_period_unit;
	setBodyParameter("Worker_period_unit", worker_period_unit);
}

std::string CreateClusterRequest::getMaster_instance_charge_type()const
{
	return master_instance_charge_type_;
}

void CreateClusterRequest::setMaster_instance_charge_type(const std::string& master_instance_charge_type)
{
	master_instance_charge_type_ = master_instance_charge_type;
	setBodyParameter("Master_instance_charge_type", master_instance_charge_type);
}

std::string CreateClusterRequest::getNode_cidr_mask()const
{
	return node_cidr_mask_;
}

void CreateClusterRequest::setNode_cidr_mask(const std::string& node_cidr_mask)
{
	node_cidr_mask_ = node_cidr_mask;
	setBodyParameter("Node_cidr_mask", node_cidr_mask);
}

long CreateClusterRequest::getWorker_auto_renew_period()const
{
	return worker_auto_renew_period_;
}

void CreateClusterRequest::setWorker_auto_renew_period(long worker_auto_renew_period)
{
	worker_auto_renew_period_ = worker_auto_renew_period;
	setBodyParameter("Worker_auto_renew_period", std::to_string(worker_auto_renew_period));
}

long CreateClusterRequest::getMaster_auto_renew_period()const
{
	return master_auto_renew_period_;
}

void CreateClusterRequest::setMaster_auto_renew_period(long master_auto_renew_period)
{
	master_auto_renew_period_ = master_auto_renew_period;
	setBodyParameter("Master_auto_renew_period", std::to_string(master_auto_renew_period));
}

long CreateClusterRequest::getWorker_period()const
{
	return worker_period_;
}

void CreateClusterRequest::setWorker_period(long worker_period)
{
	worker_period_ = worker_period;
	setBodyParameter("Worker_period", std::to_string(worker_period));
}

long CreateClusterRequest::getTimeout_mins()const
{
	return timeout_mins_;
}

void CreateClusterRequest::setTimeout_mins(long timeout_mins)
{
	timeout_mins_ = timeout_mins;
	setBodyParameter("Timeout_mins", std::to_string(timeout_mins));
}

std::string CreateClusterRequest::getImages_id()const
{
	return images_id_;
}

void CreateClusterRequest::setImages_id(const std::string& images_id)
{
	images_id_ = images_id;
	setBodyParameter("Images_id", images_id);
}

long CreateClusterRequest::getWorker_system_disk_size()const
{
	return worker_system_disk_size_;
}

void CreateClusterRequest::setWorker_system_disk_size(long worker_system_disk_size)
{
	worker_system_disk_size_ = worker_system_disk_size;
	setBodyParameter("Worker_system_disk_size", std::to_string(worker_system_disk_size));
}

std::string CreateClusterRequest::getVpcid()const
{
	return vpcid_;
}

void CreateClusterRequest::setVpcid(const std::string& vpcid)
{
	vpcid_ = vpcid;
	setBodyParameter("Vpcid", vpcid);
}

std::string CreateClusterRequest::getOs_type()const
{
	return os_type_;
}

void CreateClusterRequest::setOs_type(const std::string& os_type)
{
	os_type_ = os_type;
	setBodyParameter("Os_type", os_type);
}

std::string CreateClusterRequest::getCpu_policy()const
{
	return cpu_policy_;
}

void CreateClusterRequest::setCpu_policy(const std::string& cpu_policy)
{
	cpu_policy_ = cpu_policy;
	setBodyParameter("Cpu_policy", cpu_policy);
}

std::string CreateClusterRequest::getName()const
{
	return name_;
}

void CreateClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

bool CreateClusterRequest::getDisable_rollback()const
{
	return disable_rollback_;
}

void CreateClusterRequest::setDisable_rollback(bool disable_rollback)
{
	disable_rollback_ = disable_rollback;
	setBodyParameter("Disable_rollback", disable_rollback ? "true" : "false");
}

std::string CreateClusterRequest::getWorker_instance_charge_type()const
{
	return worker_instance_charge_type_;
}

void CreateClusterRequest::setWorker_instance_charge_type(const std::string& worker_instance_charge_type)
{
	worker_instance_charge_type_ = worker_instance_charge_type;
	setBodyParameter("Worker_instance_charge_type", worker_instance_charge_type);
}

