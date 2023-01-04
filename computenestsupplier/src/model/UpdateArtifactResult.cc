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

#include <alibabacloud/computenestsupplier/model/UpdateArtifactResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNestSupplier;
using namespace AlibabaCloud::ComputeNestSupplier::Model;

UpdateArtifactResult::UpdateArtifactResult() :
	ServiceResult()
{}

UpdateArtifactResult::UpdateArtifactResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateArtifactResult::~UpdateArtifactResult()
{}

void UpdateArtifactResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ArtifactId"].isNull())
		artifactId_ = value["ArtifactId"].asString();
	if(!value["ArtifactType"].isNull())
		artifactType_ = value["ArtifactType"].asString();
	if(!value["VersionName"].isNull())
		versionName_ = value["VersionName"].asString();
	if(!value["ArtifactVersion"].isNull())
		artifactVersion_ = value["ArtifactVersion"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ArtifactProperty"].isNull())
		artifactProperty_ = value["ArtifactProperty"].asString();
	if(!value["SupportRegionIds"].isNull())
		supportRegionIds_ = value["SupportRegionIds"].asString();

}

std::string UpdateArtifactResult::getStatus()const
{
	return status_;
}

std::string UpdateArtifactResult::getArtifactVersion()const
{
	return artifactVersion_;
}

std::string UpdateArtifactResult::getDescription()const
{
	return description_;
}

std::string UpdateArtifactResult::getArtifactId()const
{
	return artifactId_;
}

std::string UpdateArtifactResult::getArtifactType()const
{
	return artifactType_;
}

std::string UpdateArtifactResult::getSupportRegionIds()const
{
	return supportRegionIds_;
}

std::string UpdateArtifactResult::getGmtModified()const
{
	return gmtModified_;
}

std::string UpdateArtifactResult::getVersionName()const
{
	return versionName_;
}

std::string UpdateArtifactResult::getArtifactProperty()const
{
	return artifactProperty_;
}

