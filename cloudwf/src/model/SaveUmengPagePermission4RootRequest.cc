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

#include <alibabacloud/cloudwf/model/SaveUmengPagePermission4RootRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveUmengPagePermission4RootRequest;

SaveUmengPagePermission4RootRequest::SaveUmengPagePermission4RootRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveUmengPagePermission4Root")
{
	setMethod(HttpRequest::Method::Post);
}

SaveUmengPagePermission4RootRequest::~SaveUmengPagePermission4RootRequest()
{}

std::string SaveUmengPagePermission4RootRequest::getGsPermission()const
{
	return gsPermission_;
}

void SaveUmengPagePermission4RootRequest::setGsPermission(const std::string& gsPermission)
{
	gsPermission_ = gsPermission;
	setParameter("GsPermission", gsPermission);
}

std::string SaveUmengPagePermission4RootRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveUmengPagePermission4RootRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long SaveUmengPagePermission4RootRequest::getAliyunPk()const
{
	return aliyunPk_;
}

void SaveUmengPagePermission4RootRequest::setAliyunPk(long aliyunPk)
{
	aliyunPk_ = aliyunPk;
	setParameter("AliyunPk", std::to_string(aliyunPk));
}

long SaveUmengPagePermission4RootRequest::getPagePermission()const
{
	return pagePermission_;
}

void SaveUmengPagePermission4RootRequest::setPagePermission(long pagePermission)
{
	pagePermission_ = pagePermission;
	setParameter("PagePermission", std::to_string(pagePermission));
}

long SaveUmengPagePermission4RootRequest::getId()const
{
	return id_;
}

void SaveUmengPagePermission4RootRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

long SaveUmengPagePermission4RootRequest::getBid()const
{
	return bid_;
}

void SaveUmengPagePermission4RootRequest::setBid(long bid)
{
	bid_ = bid;
	setParameter("Bid", std::to_string(bid));
}

