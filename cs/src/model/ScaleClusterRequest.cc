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

#include <alibabacloud/cs/model/ScaleClusterRequest.h>

using AlibabaCloud::CS::Model::ScaleClusterRequest;

ScaleClusterRequest::ScaleClusterRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/[ClusterId]");
	setMethod(HttpRequest::Method::Put);
}

ScaleClusterRequest::~ScaleClusterRequest()
{}

std::string ScaleClusterRequest::getKey_pair()const
{
	return key_pair_;
}

void ScaleClusterRequest::setKey_pair(const std::string& key_pair)
{
	key_pair_ = key_pair;
	setBodyParameter("Key_pair", key_pair);
}

bool ScaleClusterRequest::getWorker_data_disk()const
{
	return worker_data_disk_;
}

void ScaleClusterRequest::setWorker_data_disk(bool worker_data_disk)
{
	worker_data_disk_ = worker_data_disk;
	setBodyParameter("Worker_data_disk", worker_data_disk ? "true" : "false");
}

long ScaleClusterRequest::getCount()const
{
	return count_;
}

void ScaleClusterRequest::setCount(long count)
{
	count_ = count;
	setBodyParameter("Count", std::to_string(count));
}

std::string ScaleClusterRequest::getWorker_system_disk_category()const
{
	return worker_system_disk_category_;
}

void ScaleClusterRequest::setWorker_system_disk_category(const std::string& worker_system_disk_category)
{
	worker_system_disk_category_ = worker_system_disk_category;
	setBodyParameter("Worker_system_disk_category", worker_system_disk_category);
}

bool ScaleClusterRequest::getCloud_monitor_flags()const
{
	return cloud_monitor_flags_;
}

void ScaleClusterRequest::setCloud_monitor_flags(bool cloud_monitor_flags)
{
	cloud_monitor_flags_ = cloud_monitor_flags;
	setBodyParameter("Cloud_monitor_flags", cloud_monitor_flags ? "true" : "false");
}

std::string ScaleClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ScaleClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ScaleClusterRequest::getWorker_period_unit()const
{
	return worker_period_unit_;
}

void ScaleClusterRequest::setWorker_period_unit(const std::string& worker_period_unit)
{
	worker_period_unit_ = worker_period_unit;
	setBodyParameter("Worker_period_unit", worker_period_unit);
}

bool ScaleClusterRequest::getWorker_auto_renew()const
{
	return worker_auto_renew_;
}

void ScaleClusterRequest::setWorker_auto_renew(bool worker_auto_renew)
{
	worker_auto_renew_ = worker_auto_renew;
	setBodyParameter("Worker_auto_renew", worker_auto_renew ? "true" : "false");
}

long ScaleClusterRequest::getWorker_auto_renew_period()const
{
	return worker_auto_renew_period_;
}

void ScaleClusterRequest::setWorker_auto_renew_period(long worker_auto_renew_period)
{
	worker_auto_renew_period_ = worker_auto_renew_period;
	setBodyParameter("Worker_auto_renew_period", std::to_string(worker_auto_renew_period));
}

long ScaleClusterRequest::getWorker_period()const
{
	return worker_period_;
}

void ScaleClusterRequest::setWorker_period(long worker_period)
{
	worker_period_ = worker_period;
	setBodyParameter("Worker_period", std::to_string(worker_period));
}

std::string ScaleClusterRequest::getLogin_password()const
{
	return login_password_;
}

void ScaleClusterRequest::setLogin_password(const std::string& login_password)
{
	login_password_ = login_password;
	setBodyParameter("Login_password", login_password);
}

long ScaleClusterRequest::getWorker_system_disk_size()const
{
	return worker_system_disk_size_;
}

void ScaleClusterRequest::setWorker_system_disk_size(long worker_system_disk_size)
{
	worker_system_disk_size_ = worker_system_disk_size;
	setBodyParameter("Worker_system_disk_size", std::to_string(worker_system_disk_size));
}

std::string ScaleClusterRequest::getCpu_policy()const
{
	return cpu_policy_;
}

void ScaleClusterRequest::setCpu_policy(const std::string& cpu_policy)
{
	cpu_policy_ = cpu_policy;
	setBodyParameter("Cpu_policy", cpu_policy);
}

bool ScaleClusterRequest::getDisable_rollback()const
{
	return disable_rollback_;
}

void ScaleClusterRequest::setDisable_rollback(bool disable_rollback)
{
	disable_rollback_ = disable_rollback;
	setBodyParameter("Disable_rollback", disable_rollback ? "true" : "false");
}

std::string ScaleClusterRequest::getWorker_instance_charge_type()const
{
	return worker_instance_charge_type_;
}

void ScaleClusterRequest::setWorker_instance_charge_type(const std::string& worker_instance_charge_type)
{
	worker_instance_charge_type_ = worker_instance_charge_type;
	setBodyParameter("Worker_instance_charge_type", worker_instance_charge_type);
}

