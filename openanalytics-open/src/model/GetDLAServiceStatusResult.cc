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

#include <alibabacloud/openanalytics-open/model/GetDLAServiceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

GetDLAServiceStatusResult::GetDLAServiceStatusResult() :
	ServiceResult()
{}

GetDLAServiceStatusResult::GetDLAServiceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDLAServiceStatusResult::~GetDLAServiceStatusResult()
{}

void GetDLAServiceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userDLAServiceStatusNode = value["UserDLAServiceStatus"];
	if(!userDLAServiceStatusNode["IsServiceReady"].isNull())
		userDLAServiceStatus_.isServiceReady = userDLAServiceStatusNode["IsServiceReady"].asString() == "true";
	if(!userDLAServiceStatusNode["IsOSSOpen"].isNull())
		userDLAServiceStatus_.isOSSOpen = userDLAServiceStatusNode["IsOSSOpen"].asString() == "true";
	if(!userDLAServiceStatusNode["IsDLAAccountReady"].isNull())
		userDLAServiceStatus_.isDLAAccountReady = userDLAServiceStatusNode["IsDLAAccountReady"].asString() == "true";
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

GetDLAServiceStatusResult::UserDLAServiceStatus GetDLAServiceStatusResult::getUserDLAServiceStatus()const
{
	return userDLAServiceStatus_;
}

std::string GetDLAServiceStatusResult::getRegionId()const
{
	return regionId_;
}

