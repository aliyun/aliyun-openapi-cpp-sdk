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

#include <alibabacloud/resourcesharing/model/UpdateResourceShareResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

UpdateResourceShareResult::UpdateResourceShareResult() :
	ServiceResult()
{}

UpdateResourceShareResult::UpdateResourceShareResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateResourceShareResult::~UpdateResourceShareResult()
{}

void UpdateResourceShareResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceShareNode = value["ResourceShare"];
	if(!resourceShareNode["UpdateTime"].isNull())
		resourceShare_.updateTime = resourceShareNode["UpdateTime"].asString();
	if(!resourceShareNode["ResourceShareName"].isNull())
		resourceShare_.resourceShareName = resourceShareNode["ResourceShareName"].asString();
	if(!resourceShareNode["ResourceShareOwner"].isNull())
		resourceShare_.resourceShareOwner = resourceShareNode["ResourceShareOwner"].asString();
	if(!resourceShareNode["CreateTime"].isNull())
		resourceShare_.createTime = resourceShareNode["CreateTime"].asString();
	if(!resourceShareNode["ResourceShareId"].isNull())
		resourceShare_.resourceShareId = resourceShareNode["ResourceShareId"].asString();
	if(!resourceShareNode["ResourceShareStatus"].isNull())
		resourceShare_.resourceShareStatus = resourceShareNode["ResourceShareStatus"].asString();
	if(!resourceShareNode["AllowExternalTargets"].isNull())
		resourceShare_.allowExternalTargets = resourceShareNode["AllowExternalTargets"].asString() == "true";

}

UpdateResourceShareResult::ResourceShare UpdateResourceShareResult::getResourceShare()const
{
	return resourceShare_;
}

