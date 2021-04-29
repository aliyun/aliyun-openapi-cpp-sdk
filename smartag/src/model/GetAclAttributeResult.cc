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

#include <alibabacloud/smartag/model/GetAclAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

GetAclAttributeResult::GetAclAttributeResult() :
	ServiceResult()
{}

GetAclAttributeResult::GetAclAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAclAttributeResult::~GetAclAttributeResult()
{}

void GetAclAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["ErrorConfigSmartAGCount"].isNull())
		errorConfigSmartAGCount_ = std::stoi(value["ErrorConfigSmartAGCount"].asString());
	if(!value["AclName"].isNull())
		aclName_ = value["AclName"].asString();

}

std::string GetAclAttributeResult::getAclId()const
{
	return aclId_;
}

int GetAclAttributeResult::getErrorConfigSmartAGCount()const
{
	return errorConfigSmartAGCount_;
}

std::string GetAclAttributeResult::getAclName()const
{
	return aclName_;
}

