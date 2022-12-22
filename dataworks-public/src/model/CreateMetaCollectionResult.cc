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

#include <alibabacloud/dataworks-public/model/CreateMetaCollectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

CreateMetaCollectionResult::CreateMetaCollectionResult() :
	ServiceResult()
{}

CreateMetaCollectionResult::CreateMetaCollectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMetaCollectionResult::~CreateMetaCollectionResult()
{}

void CreateMetaCollectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["QualifiedName"].isNull())
		qualifiedName_ = value["QualifiedName"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();

}

std::string CreateMetaCollectionResult::getQualifiedName()const
{
	return qualifiedName_;
}

std::string CreateMetaCollectionResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateMetaCollectionResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateMetaCollectionResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string CreateMetaCollectionResult::getSuccess()const
{
	return success_;
}

