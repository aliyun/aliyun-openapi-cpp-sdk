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

#include <alibabacloud/imm/model/FindImagesRequest.h>

using AlibabaCloud::Imm::Model::FindImagesRequest;

FindImagesRequest::FindImagesRequest() :
	RpcServiceRequest("imm", "2017-09-06", "FindImages")
{}

FindImagesRequest::~FindImagesRequest()
{}

std::string FindImagesRequest::getGender()const
{
	return gender_;
}

void FindImagesRequest::setGender(const std::string& gender)
{
	gender_ = gender;
	setCoreParameter("Gender", std::to_string(gender));
}

std::string FindImagesRequest::getProject()const
{
	return project_;
}

void FindImagesRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", std::to_string(project));
}

std::string FindImagesRequest::getExternalId()const
{
	return externalId_;
}

void FindImagesRequest::setExternalId(const std::string& externalId)
{
	externalId_ = externalId;
	setCoreParameter("ExternalId", std::to_string(externalId));
}

std::string FindImagesRequest::getImageSizeRange()const
{
	return imageSizeRange_;
}

void FindImagesRequest::setImageSizeRange(const std::string& imageSizeRange)
{
	imageSizeRange_ = imageSizeRange;
	setCoreParameter("ImageSizeRange", std::to_string(imageSizeRange));
}

std::string FindImagesRequest::getRemarksBPrefix()const
{
	return remarksBPrefix_;
}

void FindImagesRequest::setRemarksBPrefix(const std::string& remarksBPrefix)
{
	remarksBPrefix_ = remarksBPrefix;
	setCoreParameter("RemarksBPrefix", std::to_string(remarksBPrefix));
}

std::string FindImagesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void FindImagesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string FindImagesRequest::getLocationBoundary()const
{
	return locationBoundary_;
}

void FindImagesRequest::setLocationBoundary(const std::string& locationBoundary)
{
	locationBoundary_ = locationBoundary;
	setCoreParameter("LocationBoundary", std::to_string(locationBoundary));
}

std::string FindImagesRequest::getImageTimeRange()const
{
	return imageTimeRange_;
}

void FindImagesRequest::setImageTimeRange(const std::string& imageTimeRange)
{
	imageTimeRange_ = imageTimeRange;
	setCoreParameter("ImageTimeRange", std::to_string(imageTimeRange));
}

std::string FindImagesRequest::getRegionId()const
{
	return regionId_;
}

void FindImagesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string FindImagesRequest::getOCRContentsMatch()const
{
	return oCRContentsMatch_;
}

void FindImagesRequest::setOCRContentsMatch(const std::string& oCRContentsMatch)
{
	oCRContentsMatch_ = oCRContentsMatch;
	setCoreParameter("OCRContentsMatch", std::to_string(oCRContentsMatch));
}

int FindImagesRequest::getLimit()const
{
	return limit_;
}

void FindImagesRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", limit);
}

std::string FindImagesRequest::getRemarksDPrefix()const
{
	return remarksDPrefix_;
}

void FindImagesRequest::setRemarksDPrefix(const std::string& remarksDPrefix)
{
	remarksDPrefix_ = remarksDPrefix;
	setCoreParameter("RemarksDPrefix", std::to_string(remarksDPrefix));
}

std::string FindImagesRequest::getSourceType()const
{
	return sourceType_;
}

void FindImagesRequest::setSourceType(const std::string& sourceType)
{
	sourceType_ = sourceType;
	setCoreParameter("SourceType", std::to_string(sourceType));
}

std::string FindImagesRequest::getAgeRange()const
{
	return ageRange_;
}

void FindImagesRequest::setAgeRange(const std::string& ageRange)
{
	ageRange_ = ageRange;
	setCoreParameter("AgeRange", std::to_string(ageRange));
}

std::string FindImagesRequest::getOrder()const
{
	return order_;
}

void FindImagesRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

std::string FindImagesRequest::getRemarksAPrefix()const
{
	return remarksAPrefix_;
}

void FindImagesRequest::setRemarksAPrefix(const std::string& remarksAPrefix)
{
	remarksAPrefix_ = remarksAPrefix;
	setCoreParameter("RemarksAPrefix", std::to_string(remarksAPrefix));
}

std::string FindImagesRequest::getGroupId()const
{
	return groupId_;
}

void FindImagesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string FindImagesRequest::getOrderBy()const
{
	return orderBy_;
}

void FindImagesRequest::setOrderBy(const std::string& orderBy)
{
	orderBy_ = orderBy;
	setCoreParameter("OrderBy", std::to_string(orderBy));
}

std::string FindImagesRequest::getTagNames()const
{
	return tagNames_;
}

void FindImagesRequest::setTagNames(const std::string& tagNames)
{
	tagNames_ = tagNames;
	setCoreParameter("TagNames", std::to_string(tagNames));
}

std::string FindImagesRequest::getSourceUriPrefix()const
{
	return sourceUriPrefix_;
}

void FindImagesRequest::setSourceUriPrefix(const std::string& sourceUriPrefix)
{
	sourceUriPrefix_ = sourceUriPrefix;
	setCoreParameter("SourceUriPrefix", std::to_string(sourceUriPrefix));
}

std::string FindImagesRequest::getEmotion()const
{
	return emotion_;
}

void FindImagesRequest::setEmotion(const std::string& emotion)
{
	emotion_ = emotion;
	setCoreParameter("Emotion", std::to_string(emotion));
}

std::string FindImagesRequest::getMarker()const
{
	return marker_;
}

void FindImagesRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", std::to_string(marker));
}

std::string FindImagesRequest::getRemarksCPrefix()const
{
	return remarksCPrefix_;
}

void FindImagesRequest::setRemarksCPrefix(const std::string& remarksCPrefix)
{
	remarksCPrefix_ = remarksCPrefix;
	setCoreParameter("RemarksCPrefix", std::to_string(remarksCPrefix));
}

std::string FindImagesRequest::getCreateTimeRange()const
{
	return createTimeRange_;
}

void FindImagesRequest::setCreateTimeRange(const std::string& createTimeRange)
{
	createTimeRange_ = createTimeRange;
	setCoreParameter("CreateTimeRange", std::to_string(createTimeRange));
}

std::string FindImagesRequest::getSetId()const
{
	return setId_;
}

void FindImagesRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", std::to_string(setId));
}

std::string FindImagesRequest::getModifyTimeRange()const
{
	return modifyTimeRange_;
}

void FindImagesRequest::setModifyTimeRange(const std::string& modifyTimeRange)
{
	modifyTimeRange_ = modifyTimeRange;
	setCoreParameter("ModifyTimeRange", std::to_string(modifyTimeRange));
}

