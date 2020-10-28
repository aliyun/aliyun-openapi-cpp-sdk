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

#include <alibabacloud/drds/model/DescribeMyCatDbListRequest.h>

using AlibabaCloud::Drds::Model::DescribeMyCatDbListRequest;

DescribeMyCatDbListRequest::DescribeMyCatDbListRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeMyCatDbList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMyCatDbListRequest::~DescribeMyCatDbListRequest()
{}

std::string DescribeMyCatDbListRequest::getSchemaUrl()const
{
	return schemaUrl_;
}

void DescribeMyCatDbListRequest::setSchemaUrl(const std::string& schemaUrl)
{
	schemaUrl_ = schemaUrl;
	setParameter("SchemaUrl", schemaUrl);
}

std::string DescribeMyCatDbListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeMyCatDbListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeMyCatDbListRequest::getRuleUrl()const
{
	return ruleUrl_;
}

void DescribeMyCatDbListRequest::setRuleUrl(const std::string& ruleUrl)
{
	ruleUrl_ = ruleUrl;
	setParameter("RuleUrl", ruleUrl);
}

