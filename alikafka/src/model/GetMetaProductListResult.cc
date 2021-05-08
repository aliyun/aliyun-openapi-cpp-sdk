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

#include <alibabacloud/alikafka/model/GetMetaProductListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

GetMetaProductListResult::GetMetaProductListResult() :
	ServiceResult()
{}

GetMetaProductListResult::GetMetaProductListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaProductListResult::~GetMetaProductListResult()
{}

void GetMetaProductListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto metaDataNode = value["MetaData"];
	if(!metaDataNode["Names"].isNull())
		metaData_.names = metaDataNode["Names"].asString();
	auto allProductsNormalNode = metaDataNode["ProductsNormal"]["SpecVO"];
	for (auto metaDataNodeProductsNormalSpecVO : allProductsNormalNode)
	{
		MetaData::SpecVO specVOObject;
		if(!metaDataNodeProductsNormalSpecVO["RegionId"].isNull())
			specVOObject.regionId = metaDataNodeProductsNormalSpecVO["RegionId"].asString();
		if(!metaDataNodeProductsNormalSpecVO["SpecType"].isNull())
			specVOObject.specType = metaDataNodeProductsNormalSpecVO["SpecType"].asString();
		if(!metaDataNodeProductsNormalSpecVO["IoMax"].isNull())
			specVOObject.ioMax = std::stol(metaDataNodeProductsNormalSpecVO["IoMax"].asString());
		if(!metaDataNodeProductsNormalSpecVO["DiskType"].isNull())
			specVOObject.diskType = metaDataNodeProductsNormalSpecVO["DiskType"].asString();
		if(!metaDataNodeProductsNormalSpecVO["DiskSize"].isNull())
			specVOObject.diskSize = metaDataNodeProductsNormalSpecVO["DiskSize"].asString();
		if(!metaDataNodeProductsNormalSpecVO["TopicQuota"].isNull())
			specVOObject.topicQuota = metaDataNodeProductsNormalSpecVO["TopicQuota"].asString();
		if(!metaDataNodeProductsNormalSpecVO["DeployType"].isNull())
			specVOObject.deployType = metaDataNodeProductsNormalSpecVO["DeployType"].asString();
		metaData_.productsNormal.push_back(specVOObject);
	}
	auto allProductsProfessionalNode = metaDataNode["ProductsProfessional"]["SpecVO"];
	for (auto metaDataNodeProductsProfessionalSpecVO : allProductsProfessionalNode)
	{
		MetaData::SpecVO specVOObject;
		if(!metaDataNodeProductsProfessionalSpecVO["RegionId"].isNull())
			specVOObject.regionId = metaDataNodeProductsProfessionalSpecVO["RegionId"].asString();
		if(!metaDataNodeProductsProfessionalSpecVO["SpecType"].isNull())
			specVOObject.specType = metaDataNodeProductsProfessionalSpecVO["SpecType"].asString();
		if(!metaDataNodeProductsProfessionalSpecVO["IoMax"].isNull())
			specVOObject.ioMax = std::stol(metaDataNodeProductsProfessionalSpecVO["IoMax"].asString());
		if(!metaDataNodeProductsProfessionalSpecVO["DiskType"].isNull())
			specVOObject.diskType = metaDataNodeProductsProfessionalSpecVO["DiskType"].asString();
		if(!metaDataNodeProductsProfessionalSpecVO["DiskSize"].isNull())
			specVOObject.diskSize = metaDataNodeProductsProfessionalSpecVO["DiskSize"].asString();
		if(!metaDataNodeProductsProfessionalSpecVO["TopicQuota"].isNull())
			specVOObject.topicQuota = metaDataNodeProductsProfessionalSpecVO["TopicQuota"].asString();
		if(!metaDataNodeProductsProfessionalSpecVO["DeployType"].isNull())
			specVOObject.deployType = metaDataNodeProductsProfessionalSpecVO["DeployType"].asString();
		metaData_.productsProfessional.push_back(specVOObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetMetaProductListResult::getMessage()const
{
	return message_;
}

GetMetaProductListResult::MetaData GetMetaProductListResult::getMetaData()const
{
	return metaData_;
}

int GetMetaProductListResult::getCode()const
{
	return code_;
}

bool GetMetaProductListResult::getSuccess()const
{
	return success_;
}

