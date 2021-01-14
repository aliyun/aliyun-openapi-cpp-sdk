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

#include <alibabacloud/cdrs/model/ListPersonResultRequest.h>

using AlibabaCloud::CDRS::Model::ListPersonResultRequest;

ListPersonResultRequest::ListPersonResultRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListPersonResult")
{
	setMethod(HttpRequest::Method::Post);
}

ListPersonResultRequest::~ListPersonResultRequest()
{}

std::string ListPersonResultRequest::getProfession()const
{
	return profession_;
}

void ListPersonResultRequest::setProfession(const std::string& profession)
{
	profession_ = profession;
	setBodyParameter("Profession", profession);
}

std::string ListPersonResultRequest::getSchema()const
{
	return schema_;
}

void ListPersonResultRequest::setSchema(const std::string& schema)
{
	schema_ = schema;
	setBodyParameter("Schema", schema);
}

std::string ListPersonResultRequest::getCorpId()const
{
	return corpId_;
}

void ListPersonResultRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListPersonResultRequest::getGender()const
{
	return gender_;
}

void ListPersonResultRequest::setGender(const std::string& gender)
{
	gender_ = gender;
	setBodyParameter("Gender", gender);
}

std::string ListPersonResultRequest::getEndTime()const
{
	return endTime_;
}

void ListPersonResultRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListPersonResultRequest::getStartTime()const
{
	return startTime_;
}

void ListPersonResultRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

long ListPersonResultRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListPersonResultRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

long ListPersonResultRequest::getPageSize()const
{
	return pageSize_;
}

void ListPersonResultRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListPersonResultRequest::getAge()const
{
	return age_;
}

void ListPersonResultRequest::setAge(const std::string& age)
{
	age_ = age;
	setBodyParameter("Age", age);
}

