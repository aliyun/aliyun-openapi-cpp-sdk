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

#include <alibabacloud/ddoscoo/model/DescribleLayer7InstanceRelationsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribleLayer7InstanceRelationsRequest;

DescribleLayer7InstanceRelationsRequest::DescribleLayer7InstanceRelationsRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribleLayer7InstanceRelations")
{
	setMethod(HttpRequest::Method::Post);
}

DescribleLayer7InstanceRelationsRequest::~DescribleLayer7InstanceRelationsRequest()
{}

std::vector<std::string> DescribleLayer7InstanceRelationsRequest::getDomainList()const
{
	return domainList_;
}

void DescribleLayer7InstanceRelationsRequest::setDomainList(const std::vector<std::string>& domainList)
{
	domainList_ = domainList;
	for(int dep1 = 0; dep1!= domainList.size(); dep1++) {
		setParameter("DomainList."+ std::to_string(dep1), domainList.at(dep1));
	}
}

std::string DescribleLayer7InstanceRelationsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribleLayer7InstanceRelationsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribleLayer7InstanceRelationsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribleLayer7InstanceRelationsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

