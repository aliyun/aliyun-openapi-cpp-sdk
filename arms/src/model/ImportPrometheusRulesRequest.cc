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

#include <alibabacloud/arms/model/ImportPrometheusRulesRequest.h>

using AlibabaCloud::ARMS::Model::ImportPrometheusRulesRequest;

ImportPrometheusRulesRequest::ImportPrometheusRulesRequest() :
	RpcServiceRequest("arms", "2019-08-08", "ImportPrometheusRules")
{
	setMethod(HttpRequest::Method::Post);
}

ImportPrometheusRulesRequest::~ImportPrometheusRulesRequest()
{}

std::string ImportPrometheusRulesRequest::getRegionId()const
{
	return regionId_;
}

void ImportPrometheusRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ImportPrometheusRulesRequest::get_NameSpace()const
{
	return _nameSpace_;
}

void ImportPrometheusRulesRequest::set_NameSpace(const std::string& _nameSpace)
{
	_nameSpace_ = _nameSpace;
	setParameter("_NameSpace", _nameSpace);
}

std::string ImportPrometheusRulesRequest::getName()const
{
	return name_;
}

void ImportPrometheusRulesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ImportPrometheusRulesRequest::getClusterId()const
{
	return clusterId_;
}

void ImportPrometheusRulesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ImportPrometheusRulesRequest::getContent()const
{
	return content_;
}

void ImportPrometheusRulesRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

