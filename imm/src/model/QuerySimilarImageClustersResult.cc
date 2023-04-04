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

#include <alibabacloud/imm/model/QuerySimilarImageClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

QuerySimilarImageClustersResult::QuerySimilarImageClustersResult() :
	ServiceResult()
{}

QuerySimilarImageClustersResult::QuerySimilarImageClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QuerySimilarImageClustersResult::~QuerySimilarImageClustersResult()
{}

void QuerySimilarImageClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSimilarImageClustersNode = value["SimilarImageClusters"]["SimilarImageClustersItem"];
	for (auto valueSimilarImageClustersSimilarImageClustersItem : allSimilarImageClustersNode)
	{
		SimilarImageClustersItem similarImageClustersObject;
		if(!valueSimilarImageClustersSimilarImageClustersItem["ObjectId"].isNull())
			similarImageClustersObject.objectId = valueSimilarImageClustersSimilarImageClustersItem["ObjectId"].asString();
		if(!valueSimilarImageClustersSimilarImageClustersItem["UpdateTime"].isNull())
			similarImageClustersObject.updateTime = valueSimilarImageClustersSimilarImageClustersItem["UpdateTime"].asString();
		if(!valueSimilarImageClustersSimilarImageClustersItem["CreateTime"].isNull())
			similarImageClustersObject.createTime = valueSimilarImageClustersSimilarImageClustersItem["CreateTime"].asString();
		if(!valueSimilarImageClustersSimilarImageClustersItem["CustomLabels"].isNull())
			similarImageClustersObject.customLabels = valueSimilarImageClustersSimilarImageClustersItem["CustomLabels"].asString();
		auto allFilesNode = valueSimilarImageClustersSimilarImageClustersItem["Files"]["FilesItem"];
		for (auto valueSimilarImageClustersSimilarImageClustersItemFilesFilesItem : allFilesNode)
		{
			SimilarImageClustersItem::FilesItem filesObject;
			if(!valueSimilarImageClustersSimilarImageClustersItemFilesFilesItem["URI"].isNull())
				filesObject.uRI = valueSimilarImageClustersSimilarImageClustersItemFilesFilesItem["URI"].asString();
			if(!valueSimilarImageClustersSimilarImageClustersItemFilesFilesItem["ImageScore"].isNull())
				filesObject.imageScore = valueSimilarImageClustersSimilarImageClustersItemFilesFilesItem["ImageScore"].asString();
			similarImageClustersObject.files.push_back(filesObject);
		}
		similarImageClusters_.push_back(similarImageClustersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::vector<QuerySimilarImageClustersResult::SimilarImageClustersItem> QuerySimilarImageClustersResult::getSimilarImageClusters()const
{
	return similarImageClusters_;
}

std::string QuerySimilarImageClustersResult::getNextToken()const
{
	return nextToken_;
}

