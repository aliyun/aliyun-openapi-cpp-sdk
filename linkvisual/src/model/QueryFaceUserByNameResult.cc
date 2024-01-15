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

#include <alibabacloud/linkvisual/model/QueryFaceUserByNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryFaceUserByNameResult::QueryFaceUserByNameResult() :
	ServiceResult()
{}

QueryFaceUserByNameResult::QueryFaceUserByNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceUserByNameResult::~QueryFaceUserByNameResult()
{}

void QueryFaceUserByNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Page"].isNull())
		data_.page = std::stoi(dataNode["Page"].asString());
	auto allListNode = dataNode["List"]["pageData"];
	for (auto dataNodeListpageData : allListNode)
	{
		Data::PageData pageDataObject;
		if(!dataNodeListpageData["Params"].isNull())
			pageDataObject.params = dataNodeListpageData["Params"].asString();
		if(!dataNodeListpageData["CustomUserId"].isNull())
			pageDataObject.customUserId = dataNodeListpageData["CustomUserId"].asString();
		if(!dataNodeListpageData["CreateTime"].isNull())
			pageDataObject.createTime = std::stol(dataNodeListpageData["CreateTime"].asString());
		if(!dataNodeListpageData["UserId"].isNull())
			pageDataObject.userId = dataNodeListpageData["UserId"].asString();
		if(!dataNodeListpageData["Name"].isNull())
			pageDataObject.name = dataNodeListpageData["Name"].asString();
		if(!dataNodeListpageData["ModifyTime"].isNull())
			pageDataObject.modifyTime = std::stol(dataNodeListpageData["ModifyTime"].asString());
		auto allFacePicListNode = dataNodeListpageData["FacePicList"]["facePicListItem"];
		for (auto dataNodeListpageDataFacePicListfacePicListItem : allFacePicListNode)
		{
			Data::PageData::FacePicListItem facePicListObject;
			if(!dataNodeListpageDataFacePicListfacePicListItem["FaceUrl"].isNull())
				facePicListObject.faceUrl = dataNodeListpageDataFacePicListfacePicListItem["FaceUrl"].asString();
			if(!dataNodeListpageDataFacePicListfacePicListItem["FaceMd5"].isNull())
				facePicListObject.faceMd5 = dataNodeListpageDataFacePicListfacePicListItem["FaceMd5"].asString();
			auto allFeatureDTOListNode = dataNodeListpageDataFacePicListfacePicListItem["FeatureDTOList"]["featureDTO"];
			for (auto dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO : allFeatureDTOListNode)
			{
				Data::PageData::FacePicListItem::FeatureDTO featureDTOListObject;
				if(!dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmName"].isNull())
					featureDTOListObject.algorithmName = dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmName"].asString();
				if(!dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmVersion"].isNull())
					featureDTOListObject.algorithmVersion = dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmVersion"].asString();
				if(!dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmProvider"].isNull())
					featureDTOListObject.algorithmProvider = dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmProvider"].asString();
				if(!dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorMessage"].isNull())
					featureDTOListObject.errorMessage = dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorMessage"].asString();
				if(!dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorCode"].isNull())
					featureDTOListObject.errorCode = dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorCode"].asString();
				if(!dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["FaceMd5"].isNull())
					featureDTOListObject.faceMd5 = dataNodeListpageDataFacePicListfacePicListItemFeatureDTOListfeatureDTO["FaceMd5"].asString();
				facePicListObject.featureDTOList.push_back(featureDTOListObject);
			}
			pageDataObject.facePicList.push_back(facePicListObject);
		}
		data_.list.push_back(pageDataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryFaceUserByNameResult::Data QueryFaceUserByNameResult::getData()const
{
	return data_;
}

std::string QueryFaceUserByNameResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryFaceUserByNameResult::getCode()const
{
	return code_;
}

bool QueryFaceUserByNameResult::getSuccess()const
{
	return success_;
}

