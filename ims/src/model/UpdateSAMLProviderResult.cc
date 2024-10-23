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

#include <alibabacloud/ims/model/UpdateSAMLProviderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

UpdateSAMLProviderResult::UpdateSAMLProviderResult() :
	ServiceResult()
{}

UpdateSAMLProviderResult::UpdateSAMLProviderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateSAMLProviderResult::~UpdateSAMLProviderResult()
{}

void UpdateSAMLProviderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto sAMLProviderNode = value["SAMLProvider"];
	if(!sAMLProviderNode["UpdateDate"].isNull())
		sAMLProvider_.updateDate = sAMLProviderNode["UpdateDate"].asString();
	if(!sAMLProviderNode["Description"].isNull())
		sAMLProvider_.description = sAMLProviderNode["Description"].asString();
	if(!sAMLProviderNode["SAMLProviderName"].isNull())
		sAMLProvider_.sAMLProviderName = sAMLProviderNode["SAMLProviderName"].asString();
	if(!sAMLProviderNode["CreateDate"].isNull())
		sAMLProvider_.createDate = sAMLProviderNode["CreateDate"].asString();
	if(!sAMLProviderNode["Arn"].isNull())
		sAMLProvider_.arn = sAMLProviderNode["Arn"].asString();

}

UpdateSAMLProviderResult::SAMLProvider UpdateSAMLProviderResult::getSAMLProvider()const
{
	return sAMLProvider_;
}

