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

#include <alibabacloud/linkvisual/model/QueryFaceUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

QueryFaceUserResult::QueryFaceUserResult() :
	ServiceResult()
{}

QueryFaceUserResult::QueryFaceUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryFaceUserResult::~QueryFaceUserResult()
{}

void QueryFaceUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Params"].isNull())
		data_.params = dataNode["Params"].asString();
	if(!dataNode["CustomUserId"].isNull())
		data_.customUserId = dataNode["CustomUserId"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["UserId"].isNull())
		data_.userId = dataNode["UserId"].asString();
	auto allFacePicListNode = dataNode["FacePicList"]["facePicListItem"];
	for (auto dataNodeFacePicListfacePicListItem : allFacePicListNode)
	{
		Data::FacePicListItem facePicListItemObject;
		if(!dataNodeFacePicListfacePicListItem["FaceUrl"].isNull())
			facePicListItemObject.faceUrl = dataNodeFacePicListfacePicListItem["FaceUrl"].asString();
		if(!dataNodeFacePicListfacePicListItem["FaceMd5"].isNull())
			facePicListItemObject.faceMd5 = dataNodeFacePicListfacePicListItem["FaceMd5"].asString();
		auto allFeatureDTOListNode = dataNodeFacePicListfacePicListItem["FeatureDTOList"]["featureDTO"];
		for (auto dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO : allFeatureDTOListNode)
		{
			Data::FacePicListItem::FeatureDTO featureDTOListObject;
			if(!dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmName"].isNull())
				featureDTOListObject.algorithmName = dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmName"].asString();
			if(!dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmVersion"].isNull())
				featureDTOListObject.algorithmVersion = dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmVersion"].asString();
			if(!dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmProvider"].isNull())
				featureDTOListObject.algorithmProvider = dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["AlgorithmProvider"].asString();
			if(!dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorMessage"].isNull())
				featureDTOListObject.errorMessage = dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorMessage"].asString();
			if(!dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorCode"].isNull())
				featureDTOListObject.errorCode = dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["ErrorCode"].asString();
			if(!dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["FaceMd5"].isNull())
				featureDTOListObject.faceMd5 = dataNodeFacePicListfacePicListItemFeatureDTOListfeatureDTO["FaceMd5"].asString();
			facePicListItemObject.featureDTOList.push_back(featureDTOListObject);
		}
		data_.facePicList.push_back(facePicListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

QueryFaceUserResult::Data QueryFaceUserResult::getData()const
{
	return data_;
}

std::string QueryFaceUserResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryFaceUserResult::getCode()const
{
	return code_;
}

bool QueryFaceUserResult::getSuccess()const
{
	return success_;
}

