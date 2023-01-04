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

#include <alibabacloud/computenestsupplier/model/ListArtifactVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNestSupplier;
using namespace AlibabaCloud::ComputeNestSupplier::Model;

ListArtifactVersionsResult::ListArtifactVersionsResult() :
	ServiceResult()
{}

ListArtifactVersionsResult::ListArtifactVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListArtifactVersionsResult::~ListArtifactVersionsResult()
{}

void ListArtifactVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allArtifactsNode = value["Artifacts"]["Artifact"];
	for (auto valueArtifactsArtifact : allArtifactsNode)
	{
		Artifact artifactsObject;
		if(!valueArtifactsArtifact["ArtifactId"].isNull())
			artifactsObject.artifactId = valueArtifactsArtifact["ArtifactId"].asString();
		if(!valueArtifactsArtifact["ArtifactType"].isNull())
			artifactsObject.artifactType = valueArtifactsArtifact["ArtifactType"].asString();
		if(!valueArtifactsArtifact["VersionName"].isNull())
			artifactsObject.versionName = valueArtifactsArtifact["VersionName"].asString();
		if(!valueArtifactsArtifact["ArtifactVersion"].isNull())
			artifactsObject.artifactVersion = valueArtifactsArtifact["ArtifactVersion"].asString();
		if(!valueArtifactsArtifact["Status"].isNull())
			artifactsObject.status = valueArtifactsArtifact["Status"].asString();
		if(!valueArtifactsArtifact["ArtifactProperty"].isNull())
			artifactsObject.artifactProperty = valueArtifactsArtifact["ArtifactProperty"].asString();
		if(!valueArtifactsArtifact["SupportRegionIds"].isNull())
			artifactsObject.supportRegionIds = valueArtifactsArtifact["SupportRegionIds"].asString();
		if(!valueArtifactsArtifact["GmtModified"].isNull())
			artifactsObject.gmtModified = valueArtifactsArtifact["GmtModified"].asString();
		if(!valueArtifactsArtifact["Progress"].isNull())
			artifactsObject.progress = valueArtifactsArtifact["Progress"].asString();
		if(!valueArtifactsArtifact["GmtCreate"].isNull())
			artifactsObject.gmtCreate = valueArtifactsArtifact["GmtCreate"].asString();
		if(!valueArtifactsArtifact["ImageDelivery"].isNull())
			artifactsObject.imageDelivery = valueArtifactsArtifact["ImageDelivery"].asString();
		if(!valueArtifactsArtifact["SecurityAuditResult"].isNull())
			artifactsObject.securityAuditResult = valueArtifactsArtifact["SecurityAuditResult"].asString();
		if(!valueArtifactsArtifact["ResultFile"].isNull())
			artifactsObject.resultFile = valueArtifactsArtifact["ResultFile"].asString();
		artifacts_.push_back(artifactsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = value["MaxResults"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::vector<ListArtifactVersionsResult::Artifact> ListArtifactVersionsResult::getArtifacts()const
{
	return artifacts_;
}

std::string ListArtifactVersionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListArtifactVersionsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListArtifactVersionsResult::getMaxResults()const
{
	return maxResults_;
}

