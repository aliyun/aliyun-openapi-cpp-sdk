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

#include <alibabacloud/ccc/model/AddPhoneTagsRequest.h>

using AlibabaCloud::CCC::Model::AddPhoneTagsRequest;

AddPhoneTagsRequest::AddPhoneTagsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "AddPhoneTags")
{
	setMethod(HttpRequest::Method::Post);
}

AddPhoneTagsRequest::~AddPhoneTagsRequest()
{}

std::string AddPhoneTagsRequest::getRegionNameProvince()const
{
	return regionNameProvince_;
}

void AddPhoneTagsRequest::setRegionNameProvince(const std::string& regionNameProvince)
{
	regionNameProvince_ = regionNameProvince;
	setParameter("RegionNameProvince", regionNameProvince);
}

int AddPhoneTagsRequest::getType()const
{
	return type_;
}

void AddPhoneTagsRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

std::string AddPhoneTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddPhoneTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int AddPhoneTagsRequest::getConcurrency()const
{
	return concurrency_;
}

void AddPhoneTagsRequest::setConcurrency(int concurrency)
{
	concurrency_ = concurrency;
	setParameter("Concurrency", std::to_string(concurrency));
}

std::string AddPhoneTagsRequest::getInstanceId()const
{
	return instanceId_;
}

void AddPhoneTagsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string AddPhoneTagsRequest::getProvider()const
{
	return provider_;
}

void AddPhoneTagsRequest::setProvider(const std::string& provider)
{
	provider_ = provider;
	setParameter("Provider", provider);
}

std::vector<std::string> AddPhoneTagsRequest::getPhoneNumberList()const
{
	return phoneNumberList_;
}

void AddPhoneTagsRequest::setPhoneNumberList(const std::vector<std::string>& phoneNumberList)
{
	phoneNumberList_ = phoneNumberList;
	for(int dep1 = 0; dep1!= phoneNumberList.size(); dep1++) {
		setParameter("PhoneNumberList."+ std::to_string(dep1), phoneNumberList.at(dep1));
	}
}

std::string AddPhoneTagsRequest::getServiceTag()const
{
	return serviceTag_;
}

void AddPhoneTagsRequest::setServiceTag(const std::string& serviceTag)
{
	serviceTag_ = serviceTag;
	setParameter("ServiceTag", serviceTag);
}

std::string AddPhoneTagsRequest::getSipTag()const
{
	return sipTag_;
}

void AddPhoneTagsRequest::setSipTag(const std::string& sipTag)
{
	sipTag_ = sipTag;
	setParameter("SipTag", sipTag);
}

std::string AddPhoneTagsRequest::getRegionNameCity()const
{
	return regionNameCity_;
}

void AddPhoneTagsRequest::setRegionNameCity(const std::string& regionNameCity)
{
	regionNameCity_ = regionNameCity;
	setParameter("RegionNameCity", regionNameCity);
}

