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

#include <alibabacloud/dms-enterprise/model/CreateStructSyncOrderRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateStructSyncOrderRequest;

CreateStructSyncOrderRequest::CreateStructSyncOrderRequest() :
	RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateStructSyncOrder")
{
	setMethod(HttpRequest::Method::Post);
}

CreateStructSyncOrderRequest::~CreateStructSyncOrderRequest()
{}

long CreateStructSyncOrderRequest::getTid()const
{
	return tid_;
}

void CreateStructSyncOrderRequest::setTid(long tid)
{
	tid_ = tid;
	setParameter("Tid", std::to_string(tid));
}

std::string CreateStructSyncOrderRequest::getAttachmentKey()const
{
	return attachmentKey_;
}

void CreateStructSyncOrderRequest::setAttachmentKey(const std::string& attachmentKey)
{
	attachmentKey_ = attachmentKey;
	setParameter("AttachmentKey", attachmentKey);
}

Struct CreateStructSyncOrderRequest::getParam()const
{
	return param_;
}

void CreateStructSyncOrderRequest::setParam(const Struct& param)
{
	param_ = param;
	setParameter("Param", std::to_string(param));
}

std::string CreateStructSyncOrderRequest::getComment()const
{
	return comment_;
}

void CreateStructSyncOrderRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setParameter("Comment", comment);
}

Array CreateStructSyncOrderRequest::getRelatedUserList()const
{
	return relatedUserList_;
}

void CreateStructSyncOrderRequest::setRelatedUserList(const Array& relatedUserList)
{
	relatedUserList_ = relatedUserList;
	setParameter("RelatedUserList", std::to_string(relatedUserList));
}

