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

#include <alibabacloud/dyvmsapi/model/SetTransferCalleePoolConfigRequest.h>

using AlibabaCloud::Dyvmsapi::Model::SetTransferCalleePoolConfigRequest;

SetTransferCalleePoolConfigRequest::SetTransferCalleePoolConfigRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "SetTransferCalleePoolConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetTransferCalleePoolConfigRequest::~SetTransferCalleePoolConfigRequest()
{}

long SetTransferCalleePoolConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetTransferCalleePoolConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetTransferCalleePoolConfigRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void SetTransferCalleePoolConfigRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string SetTransferCalleePoolConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetTransferCalleePoolConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<SetTransferCalleePoolConfigRequest::Details> SetTransferCalleePoolConfigRequest::getDetails()const
{
	return details_;
}

void SetTransferCalleePoolConfigRequest::setDetails(const std::vector<Details>& details)
{
	details_ = details;
	for(int dep1 = 0; dep1!= details.size(); dep1++) {
		auto detailsObj = details.at(dep1);
		std::string detailsObjStr = "Details." + std::to_string(dep1 + 1);
		setParameter(detailsObjStr + ".Caller", detailsObj.caller);
		setParameter(detailsObjStr + ".Called", detailsObj.called);
	}
}

std::string SetTransferCalleePoolConfigRequest::getCalledRouteMode()const
{
	return calledRouteMode_;
}

void SetTransferCalleePoolConfigRequest::setCalledRouteMode(const std::string& calledRouteMode)
{
	calledRouteMode_ = calledRouteMode;
	setParameter("CalledRouteMode", calledRouteMode);
}

std::string SetTransferCalleePoolConfigRequest::getQualificationId()const
{
	return qualificationId_;
}

void SetTransferCalleePoolConfigRequest::setQualificationId(const std::string& qualificationId)
{
	qualificationId_ = qualificationId;
	setParameter("QualificationId", qualificationId);
}

std::string SetTransferCalleePoolConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetTransferCalleePoolConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SetTransferCalleePoolConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetTransferCalleePoolConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

