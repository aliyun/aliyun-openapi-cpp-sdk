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

#include <alibabacloud/cs/model/ModifyClusterRequest.h>

using AlibabaCloud::CS::Model::ModifyClusterRequest;

ModifyClusterRequest::ModifyClusterRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/api/v2/clusters/[ClusterId]");
	setMethod(HttpRequest::Method::Put);
}

ModifyClusterRequest::~ModifyClusterRequest()
{}

bool ModifyClusterRequest::getApi_server_eip()const
{
	return api_server_eip_;
}

void ModifyClusterRequest::setApi_server_eip(bool api_server_eip)
{
	api_server_eip_ = api_server_eip;
	setBodyParameter("Api_server_eip", api_server_eip ? "true" : "false");
}

std::string ModifyClusterRequest::getResource_group_id()const
{
	return resource_group_id_;
}

void ModifyClusterRequest::setResource_group_id(const std::string& resource_group_id)
{
	resource_group_id_ = resource_group_id;
	setBodyParameter("Resource_group_id", resource_group_id);
}

std::string ModifyClusterRequest::getIngress_domain_rebinding()const
{
	return ingress_domain_rebinding_;
}

void ModifyClusterRequest::setIngress_domain_rebinding(const std::string& ingress_domain_rebinding)
{
	ingress_domain_rebinding_ = ingress_domain_rebinding;
	setBodyParameter("Ingress_domain_rebinding", ingress_domain_rebinding);
}

bool ModifyClusterRequest::getDeletion_protection()const
{
	return deletion_protection_;
}

void ModifyClusterRequest::setDeletion_protection(bool deletion_protection)
{
	deletion_protection_ = deletion_protection;
	setBodyParameter("Deletion_protection", deletion_protection ? "true" : "false");
}

std::string ModifyClusterRequest::getIngress_loadbalancer_id()const
{
	return ingress_loadbalancer_id_;
}

void ModifyClusterRequest::setIngress_loadbalancer_id(const std::string& ingress_loadbalancer_id)
{
	ingress_loadbalancer_id_ = ingress_loadbalancer_id;
	setBodyParameter("Ingress_loadbalancer_id", ingress_loadbalancer_id);
}

std::string ModifyClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyClusterRequest::getApi_server_eip_id()const
{
	return api_server_eip_id_;
}

void ModifyClusterRequest::setApi_server_eip_id(const std::string& api_server_eip_id)
{
	api_server_eip_id_ = api_server_eip_id;
	setBodyParameter("Api_server_eip_id", api_server_eip_id);
}

