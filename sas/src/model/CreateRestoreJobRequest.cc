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

#include <alibabacloud/sas/model/CreateRestoreJobRequest.h>

using AlibabaCloud::Sas::Model::CreateRestoreJobRequest;

CreateRestoreJobRequest::CreateRestoreJobRequest() :
	RpcServiceRequest("sas", "2018-12-03", "CreateRestoreJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateRestoreJobRequest::~CreateRestoreJobRequest()
{}

long CreateRestoreJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateRestoreJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateRestoreJobRequest::getSnapshotId()const
{
	return snapshotId_;
}

void CreateRestoreJobRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string CreateRestoreJobRequest::getUuid()const
{
	return uuid_;
}

void CreateRestoreJobRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

std::string CreateRestoreJobRequest::getSnapshotHash()const
{
	return snapshotHash_;
}

void CreateRestoreJobRequest::setSnapshotHash(const std::string& snapshotHash)
{
	snapshotHash_ = snapshotHash;
	setParameter("SnapshotHash", snapshotHash);
}

std::string CreateRestoreJobRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateRestoreJobRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateRestoreJobRequest::getSnapshotVersion()const
{
	return snapshotVersion_;
}

void CreateRestoreJobRequest::setSnapshotVersion(const std::string& snapshotVersion)
{
	snapshotVersion_ = snapshotVersion;
	setParameter("SnapshotVersion", snapshotVersion);
}

std::string CreateRestoreJobRequest::getPolicyVersion()const
{
	return policyVersion_;
}

void CreateRestoreJobRequest::setPolicyVersion(const std::string& policyVersion)
{
	policyVersion_ = policyVersion;
	setParameter("PolicyVersion", policyVersion);
}

std::string CreateRestoreJobRequest::getIncludes()const
{
	return includes_;
}

void CreateRestoreJobRequest::setIncludes(const std::string& includes)
{
	includes_ = includes;
	setParameter("Includes", includes);
}

std::string CreateRestoreJobRequest::getTarget()const
{
	return target_;
}

void CreateRestoreJobRequest::setTarget(const std::string& target)
{
	target_ = target;
	setParameter("Target", target);
}

std::string CreateRestoreJobRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateRestoreJobRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

