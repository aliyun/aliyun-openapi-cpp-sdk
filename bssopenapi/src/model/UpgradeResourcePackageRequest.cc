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

#include <alibabacloud/bssopenapi/model/UpgradeResourcePackageRequest.h>

using AlibabaCloud::BssOpenApi::Model::UpgradeResourcePackageRequest;

UpgradeResourcePackageRequest::UpgradeResourcePackageRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "UpgradeResourcePackage")
{
	setMethod(HttpRequest::Method::Post);
}

UpgradeResourcePackageRequest::~UpgradeResourcePackageRequest()
{}

std::string UpgradeResourcePackageRequest::getSpecification()const
{
	return specification_;
}

void UpgradeResourcePackageRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setParameter("Specification", specification);
}

long UpgradeResourcePackageRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeResourcePackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpgradeResourcePackageRequest::getEffectiveDate()const
{
	return effectiveDate_;
}

void UpgradeResourcePackageRequest::setEffectiveDate(const std::string& effectiveDate)
{
	effectiveDate_ = effectiveDate;
	setParameter("EffectiveDate", effectiveDate);
}

std::string UpgradeResourcePackageRequest::getInstanceId()const
{
	return instanceId_;
}

void UpgradeResourcePackageRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

