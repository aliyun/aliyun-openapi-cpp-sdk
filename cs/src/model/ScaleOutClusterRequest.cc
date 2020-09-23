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

#include <alibabacloud/cs/model/ScaleOutClusterRequest.h>

using AlibabaCloud::CS::Model::ScaleOutClusterRequest;

ScaleOutClusterRequest::ScaleOutClusterRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/api/v2/clusters/[ClusterId]");
	setMethod(HttpRequest::Method::Post);
}

ScaleOutClusterRequest::~ScaleOutClusterRequest()
{}

bool ScaleOutClusterRequest::getWorker_data_disk()const
{
	return worker_data_disk_;
}

void ScaleOutClusterRequest::setWorker_data_disk(bool worker_data_disk)
{
	worker_data_disk_ = worker_data_disk;
	setBodyParameter("Worker_data_disk", worker_data_disk ? "true" : "false");
}

std::string ScaleOutClusterRequest::getKey_pair()const
{
	return key_pair_;
}

void ScaleOutClusterRequest::setKey_pair(const std::string& key_pair)
{
	key_pair_ = key_pair;
	setBodyParameter("Key_pair", key_pair);
}

int ScaleOutClusterRequest::getCount()const
{
	return count_;
}

void ScaleOutClusterRequest::setCount(int count)
{
	count_ = count;
	setBodyParameter("Count", std::to_string(count));
}

std::string ScaleOutClusterRequest::getWorker_system_disk_category()const
{
	return worker_system_disk_category_;
}

void ScaleOutClusterRequest::setWorker_system_disk_category(const std::string& worker_system_disk_category)
{
	worker_system_disk_category_ = worker_system_disk_category;
	setBodyParameter("Worker_system_disk_category", worker_system_disk_category);
}

bool ScaleOutClusterRequest::getCloud_monitor_flags()const
{
	return cloud_monitor_flags_;
}

void ScaleOutClusterRequest::setCloud_monitor_flags(bool cloud_monitor_flags)
{
	cloud_monitor_flags_ = cloud_monitor_flags;
	setBodyParameter("Cloud_monitor_flags", cloud_monitor_flags ? "true" : "false");
}

std::string ScaleOutClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ScaleOutClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ScaleOutClusterRequest::getUser_data()const
{
	return user_data_;
}

void ScaleOutClusterRequest::setUser_data(const std::string& user_data)
{
	user_data_ = user_data;
	setBodyParameter("User_data", user_data);
}

std::string ScaleOutClusterRequest::getWorker_period_unit()const
{
	return worker_period_unit_;
}

void ScaleOutClusterRequest::setWorker_period_unit(const std::string& worker_period_unit)
{
	worker_period_unit_ = worker_period_unit;
	setBodyParameter("Worker_period_unit", worker_period_unit);
}

bool ScaleOutClusterRequest::getWorker_auto_renew()const
{
	return worker_auto_renew_;
}

void ScaleOutClusterRequest::setWorker_auto_renew(bool worker_auto_renew)
{
	worker_auto_renew_ = worker_auto_renew;
	setBodyParameter("Worker_auto_renew", worker_auto_renew ? "true" : "false");
}

int ScaleOutClusterRequest::getWorker_auto_renew_period()const
{
	return worker_auto_renew_period_;
}

void ScaleOutClusterRequest::setWorker_auto_renew_period(int worker_auto_renew_period)
{
	worker_auto_renew_period_ = worker_auto_renew_period;
	setBodyParameter("Worker_auto_renew_period", std::to_string(worker_auto_renew_period));
}

int ScaleOutClusterRequest::getWorker_period()const
{
	return worker_period_;
}

void ScaleOutClusterRequest::setWorker_period(int worker_period)
{
	worker_period_ = worker_period;
	setBodyParameter("Worker_period", std::to_string(worker_period));
}

std::string ScaleOutClusterRequest::getLogin_password()const
{
	return login_password_;
}

void ScaleOutClusterRequest::setLogin_password(const std::string& login_password)
{
	login_password_ = login_password;
	setBodyParameter("Login_password", login_password);
}

int ScaleOutClusterRequest::getWorker_system_disk_size()const
{
	return worker_system_disk_size_;
}

void ScaleOutClusterRequest::setWorker_system_disk_size(int worker_system_disk_size)
{
	worker_system_disk_size_ = worker_system_disk_size;
	setBodyParameter("Worker_system_disk_size", std::to_string(worker_system_disk_size));
}

std::string ScaleOutClusterRequest::getCpu_policy()const
{
	return cpu_policy_;
}

void ScaleOutClusterRequest::setCpu_policy(const std::string& cpu_policy)
{
	cpu_policy_ = cpu_policy;
	setBodyParameter("Cpu_policy", cpu_policy);
}

bool ScaleOutClusterRequest::getDisable_rollback()const
{
	return disable_rollback_;
}

void ScaleOutClusterRequest::setDisable_rollback(bool disable_rollback)
{
	disable_rollback_ = disable_rollback;
	setBodyParameter("Disable_rollback", disable_rollback ? "true" : "false");
}

std::string ScaleOutClusterRequest::getImage_id()const
{
	return image_id_;
}

void ScaleOutClusterRequest::setImage_id(const std::string& image_id)
{
	image_id_ = image_id;
	setBodyParameter("Image_id", image_id);
}

std::string ScaleOutClusterRequest::getWorker_instance_charge_type()const
{
	return worker_instance_charge_type_;
}

void ScaleOutClusterRequest::setWorker_instance_charge_type(const std::string& worker_instance_charge_type)
{
	worker_instance_charge_type_ = worker_instance_charge_type;
	setBodyParameter("Worker_instance_charge_type", worker_instance_charge_type);
}

