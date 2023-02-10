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

#include <alibabacloud/sas/model/ListImageRiskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListImageRiskResult::ListImageRiskResult() :
	ServiceResult()
{}

ListImageRiskResult::ListImageRiskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListImageRiskResult::~ListImageRiskResult()
{}

void ListImageRiskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageRiskListNode = value["ImageRiskList"]["ImageRiskListItem"];
	for (auto valueImageRiskListImageRiskListItem : allImageRiskListNode)
	{
		ImageRiskListItem imageRiskListObject;
		if(!valueImageRiskListImageRiskListItem["RepoNamespace"].isNull())
			imageRiskListObject.repoNamespace = valueImageRiskListImageRiskListItem["RepoNamespace"].asString();
		if(!valueImageRiskListImageRiskListItem["RepoName"].isNull())
			imageRiskListObject.repoName = valueImageRiskListImageRiskListItem["RepoName"].asString();
		if(!valueImageRiskListImageRiskListItem["Tag"].isNull())
			imageRiskListObject.tag = valueImageRiskListImageRiskListItem["Tag"].asString();
		if(!valueImageRiskListImageRiskListItem["RegionId"].isNull())
			imageRiskListObject.regionId = valueImageRiskListImageRiskListItem["RegionId"].asString();
		if(!valueImageRiskListImageRiskListItem["Digest"].isNull())
			imageRiskListObject.digest = valueImageRiskListImageRiskListItem["Digest"].asString();
		if(!valueImageRiskListImageRiskListItem["RepoId"].isNull())
			imageRiskListObject.repoId = valueImageRiskListImageRiskListItem["RepoId"].asString();
		if(!valueImageRiskListImageRiskListItem["RepoType"].isNull())
			imageRiskListObject.repoType = valueImageRiskListImageRiskListItem["RepoType"].asString();
		if(!valueImageRiskListImageRiskListItem["RegistryType"].isNull())
			imageRiskListObject.registryType = valueImageRiskListImageRiskListItem["RegistryType"].asString();
		if(!valueImageRiskListImageRiskListItem["Endpoints"].isNull())
			imageRiskListObject.endpoints = valueImageRiskListImageRiskListItem["Endpoints"].asString();
		if(!valueImageRiskListImageRiskListItem["ImageId"].isNull())
			imageRiskListObject.imageId = valueImageRiskListImageRiskListItem["ImageId"].asString();
		if(!valueImageRiskListImageRiskListItem["TagImmutable"].isNull())
			imageRiskListObject.tagImmutable = std::stoi(valueImageRiskListImageRiskListItem["TagImmutable"].asString());
		if(!valueImageRiskListImageRiskListItem["Statistics"].isNull())
			imageRiskListObject.statistics = valueImageRiskListImageRiskListItem["Statistics"].asString();
		if(!valueImageRiskListImageRiskListItem["ImageAccessType"].isNull())
			imageRiskListObject.imageAccessType = valueImageRiskListImageRiskListItem["ImageAccessType"].asString();
		if(!valueImageRiskListImageRiskListItem["Image"].isNull())
			imageRiskListObject.image = valueImageRiskListImageRiskListItem["Image"].asString();
		if(!valueImageRiskListImageRiskListItem["Uuid"].isNull())
			imageRiskListObject.uuid = valueImageRiskListImageRiskListItem["Uuid"].asString();
		if(!valueImageRiskListImageRiskListItem["InternetURLs"].isNull())
			imageRiskListObject.internetURLs = valueImageRiskListImageRiskListItem["InternetURLs"].asString();
		if(!valueImageRiskListImageRiskListItem["VpcURLs"].isNull())
			imageRiskListObject.vpcURLs = valueImageRiskListImageRiskListItem["VpcURLs"].asString();
		auto allEndPointListNode = valueImageRiskListImageRiskListItem["EndPointList"]["endpoint"];
		for (auto valueImageRiskListImageRiskListItemEndPointListendpoint : allEndPointListNode)
		{
			ImageRiskListItem::Endpoint endPointListObject;
			if(!valueImageRiskListImageRiskListItemEndPointListendpoint["Type"].isNull())
				endPointListObject.type = valueImageRiskListImageRiskListItemEndPointListendpoint["Type"].asString();
			auto allDomains = value["Domains"]["domain"];
			for (auto value : allDomains)
				endPointListObject.domains.push_back(value.asString());
			imageRiskListObject.endPointList.push_back(endPointListObject);
		}
		imageRiskList_.push_back(imageRiskListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());

}

std::vector<ListImageRiskResult::ImageRiskListItem> ListImageRiskResult::getImageRiskList()const
{
	return imageRiskList_;
}

ListImageRiskResult::PageInfo ListImageRiskResult::getPageInfo()const
{
	return pageInfo_;
}

