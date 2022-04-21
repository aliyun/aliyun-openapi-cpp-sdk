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

#include <alibabacloud/sas/model/ListCriteriaStrategyRequest.h>

using AlibabaCloud::Sas::Model::ListCriteriaStrategyRequest;

ListCriteriaStrategyRequest::ListCriteriaStrategyRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ListCriteriaStrategy")
{
	setMethod(HttpRequest::Method::Post);
}

ListCriteriaStrategyRequest::~ListCriteriaStrategyRequest()
{}

std::string ListCriteriaStrategyRequest::getImageName()const
{
	return imageName_;
}

void ListCriteriaStrategyRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

std::string ListCriteriaStrategyRequest::getClusterId()const
{
	return clusterId_;
}

void ListCriteriaStrategyRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListCriteriaStrategyRequest::getLabel()const
{
	return label_;
}

void ListCriteriaStrategyRequest::setLabel(const std::string& label)
{
	label_ = label;
	setParameter("Label", label);
}

std::string ListCriteriaStrategyRequest::getStrategyName()const
{
	return strategyName_;
}

void ListCriteriaStrategyRequest::setStrategyName(const std::string& strategyName)
{
	strategyName_ = strategyName;
	setParameter("StrategyName", strategyName);
}

std::string ListCriteriaStrategyRequest::get_Namespace()const
{
	return _namespace_;
}

void ListCriteriaStrategyRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

