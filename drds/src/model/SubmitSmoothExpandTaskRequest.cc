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

#include <alibabacloud/drds/model/SubmitSmoothExpandTaskRequest.h>

using AlibabaCloud::Drds::Model::SubmitSmoothExpandTaskRequest;

SubmitSmoothExpandTaskRequest::SubmitSmoothExpandTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SubmitSmoothExpandTask")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitSmoothExpandTaskRequest::~SubmitSmoothExpandTaskRequest()
{}

std::string SubmitSmoothExpandTaskRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SubmitSmoothExpandTaskRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string SubmitSmoothExpandTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitSmoothExpandTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool SubmitSmoothExpandTaskRequest::getDbInstanceIsCreating()const
{
	return dbInstanceIsCreating_;
}

void SubmitSmoothExpandTaskRequest::setDbInstanceIsCreating(bool dbInstanceIsCreating)
{
	dbInstanceIsCreating_ = dbInstanceIsCreating;
	setParameter("DbInstanceIsCreating", dbInstanceIsCreating ? "true" : "false");
}

std::vector<SubmitSmoothExpandTaskRequest::RdsSuperInstances> SubmitSmoothExpandTaskRequest::getRdsSuperInstances()const
{
	return rdsSuperInstances_;
}

void SubmitSmoothExpandTaskRequest::setRdsSuperInstances(const std::vector<RdsSuperInstances>& rdsSuperInstances)
{
	rdsSuperInstances_ = rdsSuperInstances;
	for(int dep1 = 0; dep1!= rdsSuperInstances.size(); dep1++) {
		auto rdsSuperInstancesObj = rdsSuperInstances.at(dep1);
		std::string rdsSuperInstancesObjStr = "RdsSuperInstances." + std::to_string(dep1 + 1);
		setParameter(rdsSuperInstancesObjStr + ".Password", rdsSuperInstancesObj.password);
		setParameter(rdsSuperInstancesObjStr + ".AccountName", rdsSuperInstancesObj.accountName);
		setParameter(rdsSuperInstancesObjStr + ".RdsName", rdsSuperInstancesObj.rdsName);
	}
}

std::string SubmitSmoothExpandTaskRequest::getDbName()const
{
	return dbName_;
}

void SubmitSmoothExpandTaskRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::vector<SubmitSmoothExpandTaskRequest::TransferTaskInfos> SubmitSmoothExpandTaskRequest::getTransferTaskInfos()const
{
	return transferTaskInfos_;
}

void SubmitSmoothExpandTaskRequest::setTransferTaskInfos(const std::vector<TransferTaskInfos>& transferTaskInfos)
{
	transferTaskInfos_ = transferTaskInfos;
	for(int dep1 = 0; dep1!= transferTaskInfos.size(); dep1++) {
		auto transferTaskInfosObj = transferTaskInfos.at(dep1);
		std::string transferTaskInfosObjStr = "TransferTaskInfos." + std::to_string(dep1 + 1);
		setParameter(transferTaskInfosObjStr + ".DbName", transferTaskInfosObj.dbName);
		setParameter(transferTaskInfosObjStr + ".SrcInstanceName", transferTaskInfosObj.srcInstanceName);
		setParameter(transferTaskInfosObjStr + ".InstanceType", transferTaskInfosObj.instanceType);
		setParameter(transferTaskInfosObjStr + ".DstInstanceName", transferTaskInfosObj.dstInstanceName);
	}
}

