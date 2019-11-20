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

#include <alibabacloud/dysmsapi/model/AddSmsSignRequest.h>

using AlibabaCloud::Dysmsapi::Model::AddSmsSignRequest;

AddSmsSignRequest::AddSmsSignRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "AddSmsSign")
{
	setMethod(HttpRequest::Method::Post);
}

AddSmsSignRequest::~AddSmsSignRequest()
{}

long AddSmsSignRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddSmsSignRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddSmsSignRequest::getRemark()const
{
	return remark_;
}

void AddSmsSignRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string AddSmsSignRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddSmsSignRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddSmsSignRequest::getSignName()const
{
	return signName_;
}

void AddSmsSignRequest::setSignName(const std::string& signName)
{
	signName_ = signName;
	setCoreParameter("SignName", signName);
}

std::vector<AddSmsSignRequest::SignFileList> AddSmsSignRequest::getSignFileList()const
{
	return signFileList_;
}

void AddSmsSignRequest::setSignFileList(const std::vector<SignFileList>& signFileList)
{
	signFileList_ = signFileList;
	for(int dep1 = 0; dep1!= signFileList.size(); dep1++) {
		auto signFileListObj = signFileList.at(dep1);
		std::string signFileListObjStr = "SignFileList." + std::to_string(dep1);
		setCoreParameter(signFileListObjStr + ".FileContents", signFileListObj.fileContents);
		setCoreParameter(signFileListObjStr + ".FileSuffix", signFileListObj.fileSuffix);
	}
}

std::string AddSmsSignRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddSmsSignRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long AddSmsSignRequest::getOwnerId()const
{
	return ownerId_;
}

void AddSmsSignRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int AddSmsSignRequest::getSignSource()const
{
	return signSource_;
}

void AddSmsSignRequest::setSignSource(int signSource)
{
	signSource_ = signSource;
	setCoreParameter("SignSource", std::to_string(signSource));
}

