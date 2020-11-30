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

#include <alibabacloud/arms/model/ExportPrometheusRulesRequest.h>

using AlibabaCloud::ARMS::Model::ExportPrometheusRulesRequest;

ExportPrometheusRulesRequest::ExportPrometheusRulesRequest() :
	RpcServiceRequest("arms", "2019-08-08", "ExportPrometheusRules")
{
	setMethod(HttpRequest::Method::Post);
}

ExportPrometheusRulesRequest::~ExportPrometheusRulesRequest()
{}

std::string ExportPrometheusRulesRequest::getRegionId()const
{
	return regionId_;
}

void ExportPrometheusRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ExportPrometheusRulesRequest::get_NameSpace()const
{
	return _nameSpace_;
}

void ExportPrometheusRulesRequest::set_NameSpace(const std::string& _nameSpace)
{
	_nameSpace_ = _nameSpace;
	setParameter("_NameSpace", _nameSpace);
}

std::string ExportPrometheusRulesRequest::getName()const
{
	return name_;
}

void ExportPrometheusRulesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ExportPrometheusRulesRequest::getClusterId()const
{
	return clusterId_;
}

void ExportPrometheusRulesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

